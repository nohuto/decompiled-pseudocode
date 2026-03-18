/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18005BD2C
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBAFC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x1800BC540 (-GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ.c)
 *     ?GetChannelHandle@CAnimation@@UEAAIXZ @ 0x1800BC550 (-GetChannelHandle@CAnimation@@UEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  unsigned __int64 v6; // r8
  unsigned __int64 i; // rbx
  __int64 v8; // rcx
  struct _GUID *(__fastcall *v9)(CAnimation *__hidden); // rax
  struct _GUID *AnimationScenario; // rax
  struct _GUID *v11; // rsi
  unsigned int (__fastcall *v12)(CAnimation *__hidden); // rax
  unsigned int ChannelHandle; // eax

  v2 = *((_QWORD *)this + 81);
  v4 = *((_DWORD *)this + 168);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB7Du);
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
      while ( (unsigned int)a2 < *((_DWORD *)this + 168) - 1 );
    }
    --*((_DWORD *)this + 168);
  }
  v9 = *(struct _GUID *(__fastcall **)(CAnimation *__hidden))(*(_QWORD *)i + 16LL);
  if ( v9 == CAnimation::GetAnimationScenario )
    AnimationScenario = CAnimation::GetAnimationScenario((CAnimation *)i);
  else
    AnimationScenario = (struct _GUID *)((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64, __int64))v9)(
                                          i,
                                          a2,
                                          v6,
                                          v2);
  v11 = AnimationScenario;
  v12 = *(unsigned int (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)i + 32LL);
  if ( v12 == CAnimation::GetChannelHandle )
    ChannelHandle = CAnimation::GetChannelHandle((CAnimation *)i);
  else
    ChannelHandle = v12((CAnimation *)i);
  if ( v11 || ChannelHandle )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _GUID *))(**((_QWORD **)this + 70) + 56LL))(
      *((_QWORD *)this + 70),
      ChannelHandle,
      i | 0xDD00000000000000uLL,
      v11);
  return v5;
}
