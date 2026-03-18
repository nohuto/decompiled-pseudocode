/*
 * XREFs of ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     DxgkCheckOcclusion @ 0x1C0097B00 (DxgkCheckOcclusion.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C017DD40 (DxgkQueryVidPnExclusiveOwnership.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::~DXGUSERCRIT(DXGUSERCRIT *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 16) = 0;
    (*(void (**)(void))(*(_QWORD *)(v1 + 72) + 40LL))();
  }
}
