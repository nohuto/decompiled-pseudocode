/*
 * XREFs of ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateSyncObject(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int SynchronizationObjectInternal; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 9);
  *(_DWORD *)(v3 + 36) &= ~2u;
  SynchronizationObjectInternal = DxgkCreateSynchronizationObjectInternal(
                                    (struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)(v3 + 24),
                                    0LL,
                                    a3);
  v7 = SynchronizationObjectInternal;
  if ( SynchronizationObjectInternal >= 0 )
  {
    memset(v13, 0, sizeof(v13));
    LODWORD(v13[0]) = *(_DWORD *)(v3 + 112);
    v8 = *(_DWORD *)(v3 + 32);
    if ( v8 == 5 )
    {
      LODWORD(v13[3]) = *(_DWORD *)(v3 + 48);
      v13[2] = *(_QWORD *)(v3 + 48);
      v9 = *(_QWORD *)(v3 + 56);
    }
    else
    {
      if ( v8 != 6 )
      {
LABEL_7:
        v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
        HIDWORD(v13[0]) = *(_DWORD *)(v3 + 104);
        VmBusCompletePacket(v10, v13, 0x20u);
        return 1;
      }
      LODWORD(v13[3]) = *(_DWORD *)(v3 + 56);
      v13[2] = *(_QWORD *)(v3 + 48);
      v9 = *(_QWORD *)(v3 + 64);
    }
    v13[1] = v9;
    goto LABEL_7;
  }
  v12 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v12 + 24) = v7;
  WdLogEvent5_WdError(v12);
  return 0;
}
