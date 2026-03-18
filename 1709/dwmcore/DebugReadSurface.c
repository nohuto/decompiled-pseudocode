/*
 * XREFs of DebugReadSurface @ 0x180150C0C
 * Callers:
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     Flush @ 0x180151308 (Flush.c)
 *     TransitionResourceBarrier @ 0x180151554 (TransitionResourceBarrier.c)
 */

__int64 __fastcall DebugReadSurface(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  void (__fastcall *v7)(_QWORD *, _BYTE *); // rax
  signed int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rbx
  signed int v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // r14d
  signed int v17; // eax
  __int64 v18; // rbx
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int64 v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v34[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v35; // [rsp+C0h] [rbp-40h]
  _QWORD *v36; // [rsp+C8h] [rbp-38h] BYREF
  int v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E4h] [rbp-1Ch]
  int v41; // [rsp+ECh] [rbp-14h]
  int v42; // [rsp+F4h] [rbp-Ch]
  _OWORD v43[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v44[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v45; // [rsp+128h] [rbp+28h]

  v3 = *a2;
  v26 = 0LL;
  v7 = *(void (__fastcall **)(_QWORD *, _BYTE *))(v3 + 80);
  v27 = 0LL;
  v7(a2, v44);
  v28 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(*a1 + 56))(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v26);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x44u);
    goto LABEL_19;
  }
  v45 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD, __int64, _QWORD, _OWORD *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v26 + 304LL))(
    v26,
    v44,
    0LL,
    1LL,
    0LL,
    v43,
    0LL,
    0LL,
    &v28);
  v10 = v28;
  if ( ((v28 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x4Eu);
    goto LABEL_19;
  }
  v34[1] = 0LL;
  v35 = 0;
  v34[0] = 3LL;
  memset_0(&v36, 0, 0x38uLL);
  v38 = v10;
  v11 = v26;
  LODWORD(v36) = 1;
  v39 = 1;
  v40 = 65537LL;
  v41 = 1;
  v42 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD **, int, _QWORD, GUID *, __int64 *))(*(_QWORD *)v11 + 216LL))(
          v11,
          v34,
          0LL,
          &v36,
          1024,
          0LL,
          &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
          &v27);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x64u);
    goto LABEL_19;
  }
  v13 = *a1;
  v33[0] = 0LL;
  v25 = 0LL;
  v14 = (unsigned int *)(*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v13 + 144))(a1, v34);
  v15 = v26;
  v16 = *v14;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v15 + 72LL))(
          v15,
          v16,
          &GUID_6102dee4_af59_4b09_b999_b44d73f09b24,
          v33);
  v9 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x6Fu);
    goto LABEL_16;
  }
  v18 = v26;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v18 + 96LL))(
          v18,
          0LL,
          v16,
          v33[0],
          0LL,
          &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
          &v25);
  v9 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x71u);
    goto LABEL_16;
  }
  memset_0(&v36, 0, 0x30uLL);
  v36 = a2;
  v37 = 0;
  LODWORD(v38) = 0;
  memset_0(&v29, 0, 0x30uLL);
  v29 = v27;
  v30 = 1;
  v31 = v43[0];
  v32 = v43[1];
  TransitionResourceBarrier(v25, a2, a3, 2048LL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _DWORD, _QWORD **, _QWORD))(*(_QWORD *)v25 + 128LL))(
    v25,
    &v29,
    0LL,
    0LL,
    0,
    &v36,
    0LL);
  TransitionResourceBarrier(v25, a2, 2048LL, a3);
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 72LL))(v25);
  v9 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x83u);
    goto LABEL_16;
  }
  v34[0] = v25;
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD *))(*a1 + 80))(a1, 1LL, v34);
  v21 = Flush(a1);
  v9 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x8Au);
LABEL_16:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v27 + 64LL))(v27, 0LL, 0LL, v34);
  v9 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x92u);
  }
  else
  {
    __debugbreak();
    v33[0] = 0LL;
    v33[1] = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 72LL))(v27, 0LL, v33);
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v9;
}
