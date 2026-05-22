/*
 * XREFs of ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A7E80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800A4DAC (-TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXP.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A6340 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingRequestedHeartbeat(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        unsigned int a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  wchar_t *v3; // rbx
  int CacheEntry; // eax
  __int64 v7; // rdi
  char v8; // al
  HSTRING v9; // rcx
  __int128 v10; // xmm1
  bool v11; // r15
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  const wchar_t *StringRawBuffer; // r14
  char v15; // al
  HSTRING v16; // rcx
  int v17; // r13d
  bool v18; // r12
  _DWORD *v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  struct _TP_TIMER *v23; // rcx
  __int64 v24; // rbx
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *v28; // [rsp+88h] [rbp-78h]
  __m256i v29; // [rsp+90h] [rbp-70h] BYREF
  __m256i v30; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v31[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v32; // [rsp+110h] [rbp+10h] BYREF
  char v33[8]; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v3 = (wchar_t *)((char *)this - 8);
  v27 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (__int64)this - 8,
                 a2,
                 &v27);
  if ( CacheEntry >= 0 )
  {
    v7 = v27;
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)v27 + 64LL))(v27, &v32);
    v9 = (HSTRING)*((_QWORD *)this + 16);
    v10 = *(_OWORD *)(v7 + 52);
    v11 = v8;
    *(_OWORD *)v30.m256i_i8 = *(_OWORD *)(v7 + 36);
    v12 = *(_OWORD *)(v7 + 68);
    *(_OWORD *)&v30.m256i_u64[2] = v10;
    v13 = *(_OWORD *)(v7 + 84);
    *(_OWORD *)v29.m256i_i8 = v12;
    *(_OWORD *)&v29.m256i_u64[2] = v13;
    StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v16 = *(HSTRING *)(v7 + 24);
    v17 = *(_DWORD *)(v7 + 32);
    v18 = v15;
    pftDueTime.dwLowDateTime = *(_DWORD *)(v7 + 12);
    v28 = (wchar_t *)WindowsGetStringRawBuffer(v16, 0LL);
    v19 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
    if ( v19 && *v19 )
    {
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat_(
        v20,
        v28,
        a2,
        pftDueTime.dwLowDateTime,
        v17,
        v18,
        v11,
        StringRawBuffer,
        &v32,
        v33[0],
        (const float (*)[3])&v30,
        (const float (*)[4])((char *)&v30.m256i_u64[1] + 4),
        (const float (*)[3])&v29,
        (const float (*)[4])((char *)&v29.m256i_u64[1] + 4));
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7) )
    {
      v28 = v3;
      v31[0] = off_1800F2260;
      v31[1] = v3;
      v31[7] = v31;
      v21 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              (__int64)v3,
              (__int64)&v27,
              (__int64)v31,
              1);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3CD,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v21);
      v7 = v27;
    }
    _InterlockedExchange64((volatile __int64 *)(v7 + 208), GetTickCount64());
    v22 = *(_QWORD *)(v7 + 216);
    AcquireSRWLockExclusive((PSRWLOCK)(v7 + 136));
    if ( !*(_BYTE *)(v7 + 128) )
    {
      v23 = *(struct _TP_TIMER **)(v7 + 120);
      *(_BYTE *)(v7 + 128) = 1;
      pftDueTime = (struct _FILETIME)(-10000 * v22);
      SetThreadpoolTimer(v23, &pftDueTime, 0, 0);
    }
    if ( v7 != -136 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v7 + 136));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3AA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
  }
  if ( *((_QWORD *)&v27 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v24 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  return 0LL;
}
