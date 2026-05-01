/*
 * XREFs of ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180080B74
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180080868 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x180080F9C (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND v5; // rcx
  const char *v6; // r9
  LONG bottom; // eax
  LONG right; // ecx
  LONG top; // edx
  __int64 v10; // rdx
  int v11; // edi
  _QWORD *v12; // rax
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(*(HWND *)(a1 + 32)) )
    return 2147500037LL;
  v5 = *(HWND *)(a1 + 32);
  Rect = 0LL;
  if ( !GetWindowRect(v5, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x171,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v6);
  bottom = *(_DWORD *)(a1 + 28);
  right = *(_DWORD *)(a1 + 24);
  if ( Rect.bottom > bottom )
    bottom = Rect.bottom;
  top = *(_DWORD *)(a1 + 20);
  if ( Rect.right > right )
    right = Rect.right;
  if ( Rect.top < top )
    top = Rect.top;
  if ( Rect.left <= *(_DWORD *)(a1 + 16) && top == Rect.top && right == Rect.right && bottom == Rect.bottom )
  {
    v10 = a2[1];
    if ( v10 == a2[3] )
    {
      v11 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
              (__int64)a2,
              v10 + 1);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x174,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
          (const char *)(unsigned int)v11);
        return (unsigned int)v11;
      }
    }
    v12 = (_QWORD *)(*a2 + 8 * a2[1]++);
    if ( v12 )
      *v12 = *(_QWORD *)(a1 + 32);
  }
  return 0LL;
}
