/*
 * XREFs of sub_18010A810 @ 0x18010A810
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_18010A710 @ 0x18010A710 (sub_18010A710.c)
 */

NTSTATUS __fastcall sub_18010A810(__int64 a1, void *a2, __int16 a3)
{
  void *v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  char v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // edx
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  bool v16; // cf
  unsigned int v17; // edx
  unsigned int v18; // r9d
  unsigned __int64 v19; // rcx
  unsigned int v20; // r10d
  NTSTATUS result; // eax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // r8d
  NTSTATUS v26; // edi
  int v27; // eax
  unsigned int v28; // r13d
  void *v29; // r15
  unsigned __int16 *v30; // r14
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned __int16 *v33; // rdi
  unsigned int v34; // eax
  SIZE_T MemoryInformationLength; // rcx
  __int16 v36; // ax
  NTSTATUS v37; // eax
  size_t v38; // r8
  unsigned __int16 v39; // r15
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-51h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-49h] BYREF
  _QWORD MemoryInformation[6]; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-11h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v46[11]; // [rsp+B0h] [rbp-1h] BYREF
  int v50; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v4, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    v9 = MemoryInformation[0];
    if ( (void *)MemoryInformation[0] != v4 )
      return -1073741503;
    v10 = LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000;
    v6 += v10;
    if ( (a3 & 0x1000) != 0
      && !v8
      && (LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000) )
    {
      ReturnLength = 0LL;
      v46[0] = 0LL;
      v46[1] = 0LL;
      v11 = ZwQueryVirtualMemory(a2, v4, MemoryMappedFilenameInformation, v46, 0x10uLL, &ReturnLength);
      if ( v11 >= 0 || v11 == -1073741820 || v11 == -1073741789 || v11 == -2147483643 )
      {
        v12 = ReturnLength;
        if ( HIDWORD(ReturnLength) )
          v12 = 0LL;
        ReturnLength = v12;
      }
      else
      {
        LODWORD(v12) = ReturnLength;
      }
      if ( (unsigned int)v12 > 0x10 && (v11 >= 0 || v11 == -1073741820 || v11 == -1073741789 || v11 == -2147483643) )
        v13 = (v12 - 5) & 0xFFFFFFF8;
      else
        v13 = 8;
      v14 = v13 + v7;
      v15 = -1;
      if ( v14 >= v7 )
        v15 = v14;
      v16 = v14 < v7;
      v9 = MemoryInformation[0];
      v7 = v15;
      if ( v16 )
        v8 = 1;
    }
    ++v5;
    v4 = (void *)(v9 + MemoryInformation[3]);
  }
  while ( v9 + MemoryInformation[3] >= v9 );
  v17 = -1;
  v18 = v7;
  v19 = 72LL * v5;
  if ( v19 <= 0xFFFFFFFF )
    v17 = 72 * v5;
  v20 = v17;
  if ( v19 > 0xFFFFFFFF )
    return -1073741675;
  v22 = 0;
  if ( v8 )
  {
    if ( 8 * (unsigned __int64)v6 > 0xFFFFFFFF )
      return -1073741675;
    v7 = 8 * v6;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v23 = v7 + 16;
    v27 = -1;
    v25 = v7;
    if ( v7 + 16 >= v7 )
      v27 = v7 + 16;
    v7 = v27;
    if ( v23 < v18 )
      return v23 < v25 ? 0xC0000095 : 0;
  }
  if ( v7 )
  {
    v23 = v17 + v7;
    v24 = -1;
    v25 = v17;
    if ( v17 + v7 >= v17 )
      v24 = v17 + v7;
    v17 = v24;
    if ( v23 < v20 )
      return v23 < v25 ? 0xC0000095 : 0;
  }
  MaximumSize.QuadPart = v17;
  result = ZwCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_180131888,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result < 0 )
    return result;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v26 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          0LL,
          0LL,
          &ViewSize,
          ViewShare,
          0,
          4u);
  if ( v26 < 0 )
  {
    ZwClose(SectionHandle);
    return v26;
  }
  v28 = ViewSize;
  v29 = 0LL;
  v30 = (unsigned __int16 *)BaseAddress;
  v50 = 0;
  do
  {
    if ( v22 + 72 < v22 )
      break;
    if ( v22 + 72 > v28 )
      break;
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v29, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    if ( (void *)MemoryInformation[0] != v29 )
      return -1073741503;
    memset(v30, 0, 0x48uLL);
    v31 = 72;
    *(_QWORD *)v30 = MemoryInformation[0];
    *((_QWORD *)v30 + 1) = MemoryInformation[1];
    *((_DWORD *)v30 + 4) = MemoryInformation[2];
    *((_QWORD *)v30 + 3) = MemoryInformation[3];
    *((_QWORD *)v30 + 4) = MemoryInformation[4];
    *((_DWORD *)v30 + 10) = MemoryInformation[5];
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_85;
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
    {
      sub_18010A710((__int64)(v30 + 24), a2, (char *)MemoryInformation[1]);
LABEL_62:
      if ( v22 + 76 < v22 || v22 + 76 > v28 )
        break;
      if ( v8 )
        goto LABEL_78;
      v32 = v22 + 92;
      if ( v22 + 92 < v22 + 76 || v32 > v28 )
      {
        v8 = 1;
        goto LABEL_78;
      }
      v33 = v30 + 36;
      v34 = v28 - v32;
      v30[36] = 0;
      v8 = 0;
      if ( v34 >= v7 )
        v34 = v7;
      MemoryInformationLength = v34;
      v36 = -1;
      if ( (unsigned int)MemoryInformationLength < 0xFFFF )
        v36 = MemoryInformationLength;
      v30[37] = v36;
      *((_QWORD *)v30 + 10) = v30 + 44;
      ReturnLength = 0LL;
      v37 = ZwQueryVirtualMemory(
              a2,
              v29,
              MemoryMappedFilenameInformation,
              v30 + 36,
              MemoryInformationLength,
              &ReturnLength);
      if ( v37 >= 0 || v37 == -1073741820 || v37 == -1073741789 || v37 == -2147483643 )
      {
        if ( HIDWORD(ReturnLength) )
        {
LABEL_78:
          v37 = -1073741675;
          v33 = 0LL;
        }
      }
      if ( v37 < 0 )
      {
        v30[36] = 0;
        v7 -= 2;
        v31 = 80;
      }
      else
      {
        v38 = *v33;
        if ( v38 + 2 > 0xFFFF )
        {
          v39 = 0;
        }
        else
        {
          v39 = v38 + 2;
          memmove(v33 + 1, *((const void **)v33 + 1), v38);
          *(unsigned __int16 *)((char *)v33 + *v33 + 2) = 0;
        }
        *v33 = v39;
        v7 -= (v39 + 9) & 0xFFFFFFF8;
        v31 = (v39 + 81) & 0xFFFFFFF8;
      }
      goto LABEL_85;
    }
    if ( LODWORD(MemoryInformation[5]) == 0x40000 )
      goto LABEL_62;
LABEL_85:
    v22 += v31;
    v29 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
    ++v50;
    v30 = (unsigned __int16 *)((char *)v30 + v31);
  }
  while ( MemoryInformation[0] + MemoryInformation[3] >= MemoryInformation[0] );
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  *(_DWORD *)(a1 + 912) = v50;
  *(_QWORD *)(a1 + 920) = SectionHandle;
  *(_DWORD *)(a1 + 916) = v22;
  *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
  return 0;
}
