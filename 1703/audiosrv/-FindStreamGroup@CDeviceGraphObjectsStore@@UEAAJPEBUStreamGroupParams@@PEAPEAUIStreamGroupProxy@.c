/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007920 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800086F0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008A20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspe.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008B40 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@.c)
 *     ?GetAttributes@CBaseStreamGroupProxy@@UEAAPEBVCStreamGroupAttributes@@XZ @ 0x18000A920 (-GetAttributes@CBaseStreamGroupProxy@@UEAAPEBVCStreamGroupAttributes@@XZ.c)
 *     ?IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000A930 (-IsOffload@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000A940 (-IsKeywordDetectorStreamGroup@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?GetType@CBaseStreamGroupProxy@@UEAA?AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ @ 0x18000A970 (-GetType@CBaseStreamGroupProxy@@UEAA-AW4SYSTEM_AUDIO_STREAM_TYPE@@XZ.c)
 *     ?GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x18000A990 (-GetOutputFormat@CBaseStreamGroupProxy@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA?B_JXZ @ 0x18000A9A0 (-GetInterruptPeriodicity@CBaseStreamGroupProxy@@UEAA-B_JXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180057F9A (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  unsigned int v3; // r14d
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rdi
  __int64 (__fastcall *v9)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v10; // eax
  struct IInspectable *v11; // rcx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rax
  int v13; // eax
  CBaseStreamGroupProxy *v14; // rbx
  __int64 (__fastcall *v15)(CBaseStreamGroupProxy *); // rax
  __int64 InterruptPeriodicity; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  CBaseStreamGroupProxy *v19; // rbx
  __int64 (__fastcall *v20)(__int64); // rax
  int Type; // eax
  const struct tWAVEFORMATEX *(__fastcall *v22)(CBaseStreamGroupProxy *); // rax
  const struct tWAVEFORMATEX *OutputFormat; // rax
  const struct tWAVEFORMATEX *(__fastcall *v24)(CBaseStreamGroupProxy *); // rax
  const struct tWAVEFORMATEX *v25; // rax
  bool (__fastcall *v26)(CBaseStreamGroupProxy *); // rax
  char IsKeywordDetectorStreamGroup; // al
  CBaseStreamGroupProxy *v28; // rbx
  bool (__fastcall *v29)(CBaseStreamGroupProxy *); // rax
  char IsOffload; // al
  const struct CStreamGroupAttributes *(__fastcall *v31)(CBaseStreamGroupProxy *); // rax
  unsigned __int8 (***Attributes)(void); // rax
  struct IInspectable *v33; // rcx
  ULONG (__stdcall *Release)(IInspectable *); // rax
  __int64 (__fastcall *v35)(volatile signed __int32 *); // rax
  __int64 (__fastcall *v37)(volatile signed __int32 *); // rax
  CBaseStreamGroupProxy *v38; // [rsp+20h] [rbp-58h] BYREF
  struct IInspectable *v39; // [rsp+28h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  char v41[16]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 16, &lpCriticalSection);
  for ( i = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 7);
        i != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 8);
        ++i )
  {
    v8 = *i;
    if ( *i )
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v8 + 8LL))(*i);
    v39 = 0LL;
    if ( v8 )
    {
      v9 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v8 + 24LL);
      if ( v9 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
        v10 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v39);
      else
        v10 = v9(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v39);
      v11 = v39;
      if ( v10 < 0 )
      {
        if ( v39 )
        {
          v39 = 0LL;
          ((void (__fastcall *)(struct IInspectable *))v11->lpVtbl->Release)(v11);
        }
LABEL_49:
        v37 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
        if ( v37 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        {
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v8);
          continue;
        }
LABEL_55:
        v37((volatile signed __int32 *)v8);
        continue;
      }
      if ( !v39 )
        goto LABEL_49;
      v38 = 0LL;
      QueryInterface = v39->lpVtbl->QueryInterface;
      if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
        v13 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                (__int64)v39,
                (__int64)&GUID_69a39be5_2f3e_4d86_bac4_a145a90210a4,
                &v38);
      else
        v13 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, CBaseStreamGroupProxy **))QueryInterface)(
                v39,
                &GUID_69a39be5_2f3e_4d86_bac4_a145a90210a4,
                &v38);
      if ( v13 < 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
        v37 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
        goto LABEL_55;
      }
      v14 = v38;
      v15 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v38 + 96LL);
      if ( v15 == CBaseStreamGroupProxy::GetInterruptPeriodicity )
      {
        InterruptPeriodicity = CBaseStreamGroupProxy::GetInterruptPeriodicity(v38);
      }
      else
      {
        InterruptPeriodicity = v15(v38);
        v14 = v38;
      }
      if ( *((_QWORD *)a2 + 3) == InterruptPeriodicity )
      {
        v17 = (_QWORD *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, char *))(*(_QWORD *)v14 + 104LL))(v14, v41);
        v18 = *((_QWORD *)a2 + 4) - *v17;
        if ( !v18 )
          v18 = *((_QWORD *)a2 + 5) - v17[1];
        if ( !v18 )
        {
          v19 = v38;
          v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 152LL);
          if ( v20 == CBaseStreamGroupProxy::GetType )
          {
            Type = CBaseStreamGroupProxy::GetType((__int64)v38);
          }
          else
          {
            Type = v20((__int64)v38);
            v19 = v38;
          }
          if ( *((_DWORD *)a2 + 2) == Type )
          {
            v22 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v19 + 112LL);
            if ( v22 == CBaseStreamGroupProxy::GetOutputFormat )
            {
              OutputFormat = CBaseStreamGroupProxy::GetOutputFormat(v19);
            }
            else
            {
              OutputFormat = v22(v19);
              v19 = v38;
            }
            if ( *(_WORD *)(*((_QWORD *)a2 + 2) + 16LL) == OutputFormat->cbSize )
            {
              v24 = *(const struct tWAVEFORMATEX *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v19 + 112LL);
              if ( v24 == CBaseStreamGroupProxy::GetOutputFormat )
              {
                v25 = CBaseStreamGroupProxy::GetOutputFormat(v19);
              }
              else
              {
                v25 = v24(v19);
                v19 = v38;
              }
              if ( !memcmp_0(*((const void **)a2 + 2), v25, *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18LL) )
              {
                v26 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v19 + 128LL);
                if ( v26 == CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup )
                {
                  IsKeywordDetectorStreamGroup = CBaseStreamGroupProxy::IsKeywordDetectorStreamGroup(v19);
                }
                else
                {
                  IsKeywordDetectorStreamGroup = v26(v19);
                  v19 = v38;
                }
                if ( *((_BYTE *)a2 + 49) == IsKeywordDetectorStreamGroup
                  && *((_BYTE *)a2 + 48) == (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v19 + 144LL))(v19) )
                {
                  v28 = v38;
                  v29 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v38 + 256LL);
                  if ( v29 == CBaseStreamGroupProxy::IsOffload )
                  {
                    IsOffload = CBaseStreamGroupProxy::IsOffload(v38);
                  }
                  else
                  {
                    IsOffload = v29(v38);
                    v28 = v38;
                  }
                  if ( *((_BYTE *)a2 + 50) == IsOffload )
                  {
                    v31 = *(const struct CStreamGroupAttributes *(__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v28 + 280LL);
                    if ( v31 == CBaseStreamGroupProxy::GetAttributes )
                    {
                      Attributes = (unsigned __int8 (***)(void))CBaseStreamGroupProxy::GetAttributes(v28);
                    }
                    else
                    {
                      Attributes = (unsigned __int8 (***)(void))v31(v28);
                      v28 = v38;
                    }
                    if ( *((_QWORD *)a2 + 7) )
                    {
                      if ( Attributes && (**Attributes)() )
                      {
                        v28 = v38;
LABEL_39:
                        v33 = v39;
                        v38 = 0LL;
                        *a3 = v28;
                        if ( v33 )
                        {
                          v39 = 0LL;
                          Release = v33->lpVtbl->Release;
                          if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
                            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((__int64)v33);
                          else
                            ((void (__fastcall *)(struct IInspectable *, __int64 (__fastcall *)(__int64)))Release)(
                              v33,
                              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release);
                        }
                        v35 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL);
                        if ( v35 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v8);
                        else
                          v35((volatile signed __int32 *)v8);
                        break;
                      }
                    }
                    else if ( !Attributes )
                    {
                      goto LABEL_39;
                    }
                  }
                }
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v38);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( !*a3 )
    v3 = -2147023728;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
