/*
 * XREFs of ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180080CB0
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180080868 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x180080F9C (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180081014 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
        __int64 a1)
{
  signed int LastError; // eax
  unsigned int v3; // ebx
  HWND *v5; // r14
  HWND v6; // rdi
  RECT v7; // xmm6
  RECT rcSrc1; // [rsp+40h] [rbp-478h] BYREF
  WCHAR ClassName[264]; // [rsp+50h] [rbp-468h] BYREF
  WCHAR String2[264]; // [rsp+260h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+0h]

  memset(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(*(HWND *)(a1 + 32), ClassName, 260) )
  {
    v5 = (HWND *)(a1 + 32);
    do
    {
      v6 = *v5;
      if ( !GetClassNameW(*v5, String2, 260) )
        break;
      if ( CompareStringOrdinal(ClassName, -1, String2, -1, 0) != 2 )
        break;
      v7 = *(RECT *)(a1 + 16);
      if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(v6) )
        break;
      rcSrc1 = v7;
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
                  &rcSrc1,
                  v6) < 0 )
        break;
      ++v5;
    }
    while ( v5 != (HWND *)(a1 + 64) );
    return 0LL;
  }
  else
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)v3);
    return v3;
  }
}
