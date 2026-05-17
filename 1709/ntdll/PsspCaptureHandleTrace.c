/*
 * XREFs of PsspCaptureHandleTrace @ 0x18005D0E8
 * Callers:
 *     PsspCaptureProcessInformation @ 0x18005CF50 (PsspCaptureProcessInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

signed int __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  signed int result; // eax
  ULONG v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  __int64 v10; // r8
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v12; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h] BYREF
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = -1;
    v6 = 160LL * ProcessInformation[2];
    if ( v6 > 0xFFFFFFFF )
    {
      return -1073741675;
    }
    else
    {
      v7 = 160 * ProcessInformation[2];
      v8 = v6 + 176;
      if ( v7 + 176 >= v7 )
        v5 = v7 + 176;
      ProcessInformationLength[0] = v5;
      if ( v8 >= v7 )
      {
        ProcessInformationLength[1] = 0;
        result = NtCreateSection(&Handle, 983047LL, "0", ProcessInformationLength, 4, 0x8000000, 0LL);
        if ( result >= 0 )
        {
          v12 = 0LL;
          v15 = 0LL;
          v9 = ZwMapViewOfSection(Handle, -1LL, &v12, 0LL, 0LL, 0LL, &v15, 1, 0, 4);
          if ( v9 >= 0 )
          {
            memset(v12, 0, 0xB0uLL);
            if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, v12, ProcessInformationLength[0], &ReturnLength) >= 0 )
            {
              NtUnmapViewOfSection(-1LL, v12, v10);
              *(_DWORD *)(a1 + 936) = ReturnLength;
              *(_QWORD *)(a1 + 944) = Handle;
              *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
              return 0;
            }
            else
            {
              NtUnmapViewOfSection(-1LL, v12, v10);
              return NtClose(Handle);
            }
          }
          else
          {
            NtClose(Handle);
            return v9;
          }
        }
      }
      else
      {
        return v8 < v7 ? 0xC0000095 : 0;
      }
    }
  }
  return result;
}
