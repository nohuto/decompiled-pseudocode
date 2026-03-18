/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B35D4
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C00B3724 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3)
{
  unsigned int CddDevice; // r15d
  __int64 v7; // r14
  __int64 v8; // rbp
  struct DXGDEVICE *v9; // rax
  volatile signed __int64 **v11; // rax
  volatile signed __int64 *v12; // rax
  DXGADAPTER *v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  CddDevice = 0;
  DxgkpGetPairingAdapters(this[2], 0, &v13, &v14, 0LL, 0LL);
  if ( !v13 )
    return 3221225473LL;
  v7 = *((_QWORD *)*this + 2325);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 176, 0LL);
  *(_QWORD *)(v7 + 184) = KeGetCurrentThread();
  v8 = *((_QWORD *)v13 + 289);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  *(_QWORD *)(v8 + 48) = KeGetCurrentThread();
  v9 = this[7];
  if ( v9 )
  {
    if ( a2 )
    {
      *a2 = v9;
      _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
    }
    if ( a3 )
    {
      v11 = (volatile signed __int64 **)(this + 8);
      if ( *((_DWORD *)this + 13) != 1 )
        v11 = (volatile signed __int64 **)this[8];
      v12 = *v11;
      *a3 = (struct DXGCONTEXT *)v12;
      _InterlockedIncrement64(v12 + 4);
    }
  }
  else
  {
    CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v13, a2, a3);
  }
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  *(_QWORD *)(v8 + 48) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 40, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v7 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 176, 0LL);
  KeLeaveCriticalRegion();
  return CddDevice;
}
