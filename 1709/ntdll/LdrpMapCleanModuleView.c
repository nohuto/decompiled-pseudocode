/*
 * XREFs of LdrpMapCleanModuleView @ 0x1800D69B4
 * Callers:
 *     LdrpGetImportDescriptorForSnap @ 0x180079880 (LdrpGetImportDescriptorForSnap.c)
 * Callees:
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 */

__int64 __fastcall LdrpMapCleanModuleView(__int64 a1)
{
  NTSTATUS v2; // ebx
  HANDLE ProcessInformation; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  ProcessInformation = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( *(_QWORD *)(a1 + 56) == LdrpImageEntry )
  {
    v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageSection, &ProcessInformation, 8u, 0LL);
    if ( v2 >= 0 )
    {
      v2 = ZwMapViewOfSection(
             ProcessInformation,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewShare,
             0x40000u,
             2u);
      if ( v2 >= 0 )
        *(_QWORD *)(a1 + 184) = BaseAddress;
      NtClose(ProcessInformation);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
