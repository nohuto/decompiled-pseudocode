/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x1C005EAC4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  struct tagWND *v2; // rax
  struct tagWND *v3; // rbx
  _BYTE *v4; // r8
  struct tagWND *Host; // rax

  gbValidateHandleForIL = 0;
  v2 = (struct tagWND *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(v2) )
    {
      Host = CoreWindowProp::GetHost(v3);
      if ( Host )
      {
        if ( *(_QWORD *)(*((_QWORD *)Host + 2) + 400LL) == *(_QWORD *)(gptiCurrent + 400LL) )
          gbValidateHandleForIL = 0;
      }
    }
  }
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    *v4 = 0;
  return ValidateHwnd(a1);
}
