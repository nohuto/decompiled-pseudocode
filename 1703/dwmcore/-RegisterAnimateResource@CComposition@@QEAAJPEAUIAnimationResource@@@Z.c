/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18005BE40
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBB38 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z @ 0x1800659D0 (-TelemetryRefAnimationScenario@CPartitionVerticalBlankScheduler@@UEAAJI_KPEBU_GUID@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x1800BC540 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x1800BC550 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v2; // edx
  __int64 v3; // r8
  unsigned int v5; // eax
  int v6; // edi
  CAnimation *v7; // rbx
  struct _GUID *(__fastcall *v8)(CAnimation *__hidden); // rax
  struct _GUID *AnimationScenario; // rax
  const struct _GUID *v10; // rsi
  unsigned int (__fastcall *v11)(CAnimation *__hidden); // rax
  unsigned int ChannelHandle; // eax
  __int64 v13; // rdx
  CPartitionVerticalBlankScheduler *v14; // rcx
  __int64 (__fastcall *v15)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *); // rax
  unsigned __int64 v16; // r8
  int v18; // eax
  unsigned int v19; // [rsp+50h] [rbp+8h]
  CAnimation *v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v2 = v19;
  v3 = *((unsigned int *)this + 168);
  v5 = v3 + 1;
  if ( (int)v3 + 1 >= (unsigned int)v3 )
    v2 = v3 + 1;
  v6 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v2 > *((_DWORD *)this + 167) )
  {
    v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 648, 8LL, 1LL, &v20);
    v6 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 81) + 8 * v3) = v20;
    *((_DWORD *)this + 168) = v2;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB56u);
  }
  else
  {
    v7 = v20;
    v8 = *(struct _GUID *(__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v20 + 16LL);
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
    v11 = *(unsigned int (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v7 + 32LL);
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
      v14 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 70);
      v15 = *(__int64 (__fastcall **)(CPartitionVerticalBlankScheduler *__hidden, unsigned int, unsigned __int64, const struct _GUID *))(*(_QWORD *)v14 + 48LL);
      v16 = (unsigned __int64)v7 | 0xDD00000000000000uLL;
      if ( v15 == CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario )
        CPartitionVerticalBlankScheduler::TelemetryRefAnimationScenario(v14, v13, v16, v10);
      else
        v15(v14, v13, v16, v10);
    }
  }
  return (unsigned int)v6;
}
