/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x18002259C
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800DB67C (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 Config; // rax
  PIMAGE_NT_HEADERS v8; // rcx
  _QWORD *v9; // rax
  NTSTATUS v10; // edx
  ULONG_PTR v11; // rcx
  NTSTATUS result; // eax
  char *v13; // rcx
  char *v14; // r8
  unsigned int VirtualAddress; // r10d
  unsigned int *v16; // rdx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  ULONG_PTR v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (ULONG_PTR *)(a1 + 112);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), (__int64)&v21);
  v5 = v21;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v21 = v5;
  *(_QWORD *)(a1 + 104) = v5;
  if ( !v6 )
    return 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v1 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_10;
  v8 = OutHeaders;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 152) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 144) = *v9;
LABEL_10:
      v8 = OutHeaders;
    }
  }
  if ( !*(_QWORD *)(a1 + 104) )
  {
    VirtualAddress = v8->OptionalHeader.DataDirectory[1].VirtualAddress;
    v16 = (unsigned int *)((char *)&v8->OptionalHeader.Magic + v8->FileHeader.SizeOfOptionalHeader);
    if ( VirtualAddress )
    {
      v17 = 0;
      if ( v8->FileHeader.NumberOfSections )
      {
        while ( 1 )
        {
          v18 = v16[3];
          if ( VirtualAddress >= v18 && VirtualAddress < v18 + v16[4] )
            break;
          ++v17;
          v16 += 10;
          if ( v17 >= v8->FileHeader.NumberOfSections )
            goto LABEL_12;
        }
        *(_QWORD *)(a1 + 104) = *(_QWORD *)(v1 + 48) + v18;
        v19 = v16[2];
        *v2 = v19;
        if ( !v19 )
          *v2 = v16[4];
      }
    }
  }
LABEL_12:
  v10 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v11 = *v2;
    if ( *v2 )
    {
      BaseAddress = *(PVOID *)(a1 + 104);
      RegionSize = v11;
      result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, (PULONG)(a1 + 136));
      v10 = result;
      if ( result < 0 )
        return result;
      v13 = (char *)BaseAddress;
      v14 = (char *)BaseAddress + RegionSize;
      do
      {
        *(_QWORD *)v13 = *(_QWORD *)v13;
        v13 += 4096;
      }
      while ( v13 < v14 );
    }
  }
  return v10;
}
