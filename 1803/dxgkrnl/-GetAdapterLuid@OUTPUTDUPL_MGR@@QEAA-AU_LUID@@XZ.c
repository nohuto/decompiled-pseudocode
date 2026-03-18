/*
 * XREFs of ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C01C916C
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01D2364 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01D3CE8 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct _LUID __fastcall OUTPUTDUPL_MGR::GetAdapterLuid(OUTPUTDUPL_MGR *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 2496LL;
    WdLogEvent5_WdAssertion(v6);
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
