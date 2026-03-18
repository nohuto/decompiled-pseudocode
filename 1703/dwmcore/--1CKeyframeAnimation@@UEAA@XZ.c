/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x180030FE8
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180031090 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x18002A46C (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  char v2; // al
  __int64 i; // rdi
  struct Components::Animations::Animation *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CKeyframeAnimation::`vftable'{for `CBaseExpression'};
  *((_QWORD *)this + 28) = &CKeyframeAnimation::`vftable'{for `IKeyframeAnimationOwner'};
  v2 = *((_BYTE *)this + 392);
  if ( (v2 & 1) != 0 )
    *((_BYTE *)this + 392) = v2 & 0xFE;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 34) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 8LL);
  v4 = (struct Components::Animations::Animation *)*((_QWORD *)this + 40);
  if ( v4 )
    AnDestroyAnimation(v4);
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 232);
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 256);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 272);
  CBaseExpression::~CBaseExpression(this);
}
