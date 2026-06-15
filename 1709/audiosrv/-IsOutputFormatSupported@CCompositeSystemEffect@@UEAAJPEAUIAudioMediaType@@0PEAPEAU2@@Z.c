/*
 * XREFs of ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800BCD70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18005AFE0 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B6878 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BBA5C (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800BBBC4 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsOutputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v4; // eax
  int v6; // ecx
  int v9; // esi
  int v10; // r13d
  bool v11; // cf
  unsigned int v12; // r15d
  int v13; // eax
  struct IAudioMediaType *v14; // rbx
  char *v15; // rdi
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  int v20; // edi
  __int64 *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v31; // [rsp+30h] [rbp-49h] BYREF
  struct IAudioMediaType *v32; // [rsp+38h] [rbp-41h] BYREF
  __int64 v33; // [rsp+40h] [rbp-39h] BYREF
  __int64 v34; // [rsp+48h] [rbp-31h] BYREF
  __int64 v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h] BYREF
  __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  struct IAudioMediaType *v38; // [rsp+68h] [rbp-11h] BYREF
  int v39; // [rsp+70h] [rbp-9h]
  unsigned int v40; // [rsp+74h] [rbp-5h]
  char *v41; // [rsp+78h] [rbp-1h]
  __int64 v42[10]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v44; // [rsp+E0h] [rbp+67h] BYREF
  struct IAudioMediaType *v45; // [rsp+E8h] [rbp+6Fh]
  unsigned int v46; // [rsp+F0h] [rbp+77h]
  struct IAudioMediaType **v47; // [rsp+F8h] [rbp+7Fh]

  v47 = a4;
  v45 = a2;
  v4 = *((_DWORD *)this + 10);
  v6 = *((_DWORD *)this + 18);
  if ( v4 )
  {
    v9 = v6 - 1;
    v10 = -1;
  }
  else
  {
    v9 = 0;
    v10 = v6;
  }
  v11 = v4 != 0;
  v12 = 1;
  v13 = *((_DWORD *)this + 9);
  v14 = a3;
  v32 = a3;
  v40 = v11 ? -1 : 1;
  v39 = v13 != 0 ? v6 - 1 : 0;
  v46 = v10 - v40;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v32);
  v42[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v42);
  v34 = 0LL;
  if ( v9 != v10 )
  {
    v15 = (char *)this + 64;
    v16 = -2005073917;
    v41 = v15;
    while ( 1 )
    {
      v38 = v14;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v38);
      v17 = (__int64)v14;
      if ( v9 == v39 )
        v17 = (__int64)v45;
      v31 = v17;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v31);
      v36 = 0LL;
      v18 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                         (__int64)v15,
                         v9);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v18 + 64LL))(
              v18,
              v31,
              v14,
              &v36);
      v20 = v19;
      if ( v19 == -2005073917 )
      {
        v15 = v41;
        v37 = 0LL;
        v44 = 0;
        v22 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)v41,
                          v9);
        if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v22, &v37) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 24LL))(v37, &v44) >= 0
          && (v44 & 1) != 0 )
        {
          v35 = 0LL;
          v23 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v15,
                             v9);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v23 + 56LL))(
                  v23,
                  0LL,
                  v31,
                  &v35);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x41D,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v24);
            v16 = v25;
LABEL_35:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
LABEL_36:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
            goto LABEL_38;
          }
          v33 = 0LL;
          v26 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v15,
                             v9);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
          v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v26 + 64LL))(
                  v26,
                  v35,
                  v35,
                  &v33);
          v28 = v27;
          if ( v27 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x421,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v27);
            v16 = v28;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
            goto LABEL_35;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v32, &v33);
          if ( v9 == v46 )
            Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v34, &v33);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
          v14 = v32;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
      }
      else
      {
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            if ( v19 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x42E,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)(unsigned int)v19);
            v16 = v20;
            goto LABEL_36;
          }
          if ( v9 != v46 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x406,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x887D0003LL);
            goto LABEL_36;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v34, &v36);
          v21 = &v34;
        }
        else
        {
          v21 = (__int64 *)&v38;
        }
        if ( v31 )
          v21 = &v31;
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v32, v21);
        v14 = v32;
        v15 = v41;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
      v9 += v40;
      if ( v9 == v10 )
      {
        v29 = v34;
        if ( !v34 )
          break;
        v34 = 0LL;
        *v47 = (struct IAudioMediaType *)v29;
        goto LABEL_39;
      }
    }
  }
  *v47 = a3;
  ((void (__fastcall *)(struct IAudioMediaType *))a3->lpVtbl->AddRef)(a3);
  v16 = 0;
LABEL_38:
  v12 = v16;
LABEL_39:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v42);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v32);
  return v12;
}
