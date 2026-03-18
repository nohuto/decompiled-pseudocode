/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A5118
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800A33E0 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A7440 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  char v2; // al
  __int64 i; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdi
  __int64 v11; // rcx

  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  v2 = *((_BYTE *)this + 456);
  if ( (v2 & 1) != 0 )
    *((_BYTE *)this + 456) = v2 & 0xFE;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 86); i = (unsigned int)(i + 1) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_DWORD *)this + 86) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 320, 8u);
  if ( (*((_BYTE *)this + 456) & 0x40) != 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 272, v4, v5, v6);
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 296, v7, v8, v9);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 40);
  v10 = (void *)*((_QWORD *)this + 39);
  if ( v10 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 39));
    WPF::ProcessHeapImpl::Free(v10);
  }
  CBaseExpression::~CBaseExpression(this);
}
