/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003B0F4
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003D158 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003AEE0 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     memset @ 0x18004207E (memset.c)
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
  _DWORD ProcessInformation[12]; // [rsp+30h] [rbp-D0h] BYREF
  LPCVOID v17[130]; // [rsp+60h] [rbp-A0h] BYREF
  LPCVOID Buffer[246]; // [rsp+470h] [rbp+370h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  memset(v17, 0, sizeof(v17));
  ProcessInformation[0] = 0;
  memset(&ProcessInformation[2], 0, 0x28uLL);
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
      if ( ReadProcessMemory(v7, *(LPCVOID *)&ProcessInformation[2], Buffer, 0x7B0uLL, 0LL) )
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
        if ( ReadProcessMemory(v7, Buffer[4], v17, 0x410uLL, 0LL) )
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
        if ( v10 >= 0 && v17[8] )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( LOWORD(v17[7]) < v14 )
          {
            if ( ReadProcessMemory(v7, v17[8], a3, v14, 0LL) )
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
          *(_DWORD *)a4 = (LOWORD(v17[7]) >> 1) + 1;
        }
      }
    }
    if ( v7 )
      CloseHandle(v7);
  }
  return (unsigned int)v10;
}
