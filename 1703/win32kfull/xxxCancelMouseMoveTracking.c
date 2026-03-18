/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00C89D8
 * Callers:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C00AFC70 (xxxResetTooltip.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C69FC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

struct tagTOOLTIPWND *__fastcall xxxCancelMouseMoveTracking(
        unsigned __int16 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4)
{
  struct tagTOOLTIPWND *result; // rax
  char v6; // di
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (struct tagTOOLTIPWND *)&retaddr;
  v6 = a4 & a1;
  if ( (a4 & a1 & 0x400) != 0 && (_WORD)a3 == 69 )
    result = (struct tagTOOLTIPWND *)xxxHotTrackMenu((struct tagWND *)a2, HIWORD(a3), 0);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 112);
    result = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(v11);
    if ( result )
    {
      v12 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v15;
        v15[1] = v12;
        ++*(_DWORD *)(v12 + 8);
        xxxResetTooltip(result);
        result = (struct tagTOOLTIPWND *)ThreadUnlock1(v14, v13);
      }
    }
  }
  if ( v6 < 0 )
    result = (struct tagTOOLTIPWND *)PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v6 & 0x40) != 0 )
    return (struct tagTOOLTIPWND *)FindTimer(a2, 65530LL, 2u, 1, 0LL);
  return result;
}
