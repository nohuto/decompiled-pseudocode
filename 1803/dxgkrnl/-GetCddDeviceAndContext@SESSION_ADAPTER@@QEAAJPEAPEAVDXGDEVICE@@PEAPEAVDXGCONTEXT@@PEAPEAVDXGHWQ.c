/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00A0434
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01CE7F0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4)
{
  unsigned int CddDevice; // r12d
  __int64 v9; // r15
  __int64 v10; // rbp
  struct DXGDEVICE *v11; // rax
  volatile signed __int64 **v13; // rax
  volatile signed __int64 *v14; // rax
  volatile signed __int64 *v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  DXGADAPTER *v17; // [rsp+70h] [rbp+8h] BYREF

  CddDevice = 0;
  DxgkpGetPairingAdapters(this[2], 0, &v17, &v16, 0LL, 0LL);
  if ( !v17 )
    return 3221225473LL;
  v9 = *((_QWORD *)*this + 2325);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 184, 0LL);
  *(_QWORD *)(v9 + 192) = KeGetCurrentThread();
  v10 = *((_QWORD *)v17 + 308);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10 + 40, 0LL);
  *(_QWORD *)(v10 + 48) = KeGetCurrentThread();
  v11 = this[7];
  if ( v11 )
  {
    if ( a2 )
    {
      *a2 = v11;
      _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
    }
    if ( a3 )
    {
      v13 = (volatile signed __int64 **)(this + 8);
      if ( *((_DWORD *)this + 13) != 1 )
        v13 = (volatile signed __int64 **)*v13;
      v14 = *v13;
      *a3 = (struct DXGCONTEXT *)v14;
      _InterlockedIncrement64(v14 + 4);
    }
    if ( a4 )
    {
      v15 = (volatile signed __int64 *)this[9];
      *a4 = (struct DXGHWQUEUE *)v15;
      if ( v15 )
        _InterlockedIncrement64(v15 + 7);
    }
  }
  else
  {
    CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v17, a2, a3, a4);
  }
  DXGADAPTER::ReleaseReferenceNoTracking(v17);
  *(_QWORD *)(v10 + 48) = 0LL;
  ExReleasePushLockExclusiveEx(v10 + 40, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v9 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 184, 0LL);
  KeLeaveCriticalRegion();
  return CddDevice;
}
