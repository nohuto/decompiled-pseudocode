/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x18003E9F8
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x18003CD50 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18003F85C (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x1800C5424 (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  char v2; // al
  __int64 i; // rdi
  __int64 *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // rbp
  __int64 v9; // rcx

  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  v2 = *((_BYTE *)this + 508);
  if ( (v2 & 1) != 0 )
    *((_BYTE *)this + 508) = v2 & 0xFE;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 42) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 336, 8LL);
  if ( *((char *)this + 508) < 0 )
    CKeyframeAnimation::Reset(this, 0, 0LL);
  ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 288);
  if ( *((_QWORD *)this + 39) )
    ReleaseInterface<CCompositionSurfaceInfo>((char *)this + 312);
  else
    SAFE_DELETE_ARRAY<unsigned char>((char *)this + 320);
  v4 = (__int64 *)*((_QWORD *)this + 49);
  if ( v4 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 50);
    if ( v4 != v8 )
    {
      do
      {
        v9 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        ++v4;
      }
      while ( v4 != v8 );
      v4 = (__int64 *)*((_QWORD *)this + 49);
    }
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 51) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 336);
  v5 = (_QWORD *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    KeyframeSequence::RemoveAllKeyFrames(*((KeyframeSequence **)this + 41));
    v6 = v5[8];
    if ( v6 )
    {
      v5[8] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    operator delete(v5);
  }
  CBaseExpression::~CBaseExpression(this);
}
