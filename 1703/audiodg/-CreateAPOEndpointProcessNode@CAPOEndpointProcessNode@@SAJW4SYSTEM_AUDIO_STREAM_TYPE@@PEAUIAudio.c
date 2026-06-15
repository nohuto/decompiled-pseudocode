/*
 * XREFs of ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003FD64
 * Callers:
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003EF74 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1?_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140031460 (--0-$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1-_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z @ 0x14003FC70 (--0-$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(
        int a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        const struct tWAVEFORMATEX *a3,
        CAudioMediaType **a4)
{
  CAudioMediaType *v5; // rsi
  struct IUnknown *v6; // rbx
  int v7; // r12d
  int v8; // r13d
  char v9; // r15
  CAudioMediaType *v10; // r14
  CAudioMediaType *v11; // rdi
  char v12; // r15
  CAudioMediaType *v13; // rdx
  void (*v14)(void); // rax
  __int64 (__fastcall *v15)(CAudioMediaType *); // rax
  __int64 (__fastcall *v16)(CAudioMediaType *); // rax
  void (*v17)(void); // rax
  CAudioMediaType *v18; // rax
  CAudioMediaType *v19; // rdi
  int v20; // eax
  ULONG (__stdcall *Release)(IUnknown *); // rax
  __int64 (__fastcall *v22)(CAudioMediaType *); // rax
  void (*v23)(void); // rax
  CAudioMediaType *v25; // [rsp+38h] [rbp-48h] BYREF
  CAudioMediaType *v26; // [rsp+40h] [rbp-40h] BYREF
  struct IAudioMediaType *v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  CAudioMediaType *v29; // [rsp+58h] [rbp-28h] BYREF
  CAudioMediaType *v30; // [rsp+60h] [rbp-20h]
  struct IUnknown *v31[3]; // [rsp+68h] [rbp-18h] BYREF

  v31[1] = (struct IUnknown *)-2LL;
  v30 = 0LL;
  v29 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v31[0] = 0LL;
  ATL::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>(
    &v28,
    a2);
  if ( v28 )
  {
    v7 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v27, 0.0, 0);
    v5 = (CAudioMediaType *)v27;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, CAudioMediaType **))(*(_QWORD *)v28 + 40LL))(
             v28,
             v27,
             &v29);
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v25, (__int64)v29);
          v12 = 2;
          v10 = v25;
          v13 = v25;
          v11 = v25;
        }
        else
        {
          v11 = 0LL;
          v25 = 0LL;
          v12 = 4;
          v13 = 0LL;
          v10 = 0LL;
        }
        ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v26, (__int64)v13);
        v9 = v12 | 8;
      }
      else
      {
        ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v26, (__int64)v5);
        v9 = 1;
        v10 = v25;
        v11 = v25;
      }
      if ( v26 )
      {
        ATL::AtlComPtrAssign(v31, (struct IUnknown *)v26);
        v6 = v31[0];
      }
      if ( (v9 & 8) != 0 )
      {
        v9 &= ~8u;
        if ( v26 )
        {
          v14 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
          if ( (char *)v14 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v26);
          else
            v14();
        }
      }
      if ( (v9 & 4) != 0 )
      {
        v9 &= ~4u;
        if ( v11 )
        {
          v15 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
          if ( v15 == CAudioMediaType::Release )
            CAudioMediaType::Release(v11);
          else
            v15(v11);
        }
      }
      if ( (v9 & 2) != 0 )
      {
        v9 &= ~2u;
        if ( v10 )
        {
          v16 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v10 + 16LL);
          if ( v16 == CAudioMediaType::Release )
            CAudioMediaType::Release(v10);
          else
            v16(v10);
        }
      }
      if ( (v9 & 1) != 0 && v26 )
      {
        v17 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
        if ( (char *)v17 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v26);
        else
          v17();
      }
      if ( v8 >= 0 )
      {
        if ( !v6 )
        {
          v7 = -2005073917;
          goto LABEL_49;
        }
        v18 = (CAudioMediaType *)operator new(0x40uLL);
        v19 = v18;
        v26 = v18;
        if ( v18 )
        {
          *((_QWORD *)v18 + 1) = 0LL;
          *((_QWORD *)v18 + 2) = 0LL;
          v20 = a1;
          *((_DWORD *)v19 + 6) = a1 != 0;
          *((_QWORD *)v19 + 4) = 0LL;
          *((_DWORD *)v19 + 10) = 5;
          *(_QWORD *)v19 = &CAPOEndpointProcessNode::`vftable';
          *((_QWORD *)v19 + 6) = 0LL;
          *((_DWORD *)v19 + 14) = 0;
        }
        else
        {
          v19 = 0LL;
          v20 = a1;
        }
        v30 = v19;
        if ( !v19 )
        {
          v7 = -2147024882;
          goto LABEL_49;
        }
        *((_DWORD *)v19 + 15) = v20;
        if ( *((struct IUnknown **)v19 + 6) != v6 )
          ATL::AtlComPtrAssign((struct IUnknown **)v19 + 6, v6);
        if ( *((struct IUnknown **)v19 + 1) != v6 )
          ATL::AtlComPtrAssign((struct IUnknown **)v19 + 1, v6);
        if ( *((struct IUnknown **)v19 + 2) != v6 )
          ATL::AtlComPtrAssign((struct IUnknown **)v19 + 2, v6);
        v30 = 0LL;
        *a4 = v19;
      }
      else
      {
        v7 = v8;
      }
      if ( v7 >= 0 )
        goto LABEL_50;
    }
  }
  else
  {
    v7 = -2147467262;
  }
LABEL_49:
  AudDGTraceLoggingErrorHelper("CAPOEndpointProcessNode::CreateAPOEndpointProcessNode", 0x315u, v7);
LABEL_50:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v6 )
  {
    Release = v6->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v6);
    else
      ((void (__fastcall *)(struct IUnknown *))Release)(v6);
  }
  if ( v5 )
  {
    v22 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v5 + 16LL);
    if ( v22 == CAudioMediaType::Release )
      CAudioMediaType::Release(v5);
    else
      v22(v5);
  }
  if ( v29 )
  {
    v23 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
    if ( (char *)v23 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v29);
    else
      v23();
  }
  return (unsigned int)v7;
}
