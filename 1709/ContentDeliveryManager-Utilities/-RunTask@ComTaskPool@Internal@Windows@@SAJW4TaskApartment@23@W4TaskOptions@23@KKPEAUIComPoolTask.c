/*
 * XREFs of ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004378
 * Callers:
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x1800066F4 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?RevertOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001F9C0 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x180040120 (_lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator().c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180048F1C (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18005E280 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInterna.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180070C60 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedH.c)
 * Callees:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x1800046A4 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 *     ?s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004A10 (-s_QueueDelayedTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUI.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x180005750 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x1800060EC (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunTask(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct Windows::Internal::IComPoolTask *a5,
        _QWORD *a6)
{
  int v7; // esi
  struct Windows::Internal::IComPoolTask *v8; // r14
  HRESULT ApartmentType; // edi
  unsigned int v10; // r15d
  APTTYPE v11; // ecx
  int TaskPoolTlsSlot; // eax
  int *Value; // rax
  int v14; // edx
  struct Windows::Internal::IComPoolTask *v15; // rbx
  HRESULT v16; // eax
  APTTYPE pAptType; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-1Ch]
  unsigned int v20; // [rsp+38h] [rbp-18h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+3Ch] [rbp-14h] BYREF
  struct Windows::Internal::IComPoolTask *v22[2]; // [rsp+40h] [rbp-10h] BYREF

  v22[1] = (struct Windows::Internal::IComPoolTask *)-2LL;
  v20 = a4;
  v19 = a3;
  v7 = a1;
  v8 = a5;
  if ( a6 )
    *a6 = 0LL;
  ApartmentType = a5 == 0LL ? 0x8007000E : 0;
  if ( a5 )
  {
    if ( a1 == 5 )
    {
      v7 = 1;
      v10 = 1;
    }
    else
    {
      if ( a1 == 6 )
      {
        if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && pAptType && pAptType != APTTYPE_MAINSTA )
          goto LABEL_42;
        v7 = 0;
      }
      v10 = v7;
      if ( v7 == 4 )
      {
LABEL_42:
        (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)a5 + 24LL))(a5);
        return (unsigned int)ApartmentType;
      }
    }
    if ( (a2 & 0x80u) == 0
      || ((v11 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool,
           `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1)
        ? (TaskPoolTlsSlot = 0)
        : (TaskPoolTlsSlot = Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot((unsigned int *)&pAptType),
           v11 = pAptType),
          TaskPoolTlsSlot < 0 || (Value = (int *)TlsGetValue(v11)) == 0LL ? (v14 = 0x7FFFFFFF) : (v14 = *Value),
          v14 == 0x7FFFFFFF
       || ((v14 - 1) & 0x800000) == 0
       || v7 != (v14 - 1) >> 24 && v7 != 3
       || (((unsigned __int8)(v14 - 1) ^ (unsigned __int8)a2) & 9) != 0) )
    {
      v15 = 0LL;
      v22[0] = 0LL;
      if ( v7 == 3 )
      {
        v10 = 0;
        goto LABEL_35;
      }
      if ( v7 == 2 )
      {
        ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
        if ( ApartmentType < 0 )
          goto LABEL_40;
        v10 = 0;
        if ( pAptType == APTTYPE_STA )
        {
LABEL_34:
          ApartmentType = Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(a5, v22);
          v15 = v22[0];
          v8 = v22[0];
          goto LABEL_35;
        }
        if ( pAptType <= APTTYPE_STA )
        {
LABEL_33:
          ApartmentType = -2147418113;
LABEL_40:
          if ( v15 )
            (*(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v15 + 16LL))(v15);
          return (unsigned int)ApartmentType;
        }
        if ( pAptType > APTTYPE_NA )
        {
          if ( pAptType != APTTYPE_MAINSTA )
            goto LABEL_33;
          goto LABEL_34;
        }
      }
LABEL_35:
      if ( ApartmentType >= 0 )
      {
        if ( v20 )
          v16 = Windows::Internal::ComTaskPool::s_QueueDelayedTask(v10, a2, v19, v20, v8, a6);
        else
          v16 = Windows::Internal::ComTaskPool::s_QueuePoolTask(v10, a2, v19, v8);
        ApartmentType = v16;
      }
      goto LABEL_40;
    }
    goto LABEL_42;
  }
  return (unsigned int)ApartmentType;
}
