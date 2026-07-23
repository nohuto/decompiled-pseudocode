/*
 * XREFs of LdrpGetProcedureAddress @ 0x180028E78
 * Callers:
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpNameToOrdinal @ 0x1800291EC (LdrpNameToOrdinal.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18002993C (RtlpImageDirectoryEntryToData32.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(signed __int64 a1, const char *a2, int a3, unsigned __int64 *a4)
{
  bool v5; // si
  char *v9; // rbp
  char *v10; // rbx
  NTSTATUS v11; // eax
  int v12; // edx
  __int64 VirtualAddress; // rax
  unsigned int Size; // r12d
  int v15; // edi
  unsigned __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  v18 = 0LL;
  v5 = 1;
  v9 = (char *)a1;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = (a1 & 1) == 0;
  }
  v11 = RtlImageNtHeaderEx(1u, v9, 0LL, &OutHeaders);
  v12 = 0;
  if ( !OutHeaders )
  {
LABEL_34:
    if ( v11 >= 0 )
    {
      Size = (unsigned int)OutHeaders;
      goto LABEL_10;
    }
    goto LABEL_26;
  }
  if ( OutHeaders->OptionalHeader.Magic == 267 )
  {
    LOBYTE(v12) = v5;
    v11 = RtlpImageDirectoryEntryToData32((int)v9, v12, 0, (int)&OutHeaders, OutHeaders, (__int64)&v18);
    v10 = (char *)v18;
    goto LABEL_34;
  }
  if ( OutHeaders->OptionalHeader.Magic != 523 )
  {
    v11 = -1073741811;
    goto LABEL_34;
  }
  if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes
    || (VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress, !(_DWORD)VirtualAddress) )
  {
LABEL_26:
    Size = (unsigned int)OutHeaders;
LABEL_27:
    v10 = 0LL;
    goto LABEL_10;
  }
  Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
  if ( v5 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
  {
    v10 = &v9[VirtualAddress];
    goto LABEL_10;
  }
  v10 = (char *)RtlAddressInSectionTable(OutHeaders, v9, VirtualAddress);
  if ( !v10 )
    goto LABEL_27;
LABEL_10:
  if ( !v10 )
    return 3221225594LL;
  if ( a2 )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        685,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        a2);
    v15 = LdrpNameToOrdinal(
            (_DWORD)a2,
            -1,
            a1,
            *((_DWORD *)v10 + 6),
            a1 + *((unsigned int *)v10 + 8),
            a1 + *((unsigned int *)v10 + 9));
    if ( v15 >= 0 )
      goto LABEL_15;
    return 3221225594LL;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      703,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v15 = a3 - *((_DWORD *)v10 + 4);
LABEL_15:
  if ( (unsigned int)v15 >= *((_DWORD *)v10 + 5) )
    return (unsigned int)(a2 != 0LL) - 1073741512;
  v16 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v10 + 7) + 4LL * v15);
  *a4 = v16;
  if ( v16 < (unsigned __int64)v10 || v16 >= (unsigned __int64)&v10[Size] )
    return 0LL;
  else
    return 3221226029LL;
}
