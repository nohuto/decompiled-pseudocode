/*
 * XREFs of xxxSafeLoadKeyboardLayoutEx @ 0x1C0079760
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E2E90 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0079CD0 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 */

HKL __fastcall xxxSafeLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        HANDLE Handle,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        struct tagKBDTABLE_MULT_INTERNAL *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  HKL KeyboardLayout; // rsi
  __int64 v13; // rdx
  void *v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int i; // ebx
  void *v19; // rax
  void *v20; // rcx

  KeyboardLayout = 0LL;
  v14 = ConvertHandleAndVerifyLoc(Handle);
  if ( v14 )
  {
    if ( a6 )
    {
      if ( *(_DWORD *)a6 >= 8u )
      {
        UserSetLastError(87LL, v13, v15, v16);
        *(_DWORD *)a6 = 0;
LABEL_6:
        ZwClose(v14);
        for ( i = 0; i < *(_DWORD *)a6; ++i )
        {
          v20 = (void *)*((_QWORD *)a6 + 2 * i + 81);
          if ( v20 )
            ZwClose(v20);
        }
        return KeyboardLayout;
      }
      if ( *(_DWORD *)a6 )
      {
        do
        {
          v19 = ConvertHandleAndVerifyLoc(*((HANDLE *)a6 + 2 * (unsigned int)KeyboardLayout + 81));
          *((_QWORD *)a6 + 2 * (unsigned int)KeyboardLayout + 81) = v19;
          if ( !v19 )
            break;
          LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
        }
        while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
        *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
      }
    }
    KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v14, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_6;
  }
  if ( (a9 & 0x40000000) != 0 )
    PsGetThreadProcessId(*(PETHREAD *)gptiCurrent);
  if ( (a9 & 0x40000200) == 0 )
    UserSetLastError(0LL, v13, v15, v16);
  return KeyboardLayout;
}
