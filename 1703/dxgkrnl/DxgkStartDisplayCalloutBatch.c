/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C0118CE0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v19[8]; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 2280);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v1 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v13 + 24) = 6987LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v1 + 336), v4, v5);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( *(_BYTE *)(v1 + 376) )
  {
    v14 = WdLogNewEntry5_WdError(v7, v6);
    v15 = *(_QWORD *)(v1 + 16);
    v11 = -1073741811;
    *(_QWORD *)(v14 + 24) = v15;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( v20 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v16, v17, v18);
  }
  else
  {
    v10 = v20 == 0;
    *(_BYTE *)(v1 + 376) = 1;
    if ( !v10 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v6, v8, v9);
    return 0;
  }
  return v11;
}
