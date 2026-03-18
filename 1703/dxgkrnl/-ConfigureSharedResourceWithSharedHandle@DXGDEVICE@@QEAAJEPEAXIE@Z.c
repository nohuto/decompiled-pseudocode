/*
 * XREFs of ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0187198
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADAB8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00C0304 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResourceWithSharedHandle(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // r9
  struct DXGSHAREDRESOURCE *ObjectA; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE v25[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned int)a4;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 5124LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v5 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v25);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    Global = DXGGLOBAL::GetGlobal(v10, v9, v11, v12);
    ObjectA = (struct DXGSHAREDRESOURCE *)DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v5, 2LL, v14);
    if ( ObjectA )
    {
      v8 = DXGDEVICE::ConfigureSharedResourceHelper(this, 0LL, (void *)0xFFFFFFFFFFFFFFFFLL, ObjectA, 1u, 0);
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      v20[3] = this;
      v8 = -1073741811;
      v20[5] = -1073741811LL;
      v20[4] = v5;
      WdLogEvent5_WdWarning(v20);
    }
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v21, v22, v23);
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = this;
    v8 = -1073741811;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
  }
  return v8;
}
