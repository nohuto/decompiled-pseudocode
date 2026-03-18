/*
 * XREFs of _lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_ @ 0x1C00D93E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall lambda_d61da4d51b31b33ef5e605a1dd45d7b4_::_lambda_invoker_cdecl_(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  struct DXGFASTMUTEX *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  _QWORD *v19; // rax
  __int64 v21; // rax
  int v22; // r9d
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && *(struct _KTHREAD **)(v4 + 8) == KeGetCurrentThread() )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v22 = *(_DWORD *)(v4 + 16);
      if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v7, &EventBlockThread, v8, v22);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v10 = *a2;
  if ( *(_QWORD *)a1 )
    DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)a1 + 16LL));
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(struct DXGFASTMUTEX **)(v11 + 24 * v10);
  v13 = v11 + 24 * v10;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v12, v8, v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v17 = *(_DWORD *)(a1 + 8);
  v18 = 0;
  v19 = *(_QWORD **)(v13 + 8);
  if ( v17 )
  {
    v14 = v17;
    do
    {
      if ( *v19 )
        ++v18;
      ++v19;
      --v14;
    }
    while ( v14 );
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v14, v15, v16);
  a2[1] = v18;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
