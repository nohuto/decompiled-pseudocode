/*
 * XREFs of ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BBC8C
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C0029638 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0029734 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BC194 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, DXGPROTECTEDSESSION *P)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v19[48]; // [rsp+58h] [rbp-30h] BYREF

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 914LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 915LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v16, (struct ADAPTER_DISPLAY *)this);
  v8 = *(_QWORD **)P;
  if ( *(DXGPROTECTEDSESSION **)(*(_QWORD *)P + 8LL) != P || (v9 = (PVOID *)*((_QWORD *)P + 1), *v9 != P) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = v9;
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v17, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v17, v10 + 1) < 0 )
  {
    v15 = WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 939LL;
    WdLogEvent5_WdEvent(v15);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop(P);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v17);
  }
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)P);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
}
