/*
 * XREFs of ?SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKEEGPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A89A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A6340 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SetInputDeviceHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        unsigned int a2,
        unsigned __int8 a3,
        char a4,
        unsigned __int16 a5)
{
  int CacheEntry; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (__int64)this - 8,
                 a2,
                 &v14);
  if ( CacheEntry < 0 )
  {
    v9 = 1161LL;
LABEL_8:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
    goto LABEL_9;
  }
  v10 = a3;
  v11 = *(_QWORD *)v14;
  if ( a3 == 1 )
  {
    CacheEntry = (*(__int64 (**)(void))(v11 + 136))();
    if ( CacheEntry < 0 )
    {
      v9 = 1166LL;
      goto LABEL_8;
    }
  }
  else
  {
    LOBYTE(v8) = a4;
    LOWORD(v10) = a3 + 4096;
    CacheEntry = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v11 + 128))(v14, v10, v8, a5);
    if ( CacheEntry < 0 )
    {
      v9 = 1170LL;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v12 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return 0LL;
}
