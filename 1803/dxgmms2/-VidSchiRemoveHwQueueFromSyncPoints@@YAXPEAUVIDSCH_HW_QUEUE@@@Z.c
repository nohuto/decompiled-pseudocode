/*
 * XREFs of ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0030FE0
 * Callers:
 *     VidSchTerminateHwQueue @ 0x1C0033250 (VidSchTerminateHwQueue.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiRemoveHwQueueFromSyncPoints(struct VIDSCH_HW_QUEUE *a1)
{
  char v2; // bl
  _QWORD *v3; // rdi
  __int64 *v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  __int64 v7; // r10
  _BYTE v8[56]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  v3 = *(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v8, (unsigned __int64 *)(v3[4] + 1904LL), 1, 0);
  v4 = (__int64 *)v3[156];
  if ( v4 != v3 + 156 )
  {
    do
    {
      v5 = *((_DWORD *)v4 + 28);
      v6 = 0;
      if ( v5 )
      {
        v7 = v4[9];
        while ( *(struct VIDSCH_HW_QUEUE **)(v7 + 16LL * v6) != a1 )
        {
          if ( ++v6 >= v5 )
            goto LABEL_8;
        }
        *(_QWORD *)(v7 + 16LL * v6) = 0LL;
        v2 = 1;
      }
LABEL_8:
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v3 + 156 );
    if ( v2 )
      VidSchiCheckPendingDeviceCommand(v3);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v8);
}
