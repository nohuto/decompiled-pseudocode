/*
 * XREFs of sub_180002898 @ 0x180002898
 * Callers:
 *     sub_1800026FC @ 0x1800026FC (sub_1800026FC.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

signed int __fastcall sub_180002898(__int64 a1, void *a2)
{
  signed int result; // eax
  DWORD v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  NTSTATUS v8; // edi
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
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = v6 + 176;
      if ( (int)v6 + 176 >= (unsigned int)v6 )
        v5 = v6 + 176;
      MaximumSize.LowPart = v5;
      if ( v7 >= (unsigned int)v6 )
      {
        MaximumSize.HighPart = 0;
        result = ZwCreateSection(
                   &SectionHandle,
                   0xF0007u,
                   (POBJECT_ATTRIBUTES)&stru_180130A98,
                   &MaximumSize,
                   4u,
                   0x8000000u,
                   0LL);
        if ( result >= 0 )
        {
          BaseAddress = 0LL;
          ViewSize[0] = 0LL;
          v8 = ZwMapViewOfSection(
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
          if ( v8 >= 0 )
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
            return v8;
          }
        }
      }
      else
      {
        return v7 < (unsigned int)v6 ? 0xC0000095 : 0;
      }
    }
    else
    {
      return -1073741675;
    }
  }
  return result;
}
