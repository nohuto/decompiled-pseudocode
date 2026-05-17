/*
 * XREFs of LdrpFindLoadedDllByMappingLockHeld @ 0x180029CD4
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindLoadedDllByMapping @ 0x18007A43C (LdrpFindLoadedDllByMapping.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpCompareModuleMappingInfo @ 0x180029E04 (LdrpCompareModuleMappingInfo.c)
 *     memcmp @ 0x180094960 (memcmp.c)
 *     ZwAreMappedFilesTheSame @ 0x1800A1210 (ZwAreMappedFilesTheSame.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingLockHeld(
        __int64 a1,
        const void *a2,
        unsigned int *a3,
        volatile signed __int32 **a4)
{
  __int64 v5; // rdi
  int v6; // esi
  _QWORD *v7; // rbx
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned int v14; // eax
  volatile signed __int32 *v16; // rdi
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  void *Buf2; // [rsp+20h] [rbp-28h] BYREF

  v5 = LdrpMappingInfoIndex;
  v6 = byte_1801602D0 & 1;
  v7 = 0LL;
  while ( v5 )
  {
    v11 = LdrpCompareModuleMappingInfo(a3, v5, a3);
    if ( v11 >= 0 )
    {
      if ( v11 > 0 )
      {
        v12 = *(_QWORD *)(v5 + 8);
        goto LABEL_6;
      }
      v7 = (_QWORD *)v5;
    }
    v12 = *(_QWORD *)v5;
LABEL_6:
    if ( v6 && v12 )
      v5 ^= v12;
    else
      v5 = v12;
  }
  while ( v7 )
  {
    v16 = (volatile signed __int32 *)(v7 - 28);
    if ( (int)RtlImageNtHeaderEx(3, *(v7 - 22), 0LL, &Buf2) >= 0
      && !memcmp(a2, Buf2, 0x30uLL)
      && (int)ZwAreMappedFilesTheSame(*((_QWORD *)v16 + 6), a1) >= 0 )
    {
      v19 = *((_QWORD *)v16 + 19);
      if ( *(_DWORD *)(v19 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v19 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement(v16 + 69);
      *a4 = v16;
      return v7 == 0LL ? 0xC0000135 : 0;
    }
    v13 = (_QWORD *)v7[1];
    v17 = v7;
    if ( v13 )
    {
      do
      {
        v7 = v13;
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || (_QWORD *)*v7 == v17 )
          break;
        v17 = v7;
      }
    }
    if ( !v7 )
      return v7 == 0LL ? 0xC0000135 : 0;
    v14 = *((_DWORD *)v7 - 24);
    if ( *a3 >= v14 && *a3 <= v14 )
    {
      v18 = *((_DWORD *)v7 - 40);
      if ( a3[1] >= v18 && a3[1] <= v18 )
        continue;
    }
    v7 = 0LL;
  }
  return v7 == 0LL ? 0xC0000135 : 0;
}
