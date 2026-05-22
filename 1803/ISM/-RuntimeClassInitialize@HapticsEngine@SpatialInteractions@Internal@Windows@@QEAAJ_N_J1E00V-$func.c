/*
 * XREFs of ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@@Z @ 0x1800D4FB4
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___ptr64___int64_unsigned_int_&___ptr64_unsigned_char_&___ptr64_bool_&___ptr64_bool_&___ptr64__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x1800DA2E4 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000819C (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z @ 0x1800D3D2C (-InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x1800DA064 (--$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIH.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::RuntimeClassInitialize(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        bool a6,
        bool a7,
        __int64 a8)
{
  int v12; // eax
  _OWORD *v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, __int64); // rax
  int v25; // eax
  bool v26; // bl
  bool v27; // di
  char v28; // bp
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  char v31; // al
  SpatialInteractionDevices::SpatialInteractionTrace *v32; // rcx
  __int64 v33; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v35; // [rsp+80h] [rbp+8h]

  std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=(a1 + 128, a8);
  *(_QWORD *)(a1 + 200) = a4;
  *(_QWORD *)(a1 + 208) = a3;
  v12 = a5;
  if ( a2 )
    v12 = 100;
  *(_DWORD *)(a1 + 224) = v12;
  *(_BYTE *)(a1 + 229) = a2;
  *(_BYTE *)(a1 + 230) = a6;
  if ( !a2 )
  {
    v35 = operator new(0x80uLL);
    v35[1] = a4;
    v35[2] = 0LL;
    v35[3] = 0LL;
    *((_BYTE *)v35 + 32) = a7;
    *((_DWORD *)v35 + 9) = 2;
    *((_BYTE *)v35 + 40) = 0;
    *v35 = &Windows::Internal::SpatialInteractions::AverageHapticsFilter::`vftable';
    *((_BYTE *)v35 + 48) = 0;
    v35[7] = 0LL;
    v35[8] = 0LL;
    v35[10] = 0LL;
    v35[11] = 0LL;
    v35[12] = 0LL;
    v35[13] = 0LL;
    v35[14] = 0LL;
    v13 = operator new(0x10uLL);
    v35[10] = v13;
    *v13 = 0LL;
    *(_QWORD *)v35[10] = v35 + 10;
    *((_BYTE *)v35 + 120) = 0;
    v14 = *(void **)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v35;
    if ( v14 )
      operator delete(v14);
    if ( !*(_QWORD *)(a1 + 112) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)0x8007000ELL);
      v16 = *(_QWORD *)(a8 + 56);
      if ( v16 )
      {
        LOBYTE(v15) = v16 != a8;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
        *(_QWORD *)(a8 + 56) = 0LL;
      }
      return 2147942414LL;
    }
  }
  v18 = (_QWORD *)(a1 + 120);
  v19 = *(_QWORD *)(a1 + 120);
  if ( v19 )
  {
    *v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,>(a1 + 120);
  v21 = v20;
  if ( v20 >= 0 )
    v21 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v20);
  if ( (v21 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x204,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)v21);
    v23 = *(_QWORD *)(a8 + 56);
    if ( !v23 )
      return v21;
    v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL);
LABEL_18:
    LOBYTE(v22) = v23 != a8;
    v24(v23, v22);
    *(_QWORD *)(a8 + 56) = 0LL;
    return v21;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 56LL))(*v18, a1 + 8);
  v21 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x205,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v25);
    v23 = *(_QWORD *)(a8 + 56);
    if ( !v23 )
      return v21;
    v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL);
    goto LABEL_18;
  }
  v26 = a7;
  if ( a2 )
    v26 = 0;
  v27 = a6;
  if ( a2 )
    v27 = 0;
  v28 = a5;
  if ( a2 )
  {
    v28 = 0;
    a4 = 0LL;
  }
  v30 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( !v30 || (v31 = 1, !*v30) )
    v31 = 0;
  if ( v31 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine_(v32, a2, a4, v28, v27, v26);
  }
  v33 = *(_QWORD *)(a8 + 56);
  if ( v33 )
  {
    LOBYTE(v29) = v33 != a8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 32LL))(v33, v29);
    *(_QWORD *)(a8 + 56) = 0LL;
  }
  return 0LL;
}
