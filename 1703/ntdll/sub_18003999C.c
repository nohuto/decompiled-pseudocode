/*
 * XREFs of sub_18003999C @ 0x18003999C
 * Callers:
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     sub_1800DC094 @ 0x1800DC094 (sub_1800DC094.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall sub_18003999C(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR *v2; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  void *v6; // rdx
  __int64 v7; // rax
  PIMAGE_NT_HEADERS v8; // rcx
  _QWORD *v9; // rax
  NTSTATUS v10; // edx
  NTSTATUS result; // eax
  char *v12; // rcx
  char *v13; // r8
  unsigned int VirtualAddress; // r9d
  unsigned int *v15; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  ULONG_PTR v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (ULONG_PTR *)(a1 + 104);
  v4 = sub_180032C0C(*(_QWORD *)(v1 + 48), 1, 0xCu, (DWORD *)(a1 + 104), (char **)&v21);
  v5 = v21;
  if ( v4 < 0 )
    v5 = 0LL;
  *(_QWORD *)(a1 + 96) = v5;
  v6 = *(void **)(v1 + 48);
  v21 = v5;
  RtlImageNtHeaderEx(3u, v6, 0LL, &OutHeaders);
  v7 = sub_18003A72C(*(PVOID *)(v1 + 48));
  if ( !v7 || *(_DWORD *)v7 < 0x94u )
    goto LABEL_9;
  v8 = OutHeaders;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (*(_DWORD *)(v7 + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(v7 + 112);
    *(_QWORD *)(a1 + 144) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 136) = *v9;
LABEL_9:
      v8 = OutHeaders;
    }
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    VirtualAddress = v8->OptionalHeader.DataDirectory[1].VirtualAddress;
    v15 = (unsigned int *)((char *)&v8->OptionalHeader.Magic + v8->FileHeader.SizeOfOptionalHeader);
    if ( VirtualAddress )
    {
      NumberOfSections = v8->FileHeader.NumberOfSections;
      v17 = 0;
      if ( v8->FileHeader.NumberOfSections )
      {
        while ( 1 )
        {
          v18 = v15[3];
          if ( VirtualAddress >= v18 && VirtualAddress < v15[4] + v18 )
            break;
          ++v17;
          v15 += 10;
          if ( v17 >= NumberOfSections )
            goto LABEL_11;
        }
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(v1 + 48) + v15[3];
        v19 = v15[2];
        *v2 = v19;
        if ( !v19 )
          *v2 = v15[4];
      }
    }
  }
LABEL_11:
  v10 = 0;
  if ( *(_QWORD *)(a1 + 96) && *v2 )
  {
    BaseAddress = *(PVOID *)(a1 + 96);
    RegionSize = *v2;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, (PULONG)(a1 + 128));
    v10 = result;
    if ( result < 0 )
      return result;
    v12 = *(char **)(a1 + 96);
    v13 = &v12[*v2];
    do
    {
      *(_QWORD *)v12 = *(_QWORD *)v12;
      v12 += 4096;
    }
    while ( v12 < v13 );
  }
  return v10;
}
