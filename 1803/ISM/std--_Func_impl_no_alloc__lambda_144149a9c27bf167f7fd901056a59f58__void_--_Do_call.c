/*
 * XREFs of std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Do_call @ 0x1800ABE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A6340 (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800A6458 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Do_call(__int64 a1)
{
  __int64 v1; // r14
  int CacheEntry; // eax
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rdi
  char v8; // bl
  __int64 v9; // rbx
  __int128 v10; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v11[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 v1,
                 *(_DWORD *)(a1 + 16),
                 &v10);
  v3 = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v4 = 906LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
    if ( *((_QWORD *)&v10 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v5 = *((_QWORD *)&v10 + 1);
        (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
      }
    }
    goto LABEL_17;
  }
  v6 = v10;
  v7 = (RTL_SRWLOCK *)(v10 + 136);
  AcquireSRWLockShared((PSRWLOCK)(v10 + 136));
  v8 = *(_BYTE *)(v6 + 128);
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v8 )
  {
    v11[0] = off_1800F2300;
    v11[1] = v1;
    v11[7] = v11;
    CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                   v1,
                   (__int64)&v10,
                   (__int64)v11,
                   1);
    v3 = CacheEntry;
    if ( CacheEntry < 0 )
    {
      v4 = 921LL;
      goto LABEL_3;
    }
  }
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v9 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  v3 = 0;
LABEL_17:
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v3);
}
