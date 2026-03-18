/*
 * XREFs of ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C01BBE74
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BBAC8 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z @ 0x1C01799D0 (-DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Initialize(
        DXGPROTECTEDSESSION *this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        UINT a4,
        void **a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  ADAPTER_DISPLAY *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  _DXGKARG_CREATEPROTECTEDSESSION v23; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 969LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 6) = 1;
  v14 = *a2;
  if ( *((_DWORD *)*a2 + 40) != 5 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v15 + 24) = 304LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_QWORD *)this + 15) = *((_QWORD *)v14 + 21);
  *((_QWORD *)this + 14) = *a2;
  *((_QWORD *)this + 10) = *a3;
  *((_DWORD *)this + 22) = a4;
  *((_QWORD *)this + 12) = *a5;
  *((_DWORD *)this + 26) = a6;
  *a2 = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)this + 18);
  v16 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 2);
  *(_QWORD *)&v23.PrivateDriverDataSize = 0LL;
  v23.pPrivateDriverData = *a3;
  v23.hProtectedSession = this;
  v23.PrivateDriverDataSize = a4;
  v17 = *((_QWORD *)v16 + 2);
  if ( *(_QWORD *)(v17 + 1128) && *(_QWORD *)(v17 + 1136) )
  {
    v19 = ADAPTER_DISPLAY::DdiCreateProtectedSession(v16, &v23, v12);
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v16, v10, v12);
    v19 = -1073741637;
    *(_QWORD *)(v20 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v20);
  }
  if ( v19 < 0 )
  {
    *((_DWORD *)this + 6) = 3;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 18, 0xFFFFFFFF) != 1 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v21 + 24) = 1036LL;
      WdLogEvent5_WdAssertion(v21);
    }
  }
  else
  {
    *((_QWORD *)this + 17) = v23.hProtectedSession;
  }
  return (unsigned int)v19;
}
