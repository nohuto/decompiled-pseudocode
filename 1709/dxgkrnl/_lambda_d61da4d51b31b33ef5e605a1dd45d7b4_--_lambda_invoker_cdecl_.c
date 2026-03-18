/*
 * XREFs of _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x1C008E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DXGFASTMUTEX *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  _QWORD *v14; // rax
  int v16; // r9d
  __int64 v17; // rax
  _BYTE v18[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+40h] [rbp-18h]

  v2 = a1[3];
  v20 = v2;
  if ( v2 && *(struct _KTHREAD **)(v2 + 8) == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v17);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v2 + 16);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v5, &EventBlockThread, v6, v16);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v7 = *a1;
  v8 = *a2;
  v21 = 1;
  if ( v7 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v7 + 16));
  v9 = a1[2];
  v10 = *(struct DXGFASTMUTEX **)(v9 + 24 * v8);
  v11 = v9 + 24 * v8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v12 = *((unsigned int *)a1 + 2);
  v13 = 0;
  v14 = *(_QWORD **)(v11 + 8);
  if ( (_DWORD)v12 )
  {
    do
    {
      if ( *v14 )
        ++v13;
      ++v14;
      --v12;
    }
    while ( v12 );
  }
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  a2[1] = v13;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return 0LL;
}
