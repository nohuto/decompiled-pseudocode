/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18002D8F8
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C2004 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x18003F990 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x18003F9A0 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x18005A550 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  CAnimation *v6; // rdi
  struct _GUID *(__fastcall *v7)(CAnimation *__hidden); // rax
  struct _GUID *AnimationScenario; // rax
  const struct _GUID *v9; // rsi
  unsigned int (__fastcall *v10)(CAnimation *__hidden); // rax
  unsigned int ChannelHandle; // eax
  __int64 v12; // rdx
  CPartitionVerticalBlankScheduler *v13; // rcx
  int (*v14)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *); // rax
  unsigned __int64 v15; // r8
  int v17; // eax
  CAnimation *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v3 = *((_DWORD *)this + 166);
  v4 = v3 + 1;
  v5 = v3 + 1 < v3 ? 0x80070216 : 0;
  if ( v3 + 1 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *((_DWORD *)this + 165) )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 640, 8LL, 1LL, &v18);
    v5 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 80) + 8LL * v3) = v18;
    *((_DWORD *)this + 166) = v4;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x9DBu);
  }
  else
  {
    v6 = v18;
    v7 = *(struct _GUID *(__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v18 + 16LL);
    if ( v7 == CAnimation::GetAnimationScenario )
    {
      AnimationScenario = CAnimation::GetAnimationScenario(v18);
    }
    else
    {
      AnimationScenario = v7(v18);
      v6 = v18;
    }
    v9 = AnimationScenario;
    v10 = *(unsigned int (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v6 + 32LL);
    if ( v10 == CAnimation::GetChannelHandle )
    {
      ChannelHandle = CAnimation::GetChannelHandle(v6);
    }
    else
    {
      ChannelHandle = v10(v6);
      v6 = v18;
    }
    v12 = ChannelHandle;
    if ( v9 || ChannelHandle )
    {
      v13 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 69);
      v14 = *(int (**)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *))(*(_QWORD *)v13 + 48LL);
      v15 = (unsigned __int64)v6 | 0xDD00000000000000uLL;
      if ( v14 == CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario )
        CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(v13, v12, v15, v9);
      else
        ((void (__fastcall *)(CPartitionVerticalBlankScheduler *, __int64, unsigned __int64, const struct _GUID *))v14)(
          v13,
          v12,
          v15,
          v9);
    }
  }
  return (unsigned int)v5;
}
