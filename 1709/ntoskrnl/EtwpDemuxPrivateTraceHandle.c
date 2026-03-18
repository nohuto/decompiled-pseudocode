/*
 * XREFs of EtwpDemuxPrivateTraceHandle @ 0x14074F16C
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     PidNodeCompare @ 0x14074FA5C (PidNodeCompare.c)
 */

__int64 __fastcall EtwpDemuxPrivateTraceHandle(int a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r15
  char v10; // bp
  unsigned __int64 v11; // rbx
  int v12; // ebp
  unsigned int v13; // edi
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 **v16; // rbx
  __int64 *i; // rax
  int v18; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 >= 0x40u )
  {
    v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = v7 + 4064;
    ExAcquirePushLockExclusiveEx(v7 + 4064, 0LL);
    v10 = *(_BYTE *)(v7 + 4056);
    v11 = *(_QWORD *)(v7 + 4048);
    v12 = v10 & 1;
    v18 = a1;
    v13 = 0;
    if ( v11 )
    {
      do
      {
        v14 = PidNodeCompare(&v18, v11);
        if ( v14 >= 0 )
        {
          if ( v14 <= 0 )
            break;
          v15 = *(_QWORD *)(v11 + 8);
        }
        else
        {
          v15 = *(_QWORD *)v11;
        }
        if ( v12 && v15 )
          v11 ^= v15;
        else
          v11 = v15;
      }
      while ( v11 );
      if ( v11 )
      {
        v16 = (__int64 **)(v11 + 32);
        for ( i = *v16; i != (__int64 *)v16; i = (__int64 *)*i )
        {
          if ( *((_WORD *)i + 9) == a2 )
          {
            *a3 = *((_WORD *)i + 8);
            goto LABEL_19;
          }
        }
      }
    }
    v13 = -1073741162;
LABEL_19:
    ExReleasePushLockEx(v9, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v13;
  }
  else
  {
    *a3 = a2;
    return 0LL;
  }
}
