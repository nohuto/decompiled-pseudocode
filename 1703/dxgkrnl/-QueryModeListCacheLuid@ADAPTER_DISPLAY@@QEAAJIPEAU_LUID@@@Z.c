/*
 * XREFs of ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C000B110
 * Callers:
 *     DxgkQueryModeListCacheLuid @ 0x1C00A5660 (DxgkQueryModeListCacheLuid.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryModeListCacheLuid(DXGADAPTER **this, unsigned int a2, struct _LUID *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGADAPTER *v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v12 + 24) = 5006LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = 5007LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*((_BYTE *)this + 132) )
    return 3221225473LL;
  v10 = this[14];
  if ( !*((_BYTE *)v10 + 3208 * v4 + 1052) )
    return 3221225473LL;
  *a3 = *(struct _LUID *)((char *)v10 + 3208 * v4 + 1056);
  return 0LL;
}
