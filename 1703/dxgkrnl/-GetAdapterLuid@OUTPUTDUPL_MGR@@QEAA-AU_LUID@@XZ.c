/*
 * XREFs of ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C01AC8E4
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01B236C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01B3CF4 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct _LUID __fastcall OUTPUTDUPL_MGR::GetAdapterLuid(OUTPUTDUPL_MGR *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v9 + 24) = 2415LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_BYTE *)this + 72) )
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 10);
  }
  else if ( *(_QWORD *)this )
  {
    *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 268LL);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return (struct _LUID)a2;
}
