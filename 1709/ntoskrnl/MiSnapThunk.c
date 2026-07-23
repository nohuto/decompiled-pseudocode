/*
 * XREFs of MiSnapThunk @ 0x1404DC7E4
 * Callers:
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404DC7E4 (MiSnapThunk.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x14015FC30 (strchr.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiSnapThunk @ 0x1404DC7E4 (MiSnapThunk.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlPrefixString @ 0x14056CFB0 (RtlPrefixString.c)
 */

__int64 __fastcall MiSnapThunk(char *a1, __int64 a2, __int64 *a3, char **a4, unsigned __int16 *a5)
{
  char *v8; // r10
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  char *v11; // r11
  unsigned int v12; // edx
  char *v13; // rsi
  unsigned int v14; // r9d
  __int64 v15; // rbx
  unsigned __int8 *v16; // rax
  __int64 v17; // rdx
  int v18; // r11d
  int v19; // r8d
  unsigned __int16 v20; // cx
  char *v21; // rdi
  int v23; // r8d
  int v24; // edx
  char *v25; // rax
  int v26; // ecx
  __int64 v27; // r11
  char v28; // r9
  int v29; // eax
  char *v30; // rax
  PVOID *v31; // rsi
  unsigned int v32; // ebx
  char *v33; // rax
  __int64 v34; // rdi
  char *PoolWithTag; // rax
  void *v36; // rdi
  PVOID v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-40h]
  ULONG Size[2]; // [rsp+30h] [rbp-30h] BYREF
  ANSI_STRING SourceString; // [rsp+38h] [rbp-28h] BYREF
  void *Src; // [rsp+48h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v43; // [rsp+88h] [rbp+28h]

  v43 = a2;
  v8 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, Size);
  if ( !v8 )
    return 3221226083LL;
  v9 = *a3;
  v10 = a5;
  if ( *a3 < 0 )
  {
    if ( !a5 )
    {
      v20 = v9 - *((_WORD *)v8 + 8);
      goto LABEL_11;
    }
  }
  else if ( !a5 )
  {
    v10 = (unsigned __int16 *)(v9 + a2);
  }
  v11 = &a1[*((unsigned int *)v8 + 8)];
  v12 = *v10;
  v13 = &a1[*((unsigned int *)v8 + 9)];
  v14 = *((_DWORD *)v8 + 6);
  *(_QWORD *)&SourceString.Length = v11;
  if ( v12 < v14 )
  {
    v15 = (unsigned __int16)v12;
    v16 = (unsigned __int8 *)(v10 + 1);
    v17 = &a1[*(unsigned int *)&v11[4 * (unsigned __int16)v12]] - (char *)(v10 + 1);
    do
    {
      v18 = v16[v17];
      v19 = *v16 - v18;
      if ( v19 )
        break;
      ++v16;
    }
    while ( v18 );
    if ( !v19 )
      goto LABEL_10;
    v11 = *(char **)&SourceString.Length;
  }
  v23 = 0;
  if ( !v14 )
    return 3221226083LL;
  v24 = v14 - 1;
  if ( (int)(v14 - 1) < 0 )
    return 3221226083LL;
  v25 = (char *)(v10 + 1);
  for ( Src = v10 + 1; ; v25 = (char *)Src )
  {
    v26 = (v24 + v23) >> 1;
    v15 = v26;
    v27 = &a1[*(unsigned int *)&v11[4 * v26]] - v25;
    while ( 1 )
    {
      v28 = *v25;
      if ( *v25 != v25[v27] )
        break;
      ++v25;
      if ( !v28 )
      {
        v29 = 0;
        goto LABEL_22;
      }
    }
    v29 = (unsigned __int8)*v25 < (unsigned __int8)v25[v27] ? -1 : 1;
LABEL_22:
    if ( v29 >= 0 )
      break;
    if ( !v26 )
      return 3221226083LL;
    v24 = v26 - 1;
LABEL_25:
    if ( v24 < v23 )
      return 3221226083LL;
    v11 = *(char **)&SourceString.Length;
  }
  if ( v29 > 0 )
  {
    v23 = v26 + 1;
    goto LABEL_25;
  }
  if ( v24 < v23 )
    return 3221226083LL;
LABEL_10:
  v20 = *(_WORD *)&v13[2 * v15];
LABEL_11:
  if ( (unsigned int)v20 >= *((_DWORD *)v8 + 5) )
    return 3221226082LL;
  v21 = &a1[*(unsigned int *)&a1[4 * v20 + *((unsigned int *)v8 + 7)]];
  *a4 = v21;
  if ( v21 <= v8 || v21 >= &v8[Size[0]] )
    return 0LL;
  SourceString.Buffer = v21;
  v30 = strchr(v21, 46);
  LOWORD(v30) = 1 - (_WORD)v21 + (_WORD)v30;
  Src = v30;
  SourceString.Length = (unsigned __int16)v30;
  SourceString.MaximumLength = (unsigned __int16)v30;
  if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
    return 3221226083LL;
  v31 = (PVOID *)PsLoadedModuleList;
  v32 = -1073741213;
  while ( v31 != &PsLoadedModuleList )
  {
    if ( RtlPrefixString((const STRING *)&DestinationString, (const STRING *)(v31 + 11), 1u) )
    {
      v33 = &v21[(unsigned __int16)Src];
      Src = v33;
      v34 = -1LL;
      do
        ++v34;
      while ( v33[v34] );
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v34 + 5, 0x20206D4Du);
      *(_QWORD *)&SourceString.Length = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag + 2, Src, v34 + 1);
        v36 = *(void **)&SourceString.Length;
        v38 = *(_QWORD *)&SourceString.Length;
        **(_WORD **)&SourceString.Length = 0;
        v37 = v31[6];
        *(_QWORD *)Size = 0LL;
        v32 = MiSnapThunk((_DWORD)v37, v43, (unsigned int)Size, (unsigned int)Size, v38);
        ExFreePoolWithTag(v36, 0);
        *a4 = *(char **)Size;
      }
      break;
    }
    v31 = (PVOID *)*v31;
  }
  RtlFreeUnicodeString(&DestinationString);
  return v32;
}
