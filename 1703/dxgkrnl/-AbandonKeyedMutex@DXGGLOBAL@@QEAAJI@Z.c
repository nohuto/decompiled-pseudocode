/*
 * XREFs of ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C01A4FB4
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01ABAAC (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01B2680 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A6614 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AbandonKeyedMutex(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  __int64 ObjectA; // rax
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  volatile signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v25[8]; // [rsp+20h] [rbp-18h] BYREF
  char v26; // [rsp+28h] [rbp-10h]

  v2 = a2;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v25);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  Global = DXGGLOBAL::GetGlobal(v4, v3, v5, v6);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v2, 9LL, v8);
  v14 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v15 = *(_QWORD *)(ObjectA + 24);
    while ( v15 )
    {
      v11 = v15 + 1;
      v16 = v15;
      v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
      if ( v16 == v15 )
      {
        if ( v26 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v10, v12, v13);
        DXGKEYEDMUTEX::SignalAbandonedInternal((DXGKEYEDMUTEX *)v14, 0, 1);
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v14, v22, v23, v24);
        return 0LL;
      }
    }
  }
  v17 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
  *(_QWORD *)(v17 + 24) = v2;
  *(_QWORD *)(v17 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v17);
  if ( v26 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v18, v19, v20);
  return 3221225485LL;
}
