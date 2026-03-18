/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x1C0038ADC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  struct tagWND *v2; // rcx
  struct tagWND *v3; // rcx
  _BYTE *v4; // r8
  struct tagWND *Host; // rax

  gbValidateHandleForIL = 0;
  v2 = (struct tagWND *)ValidateHwnd(a1);
  if ( v2 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(v2) )
    {
      Host = CoreWindowProp::GetHost(v3);
      if ( Host )
      {
        if ( *(_QWORD *)(*((_QWORD *)Host + 2) + 376LL) == *(_QWORD *)(gptiCurrent + 376LL) )
          gbValidateHandleForIL = 0;
      }
    }
  }
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    *v4 = 0;
  return ValidateHwnd(a1);
}
