/*
 * XREFs of MiCallCreateSectionFilters @ 0x1404C18A4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     FsRtlAcquireToCreateMappedSection @ 0x1404C146C (FsRtlAcquireToCreateMappedSection.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int v3; // edx
  char v4; // cl
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // eax
  ULONG_PTR **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  result = FsRtlAcquireToCreateMappedSection(*((struct _FILE_OBJECT **)a1 + 7), a1[7], &v9, &v10);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = v9;
    if ( (v9 & 6) != 0 )
    {
      v8 = (ULONG_PTR **)*((_QWORD *)a1 + 22);
      if ( v8 && *v8 != &MiSystemPartition )
        v4 = v9 & 0xF9;
      if ( (v4 & 4) != 0 && (a1[4] & 0x1000000) != 0 )
        *a1 |= 0x10000u;
      if ( (v4 & 2) != 0 && (a1[4] & 0x1000000) == 0 )
        *a1 |= 0x10000u;
    }
    v5 = v10;
    if ( v10 )
    {
      if ( ((v10 - 1) & v10) == 0 )
      {
        *a1 |= 0x2000u;
        if ( v5 < dword_1403CC3EC )
          dword_1403CC3EC = v5;
      }
    }
    v6 = *a1;
    if ( v3 == 299 )
      v7 = v6 | 0x80;
    else
      v7 = v6 & 0xFFFFFF7F;
    *a1 = v7;
    return v3;
  }
  return result;
}
