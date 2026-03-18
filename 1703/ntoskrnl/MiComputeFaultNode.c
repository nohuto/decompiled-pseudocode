/*
 * XREFs of MiComputeFaultNode @ 0x140106888
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 Address; // rax
  unsigned int v11; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v5 = 0;
  v6 = a3;
  *a5 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v7 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v7 + 40) + 588LL)] + 192)
                               + 146LL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
  {
    v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v7 || *(_QWORD *)(v8 + 256) || *(_QWORD *)(v8 + 264) || *(_BYTE *)(v8 + 232) == 1) )
    {
      Address = MiLocateAddress(a2);
      if ( Address )
      {
        v11 = *(_DWORD *)(Address + 48);
        *a5 = Address;
        v5 = (v11 >> 8) & 0x3F;
        if ( v5 )
          goto LABEL_12;
        if ( (v11 & 0x8000) != 0 )
        {
LABEL_10:
          if ( v6 )
            v5 = (*(_DWORD *)(v6 + 56) >> 20) & 0x3F;
          goto LABEL_12;
        }
        v5 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
      }
    }
    if ( !v5 )
      goto LABEL_10;
LABEL_12:
    if ( v7 && !v5 && KeIsAttachedProcess() )
    {
      CurrentThread = KeGetCurrentThread();
      return (unsigned int)CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
    }
  }
  return v5;
}
