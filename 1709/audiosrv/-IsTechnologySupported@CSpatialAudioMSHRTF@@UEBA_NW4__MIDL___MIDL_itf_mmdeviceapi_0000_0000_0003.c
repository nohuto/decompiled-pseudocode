/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800CF520
 * Callers:
 *     <none>
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18002F298 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180092680 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x1800CE0C4 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     FillHrtfDesiredFormat @ 0x1800CE434 (FillHrtfDesiredFormat.c)
 *     IsSamplingRateBitRateSupported @ 0x1800CE9D0 (IsSamplingRateBitRateSupported.c)
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
  __int64 v16; // rax
  int *v17; // rcx
  unsigned int v18; // r12d
  char *v19; // r13
  __int16 v20; // ax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v21; // esi
  CSpatialAudioTech *v22; // r14
  _OWORD *v23; // rax
  __int64 v24; // rcx
  bool v26[4]; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v27; // [rsp+34h] [rbp-CCh]
  unsigned int v28; // [rsp+38h] [rbp-C8h]
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v29; // [rsp+3Ch] [rbp-C4h]
  unsigned int *v30; // [rsp+40h] [rbp-C0h]
  int *v31; // [rsp+48h] [rbp-B8h]
  _BYTE *v32; // [rsp+50h] [rbp-B0h]
  CSpatialAudioTech *v33; // [rsp+58h] [rbp-A8h]
  _OWORD *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  _BYTE v37[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v38[40]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v39[4]; // [rsp+E0h] [rbp-20h] BYREF

  v35 = -2LL;
  v29 = a2;
  v33 = a1;
  v36 = a5;
  v11 = a6;
  v30 = a6;
  v32 = a7;
  v34 = a8;
  v12 = 1;
  if ( !byte_18014CACF )
  {
    byte_18014CACE = (unsigned int)IsHrtfApoAvailable() != 0;
    byte_18014CACF = 1;
  }
  v13 = 0;
  v26[0] = 0;
  LOBYTE(v8) = 0;
  v27 = v8;
  *a6 = 0;
  *v32 = 0;
  memset(v38, 0, sizeof(v38));
  if ( v29 == DigitalAudioDisplayDevice && IsGetDefaultSpatialRenderingModePresent() )
    v27 = IsVirtualSurroundSoundAllowedToZeroFill() != 0;
  v39[0] = 48000;
  v39[1] = 48000;
  v39[2] = 44100;
  v39[3] = 32000;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      v15 = *(_QWORD *)(a3 + 24) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v15 )
        v15 = *(_QWORD *)(a3 + 32) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( !v15 )
        goto LABEL_12;
    }
    if ( ((*(_WORD *)a3 - 1) & 0xFFFD) == 0 )
LABEL_12:
      v39[0] = *(_DWORD *)(a3 + 4);
    if ( !a4 )
    {
LABEL_17:
      v28 = 0;
      v17 = v39;
      v31 = v39;
      while ( !v13 )
      {
        v18 = 0;
        v19 = (char *)&unk_180118960;
        do
        {
          if ( v13 )
            break;
          if ( v27 && a3 )
            v20 = *(_WORD *)(a3 + 2);
          else
            v20 = 2;
          FillHrtfDesiredFormat(v20, *(_WORD *)v19, *((_WORD *)v19 + 1), *v17, (__int64)v38);
          v13 = std::_Func_class<void,IAudioStreamInfo *>::operator()(a5, (__int64)v38);
          v26[0] = v13;
          if ( !v13 && *(_DWORD *)&v38[20] == 1599 )
          {
            *(_DWORD *)&v38[20] = 255;
            v13 = std::_Func_class<void,IAudioStreamInfo *>::operator()(a5, (__int64)v38);
            v26[0] = v13;
          }
          ++v18;
          v19 += 4;
          v17 = v31;
        }
        while ( v18 < 4 );
        ++v28;
        v31 = ++v17;
        if ( v28 >= 4 )
        {
          v11 = v30;
          goto LABEL_31;
        }
      }
      v11 = v30;
      goto LABEL_34;
    }
    a4 &= -(__int64)((unsigned int)CompareWaveFormat((const struct tWAVEFORMATEX *)a4, (const struct tWAVEFORMATEX *)a3) != 0);
  }
  if ( !a4 )
    goto LABEL_17;
  v16 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
          (__int64)v37,
          a5);
  v13 = IsSamplingRateBitRateSupported((__int16 *)a4, v16, (__int64)v38);
  v26[0] = v13;
LABEL_31:
  if ( v13 )
  {
LABEL_34:
    v21 = v29;
    v22 = v33;
    CSpatialAudioTech::AssignPriority(v33, v29, Headphones, 0xAu, v11, v26);
    v13 = v26[0];
    if ( v26[0] )
    {
      if ( *v11 )
      {
        *v32 = 1;
      }
      else
      {
        CSpatialAudioTech::AssignPriority(v22, v21, Speakers, 0xAu, v11, v26);
        v13 = v26[0];
      }
    }
  }
  v23 = v34;
  *v34 = *(_OWORD *)v38;
  v23[1] = *(_OWORD *)&v38[16];
  *((_QWORD *)v23 + 4) = *(_QWORD *)&v38[32];
  if ( !v13 || !byte_18014CACE )
    v12 = 0;
  v24 = *(_QWORD *)(a5 + 56);
  if ( v24 )
  {
    LOBYTE(v14) = v24 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v14);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v12;
}
