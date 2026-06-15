/*
 * XREFs of ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003E694
 * Callers:
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003DA40 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140001E70 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1?_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14002FE80 (--0-$CComQIPtr@UIAPOAuxiliaryInputConfiguration@@$1-_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@.c)
 *     ??0?$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z @ 0x14003E5C0 (--0-$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(
        int a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        const struct tWAVEFORMATEX *a3,
        CAudioMediaType **a4)
{
  CAudioMediaType *v6; // rdi
  CAudioMediaType *v7; // rbx
  int v8; // r15d
  int v9; // r12d
  char v10; // r14
  CAudioMediaType *v11; // rsi
  CAudioMediaType *v12; // rbx
  char v13; // r14
  CAudioMediaType *v14; // rdx
  void (*v15)(void); // rax
  __int64 (__fastcall *v16)(CAudioMediaType *); // rax
  __int64 (__fastcall *v17)(CAudioMediaType *); // rax
  void (*v18)(void); // rax
  CAudioMediaType *v19; // rax
  CAudioMediaType *v20; // rsi
  __int64 (__fastcall *v21)(CAudioMediaType *); // rax
  __int64 (__fastcall *v22)(CAudioMediaType *); // rax
  void (*v23)(void); // rax
  CAudioMediaType *v25; // [rsp+38h] [rbp-48h] BYREF
  CAudioMediaType *v26; // [rsp+40h] [rbp-40h] BYREF
  CAudioMediaType *v27; // [rsp+48h] [rbp-38h] BYREF
  struct IAudioMediaType *v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h] BYREF
  CAudioMediaType *v30; // [rsp+60h] [rbp-20h] BYREF
  CAudioMediaType *v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]

  v32 = -2LL;
  v31 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  ATL::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>::CComQIPtr<IAPOAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>(
    &v29,
    a2);
  if ( v29 )
  {
    v8 = CAudioMediaType::Create(a3, (unsigned int)a3->cbSize + 18, &v28, 0.0, 0);
    v6 = (CAudioMediaType *)v28;
    if ( v8 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, CAudioMediaType **))(*(_QWORD *)v29 + 40LL))(
             v29,
             v28,
             &v30);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v25, (__int64)v30);
          v13 = 2;
          v11 = v25;
          v14 = v25;
          v12 = v25;
        }
        else
        {
          v12 = 0LL;
          v25 = 0LL;
          v13 = 4;
          v14 = 0LL;
          v11 = 0LL;
        }
        ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v26, (__int64)v14);
        v10 = v13 | 8;
      }
      else
      {
        ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v26, (__int64)v6);
        v10 = 1;
        v11 = v25;
        v12 = v25;
      }
      ATL::CComPtr<IAudioMediaType>::operator=(&v27, &v26);
      if ( (v10 & 8) != 0 )
      {
        v10 &= ~8u;
        if ( v26 )
        {
          v15 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
          if ( (char *)v15 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v26);
          else
            v15();
        }
      }
      if ( (v10 & 4) != 0 )
      {
        v10 &= ~4u;
        if ( v12 )
        {
          v16 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
          if ( v16 == CAudioMediaType::Release )
            CAudioMediaType::Release(v12);
          else
            v16(v12);
        }
      }
      if ( (v10 & 2) != 0 )
      {
        v10 &= ~2u;
        if ( v11 )
        {
          v17 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
          if ( v17 == CAudioMediaType::Release )
            CAudioMediaType::Release(v11);
          else
            v17(v11);
        }
      }
      if ( (v10 & 1) != 0 && v26 )
      {
        v18 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
        if ( (char *)v18 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v26);
        else
          v18();
      }
      v7 = v27;
      if ( v9 >= 0 )
      {
        if ( !v27 )
        {
          v8 = -2005073917;
          goto LABEL_41;
        }
        v19 = (CAudioMediaType *)operator new(0x40uLL);
        v20 = v19;
        v26 = v19;
        if ( v19 )
        {
          *((_QWORD *)v19 + 1) = 0LL;
          *((_QWORD *)v19 + 2) = 0LL;
          *((_DWORD *)v19 + 6) = a1 != 0;
          *((_QWORD *)v19 + 4) = 0LL;
          *((_DWORD *)v19 + 10) = 5;
          *(_QWORD *)v19 = &CAPOEndpointProcessNode::`vftable';
          *((_QWORD *)v19 + 6) = 0LL;
          *((_DWORD *)v19 + 14) = 0;
        }
        else
        {
          v20 = 0LL;
        }
        v31 = v20;
        if ( !v20 )
        {
          v8 = -2147024882;
          goto LABEL_41;
        }
        *((_DWORD *)v20 + 15) = a1;
        ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)v20 + 6, &v27);
        ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)v20 + 1, &v27);
        ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)v20 + 2, &v27);
        v31 = 0LL;
        *a4 = v20;
      }
      else
      {
        v8 = v9;
      }
      if ( v8 >= 0 )
        goto LABEL_42;
    }
  }
  else
  {
    v8 = -2147467262;
  }
LABEL_41:
  AudDGTraceLoggingErrorHelper("CAPOEndpointProcessNode::CreateAPOEndpointProcessNode", 0x306u, v8);
LABEL_42:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v7 )
  {
    v21 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v7 + 16LL);
    if ( v21 == CAudioMediaType::Release )
      CAudioMediaType::Release(v7);
    else
      v21(v7);
  }
  if ( v6 )
  {
    v22 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v22 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v22(v6);
  }
  if ( v30 )
  {
    v23 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
    if ( (char *)v23 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v30);
    else
      v23();
  }
  return (unsigned int)v8;
}
