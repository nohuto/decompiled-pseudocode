/*
 * XREFs of ??0SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800D4470
 * Callers:
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1800D59A4 (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SpatialInteractionSourceDevice(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  PTP_TIMER ThreadpoolTimer; // r15
  struct _TP_TIMER *v11; // r14
  _BYTE *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[56]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE *v17; // [rsp+70h] [rbp-10h]

  *(_QWORD *)a1 = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::`vftable';
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_BYTE *)(a1 + 104) = 0;
  v17 = 0LL;
  v6 = *(_QWORD *)(a5 + 56);
  if ( v6 )
  {
    if ( v6 == a5 )
    {
      v17 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v16);
      v8 = *(_QWORD *)(a5 + 56);
      if ( !v8 )
        goto LABEL_9;
      LOBYTE(v7) = v8 != a5;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7);
    }
    else
    {
      v17 = *(_BYTE **)(a5 + 56);
    }
    *(_QWORD *)(a5 + 56) = 0LL;
  }
LABEL_9:
  *(_QWORD *)(a1 + 112) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 136));
  *(_QWORD *)(a1 + 200) = 0LL;
  if ( !v17 )
    goto LABEL_15;
  if ( v17 == v16 )
  {
    *(_QWORD *)(a1 + 200) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v17 + 8LL))(v17, a1 + 144);
    if ( !v17 )
      goto LABEL_15;
    v9 = v16;
    LOBYTE(v9) = v17 != v16;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v9);
  }
  else
  {
    *(_QWORD *)(a1 + 200) = v17;
  }
  v17 = 0LL;
LABEL_15:
  *(_QWORD *)(a1 + 208) = GetTickCount64();
  *(_QWORD *)(a1 + 216) = 5000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_,
                      (PVOID)(a1 + 112),
                      0LL);
  v11 = *(struct _TP_TIMER **)(a1 + 120);
  if ( ThreadpoolTimer != v11 )
  {
    if ( v11 )
    {
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 120), 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v11, 1);
      CloseThreadpoolTimer(v11);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    *(_QWORD *)(a1 + 120) = ThreadpoolTimer;
  }
  if ( v17 )
  {
    v12 = v16;
    LOBYTE(v12) = v17 != v16;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v12);
  }
  memset_0((void *)(a1 + 224), 0, 0xE0uLL);
  v14 = *(_QWORD *)(a5 + 56);
  if ( v14 )
  {
    LOBYTE(v13) = v14 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return a1;
}
