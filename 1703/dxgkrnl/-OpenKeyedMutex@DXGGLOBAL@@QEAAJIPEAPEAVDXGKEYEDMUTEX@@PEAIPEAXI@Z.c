/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01A6034
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C01A7640 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C01A78B0 (DxgkOpenKeyedMutex2.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ADD08 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0088420 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // r9
  __int64 ObjectA; // rax
  __int64 v18; // rdx
  signed __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  volatile signed __int64 *v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v36; // rax
  _BYTE v37[8]; // [rsp+30h] [rbp-18h] BYREF
  char v38; // [rsp+38h] [rbp-10h]

  v6 = (unsigned int)a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v9 + 24) = 3872LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 3873LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  Global = DXGGLOBAL::GetGlobal(v12, v11, v13, v14);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v6, 9LL, v16);
  v22 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v23 = *(_QWORD *)(ObjectA + 24);
    while ( v23 )
    {
      v19 = v23 + 1;
      v24 = v23;
      v23 = _InterlockedCompareExchange64(v22 + 3, v23 + 1, v23);
      if ( v24 == v23 )
      {
        if ( v38 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v18, v20, v21);
        v30 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v22, a4, a5, a6);
        v35 = v30;
        if ( v30 < 0 )
        {
          v36 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          *(_QWORD *)(v36 + 24) = v6;
          *(_QWORD *)(v36 + 32) = v35;
          WdLogEvent5_WdWarning(v36);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v22;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v22, v31, v33, v34);
        return (unsigned int)v35;
      }
    }
  }
  v25 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v25 + 24) = v6;
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v25);
  if ( v38 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v26, v27, v28);
  return 3221225485LL;
}
