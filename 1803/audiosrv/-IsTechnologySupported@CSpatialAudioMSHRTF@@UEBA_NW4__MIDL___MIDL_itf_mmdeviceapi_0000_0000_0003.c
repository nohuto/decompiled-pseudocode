/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18004EEB0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x18004F0FC (FillHrtfDesiredFormat.c)
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004FED0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FED0.c)
 *     ??R?$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005514C (--R-$_Func_class@_NPEBUWAVEFORMATEXTENSIBLE@@@std@@QEBA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005FC78 (--0-$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800C8550 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     IsSamplingRateBitRateSupported @ 0x1800FF034 (IsSamplingRateBitRateSupported.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        CSpatialAudioTech *a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int *a6,
        _BYTE *a7,
        _OWORD *a8)
{
  BOOL v8; // r12d
  unsigned int *v11; // r13
  char v12; // di
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rax
  bool v16; // zf
  unsigned int v17; // r12d
  unsigned __int16 *v18; // r13
  unsigned __int16 v19; // ax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v20; // esi
  CSpatialAudioTech *v21; // r14
  _OWORD *v22; // rax
  __int64 v23; // rcx
  void (__fastcall *v24)(__int64, __int64); // rax
  __int64 v26; // rax
  bool v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v28; // [rsp+34h] [rbp-CCh]
  unsigned int v29; // [rsp+38h] [rbp-C8h]
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v30; // [rsp+3Ch] [rbp-C4h]
  _DWORD *v31; // [rsp+40h] [rbp-C0h]
  unsigned int *v32; // [rsp+48h] [rbp-B8h]
  _BYTE *v33; // [rsp+50h] [rbp-B0h]
  CSpatialAudioTech *v34; // [rsp+58h] [rbp-A8h]
  _OWORD *v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  _BYTE v38[64]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-38h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  _DWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF

  v36 = -2LL;
  v30 = a2;
  v34 = a1;
  v37 = a5;
  v11 = a6;
  v32 = a6;
  v33 = a7;
  v35 = a8;
  v12 = 1;
  if ( !byte_18018B0E6 )
  {
    byte_18018B0E7 = (unsigned int)IsHrtfApoAvailable() != 0;
    byte_18018B0E6 = 1;
  }
  v13 = 0;
  v27[0] = 0;
  LOBYTE(v8) = 0;
  v28 = v8;
  *a6 = 0;
  *v33 = 0;
  memset_0(&v39, 0, 0x28uLL);
  if ( v30 == DigitalAudioDisplayDevice && (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    v28 = IsVirtualSurroundSoundAllowedToZeroFill() != 0;
  v42[0] = 48000;
  v42[1] = 48000;
  v42[2] = 44100;
  v42[3] = 32000;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      v15 = *(_QWORD *)(a3 + 24) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v15 )
        v15 = *(_QWORD *)(a3 + 32) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      v16 = v15 == 0;
    }
    else
    {
      v16 = ((*(_WORD *)a3 - 1) & 0xFFFD) == 0;
    }
    if ( v16 )
      v42[0] = *(_DWORD *)(a3 + 4);
    if ( !a4 )
    {
LABEL_12:
      v29 = 0;
      v31 = v42;
      while ( !v13 )
      {
        v17 = 0;
        v18 = (unsigned __int16 *)&unk_18013FD50;
        do
        {
          if ( v13 )
            break;
          if ( v28 && a3 )
            v19 = *(_WORD *)(a3 + 2);
          else
            v19 = 2;
          FillHrtfDesiredFormat(v19, *v18, v18[1], *v31, (__int64)&v39);
          v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v39);
          v27[0] = v13;
          if ( !v13 && DWORD1(v40) == 1599 )
          {
            DWORD1(v40) = 255;
            v13 = std::_Func_class<bool,WAVEFORMATEXTENSIBLE const *>::operator()(a5, &v39);
            v27[0] = v13;
          }
          ++v17;
          v18 += 2;
        }
        while ( v17 < 4 );
        ++v29;
        ++v31;
        if ( v29 >= 4 )
        {
          v11 = v32;
          goto LABEL_45;
        }
      }
      v11 = v32;
LABEL_23:
      v20 = v30;
      v21 = v34;
      CSpatialAudioTech::AssignPriority(v34, v30, Headphones, 0xAu, v11, v27);
      v13 = v27[0];
      if ( v27[0] )
      {
        if ( *v11 )
        {
          *v33 = 1;
        }
        else
        {
          CSpatialAudioTech::AssignPriority(v21, v20, Speakers, 0xAu, v11, v27);
          v13 = v27[0];
        }
      }
      goto LABEL_26;
    }
    a4 &= -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a4, (const struct tWAVEFORMATEX *)a3) != 0);
  }
  if ( !a4 )
    goto LABEL_12;
  v26 = std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(v38, a5);
  v13 = IsSamplingRateBitRateSupported(a4, v26, &v39);
  v27[0] = v13;
LABEL_45:
  if ( v13 )
    goto LABEL_23;
LABEL_26:
  v22 = v35;
  *v35 = v39;
  v22[1] = v40;
  *((_QWORD *)v22 + 4) = v41;
  if ( !v13 || !byte_18018B0E7 )
    v12 = 0;
  v23 = *(_QWORD *)(a5 + 56);
  if ( v23 )
  {
    LOBYTE(v14) = v23 != a5;
    v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL);
    if ( (char *)v24 == (char *)std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this )
      std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this(
        v23,
        v14);
    else
      v24(v23, v14);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v12;
}
