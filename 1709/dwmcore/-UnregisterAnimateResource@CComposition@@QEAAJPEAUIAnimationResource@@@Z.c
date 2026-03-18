/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AAD14
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A5C (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x18002CD50 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x18002CD60 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  unsigned __int64 v6; // r8
  unsigned __int64 i; // rbx
  __int64 v8; // rcx
  struct _GUID *(__fastcall *v9)(CAnimation *); // rax
  struct _GUID *AnimationScenario; // rax
  struct _GUID *v11; // rsi
  __int64 (__fastcall *v12)(CAnimation *); // rax
  unsigned int ChannelHandle; // eax

  v2 = *((_QWORD *)this + 77);
  v4 = *((_DWORD *)this + 160);
  v5 = 0;
  v6 = 0LL;
  for ( i = a2; (unsigned int)v6 < v4; v6 = (unsigned int)(v6 + 1) )
  {
    if ( a2 == *(_QWORD *)(v2 + 8 * v6) )
      break;
  }
  if ( (unsigned int)v6 >= v4 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xA10u);
  }
  else
  {
    if ( (unsigned int)v6 < v4 - 1 )
    {
      do
      {
        a2 = (unsigned int)(v6 + 1);
        v8 = (unsigned int)v6;
        v6 = a2;
        *(_QWORD *)(v2 + 8 * v8) = *(_QWORD *)(v2 + 8 * a2);
      }
      while ( (unsigned int)a2 < *((_DWORD *)this + 160) - 1 );
    }
    --*((_DWORD *)this + 160);
  }
  v9 = *(struct _GUID *(__fastcall **)(CAnimation *))(*(_QWORD *)i + 16LL);
  if ( v9 == CAnimation::GetAnimationScenario )
    AnimationScenario = CAnimation::GetAnimationScenario((CAnimation *)i);
  else
    AnimationScenario = (struct _GUID *)((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))v9)(
                                          i,
                                          a2,
                                          v6,
                                          v2);
  v11 = AnimationScenario;
  v12 = *(__int64 (__fastcall **)(CAnimation *))(*(_QWORD *)i + 32LL);
  if ( v12 == CAnimation::GetChannelHandle )
    ChannelHandle = CAnimation::GetChannelHandle((CAnimation *)i);
  else
    ChannelHandle = v12((CAnimation *)i);
  if ( v11 || ChannelHandle )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _GUID *))(**((_QWORD **)this + 66) + 56LL))(
      *((_QWORD *)this + 66),
      ChannelHandle,
      i | 0xDD00000000000000uLL,
      v11);
  return v5;
}
