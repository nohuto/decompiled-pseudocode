/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18002B4F4
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18002B1A0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180009A4C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002ABE0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringCopyWorkerW @ 0x18002AC58 (StringCopyWorkerW.c)
 *     StringLengthWorkerW_0 @ 0x18002ACCC (StringLengthWorkerW_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(CAudioDGProcess *this, unsigned __int8 a2)
{
  char v4; // r15
  size_t v5; // rdx
  const char *v6; // r9
  HRESULT LastError; // ebx
  wchar_t *v8; // r14
  size_t v9; // rsi
  size_t v10; // rdx
  int v11; // eax
  int ADGProcessSD; // eax
  const char *v13; // r9
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  void *v17; // rcx
  char *v18; // rcx
  size_t bInheritHandles; // [rsp+28h] [rbp-E0h]
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  struct _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+60h] [rbp-A8h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h]
  CAudioDGProcess *v24; // [rsp+98h] [rbp-70h]
  char v25; // [rsp+A0h] [rbp-68h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t Buffer[264]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v23 = -2LL;
  v24 = this;
  v4 = 1;
  v25 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xF8,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v6);
    goto LABEL_13;
  }
  LastError = StringLengthWorkerW_0(Buffer, v5, &pcchLength);
  if ( LastError < 0 )
    goto LABEL_22;
  v8 = &Buffer[pcchLength];
  v9 = 260 - pcchLength;
  if ( 260 - pcchLength <= 1 )
  {
    LastError = -2147024774;
LABEL_5:
    v10 = 2 * v9;
    goto LABEL_6;
  }
  pcchLength = 0LL;
  LastError = StringCopyWorkerW(v8, v9, &pcchLength, L"\\AUDIODG.EXE", bInheritHandles);
  v8 += pcchLength;
  v9 -= pcchLength;
  if ( (int)(LastError + 0x80000000) < 0 || LastError == -2147024774 )
    goto LABEL_5;
  v10 = pcchLength;
  v8 = (wchar_t *)pcchLength;
LABEL_6:
  if ( LastError < 0 )
  {
LABEL_22:
    v15 = (unsigned int)LastError;
    v16 = 252LL;
    goto LABEL_23;
  }
  v11 = StringCbPrintfW(v8, v10, L" 0x%Ix", *((_QWORD *)this + 14));
  LastError = v11;
  if ( v11 < 0 )
  {
    v15 = (unsigned int)v11;
    v16 = 254LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)v15,
      bInheritHandles);
    goto LABEL_13;
  }
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  memset(&ProcessAttributes.nLength + 1, 0, 20);
  ProcessAttributes.nLength = 24;
  ADGProcessSD = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v15 = (unsigned int)ADGProcessSD;
    v16 = 263LL;
    goto LABEL_23;
  }
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  if ( CreateProcessW(0LL, Buffer, &ProcessAttributes, 0LL, 1, a2 << 18, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
  {
    *((_QWORD *)this + 11) = ProcessInformation.hProcess;
    *((_DWORD *)this + 24) = ProcessInformation.dwProcessId;
    v4 = 0;
    LastError = 0;
    if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(ProcessInformation.hThread);
      ProcessInformation.hThread = 0LL;
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x10B,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v13);
  }
  operator delete(ProcessAttributes.lpSecurityDescriptor);
  ProcessAttributes.lpSecurityDescriptor = 0LL;
LABEL_13:
  if ( v4 )
  {
    v17 = (void *)*((_QWORD *)this + 11);
    if ( v17 )
    {
      WaitForSingleObjectEx(v17, 0xFFFFFFFF, 0);
      v18 = (char *)*((_QWORD *)this + 11);
      if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v18);
        *((_QWORD *)this + 11) = 0LL;
      }
      *((_DWORD *)this + 24) = 0;
    }
  }
  return (unsigned int)LastError;
}
