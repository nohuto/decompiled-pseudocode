/*
 * XREFs of ?VmBusCreateSyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 */

unsigned __int8 __fastcall VmBusCreateSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int SynchronizationObjectInternal; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  SynchronizationObjectInternal = DxgkCreateSynchronizationObjectInternal(
                                    (struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)(v1 + 16),
                                    0);
  v6 = SynchronizationObjectInternal;
  if ( SynchronizationObjectInternal >= 0 )
  {
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[0]) = *(_DWORD *)(v1 + 104);
    v7 = *(_DWORD *)(v1 + 24);
    if ( v7 == 5 )
    {
      LODWORD(v11[3]) = *(_DWORD *)(v1 + 40);
      v11[2] = *(_QWORD *)(v1 + 40);
      v8 = *(_QWORD *)(v1 + 48);
    }
    else
    {
      if ( v7 != 6 )
      {
LABEL_7:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v11, 0x20u);
        return 1;
      }
      LODWORD(v11[3]) = *(_DWORD *)(v1 + 48);
      v11[2] = *(_QWORD *)(v1 + 40);
      v8 = *(_QWORD *)(v1 + 56);
    }
    v11[1] = v8;
    goto LABEL_7;
  }
  v10 = WdLogNewEntry5_WdError(v5, v4);
  *(_QWORD *)(v10 + 24) = v6;
  WdLogEvent5_WdError(v10);
  return 0;
}
