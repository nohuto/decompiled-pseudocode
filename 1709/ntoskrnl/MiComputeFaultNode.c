/*
 * XREFs of MiComputeFaultNode @ 0x14002AC68
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // r10d
  unsigned __int64 v7; // r11
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 Address; // rax
  unsigned int v12; // ecx

  v5 = 0;
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
    v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v7 || *(_QWORD *)(v9 + 256) || *(_QWORD *)(v9 + 264) || *(_BYTE *)(v9 + 232) == 1) )
    {
      Address = MiLocateAddress(a2);
      if ( Address )
      {
        v12 = *(_DWORD *)(Address + 48);
        *a5 = Address;
        v5 = (v12 >> 8) & 0x3F;
        if ( v5 )
          goto LABEL_13;
        if ( (v12 & 0x8000) != 0 )
        {
LABEL_11:
          if ( a3 )
            v5 = (*(_DWORD *)(a3 + 56) >> 20) & 0x3F;
          goto LABEL_13;
        }
        v5 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
      }
    }
    if ( !v5 )
      goto LABEL_11;
LABEL_13:
    if ( v7 && !v5 && KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      return (unsigned int)CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
    }
  }
  return v5;
}
