/*
 * XREFs of MiSnapThunk @ 0x1405FB02C
 * Callers:
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x140189DB0 (strchr.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlPrefixString @ 0x140554840 (RtlPrefixString.c)
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 */

__int64 __fastcall MiSnapThunk(char *a1, __int64 a2, __int64 *a3, char **a4, unsigned __int16 *a5)
{
  char *v8; // r10
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rsi
  char *v12; // rdx
  unsigned int v13; // ecx
  char *v14; // rdi
  unsigned int v15; // r9d
  __int64 v16; // r11
  unsigned __int8 *v17; // rax
  char *v18; // rcx
  int v19; // r8d
  int v20; // edx
  unsigned __int16 v21; // cx
  char *v22; // rdi
  int v24; // r8d
  int v25; // ecx
  int v26; // edx
  unsigned __int16 *v27; // rax
  char *v28; // r11
  char v29; // r9
  int v30; // eax
  char *v31; // rax
  PVOID *v32; // rsi
  unsigned int v33; // ebx
  char *v34; // rax
  __int64 v35; // rdi
  char *PoolWithTag; // rax
  void *v37; // rdi
  PVOID v38; // rcx
  __int64 v39; // [rsp+20h] [rbp-40h]
  ULONG Size[2]; // [rsp+30h] [rbp-30h] BYREF
  ANSI_STRING SourceString; // [rsp+38h] [rbp-28h] BYREF
  void *Src; // [rsp+48h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v44; // [rsp+88h] [rbp+28h]

  v44 = a2;
  v8 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, Size);
  if ( !v8 )
    return 3221226083LL;
  v9 = *a3;
  v10 = a5;
  if ( *a3 >= 0 )
  {
    if ( !a5 )
      v10 = (unsigned __int16 *)(v9 + a2);
LABEL_5:
    v11 = v10 + 1;
    v12 = &a1[*((unsigned int *)v8 + 8)];
    v13 = *v10;
    v14 = &a1[*((unsigned int *)v8 + 9)];
    v15 = *((_DWORD *)v8 + 6);
    *(_QWORD *)&SourceString.Length = v12;
    if ( v13 < v15 )
    {
      v16 = (unsigned __int16)v13;
      v17 = (unsigned __int8 *)(v10 + 1);
      v18 = (char *)(&a1[*(unsigned int *)&v12[4 * (unsigned __int16)v13]] - (char *)v11);
      do
      {
        v19 = (unsigned __int8)v18[(_QWORD)v17];
        v20 = *v17 - v19;
        if ( v20 )
          break;
        ++v17;
      }
      while ( v19 );
      if ( !v20 )
      {
        v21 = *(_WORD *)&v14[2 * v16];
        goto LABEL_11;
      }
    }
    v24 = 0;
    if ( v15 )
    {
      v25 = v15 - 1;
      if ( (int)(v15 - 1) >= 0 )
      {
        do
        {
          v26 = (v25 + v24) >> 1;
          Src = (void *)v26;
          v27 = v11;
          v28 = (char *)(&a1[*(unsigned int *)(*(_QWORD *)&SourceString.Length + 4LL * v26)] - (char *)v11);
          while ( 1 )
          {
            v29 = *(_BYTE *)v27;
            if ( *(_BYTE *)v27 != v28[(_QWORD)v27] )
              break;
            v27 = (unsigned __int16 *)((char *)v27 + 1);
            if ( !v29 )
            {
              v30 = 0;
              goto LABEL_20;
            }
          }
          v30 = *(_BYTE *)v27 < v28[(_QWORD)v27] ? -1 : 1;
LABEL_20:
          if ( v30 < 0 )
          {
            if ( !v26 )
              return 3221226083LL;
            v25 = v26 - 1;
          }
          else
          {
            if ( v30 <= 0 )
              break;
            v24 = v26 + 1;
          }
        }
        while ( v25 >= v24 );
        if ( v25 >= v24 )
        {
          v21 = *(_WORD *)&v14[2 * (_QWORD)Src];
          goto LABEL_11;
        }
      }
    }
    return 3221226083LL;
  }
  if ( a5 )
    goto LABEL_5;
  v21 = v9 - *((_WORD *)v8 + 8);
LABEL_11:
  if ( (unsigned int)v21 >= *((_DWORD *)v8 + 5) )
    return 3221226082LL;
  v22 = &a1[*(unsigned int *)&a1[4 * v21 + *((unsigned int *)v8 + 7)]];
  *a4 = v22;
  if ( v22 <= v8 || v22 >= &v8[Size[0]] )
    return 0LL;
  SourceString.Buffer = v22;
  v31 = strchr(v22, 46);
  LOWORD(v31) = 1 - (_WORD)v22 + (_WORD)v31;
  Src = v31;
  SourceString.Length = (unsigned __int16)v31;
  SourceString.MaximumLength = (unsigned __int16)v31;
  if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
    return 3221226083LL;
  v32 = (PVOID *)PsLoadedModuleList;
  v33 = -1073741213;
  while ( v32 != &PsLoadedModuleList )
  {
    if ( RtlPrefixString((const STRING *)&DestinationString, (const STRING *)(v32 + 11), 1u) )
    {
      v34 = &v22[(unsigned __int16)Src];
      Src = v34;
      v35 = -1LL;
      do
        ++v35;
      while ( v34[v35] );
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v35 + 5, 0x20206D4Du);
      *(_QWORD *)&SourceString.Length = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag + 2, Src, v35 + 1);
        v37 = *(void **)&SourceString.Length;
        v39 = *(_QWORD *)&SourceString.Length;
        **(_WORD **)&SourceString.Length = 0;
        v38 = v32[6];
        *(_QWORD *)Size = 0LL;
        v33 = MiSnapThunk((_DWORD)v38, v44, (unsigned int)Size, (unsigned int)Size, v39);
        ExFreePoolWithTag(v37, 0);
        *a4 = *(char **)Size;
      }
      break;
    }
    v32 = (PVOID *)*v32;
  }
  RtlFreeAnsiString(&DestinationString);
  return v33;
}
