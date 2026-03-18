/*
 * XREFs of ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BA700
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BA850 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C00346F8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C003481C (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BABA4 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BAC88 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, struct _EX_RUNDOWN_REF *P)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF v8; // rcx
  PVOID *Count; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v16[48]; // [rsp+58h] [rbp-30h] BYREF

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
  ExWaitForRundownProtectionRelease(P + 16);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v13, (struct ADAPTER_DISPLAY *)this);
  v8.Count = P->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(P->Count + 8) != P || (Count = (PVOID *)P[1].Count, *Count != P) )
    __fastfail(3u);
  *Count = v8.Ptr;
  *(_QWORD *)(v8.Count + 8) = Count;
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v14, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v14) < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v11, v10);
    *(_QWORD *)(v12 + 24) = 950LL;
    WdLogEvent5_WdEvent(v12);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop((DXGPROTECTEDSESSION *)P);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v14);
    if ( LOBYTE(P[17].Count) )
    {
      DXGPROTECTEDSESSION::SignalFence((DXGPROTECTEDSESSION *)P);
      LOBYTE(P[17].Count) = 0;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)P);
}
