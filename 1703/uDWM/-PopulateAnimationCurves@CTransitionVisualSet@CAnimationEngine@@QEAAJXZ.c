/*
 * XREFs of ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180012C90
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800122C4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180036C10 (-ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  unsigned int v1; // ebx
  __int64 i; // rsi
  CAnimatedTransitionVisual *v4; // rdi
  bool (__fastcall *v5)(CAnimatedTransitionVisual *__hidden); // rax
  bool ShouldUseDComp; // al
  _QWORD **v8; // rcx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r13
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h]

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v4 = **(CAnimatedTransitionVisual ***)(*((_QWORD *)this + 3) + 8 * i);
    v5 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v4 + 208LL);
    if ( v5 == CAnimatedTransitionVisual::ShouldUseDComp )
      ShouldUseDComp = CAnimatedTransitionVisual::ShouldUseDComp(v4);
    else
      ShouldUseDComp = v5(v4);
    if ( ShouldUseDComp )
    {
      v8 = *(_QWORD ***)(*((_QWORD *)this + 3) + 8 * i);
      v9 = *v8[1];
      v10 = *v8[5];
      v21 = *v8[4];
      v11 = *v8[6];
      v19 = 0LL;
      v20 = 0LL;
      if ( v9 )
      {
        v12 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _QWORD, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                0LL,
                &v19);
        v1 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x6A6u);
          return v1;
        }
        v13 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                1LL,
                &v20);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6A7u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v9 + 56LL))(v9, &v19, 2LL);
      }
      if ( v10 )
      {
        v14 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                2LL,
                &v19);
        v1 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x6AEu);
          return v1;
        }
        v15 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                3LL,
                &v20);
        v1 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x6AFu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, v19);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, v20);
      }
      if ( v21 )
      {
        v16 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                4LL,
                &v19);
        v1 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x6B9u);
          return v1;
        }
        v17 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                5LL,
                &v20);
        v1 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x6BAu);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, v19);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, v20);
      }
      if ( v11 )
      {
        v18 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, __int64, __int64 *))(*(_QWORD *)v4 + 216LL))(
                v4,
                6LL,
                &v19);
        v1 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x6C2u);
          return v1;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, v19);
      }
    }
  }
  return v1;
}
