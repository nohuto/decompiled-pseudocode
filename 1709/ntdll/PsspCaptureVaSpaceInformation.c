/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x180059BCC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureImageInformation @ 0x18005AF9C (PsspCaptureImageInformation.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation(__int64 a1, void *a2, __int16 a3)
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
  unsigned __int64 v18; // rcx
  unsigned int v19; // r10d
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  int v23; // eax
  int v24; // eax
  NTSTATUS result; // eax
  NTSTATUS v26; // edi
  unsigned int v27; // r13d
  void *v28; // r15
  unsigned __int16 *v29; // r14
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned __int16 *v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int16 v35; // ax
  NTSTATUS v36; // eax
  size_t v37; // r8
  unsigned __int16 v38; // r15
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-51h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-49h] BYREF
  _QWORD MemoryInformation[6]; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-11h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v45[11]; // [rsp+B0h] [rbp-1h] BYREF
  int v49; // [rsp+130h] [rbp+7Fh]

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
      v45[0] = 0LL;
      v45[1] = 0LL;
      v11 = ZwQueryVirtualMemory(a2, v4, MemoryMappedFilenameInformation, v45, 0x10uLL, &ReturnLength);
      if ( v11 >= 0 || v11 == -2147483643 || v11 == -1073741820 || v11 == -1073741789 )
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
      if ( (unsigned int)v12 > 0x10 && (v11 >= 0 || v11 == -2147483643 || v11 == -1073741820 || v11 == -1073741789) )
        v13 = (v12 - 5) & 0xFFFFFFF8;
      else
        v13 = 8;
      v14 = v13 + v7;
      v8 = 0;
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
  v18 = 72LL * v5;
  if ( v18 <= 0xFFFFFFFF )
    v17 = 72 * v5;
  v19 = v17;
  if ( v18 > 0xFFFFFFFF )
    return -1073741675;
  v20 = 0;
  if ( v8 )
  {
    if ( 8 * (unsigned __int64)v6 <= 0xFFFFFFFF )
    {
      v7 = 8 * v6;
      goto LABEL_31;
    }
    return -1073741675;
  }
  if ( (a3 & 0x1000) != 0 )
  {
    v21 = v7 + 16;
    v22 = v7;
    v23 = -1;
    if ( v7 + 16 >= v7 )
      v23 = v7 + 16;
    v7 = v23;
    if ( v21 < v22 )
      return v21 < v22 ? 0xC0000095 : 0;
  }
LABEL_31:
  if ( v7 )
  {
    v21 = v17 + v7;
    v24 = -1;
    v22 = v17;
    if ( v17 + v7 >= v17 )
      v24 = v17 + v7;
    v17 = v24;
    if ( v21 < v19 )
      return v21 < v22 ? 0xC0000095 : 0;
  }
  MaximumSize.QuadPart = v17;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&ObjectAttributes,
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
    NtClose(SectionHandle);
    return v26;
  }
  v27 = ViewSize;
  v28 = 0LL;
  v29 = (unsigned __int16 *)BaseAddress;
  v49 = 0;
  do
  {
    if ( v20 + 72 < v20 )
      break;
    if ( v20 + 72 > v27 )
      break;
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v28, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    if ( (void *)MemoryInformation[0] != v28 )
      return -1073741503;
    memset(v29, 0, 0x48uLL);
    v30 = 72;
    *(_QWORD *)v29 = MemoryInformation[0];
    *((_QWORD *)v29 + 1) = MemoryInformation[1];
    *((_DWORD *)v29 + 4) = MemoryInformation[2];
    *((_QWORD *)v29 + 3) = MemoryInformation[3];
    *((_QWORD *)v29 + 4) = MemoryInformation[4];
    *((_DWORD *)v29 + 10) = MemoryInformation[5];
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_70;
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
    {
      PsspCaptureImageInformation(v29 + 24, a2, MemoryInformation[1]);
LABEL_55:
      if ( v20 + 76 < v20 || v20 + 76 > v27 )
        break;
      if ( !v8 )
      {
        v31 = v20 + 92;
        if ( v20 + 92 < v20 + 76 || v31 > v27 )
        {
          v8 = 1;
        }
        else
        {
          v32 = v29 + 36;
          v33 = v27 - v31;
          v29[36] = 0;
          v34 = v7;
          v8 = 0;
          if ( v27 - (v20 + 92) < v7 )
            v34 = v33;
          v35 = -1;
          if ( v34 < 0xFFFF )
            v35 = v34;
          v29[37] = v35;
          *((_QWORD *)v29 + 10) = v29 + 44;
          ReturnLength = 0LL;
          v36 = ZwQueryVirtualMemory(a2, v28, MemoryMappedFilenameInformation, v29 + 36, v34, &ReturnLength);
          if ( v36 < 0 && v36 != -1073741820 && v36 != -1073741789 && v36 != -2147483643 || !HIDWORD(ReturnLength) )
            goto LABEL_66;
        }
      }
      v36 = -1073741675;
      v32 = 0LL;
LABEL_66:
      if ( v36 < 0 )
      {
        v29[36] = 0;
        v7 -= 2;
        v30 = 80;
      }
      else
      {
        v37 = *v32;
        if ( v37 + 2 > 0xFFFF )
        {
          v38 = 0;
        }
        else
        {
          v38 = v37 + 2;
          memmove(v32 + 1, *((const void **)v32 + 1), v37);
          *(unsigned __int16 *)((char *)v32 + *v32 + 2) = 0;
        }
        *v32 = v38;
        v7 -= (v38 + 9) & 0xFFFFFFF8;
        v30 = (v38 + 81) & 0xFFFFFFF8;
      }
      goto LABEL_70;
    }
    if ( LODWORD(MemoryInformation[5]) == 0x40000 )
      goto LABEL_55;
LABEL_70:
    v20 += v30;
    v28 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
    ++v49;
    v29 = (unsigned __int16 *)((char *)v29 + v30);
  }
  while ( MemoryInformation[0] + MemoryInformation[3] >= MemoryInformation[0] );
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  *(_DWORD *)(a1 + 912) = v49;
  *(_QWORD *)(a1 + 920) = SectionHandle;
  *(_DWORD *)(a1 + 916) = v20;
  *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
  return 0;
}
