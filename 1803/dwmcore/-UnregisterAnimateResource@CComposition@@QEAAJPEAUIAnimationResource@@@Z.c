/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18002D7E8
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C1FC8 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x18003F990 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x18003F9A0 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  unsigned int v5; // r14d
  __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  struct _GUID *(__fastcall *v11)(CAnimation *__hidden); // rax
  struct _GUID *AnimationScenario; // rax
  struct _GUID *v13; // rsi
  unsigned int (__fastcall *v14)(CAnimation *__hidden); // rax
  unsigned int ChannelHandle; // eax

  v2 = *((_QWORD *)this + 80);
  v4 = *((unsigned int *)this + 166);
  v5 = 0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct IAnimationResource **)(v2 + 8 * i) )
      break;
  }
  if ( (unsigned int)i >= (unsigned int)v4 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xA02u);
  }
  else
  {
    while ( (unsigned int)i < (int)v4 - 1 )
    {
      v8 = (unsigned int)i;
      v9 = *(_QWORD *)(v2 + 8LL * (unsigned int)(i + 1));
      i = (unsigned int)(i + 1);
      *(_QWORD *)(v2 + 8 * v8) = v9;
      v4 = *((unsigned int *)this + 166);
    }
    *((_DWORD *)this + 166) = v4 - 1;
  }
  v10 = *(_QWORD *)a2;
  v11 = *(struct _GUID *(__fastcall **)(CAnimation *__hidden))(*(_QWORD *)a2 + 16LL);
  if ( v11 == CAnimation::GetAnimationScenario )
  {
    AnimationScenario = CAnimation::GetAnimationScenario(a2);
  }
  else
  {
    AnimationScenario = (struct _GUID *)((__int64 (__fastcall *)(struct IAnimationResource *, __int64, __int64, __int64))v11)(
                                          a2,
                                          v4,
                                          i,
                                          v2);
    v10 = *(_QWORD *)a2;
  }
  v13 = AnimationScenario;
  v14 = *(unsigned int (__fastcall **)(CAnimation *__hidden))(v10 + 32);
  if ( v14 == CAnimation::GetChannelHandle )
    ChannelHandle = CAnimation::GetChannelHandle(a2);
  else
    ChannelHandle = v14(a2);
  if ( v13 || ChannelHandle )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _GUID *))(**((_QWORD **)this + 69) + 56LL))(
      *((_QWORD *)this + 69),
      ChannelHandle,
      (unsigned __int64)a2 | 0xDD00000000000000uLL,
      v13);
  return v5;
}
