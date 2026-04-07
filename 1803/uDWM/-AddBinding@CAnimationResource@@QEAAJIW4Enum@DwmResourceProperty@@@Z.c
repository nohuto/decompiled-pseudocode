/*
 * XREFs of ?AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z @ 0x1800A6E44
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x18009490C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800A75FC (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 *     McTemplateU0qqqp @ 0x1800A773C (McTemplateU0qqqp.c)
 */

__int64 __fastcall CAnimationResource::AddBinding(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edx

  v6 = CAnimationResource::_EnsureResources((CAnimationResource *)a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL) + 848LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL),
           a2,
           a3);
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qqqp(
          *(_QWORD *)(a1 + 16),
          v9,
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
          a2,
          a3,
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
      *(_DWORD *)(a1 + 84) = a2;
      *(_DWORD *)(a1 + 88) = a3;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1C1u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1BCu);
  }
  return v7;
}
