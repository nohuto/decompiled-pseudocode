/*
 * XREFs of ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18003EC80
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18004039C (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180040768 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180041F64 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdateNavigationParameters(ControllerProcessor *this, struct tagRECT *a2)
{
  unsigned int v2; // esi
  __int64 left; // rcx
  struct tagPOINT v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  __int128 v11; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    left = (unsigned int)a2->left;
    if ( *((_QWORD *)this + 38) != *(_QWORD *)&a2->left
      || *((_DWORD *)this + 78) != a2->right
      || *((_DWORD *)this + 79) != a2->bottom )
    {
      if ( a2->top >= a2->bottom || (int)left >= a2->right )
      {
        v2 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(left, &MinInput_Warning_CheckResult, 12, 1009, 87);
      }
      else
      {
        if ( *((_DWORD *)this + 59) )
        {
          if ( !PtInRect(a2, *(POINT *)((char *)this + 324)) )
            *(struct tagPOINT *)((char *)this + 324) = ControllerProcessor::AdjustPointToBounds(
                                                         *(struct tagPOINT *)((char *)this + 324),
                                                         a2);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 33) + 24LL))(
            *((_QWORD *)this + 33),
            (char *)this + 324,
            (char *)this + 328);
          if ( !PtInRect(a2, *(POINT *)((char *)this + 324)) )
          {
            v6 = ControllerProcessor::AdjustPointToBounds(*(struct tagPOINT *)((char *)this + 324), a2);
            v7 = ControllerProcessor::SetPointerPosition(this, v6, 1);
            v2 = v7;
            if ( v7 < 0 )
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 12, 1024, v7);
              if ( IsDebuggerPresent() )
                __debugbreak();
              __fastfail(7u);
            }
          }
        }
        v9 = *((_DWORD *)this + 306) == 0;
        *((struct tagRECT *)this + 19) = *a2;
        LODWORD(v11) = (int)(float)((float)*((int *)this + 76) + 8.0);
        DWORD1(v11) = (int)(float)((float)*((int *)this + 77) + 8.0);
        DWORD2(v11) = (int)(float)((float)*((int *)this + 78) - 8.0);
        HIDWORD(v11) = (int)(float)((float)*((int *)this + 79) - 8.0);
        *(_OWORD *)((char *)this + 360) = v11;
        if ( v9 )
          ControllerProcessor::UpdateManipulationInjectionRect(this);
        else
          *((_BYTE *)this + 1228) = 1;
      }
    }
  }
  return v2;
}
