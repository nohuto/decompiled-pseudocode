/*
 * XREFs of ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00C0868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00D4274 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00D4A50 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkCheckOcclusion @ 0x1C010AD30 (DxgkCheckOcclusion.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C010F9D0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateOutputDupl @ 0x1C01CC530 (DxgkCreateOutputDupl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::Acquire(DXGUSERCRIT *this, unsigned int a2)
{
  _QWORD *v4; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this);
    v4[3] = 275LL;
    v4[4] = 4LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 104LL) + 32LL))(a2);
  *((_BYTE *)this + 16) = 1;
}
