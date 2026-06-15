/*
 * XREFs of ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800BC9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18005AFE0 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B6878 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BBA5C (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800BBBC4 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsInputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  struct IAudioMediaType *v5; // r14
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  unsigned int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // ebx
  const struct tWAVEFORMATEX *v13; // rax
  __int64 v14; // rbx
  char *v15; // rdi
  int v16; // r14d
  struct IAudioMediaType *v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  int v20; // edi
  __int64 *v21; // rdx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // ebx
  struct IAudioMediaType *v30; // rax
  struct IAudioMediaType *v32; // [rsp+38h] [rbp-49h] BYREF
  struct IAudioMediaType *v33; // [rsp+40h] [rbp-41h] BYREF
  __int64 v34; // [rsp+48h] [rbp-39h] BYREF
  struct IAudioMediaType *v35; // [rsp+50h] [rbp-31h] BYREF
  int v36; // [rsp+58h] [rbp-29h]
  int v37; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h] BYREF
  __int64 v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h] BYREF
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  char *i; // [rsp+80h] [rbp-1h]
  __int64 v43[10]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v45; // [rsp+E8h] [rbp+67h]

  v5 = a3;
  v6 = *((_DWORD *)this + 10);
  v7 = *((_DWORD *)this + 18);
  if ( v6 )
  {
    v45 = -1;
    v8 = v7 - 1;
  }
  else
  {
    v8 = 0;
    v45 = *((_DWORD *)this + 18);
  }
  v9 = 1;
  v10 = v8;
  v11 = v6 != 0 ? -1 : 1;
  if ( *((_DWORD *)this + 9) )
  {
    v12 = v7 - 1;
    v36 = v7 - 1;
    if ( *((_DWORD *)this + 9) == 1 )
    {
      v13 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(v13) == 1 )
        v10 = v12;
    }
  }
  else
  {
    v36 = 0;
  }
  v14 = (__int64)v5;
  v33 = v5;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v33);
  v43[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v43);
  v35 = 0LL;
  if ( v8 == v45 )
    goto LABEL_44;
  v15 = (char *)this + 64;
  v16 = -2005073917;
  for ( i = v15; ; v15 = i )
  {
    v41 = v14;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v41);
    v17 = (struct IAudioMediaType *)v14;
    if ( v8 == v36 )
      v17 = a2;
    v32 = v17;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v32);
    v39 = 0LL;
    v18 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                       (__int64)v15,
                       v8);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
    v19 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, __int64, __int64 *))(*(_QWORD *)v18 + 56LL))(
            v18,
            v32,
            v14,
            &v39);
    v20 = v19;
    if ( v19 == -2005073917 )
    {
      v22 = (__int64)i;
      v40 = 0LL;
      v37 = 0;
      v23 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                        (__int64)i,
                        v8);
      if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v23, &v40) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v37) >= 0
        && (v37 & 1) != 0 )
      {
        v34 = 0LL;
        v24 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           v22,
                           v8);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v24 + 56LL))(
                v24,
                0LL,
                v14,
                &v34);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3A1,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v25);
          v16 = v26;
LABEL_39:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
LABEL_40:
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
          goto LABEL_45;
        }
        if ( v8 == v10 )
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v35, &v34);
        v38 = 0LL;
        v27 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           (__int64)i,
                           v8);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v27 + 64LL))(
                v27,
                v34,
                v34,
                &v38);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x3AB,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v28);
          v16 = v29;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
          goto LABEL_39;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v33, &v38);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
        v14 = (__int64)v33;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
      goto LABEL_31;
    }
    if ( !v19 )
    {
      v21 = &v41;
      goto LABEL_19;
    }
    if ( v19 != 1 )
    {
      if ( v19 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B2,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v19);
      v16 = v20;
      goto LABEL_40;
    }
    if ( v8 != v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x887D0003LL);
      goto LABEL_40;
    }
    Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v35, &v39);
    v21 = (__int64 *)&v35;
LABEL_19:
    if ( v32 )
      v21 = (__int64 *)&v32;
    Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v33, v21);
    v14 = (__int64)v33;
LABEL_31:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v41);
    v8 += v11;
    if ( v8 == v45 )
      break;
  }
  v30 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    *a4 = v30;
    goto LABEL_46;
  }
  v5 = a3;
LABEL_44:
  *a4 = v5;
  ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->AddRef)(v5);
  v16 = 0;
LABEL_45:
  v9 = v16;
LABEL_46:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v35);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v43);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v33);
  return v9;
}
