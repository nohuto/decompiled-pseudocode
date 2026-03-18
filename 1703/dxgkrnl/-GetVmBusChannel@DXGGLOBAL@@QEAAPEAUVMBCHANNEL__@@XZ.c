/*
 * XREFs of ?GetVmBusChannel@DXGGLOBAL@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0195AA4
 * Callers:
 *     ?VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002F684 (-VmBusSendCreateNtSharedObject@@YAIPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?VmBusSendCreateProcess@@YAIPEAVDXGPROCESS@@PEAD@Z @ 0x1C002F7A4 (-VmBusSendCreateProcess@@YAIPEAVDXGPROCESS@@PEAD@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@@YAXI@Z @ 0x1C002FEF8 (-VmBusSendDestroyNtSharedObject@@YAXI@Z.c)
 *     ?VmBusSendDestroyProcess@@YAXI@Z @ 0x1C002FF88 (-VmBusSendDestroyProcess@@YAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@@YAXII@Z @ 0x1C002FFD0 (-VmBusSendDestroySyncObject@@YAXII@Z.c)
 *     ?VmBusSendNotifyProcessFreeze@@YAXI@Z @ 0x1C0030D20 (-VmBusSendNotifyProcessFreeze@@YAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@@YAXI@Z @ 0x1C0030D68 (-VmBusSendNotifyProcessThaw@@YAXI@Z.c)
 *     ?VmBusSendQueryEtwSession@@YA?AU_GUID@@XZ @ 0x1C00313C4 (-VmBusSendQueryEtwSession@@YA-AU_GUID@@XZ.c)
 *     ?VmBusSendSignalFenceNtShared@@YAJI_K@Z @ 0x1C00317B8 (-VmBusSendSignalFenceNtShared@@YAJI_K@Z.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0031820 (-VmBusSendSignalFenceNtSharedByRef@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z.c)
 * Callees:
 *     ?CreateVmBusChannel@GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002711C (-CreateVmBusChannel@GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

struct VMBCHANNEL__ *__fastcall DXGGLOBAL::GetVmBusChannel(struct VMBCHANNEL__ **this, struct _DEVICE_OBJECT *a2)
{
  char *v2; // rbx
  int VmBusChannel; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  v2 = (char *)(this + 142);
  if ( !this[142] )
  {
    VmBusChannel = GUEST_GLOBAL_VMBUS::CreateVmBusChannel(this + 142, a2);
    v6 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdError(v7);
    }
  }
  return *(struct VMBCHANNEL__ **)v2;
}
