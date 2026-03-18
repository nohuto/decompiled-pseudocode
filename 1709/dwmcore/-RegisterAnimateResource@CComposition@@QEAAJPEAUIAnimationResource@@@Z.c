/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AAE28
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A98 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x180011320 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x18002CD50 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x18002CD60 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v2; // edx
  __int64 v3; // r8
  unsigned int v5; // eax
  signed int v6; // edi
  CAnimation *v7; // rbx
  struct _GUID *(__fastcall *v8)(CAnimation *); // rax
  struct _GUID *AnimationScenario; // rax
  const struct _GUID *v10; // rsi
  __int64 (__fastcall *v11)(CAnimation *); // rax
  unsigned int ChannelHandle; // eax
  __int64 v13; // rdx
  CPartitionVerticalBlankScheduler *v14; // rcx
  __int64 (__fastcall *v15)(CPartitionVerticalBlankScheduler *, unsigned int, __int64, const struct _GUID *); // rax
  unsigned __int64 v16; // r8
  signed int v18; // eax
  unsigned int v19; // [rsp+50h] [rbp+8h]
  CAnimation *v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v2 = v19;
  v3 = *((unsigned int *)this + 160);
  v5 = v3 + 1;
  if ( (int)v3 + 1 >= (unsigned int)v3 )
    v2 = v3 + 1;
  v6 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( v2 > *((_DWORD *)this + 159) )
  {
    v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 616, 8u, 1, &v20);
    v6 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 77) + 8 * v3) = v20;
    *((_DWORD *)this + 160) = v2;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x9E9u);
  }
  else
  {
    v7 = v20;
    v8 = *(struct _GUID *(__fastcall **)(CAnimation *))(*(_QWORD *)v20 + 16LL);
    if ( v8 == CAnimation::GetAnimationScenario )
    {
      AnimationScenario = CAnimation::GetAnimationScenario(v20);
    }
    else
    {
      AnimationScenario = v8(v20);
      v7 = v20;
    }
    v10 = AnimationScenario;
    v11 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)v7 + 32LL);
    if ( v11 == CAnimation::GetChannelHandle )
    {
      ChannelHandle = CAnimation::GetChannelHandle(v7);
    }
    else
    {
      ChannelHandle = v11(v7);
      v7 = v20;
    }
    v13 = ChannelHandle;
    if ( v10 || ChannelHandle )
    {
      v14 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 66);
      v15 = *(__int64 (__fastcall **)(CPartitionVerticalBlankScheduler *, unsigned int, __int64, const struct _GUID *))(*(_QWORD *)v14 + 48LL);
      v16 = (unsigned __int64)v7 | 0xDD00000000000000uLL;
      if ( v15 == CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario )
        CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(v14, v13, v16, v10);
      else
        v15(v14, v13, v16, v10);
    }
  }
  return (unsigned int)v6;
}
