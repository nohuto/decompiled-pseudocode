/*
 * XREFs of EtwpDemuxPrivateTraceHandle @ 0x1407AFF8C
 * Callers:
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PidNodeCompare @ 0x1407B08DC (PidNodeCompare.c)
 */

__int64 __fastcall EtwpDemuxPrivateTraceHandle(int a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // edi
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 **v18; // rbx
  __int64 *i; // rax
  unsigned int v20; // ebx
  struct _KTHREAD *v21; // rax
  bool v22; // zf
  int v23; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 >= 0x40u )
  {
    v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = v7 + 4072;
    ExAcquirePushLockExclusiveEx(v7 + 4072, 0LL);
    v23 = a1;
    v12 = v7 + 4056;
    v13 = *(_QWORD *)(v7 + 4064);
    v14 = *(_QWORD *)(v7 + 4056);
    if ( (v13 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v12;
      else
        v14 = 0LL;
    }
    v15 = v13 & 1;
    if ( v14 )
    {
      do
      {
        v16 = PidNodeCompare(&v23, v14);
        if ( v16 >= 0 )
        {
          if ( v16 <= 0 )
            break;
          v17 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v17 = *(_QWORD *)v14;
        }
        if ( v15 && v17 )
          v14 ^= v17;
        else
          v14 = v17;
      }
      while ( v14 );
      if ( v14 )
      {
        v18 = (__int64 **)(v14 + 32);
        for ( i = *v18; i != (__int64 *)v18; i = (__int64 *)*i )
        {
          if ( *((_WORD *)i + 9) == a2 )
          {
            v20 = 0;
            *a3 = *((_WORD *)i + 8);
            goto LABEL_23;
          }
        }
      }
    }
    v20 = -1073741162;
LABEL_23:
    ExReleasePushLockEx(v9, 0LL, v10, v11);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable++ == -1;
    if ( v22
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v20;
  }
  else
  {
    *a3 = a2;
    return 0LL;
  }
}
