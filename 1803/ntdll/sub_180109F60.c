/*
 * XREFs of sub_180109F60 @ 0x180109F60
 * Callers:
 *     sub_18010A2AC @ 0x18010A2AC (sub_18010A2AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

signed int __fastcall sub_180109F60(__int64 a1, void *a2)
{
  signed int result; // eax
  DWORD v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  NTSTATUS v9; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = ZwQueryInformationProcess(a2, ProcessHandleTracing, ProcessInformation, 0xB0u, &ReturnLength);
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
      MaximumSize.LowPart = v5;
      if ( v8 >= v7 )
      {
        MaximumSize.HighPart = 0;
        result = ZwCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&stru_180131828,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0LL);
        if ( result >= 0 )
        {
          BaseAddress = 0LL;
          ViewSize[0] = 0LL;
          v9 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 0LL,
                 ViewSize,
                 ViewShare,
                 0,
                 4u);
          if ( v9 >= 0 )
          {
            memset(BaseAddress, 0, 0xB0uLL);
            if ( ZwQueryInformationProcess(a2, ProcessHandleTracing, BaseAddress, MaximumSize.LowPart, &ReturnLength) >= 0 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
              *(_DWORD *)(a1 + 936) = ReturnLength;
              *(_QWORD *)(a1 + 944) = SectionHandle;
              *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
              return 0;
            }
            else
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
              return ZwClose(SectionHandle);
            }
          }
          else
          {
            ZwClose(SectionHandle);
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
