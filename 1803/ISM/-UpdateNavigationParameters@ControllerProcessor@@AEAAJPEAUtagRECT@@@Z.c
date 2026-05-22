/*
 * XREFs of ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180033498
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180035168 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800365B8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationParameters(ControllerProcessor *this, struct tagRECT *a2)
{
  unsigned int v2; // esi
  POINT *CursorPosition; // rax
  POINT v6; // rdx
  struct tagPOINT v7; // rax
  bool v8; // zf
  __int128 v10; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a2
    || *((_DWORD *)this + 484) == a2->left
    && *((_DWORD *)this + 485) == a2->top
    && *((_DWORD *)this + 486) == a2->right
    && *((_DWORD *)this + 487) == a2->bottom )
  {
    return v2;
  }
  if ( a2->top >= a2->bottom || a2->left >= a2->right )
    return (unsigned int)-2147024809;
  if ( *((_DWORD *)this + 474) )
  {
    if ( !PtInRect(a2, *(POINT *)((char *)this + 1956)) )
      *(struct tagPOINT *)((char *)this + 1956) = ControllerProcessor::AdjustPointToBounds(
                                                    *(struct tagPOINT *)((char *)this + 1956),
                                                    a2);
    goto LABEL_16;
  }
  CursorPosition = (POINT *)ControllerProcessor::GetCursorPosition(this);
  v6 = *CursorPosition;
  *(POINT *)((char *)this + 1956) = *CursorPosition;
  if ( PtInRect(a2, v6)
    || (v7 = ControllerProcessor::AdjustPointToBounds(*(struct tagPOINT *)((char *)this + 1956), a2),
        v2 = ControllerProcessor::SetPointerPosition(this, v7, 1),
        (v2 & 0x80000000) == 0) )
  {
LABEL_16:
    v8 = *((_DWORD *)this + 719) == 0;
    *((struct tagRECT *)this + 121) = *a2;
    LODWORD(v10) = (int)(float)((float)*((int *)this + 484) + 8.0);
    DWORD1(v10) = (int)(float)((float)*((int *)this + 485) + 8.0);
    DWORD2(v10) = (int)(float)((float)*((int *)this + 486) - 8.0);
    HIDWORD(v10) = (int)(float)((float)*((int *)this + 487) - 8.0);
    *(_OWORD *)((char *)this + 2004) = v10;
    if ( v8 )
      ControllerProcessor::UpdateManipulationInjectionRect(this);
    else
      *((_BYTE *)this + 2880) = 1;
    return v2;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v2;
}
