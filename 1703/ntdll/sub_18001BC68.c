/*
 * XREFs of sub_18001BC68 @ 0x18001BC68
 * Callers:
 *     sub_18001AB40 @ 0x18001AB40 (sub_18001AB40.c)
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 * Callees:
 *     sub_18001BD90 @ 0x18001BD90 (sub_18001BD90.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     memcmp @ 0x180099A70 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x1800A6450 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall sub_18001BC68(PVOID File2MappedAsFile, void *Buf1, unsigned int *a3, volatile signed __int32 **a4)
{
  unsigned __int64 Root; // rdi
  int v6; // esi
  _QWORD *v7; // rbx
  int v11; // eax
  unsigned __int64 v12; // rax
  volatile signed __int32 *v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+20h] [rbp-28h] BYREF

  Root = (unsigned __int64)Tree.Root;
  v6 = (__int64)Tree.Min & 1;
  v7 = 0LL;
  while ( Root )
  {
    v11 = sub_18001BD90(a3, Root, a3);
    if ( v11 >= 0 )
    {
      if ( v11 > 0 )
      {
        v12 = *(_QWORD *)(Root + 8);
        goto LABEL_6;
      }
      v7 = (_QWORD *)Root;
    }
    v12 = *(_QWORD *)Root;
LABEL_6:
    if ( v6 && v12 )
      Root ^= v12;
    else
      Root = v12;
  }
  while ( v7 )
  {
    v13 = (volatile signed __int32 *)(v7 - 28);
    if ( RtlImageNtHeaderEx(3u, (PVOID)*(v7 - 22), 0LL, &OutHeaders) >= 0
      && !memcmp(Buf1, OutHeaders, 0x30uLL)
      && ZwAreMappedFilesTheSame(*((PVOID *)v13 + 6), File2MappedAsFile) >= 0 )
    {
      v19 = *((_QWORD *)v13 + 19);
      if ( *(_DWORD *)(v19 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v19 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement(v13 + 69);
      *a4 = v13;
      return v7 == 0LL ? 0xC0000135 : 0;
    }
    v14 = (_QWORD *)v7[1];
    v15 = v7;
    if ( v14 )
    {
      do
      {
        v7 = v14;
        v14 = (_QWORD *)*v14;
      }
      while ( v14 );
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || (_QWORD *)*v7 == v15 )
          break;
        v15 = v7;
      }
    }
    if ( !v7 )
      return v7 == 0LL ? 0xC0000135 : 0;
    v16 = *((_DWORD *)v7 - 24);
    if ( *a3 >= v16 && *a3 <= v16 )
    {
      v18 = *((_DWORD *)v7 - 40);
      if ( a3[1] >= v18 && a3[1] <= v18 )
        continue;
    }
    v7 = 0LL;
  }
  return v7 == 0LL ? 0xC0000135 : 0;
}
