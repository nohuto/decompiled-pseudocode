/*
 * XREFs of ?SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z @ 0x18006AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBand(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  HWND ForegroundWindow; // rax
  HWND v6; // rdi
  int v7; // eax
  unsigned int v8; // edi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v2 = -2LL;
    ForegroundWindow = GetForegroundWindow();
    v6 = ForegroundWindow;
    if ( ForegroundWindow )
    {
      if ( *(HWND *)(a1 + 136) != ForegroundWindow
        && (((unsigned __int8)GetWindowLongPtrW(ForegroundWindow, a2 - 21) >> 3) & (unsigned __int8)a2) == 0 )
      {
        v2 = (__int64)v6;
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                                 + 32LL))(
         CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
         *(_QWORD *)(a1 + 136),
         v2,
         a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x575,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  if ( a2 == 1 && ((v2 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 48LL))(
            CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
            *(_QWORD *)(a1 + 136),
            v2);
    if ( v10 < 0 )
    {
      v11 = 1411LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  v12 = **(_QWORD **)(a1 + 112);
  if ( v12 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 24LL))(v12, a2);
    if ( v10 < 0 )
    {
      v11 = 1420LL;
      goto LABEL_12;
    }
  }
  return 0LL;
}
