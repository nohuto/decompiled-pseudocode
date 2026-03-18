/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C0105ED0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  bool v4; // zf
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 2304);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v1 + 16)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v7 + 24) = 7636LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(v1 + 336));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( *(_BYTE *)(v1 + 376) )
  {
    v8 = WdLogNewEntry5_WdError(v3);
    v9 = *(_QWORD *)(v1 + 16);
    v5 = -1073741811;
    *(_QWORD *)(v8 + 24) = v9;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  }
  else
  {
    v4 = v10[8] == 0;
    *(_BYTE *)(v1 + 376) = 1;
    if ( !v4 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
    return 0;
  }
  return v5;
}
