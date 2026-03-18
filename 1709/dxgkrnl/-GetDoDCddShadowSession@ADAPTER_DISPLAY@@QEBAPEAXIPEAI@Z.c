/*
 * XREFs of ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C00ADE0C
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00F78A0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSession(DXGADAPTER **this, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  void *v8; // rcx
  DXGADAPTER *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 1303LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v12 + 24) = 1304LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)this[2] + 289) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 1305LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = 3760 * v4;
  v8 = *(void **)((char *)this[14] + v7 + 616);
  if ( v8 )
    ObfReferenceObject(v8);
  v9 = this[14];
  *a3 = *(_DWORD *)((char *)v9 + v7 + 612);
  return *(void **)((char *)v9 + v7 + 616);
}
