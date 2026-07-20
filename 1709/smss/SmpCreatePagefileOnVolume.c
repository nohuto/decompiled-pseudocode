/*
 * XREFs of SmpCreatePagefileOnVolume @ 0x1400091E8
 * Callers:
 *     SmpCreatePagefileFromDescriptor @ 0x14000940C (SmpCreatePagefileFromDescriptor.c)
 * Callees:
 *     SmpCheckHybridPriority @ 0x14000831C (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x1400083B4 (SmpTrimPagingFileExtents.c)
 *     SmpCreatePagingFile @ 0x140009078 (SmpCreatePagingFile.c)
 *     SmpGetPagingFileSize @ 0x1400093A0 (SmpGetPagingFileSize.c)
 *     SmpDeletePagingFile @ 0x14000FE0C (SmpDeletePagingFile.c)
 */

__int64 __fastcall SmpCreatePagefileOnVolume(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  UNICODE_STRING *v7; // r15
  NTSTATUS v8; // ecx
  int PagingFileSize; // eax
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  bool v13; // zf
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v31; // [rsp+B0h] [rbp+40h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+58h] BYREF

  v33 = 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 28);
  ObjectAttributes.RootDirectory = 0LL;
  v7 = (UNICODE_STRING *)(a1 + 16);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u);
  if ( v8 < 0 )
  {
    v10 = v33;
    v18 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v18) = 2161;
    *((_DWORD *)&SmpPagefileLog + 2 * v18 + 1) = v8;
    *((_QWORD *)&SmpPagefileLog + v18 + 1) = v7;
  }
  else
  {
    PagingFileSize = SmpGetPagingFileSize(FileHandle, v7, &v33);
    v10 = v33;
    if ( PagingFileSize >= 0 )
      v3 = v33 != 0;
    SmpTrimPagingFileExtents(FileHandle, (__int64)v7);
    NtClose(FileHandle);
  }
  v11 = *(_QWORD *)(a2 + 32) + v10;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v11 > *(_QWORD *)(a2 + 40) )
    v11 = *(_QWORD *)(a2 + 40);
  v13 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v12;
  *(_QWORD *)(a1 + 80) = v14;
  if ( !v13 )
  {
    v19 = SmpMemorySize;
    v20 = *(_QWORD *)(a2 + 40) >> 3;
    v21 = v20;
    if ( SmpMemorySize < v11 >> 2 )
      v19 = v11 >> 2;
    if ( v19 > v11 >> 1 )
      v19 = v11 >> 1;
    if ( v19 <= v20 )
      v21 = v19;
    v22 = v21;
    if ( v12 > v21 )
    {
      if ( !a3 )
        return 3221225599LL;
      if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
      {
        v23 = v11 >> 5;
        if ( v11 >> 5 > 0x40000000 )
          v23 = 0x40000000LL;
        if ( v12 <= v11 - v23 || v12 == *(_QWORD *)(a1 + 48) )
        {
          v22 = v11 - v23;
          if ( v20 < v11 - v23 )
            v20 = v11 - v23;
        }
      }
      if ( v12 > v22 )
      {
        v24 = v12;
        if ( v12 > *(_QWORD *)(a1 + 48) )
          v24 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 72) = v24;
      }
    }
    v25 = *(_QWORD *)(a1 + 72);
    if ( v25 > v22 )
      v25 = v22;
    *(_QWORD *)(a1 + 72) = v25;
    if ( v14 > v20 )
      *(_QWORD *)(a1 + 80) = v20;
    goto LABEL_14;
  }
  if ( v12 > v11 )
  {
    if ( a3 )
    {
      *(_QWORD *)(a1 + 72) = v11;
      goto LABEL_11;
    }
    return 3221225599LL;
  }
LABEL_11:
  v15 = v14;
  if ( v14 > *(_QWORD *)(a2 + 40) )
    v15 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 80) = v15;
LABEL_14:
  *(_DWORD *)(a1 + 88) = 0;
  v16 = *(_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
    v16 = 0x40000000;
  *(_DWORD *)(a1 + 88) = v16;
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0
    && SmpCheckHybridPriority(*(_DWORD *)(a2 + 20), &v31, 0LL) >= 0
    && (v31 & 0xFFFFFFF0) == 0 )
  {
    *(_DWORD *)(a1 + 88) |= (v31 | 0x10) << 26;
  }
  if ( (*(_BYTE *)(a2 + 16) & 0x40) != 0 )
    *(_DWORD *)(a1 + 88) |= 0x1000000u;
  while ( 1 )
  {
    result = SmpCreatePagingFile(
               v7,
               *(union _LARGE_INTEGER *)(a1 + 72),
               *(union _LARGE_INTEGER *)(a1 + 80),
               *(_DWORD *)(a1 + 88));
    if ( (int)result >= 0 )
      break;
    if ( !a3 )
      goto LABEL_26;
    v26 = *(_QWORD *)(a1 + 72);
    if ( v26 <= 0x1000000 )
      goto LABEL_26;
    v27 = 0x1000000LL;
    if ( v26 >> 4 > 0x1000000 )
      v27 = v26 >> 4;
    v28 = v26 - v27;
    *(_QWORD *)(a1 + 72) = v28;
    if ( v28 < 0x1000000 )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  *(_DWORD *)(a2 + 16) |= 0x10u;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) |= 0x20u;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++SmpNumberOfManagedPagefilesCreated;
  ++SmpNumberOfPagefilesCreated;
LABEL_26:
  if ( (*(_BYTE *)(a1 + 92) & 1) == 0 )
  {
    if ( v3 && (int)SmpDeletePagingFile(v7) >= 0 )
      *(_QWORD *)(a2 + 32) = v11;
    return 3221225599LL;
  }
  return result;
}
