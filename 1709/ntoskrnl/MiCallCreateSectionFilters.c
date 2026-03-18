/*
 * XREFs of MiCallCreateSectionFilters @ 0x14049C2D8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 * Callees:
 *     FsRtlAcquireToCreateMappedSection @ 0x14049C358 (FsRtlAcquireToCreateMappedSection.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edx
  char v4; // cl
  unsigned int v5; // ecx
  ULONG_PTR **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  result = FsRtlAcquireToCreateMappedSection(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 28), &v7, &v8);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = v7;
    if ( (v7 & 6) != 0 )
    {
      v6 = *(ULONG_PTR ***)(a1 + 176);
      if ( v6 && *v6 != &MiSystemPartition )
        v4 = v7 & 0xF9;
      if ( (v4 & 4) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
        *(_DWORD *)a1 |= 0x10000u;
      if ( (v4 & 2) != 0 && (*(_DWORD *)(a1 + 16) & 0x1000000) == 0 )
        *(_DWORD *)a1 |= 0x10000u;
    }
    v5 = v8;
    if ( v8 )
    {
      if ( ((v8 - 1) & v8) == 0 )
      {
        *(_DWORD *)a1 |= 0x2000u;
        if ( v5 < dword_14038916C )
          dword_14038916C = v5;
      }
    }
    if ( v3 == 299 )
      *(_DWORD *)a1 |= 0x80u;
    else
      *(_DWORD *)a1 &= ~0x80u;
    return v3;
  }
  return result;
}
