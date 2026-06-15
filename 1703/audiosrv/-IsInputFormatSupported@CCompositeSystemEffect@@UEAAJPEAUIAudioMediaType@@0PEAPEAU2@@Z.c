/*
 * XREFs of ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800C0A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180032B08 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18007B228 (--1-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18007D334 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FE14 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C08E4 (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsInputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v4; // eax
  struct IAudioMediaType *v5; // r15
  unsigned int v7; // r14d
  int v8; // esi
  int v9; // r12d
  int v10; // ebx
  int v11; // r13d
  const struct tWAVEFORMATEX *v12; // rax
  __int64 v13; // rbx
  char *v14; // rdi
  int v15; // r15d
  struct IAudioMediaType *v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  int v19; // edi
  __int64 *v20; // rdx
  bool v21; // cf
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // ebx
  struct IAudioMediaType *v30; // rax
  __int64 v32; // [rsp+38h] [rbp-49h] BYREF
  struct IAudioMediaType *v33; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v34; // [rsp+48h] [rbp-39h] BYREF
  int v35; // [rsp+50h] [rbp-31h]
  int v36; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  __int64 v38; // [rsp+60h] [rbp-21h] BYREF
  struct IAudioMediaType *v39; // [rsp+68h] [rbp-19h] BYREF
  __int64 v40; // [rsp+70h] [rbp-11h] BYREF
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  char *i; // [rsp+80h] [rbp-1h]
  __int64 v43[10]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v45; // [rsp+E8h] [rbp+67h]

  v4 = *((_DWORD *)this + 10);
  v5 = a3;
  v7 = 1;
  if ( v4 )
    v8 = *((_DWORD *)this + 18) - 1;
  else
    v8 = 0;
  if ( v4 )
    v45 = -1;
  else
    v45 = *((_DWORD *)this + 18);
  v9 = v4 != 0 ? -1 : 1;
  if ( *((_DWORD *)this + 9) )
    v10 = *((_DWORD *)this + 18) - 1;
  else
    v10 = 0;
  v11 = v8;
  v35 = v10;
  if ( *((_DWORD *)this + 9) == 1 )
  {
    v12 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(v12) == 1 )
      v11 = v10;
  }
  v13 = (__int64)v5;
  v33 = v5;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v33);
  v43[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v43);
  v34 = 0LL;
  if ( v8 == v45 )
    goto LABEL_48;
  v14 = (char *)this + 64;
  v15 = -2005073917;
  for ( i = v14; ; v14 = i )
  {
    v41 = v13;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v41);
    v16 = (struct IAudioMediaType *)v13;
    if ( v8 == v35 )
      v16 = a2;
    v32 = (__int64)v16;
    v39 = v16;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v39);
    v38 = 0LL;
    v17 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                       (__int64)v14,
                       v8);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v17 + 56LL))(v17, v32, v13, &v38);
    v19 = v18;
    if ( v18 == -2005073917 )
    {
      v22 = (__int64)i;
      v40 = 0LL;
      v36 = 0;
      v23 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                        (__int64)i,
                        v8);
      if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v23, &v40) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 24LL))(v40, &v36) >= 0
        && (v36 & 1) != 0 )
      {
        v32 = 0LL;
        v24 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           v22,
                           v8);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v32);
        v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v24 + 56LL))(
                v24,
                0LL,
                v13,
                &v32);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x382,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v25);
          v15 = v26;
LABEL_43:
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v32);
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v40);
LABEL_44:
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v38);
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)&v39);
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v41);
          goto LABEL_49;
        }
        if ( v8 == v11 )
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v34, &v32);
        v37 = 0LL;
        v27 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           (__int64)i,
                           v8);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v27 + 64LL))(
                v27,
                v32,
                v32,
                &v37);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x38C,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v28);
          v15 = v29;
          Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v37);
          goto LABEL_43;
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v33, &v37);
        Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v37);
        Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v32);
        v13 = (__int64)v33;
      }
      Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v40);
      goto LABEL_35;
    }
    if ( !v18 )
    {
      v20 = &v41;
      goto LABEL_23;
    }
    if ( v18 != 1 )
    {
      if ( v18 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x393,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v18);
      v15 = v19;
      goto LABEL_44;
    }
    if ( v8 != v11 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36A,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x887D0003LL);
      goto LABEL_44;
    }
    Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v34, &v38);
    v20 = (__int64 *)&v34;
LABEL_23:
    v21 = v32 != 0;
    v32 = -v32;
    if ( v21 )
      v20 = (__int64 *)&v39;
    Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v33, v20);
    v13 = (__int64)v33;
LABEL_35:
    Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v38);
    Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)&v39);
    Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v41);
    v8 += v9;
    if ( v8 == v45 )
      break;
  }
  v30 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    *a4 = v30;
    goto LABEL_50;
  }
  v5 = a3;
LABEL_48:
  *a4 = v5;
  ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->AddRef)(v5);
  v15 = 0;
LABEL_49:
  v7 = v15;
LABEL_50:
  Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)&v34);
  Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(v43);
  Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>((__int64 *)&v33);
  return v7;
}
