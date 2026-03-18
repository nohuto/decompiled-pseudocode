/*
 * XREFs of AdtpBuildMultiSzStringListString @ 0x14017EB1C
 * Callers:
 *     AdtpPackageParameters @ 0x14017E5D8 (AdtpPackageParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     AdtpEtwBuildDashString @ 0x140584A2C (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildMultiSzStringListString(unsigned __int16 *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // r10
  unsigned int v9; // esi
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int64 v13; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // r8
  unsigned int v16; // r9d
  __int64 result; // rax
  __int64 v18; // r10
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // edx
  __int16 v25; // cx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax

  v6 = 0;
  v7 = 0;
  if ( !a1 || (v8 = *((_QWORD *)a1 + 1)) == 0 )
  {
    if ( a2 )
      AdtpEtwBuildDashString(a2, a2, a3);
    return 0LL;
  }
  v9 = *a1 >> 1;
  v10 = 1;
  v11 = 0;
  if ( !v9 )
  {
LABEL_4:
    v12 = v10;
    if ( v10 - 1 > v9 )
    {
      v22 = v10 + 4;
      v23 = -1;
      v24 = v10;
      if ( v10 + 4 >= v10 )
        v23 = v10 + 4;
      v10 = v23;
      if ( v22 < v12 )
        return v22 < v24 ? 0xC0000095 : 0;
      v7 = 1;
    }
    v13 = 2LL * v10;
    if ( v13 > 0xFFFFFFFF )
      return 3221225621LL;
    if ( (unsigned int)v13 > 0xFFFF )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x6B416553u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *a3 = 1;
    if ( v7 )
    {
      v6 = 4;
      *PoolWithTag = *(_QWORD *)L"\r\n\t\t";
    }
    v16 = 0;
    if ( v9 )
    {
      v18 = 0LL;
      do
      {
        v25 = *(_WORD *)(v18 + *((_QWORD *)a1 + 1));
        if ( v25 )
        {
          *((_WORD *)v15 + v6++) = v25;
        }
        else
        {
          v26 = v6 + 4;
          *(_QWORD *)((char *)v15 + 2 * v6) = *(_QWORD *)L"\r\n\t\t";
          v27 = v6;
          v28 = -1;
          if ( v6 + 4 >= v6 )
            v28 = v6 + 4;
          v6 = v28;
          result = v26 < v27 ? 0xC0000095 : 0;
          if ( v26 < v27 )
            return result;
        }
        ++v16;
        v18 += 2LL;
      }
      while ( v16 < v9 );
    }
    *((_WORD *)v15 + v10 - 1) = 0;
    *(_QWORD *)a2 = v15;
    *(_DWORD *)(a2 + 8) = 2 * v10;
    *(_DWORD *)(a2 + 12) = 0;
    return 0LL;
  }
  while ( 1 )
  {
    v19 = v10;
    v20 = -1;
    v21 = v10 + (*(_WORD *)(v8 + 2LL * v11) != 0 ? 1 : 4);
    if ( v21 >= v10 )
      v20 = v10 + (*(_WORD *)(v8 + 2LL * v11) != 0 ? 1 : 4);
    v10 = v20;
    result = v21 < v19 ? 0xC0000095 : 0;
    if ( v21 < v19 )
      return result;
    if ( ++v11 >= v9 )
      goto LABEL_4;
  }
}
