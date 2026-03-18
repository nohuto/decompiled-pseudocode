/*
 * XREFs of MiCallCreateSectionFilters @ 0x14050FFB8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     FsRtlAcquireToCreateMappedSection @ 0x140510090 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rdi
  __int64 result; // rax
  char v4; // r9
  unsigned int v5; // ecx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(struct _FILE_OBJECT **)(a1 + 56);
  result = FsRtlAcquireToCreateMappedSection(v1, *(unsigned int *)(a1 + 28), &v6, &v7);
  if ( (int)result >= 0 )
  {
    v4 = v6;
    if ( (v6 & 0x18) != 0 && (v6 & 6) != 0 )
    {
      FsRtlReleaseFile(v1);
      return 3221226535LL;
    }
    else
    {
      if ( (v6 & 8) != 0 )
        *(_DWORD *)a1 |= 0x200000u;
      if ( (v4 & 0x10) != 0 )
        *(_DWORD *)a1 |= 0x400000u;
      if ( (v4 & 4) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
        *(_DWORD *)a1 |= 0x10000u;
      if ( (v4 & 2) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) == 0 )
        *(_DWORD *)a1 |= 0x10000u;
      v5 = v7;
      if ( v7 )
      {
        if ( ((v7 - 1) & v7) == 0 )
        {
          *(_DWORD *)a1 |= 0x2000u;
          if ( v5 < dword_14036CEAC )
            dword_14036CEAC = v5;
        }
      }
      if ( (_DWORD)result == 299 )
        *(_DWORD *)a1 |= 0x80u;
      else
        *(_DWORD *)a1 &= ~0x80u;
      return (unsigned int)result;
    }
  }
  return result;
}
