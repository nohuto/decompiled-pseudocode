/*
 * XREFs of ?TransitionToDisabled@ControllerProcessor@@AEAAJXZ @ 0x18003EE90
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     McTemplateU0qq @ 0x180012EF8 (McTemplateU0qq.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToDisabled(ControllerProcessor *this)
{
  bool v2; // zf

  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 85) = 0;
  *((_DWORD *)this + 86) = 0;
  v2 = *((_BYTE *)this + 4112) == 0;
  *((_BYTE *)this + 376) = 0;
  if ( !v2 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 8) != 0 )
      McTemplateU0qq((__int64)this, &MinInput_Log_ControllerNavigationDisabled, 12, *((unsigned __int8 *)this + 232));
    *((_BYTE *)this + 4112) = 0;
  }
  return 0LL;
}
