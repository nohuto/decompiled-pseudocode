/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___ptr64___int64_unsigned_int_&___ptr64_unsigned_char_&___ptr64_bool_&___ptr64_bool_&___ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x1800DA2E4
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x1800D8A10 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 * Callees:
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@@Z @ 0x1800D4FB4 (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 *     ??0HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800DA40C (--0HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_____ptr64___int64_unsigned_int_____ptr64_unsigned_char_____ptr64_bool_____ptr64_bool_____ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa___(
        __int64 *a1,
        char *a2,
        __int64 *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        bool *a6,
        bool *a7,
        __int64 *a8)
{
  Windows::Internal::SpatialInteractions::HapticsEngine *v12; // rax
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD v17[9]; // [rsp+58h] [rbp-60h] BYREF

  *a1 = 0LL;
  v12 = (Windows::Internal::SpatialInteractions::HapticsEngine *)operator new(
                                                                   0xE8uLL,
                                                                   (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v14 = Windows::Internal::SpatialInteractions::HapticsEngine::HapticsEngine(v12);
    v15 = *a8;
    v17[0] = off_1800F3858;
    v17[1] = v15;
    v17[7] = v17;
    v13 = Windows::Internal::SpatialInteractions::HapticsEngine::RuntimeClassInitialize(
            v14,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            (__int64)v17);
    if ( v13 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v13 = 0;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
