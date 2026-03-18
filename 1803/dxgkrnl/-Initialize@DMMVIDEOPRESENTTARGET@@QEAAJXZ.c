/*
 * XREFs of ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0221C20
 * Callers:
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C022170C (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0223DF0 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this)
{
  PVOID v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = operator new[](0xB0uLL, 0x4E506456u, (POOL_TYPE)512);
  *((_QWORD *)this + 64) = v2;
  if ( !v2 )
    goto LABEL_2;
  memset(v2, 0, 0xB0uLL);
  *(_QWORD *)(*((_QWORD *)this + 64) + 16LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 64) + 24LL) = 14;
  *(_DWORD *)(*((_QWORD *)this + 64) + 168LL) = 0;
  KeInitializeTimer((PKTIMER)(*((_QWORD *)this + 64) + 32LL));
  KeInitializeDpc(
    (PRKDPC)(*((_QWORD *)this + 64) + 96LL),
    (PKDEFERRED_ROUTINE)DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc,
    *((PVOID *)this + 64));
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  v3 = *((_QWORD *)this + 64);
  *(_QWORD *)(v3 + 160) = WorkItem;
  if ( *(_QWORD *)(*((_QWORD *)this + 64) + 160LL) )
  {
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v8);
      v7 = *((_QWORD *)this + 5);
    }
    v9 = *(_QWORD *)(v7 + 88);
    v10 = *(_QWORD *)(v9 + 8);
    if ( !v10 )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v11);
      v10 = *(_QWORD *)(v9 + 8);
    }
    v12 = *(_QWORD *)(v10 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
    *(_QWORD *)(*((_QWORD *)this + 64) + 8LL) = this;
    **((_QWORD **)this + 64) = v12;
    return 0LL;
  }
  else
  {
LABEL_2:
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v4 + 32) = -1073741670LL;
    WdLogEvent5_WdLowResource(v4);
    return 3221225626LL;
  }
}
