/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0171EA4
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C017497C (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rax
  _QWORD *v14; // rcx
  DXGADAPTER *v15; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 5408LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 5409LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = operator new(0x20uLL, 0x4B677844u, PagedPool);
  if ( !v12 )
    return 3221225495LL;
  v14 = this + 23;
  v12[24] = 0;
  *((_QWORD *)v12 + 2) = a2;
  v15 = this[23];
  if ( *((DXGADAPTER ***)v15 + 1) != this + 23 )
    __fastfail(3u);
  *(_QWORD *)v12 = v15;
  *((_QWORD *)v12 + 1) = v14;
  *((_QWORD *)v15 + 1) = v12;
  *v14 = v12;
  *a3 = v12;
  return 0LL;
}
