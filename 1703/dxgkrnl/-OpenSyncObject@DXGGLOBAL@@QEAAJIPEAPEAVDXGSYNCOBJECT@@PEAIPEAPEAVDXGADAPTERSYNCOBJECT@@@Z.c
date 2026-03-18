/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0095510 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01ADAB8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01BD8EC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0007204 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        __int64 a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 result; // rax
  _BYTE v27[8]; // [rsp+60h] [rbp-18h] BYREF
  char v28; // [rsp+68h] [rbp-10h]

  v7 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v9 + 24) = 2242LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 2243LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 2244LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  Global = DXGGLOBAL::GetGlobal(v17, v16, v18, v19);
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, v7, 8LL, v21);
  if ( !ObjectA )
  {
    if ( v28 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v22, v24, v25);
    return 3221225485LL;
  }
  if ( v28 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v22, v24, v25);
  if ( (unsigned int)(*((_DWORD *)ObjectA + 36) - 5) <= 1 )
    return 3221225485LL;
  result = DXGSYNCOBJECT::Open(
             ObjectA,
             0LL,
             0LL,
             0LL,
             a4,
             0LL,
             0LL,
             0,
             a5,
             0,
             (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
