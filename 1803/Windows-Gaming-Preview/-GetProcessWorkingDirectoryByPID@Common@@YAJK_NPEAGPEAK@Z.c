/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003D280
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F2A4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003D06C (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        __int64 a2,
        char *a3,
        unsigned __int16 *a4)
{
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v10; // ebx
  NTSTATUS InformationProcess; // eax
  signed int v12; // eax
  signed int v13; // eax
  SIZE_T v14; // r9
  signed int v15; // eax
  _BYTE ProcessInformation[8]; // [rsp+30h] [rbp-C38h] BYREF
  LPCVOID lpBaseAddress; // [rsp+38h] [rbp-C30h]
  _BYTE v18[56]; // [rsp+60h] [rbp-C08h] BYREF
  unsigned __int16 v19; // [rsp+98h] [rbp-BD0h]
  LPCVOID v20; // [rsp+A0h] [rbp-BC8h]
  _BYTE Buffer[32]; // [rsp+470h] [rbp-7F8h] BYREF
  LPCVOID v22; // [rsp+490h] [rbp-7D8h]

  memset_0(Buffer, 0, 0x7B8uLL);
  memset_0(v18, 0, 0x410uLL);
  memset_0(ProcessInformation, 0, 0x30uLL);
  if ( !a3 || !a4 )
    return 2147500035LL;
  *(_WORD *)a3 = 0;
  v7 = OpenProcess(0x1010u, 0, dwProcessId);
  if ( v7 )
    goto LABEL_9;
  LastError = GetLastError();
  if ( LastError == 5 )
    return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
  v10 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v10 = LastError;
  if ( v10 >= 0 )
  {
LABEL_9:
    InformationProcess = NtQueryInformationProcess(v7, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    v10 = 0;
    if ( InformationProcess < 0 )
      v10 = InformationProcess | 0x10000000;
    if ( v10 >= 0 )
    {
      if ( ReadProcessMemory(v7, lpBaseAddress, Buffer, 0x7B8uLL, 0LL) )
      {
        v10 = 0;
      }
      else
      {
        v12 = GetLastError();
        v10 = (unsigned __int16)v12 | 0x80070000;
        if ( v12 <= 0 )
          v10 = v12;
      }
      if ( v10 >= 0 )
      {
        if ( ReadProcessMemory(v7, v22, v18, 0x410uLL, 0LL) )
        {
          v10 = 0;
        }
        else
        {
          v13 = GetLastError();
          v10 = (unsigned __int16)v13 | 0x80070000;
          if ( v13 <= 0 )
            v10 = v13;
        }
        if ( v10 >= 0 && v20 )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( v19 < v14 )
          {
            if ( ReadProcessMemory(v7, v20, a3, v14, 0LL) )
            {
              v10 = 0;
            }
            else
            {
              v15 = GetLastError();
              v10 = (unsigned __int16)v15 | 0x80070000;
              if ( v15 <= 0 )
                v10 = v15;
            }
          }
          else
          {
            v10 = -2147024774;
          }
          *(_DWORD *)a4 = (v19 >> 1) + 1;
        }
      }
    }
    if ( v7 )
      CloseHandle(v7);
  }
  return (unsigned int)v10;
}
