/*
 * XREFs of ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C011E844
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E580 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC278 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this)
{
  PVOID v2; // rax
  __int64 v3; // rcx
  PIO_WORKITEM WorkItem; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = operator new(0xB0uLL, 0x4E506456u, (POOL_TYPE)512);
  *((_QWORD *)this + 64) = v2;
  if ( !v2 )
    goto LABEL_8;
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
    if ( !*((_QWORD *)this + 5) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v3, v5, v6, v7);
      WdLogEvent5_WdAssertion(v12);
    }
    v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v3, v5, v6, v7);
      WdLogEvent5_WdAssertion(v13);
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
    *(_QWORD *)(*((_QWORD *)this + 64) + 8LL) = this;
    **((_QWORD **)this + 64) = v9;
    return 0LL;
  }
  else
  {
LABEL_8:
    v11 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v11 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v11 + 32) = -1073741670LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225626LL;
  }
}
