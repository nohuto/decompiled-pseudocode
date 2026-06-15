/*
 * XREFs of ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800C0DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180032B08 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18007D334 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009FE14 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C08E4 (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CCompositeSystemEffect::IsOutputFormatSupported(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  int v4; // eax
  struct IAudioMediaType *v5; // r15
  unsigned int v7; // r14d
  int v8; // esi
  int v9; // r13d
  int v10; // r12d
  struct IAudioMediaType *v11; // rbx
  char *v12; // rdi
  int v13; // r15d
  struct IAudioMediaType *v14; // r13
  __int64 v15; // rdi
  int v16; // eax
  int v17; // edi
  __int64 *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ebx
  struct IAudioMediaType *v26; // rax
  struct IAudioMediaType *v28; // [rsp+38h] [rbp-49h] BYREF
  __int64 v29; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMediaType *v30; // [rsp+48h] [rbp-39h] BYREF
  int v31; // [rsp+50h] [rbp-31h] BYREF
  int v32; // [rsp+54h] [rbp-2Dh]
  int v33; // [rsp+58h] [rbp-29h]
  __int64 v34; // [rsp+60h] [rbp-21h] BYREF
  __int64 v35; // [rsp+68h] [rbp-19h] BYREF
  struct IAudioMediaType *v36; // [rsp+70h] [rbp-11h] BYREF
  __int64 v37; // [rsp+78h] [rbp-9h] BYREF
  struct IAudioMediaType *v38; // [rsp+80h] [rbp-1h] BYREF
  char *v39; // [rsp+88h] [rbp+7h]
  __int64 v40[9]; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v42; // [rsp+E8h] [rbp+67h]

  v4 = *((_DWORD *)this + 10);
  v5 = a3;
  v7 = 1;
  if ( v4 )
    v8 = *((_DWORD *)this + 18) - 1;
  else
    v8 = 0;
  if ( v4 )
    v9 = -1;
  else
    v9 = *((_DWORD *)this + 18);
  v33 = v9;
  v10 = v4 != 0 ? -1 : 1;
  if ( *((_DWORD *)this + 9) )
    v42 = *((_DWORD *)this + 18) - 1;
  else
    v42 = 0;
  v11 = a3;
  v32 = v9 - v10;
  v28 = a3;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v28);
  v40[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(v40);
  v30 = 0LL;
  if ( v8 != v9 )
  {
    v12 = (char *)this + 64;
    v13 = -2005073917;
    v39 = v12;
    while ( 1 )
    {
      v38 = v11;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v38);
      v14 = v11;
      if ( v8 == v42 )
        v14 = a2;
      v36 = v14;
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v36);
      v35 = 0LL;
      v15 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                         (__int64)v12,
                         v8);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
      v16 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v15 + 64LL))(
              v15,
              v14,
              v11,
              &v35);
      v17 = v16;
      if ( v16 == -2005073917 )
      {
        v12 = v39;
        v37 = 0LL;
        v31 = 0;
        v19 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                          (__int64)v39,
                          v8);
        if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v19, &v37) >= 0
          && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 24LL))(v37, &v31) >= 0
          && (v31 & 1) != 0 )
        {
          v34 = 0LL;
          v20 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v12,
                             v8);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v20 + 56LL))(
                  v20,
                  0LL,
                  v14,
                  &v34);
          v22 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x3FE,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v21);
            v13 = v22;
LABEL_41:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
LABEL_42:
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v36);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
            goto LABEL_45;
          }
          v29 = 0LL;
          v23 = *(_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                             (__int64)v12,
                             v8);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
          v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v23 + 64LL))(
                  v23,
                  v34,
                  v34,
                  &v29);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x402,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)(unsigned int)v24);
            v13 = v25;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
            goto LABEL_41;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v28, &v29);
          if ( v8 == v32 )
            Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v30, &v29);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
          v11 = v28;
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
      }
      else
      {
        if ( v16 )
        {
          if ( v16 != 1 )
          {
            if ( v16 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x40F,
                (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)(unsigned int)v16);
            v13 = v17;
            goto LABEL_42;
          }
          if ( v8 != v32 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3E7,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x887D0003LL);
            goto LABEL_42;
          }
          Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v30, &v35);
          v18 = (__int64 *)&v30;
        }
        else
        {
          v18 = (__int64 *)&v38;
        }
        if ( v14 )
          v18 = (__int64 *)&v36;
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=((__int64 *)&v28, v18);
        v11 = v28;
        v12 = v39;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v36);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
      v8 += v10;
      if ( v8 == v33 )
      {
        v26 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          *a4 = v26;
          goto LABEL_46;
        }
        v5 = a3;
        break;
      }
    }
  }
  *a4 = v5;
  ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->AddRef)(v5);
  v13 = 0;
LABEL_45:
  v7 = v13;
LABEL_46:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v40);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v28);
  return v7;
}
