/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800408B0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180040580 (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x180040630 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_180040630.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180040734 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFromat @ 0x180040C60 (FillHrtfDesiredFromat.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        CSpatialAudioTech *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6,
        _OWORD *a7)
{
  char v10; // di
  bool v11; // si
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r12d
  int *v15; // r13
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(__int64, _QWORD *); // rax
  char v18; // al
  __int64 v19; // rdx
  char v20; // bl
  int DefaultSpatialRenderingMode; // esi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v22; // r13d
  CSpatialAudioTech *v23; // r12
  _OWORD *v24; // rax
  _QWORD *v25; // rcx
  void (__fastcall *v26)(_QWORD *, char); // rax
  bool v28; // [rsp+38h] [rbp-71h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v29; // [rsp+3Ch] [rbp-6Dh]
  _BYTE *v30; // [rsp+40h] [rbp-69h] BYREF
  CSpatialAudioTech *v31; // [rsp+48h] [rbp-61h]
  _BYTE *v32; // [rsp+50h] [rbp-59h]
  _OWORD *v33; // [rsp+58h] [rbp-51h]
  __int64 v34; // [rsp+60h] [rbp-49h]
  __int64 v35; // [rsp+68h] [rbp-41h]
  _BYTE v36[40]; // [rsp+70h] [rbp-39h] BYREF
  int v37; // [rsp+98h] [rbp-11h] BYREF
  int v38; // [rsp+9Ch] [rbp-Dh]
  int v39; // [rsp+A0h] [rbp-9h]
  int v40; // [rsp+A4h] [rbp-5h]

  v34 = -2LL;
  v29 = a2;
  v31 = a1;
  v35 = a4;
  v32 = a6;
  v33 = a7;
  v10 = 1;
  if ( !byte_18012C417 )
  {
    byte_18012C416 = GetFileAttributesW(L"HrtfApo.dll") != -1;
    byte_18012C417 = 1;
  }
  v11 = 0;
  *a5 = 0;
  *a6 = 0;
  memset(v36, 0, sizeof(v36));
  if ( a2 == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v12) )
    v11 = (unsigned int)IsVirtualSurroundAllowedFor8ChannelEndpoint() != 0;
  v37 = 48000;
  v38 = 48000;
  v39 = 44100;
  v40 = 32000;
  if ( a3 )
  {
    v12 = *a3;
    if ( (_WORD)v12 == 0xFFFE )
    {
      v13 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v13 )
        v13 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( !v13 )
        goto LABEL_9;
    }
    LOWORD(v12) = v12 - 1;
    if ( (v12 & 0xFFFD) == 0 )
LABEL_9:
      v38 = *((_DWORD *)a3 + 1);
  }
  v14 = 0;
  v15 = &v37;
  while ( 1 )
  {
    LOBYTE(v12) = v11;
    FillHrtfDesiredFromat(v12, (unsigned int)*v15, v36);
    v30 = v36;
    v16 = *(_QWORD *)(a4 + 56);
    if ( !v16 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800605F1LL);
    }
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 16LL);
    v18 = v17 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call
        ? std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call(
            v16,
            &v30)
        : v17(v16, &v30);
    v20 = v18;
    if ( v18 )
      break;
    if ( *(_DWORD *)&v36[20] == 1599 )
    {
      *(_DWORD *)&v36[20] = 255;
      v20 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a4, (__int64)v36);
    }
    if ( v20 )
      break;
    ++v14;
    ++v15;
    if ( v14 >= 4 )
      goto LABEL_23;
  }
  DefaultSpatialRenderingMode = 0;
  *a5 = 0;
  v20 = 1;
  v28 = 1;
  v22 = v29;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v12) )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode((unsigned int)v29);
  v23 = v31;
  if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)v31 + 64LL))(v31) )
  {
    *a5 = 1;
LABEL_32:
    *v32 = 1;
    goto LABEL_23;
  }
  if ( DefaultSpatialRenderingMode )
  {
    v20 = 0;
    goto LABEL_23;
  }
  if ( ((v29 - 3) & 0xFFFFFFFD) == 0 )
    *a5 = 10;
  if ( *a5 )
    goto LABEL_32;
  CSpatialAudioTech::AssignPriority(v23, v22, Speakers, 0xAu, a5, &v28);
  v20 = v28;
LABEL_23:
  v24 = v33;
  *v33 = *(_OWORD *)v36;
  v24[1] = *(_OWORD *)&v36[16];
  *((_QWORD *)v24 + 4) = *(_QWORD *)&v36[32];
  if ( !v20 || !byte_18012C416 )
    v10 = 0;
  v25 = *(_QWORD **)(a4 + 56);
  if ( v25 )
  {
    LOBYTE(v19) = v25 != (_QWORD *)a4;
    v26 = *(void (__fastcall **)(_QWORD *, char))(*v25 + 32LL);
    if ( v26 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this )
      std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this(
        v25,
        v19);
    else
      v26(v25, v19);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return v10;
}
