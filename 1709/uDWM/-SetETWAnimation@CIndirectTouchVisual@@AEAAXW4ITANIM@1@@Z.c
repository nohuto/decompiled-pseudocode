/*
 * XREFs of ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x180091BE8
 * Callers:
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091C54 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091DDC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091F5C (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x180092160 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x180092300 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0qq @ 0x180092460 (McTemplateU0qq.c)
 */

__int64 __fastcall CIndirectTouchVisual::SetETWAnimation(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 != *(_DWORD *)(a1 + 296) )
  {
    result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0qq(a1, &UdwmIndirectTouchVisual_Stop, *(unsigned int *)(a1 + 416));
      result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        result = McTemplateU0qq(v5, &UdwmIndirectTouchVisual_Start, *(unsigned int *)(a1 + 416));
    }
  }
  *(_DWORD *)(a1 + 296) = a2;
  return result;
}
