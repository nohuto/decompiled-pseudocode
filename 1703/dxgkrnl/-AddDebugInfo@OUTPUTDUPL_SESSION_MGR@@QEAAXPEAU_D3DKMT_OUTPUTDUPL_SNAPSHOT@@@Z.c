/*
 * XREFs of ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01ABCB4
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01ACB28 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        struct DXGFASTMUTEX *const *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2,
        __int64 a3,
        __int64 a4)
{
  UINT v6; // edi
  UINT v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  bool v16; // zf
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v7 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, this[1], a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v12 = **((_QWORD **)this + 2);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 3830LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_DWORD *)this + 1);
  if ( v14 )
  {
    v15 = v14;
    do
    {
      if ( *(_QWORD *)(v12 + 8) && *(_DWORD *)v12 )
      {
        ++v6;
        v7 += *(_DWORD *)v12;
      }
      v12 += 32LL;
      --v15;
    }
    while ( v15 );
  }
  v16 = v17[8] == 0;
  a2->SessionProcessCount = v6;
  a2->SessionActiveConnectionsCount = v7;
  if ( !v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v8, v10, v11);
}
