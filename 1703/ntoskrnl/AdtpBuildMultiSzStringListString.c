/*
 * XREFs of AdtpBuildMultiSzStringListString @ 0x140156404
 * Callers:
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     AdtpEtwBuildDashString @ 0x14045E754 (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildMultiSzStringListString(unsigned __int16 *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v6; // edi
  int v7; // r12d
  __int64 v8; // r10
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int64 v13; // rbp
  _QWORD *PoolWithTag; // rax
  unsigned int v15; // r8d
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  __int16 v24; // r9

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
      v21 = v10 + 4;
      v22 = -1;
      v23 = v10;
      if ( v10 + 4 >= v10 )
        v22 = v10 + 4;
      v10 = v22;
      if ( v21 < v12 )
        return v21 < v23 ? 0xC0000095 : 0;
      v7 = 1;
    }
    v13 = 2LL * v10;
    if ( v13 > 0xFFFFFFFF )
      return 3221225621LL;
    if ( (unsigned int)v13 > 0xFFFF )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x6B416553u);
    if ( !PoolWithTag )
      return 3221225495LL;
    *a3 = 1;
    if ( v7 )
    {
      v6 = 4;
      *PoolWithTag = *(_QWORD *)L"\r\n\t\t";
    }
    v15 = 0;
    if ( v9 )
    {
      v17 = 0LL;
      do
      {
        v24 = *(_WORD *)(v17 + *((_QWORD *)a1 + 1));
        if ( v24 )
        {
          *((_WORD *)PoolWithTag + v6++) = v24;
        }
        else
        {
          *(_QWORD *)((char *)PoolWithTag + 2 * v6) = *(_QWORD *)L"\r\n\t\t";
          if ( v6 + 4 < v6 )
            return 3221225621LL;
          v6 += 4;
        }
        ++v15;
        v17 += 2LL;
      }
      while ( v15 < v9 );
    }
    *((_WORD *)PoolWithTag + v10 - 1) = 0;
    *a2 = PoolWithTag;
    a2[1] = (unsigned int)v13;
    return 0LL;
  }
  while ( 1 )
  {
    v18 = v10;
    v19 = -1;
    v20 = v10 + (*(_WORD *)(v8 + 2LL * v11) != 0 ? 1 : 4);
    if ( v20 >= v10 )
      v19 = v10 + (*(_WORD *)(v8 + 2LL * v11) != 0 ? 1 : 4);
    v10 = v19;
    result = v20 < v18 ? 0xC0000095 : 0;
    if ( v20 < v18 )
      return result;
    if ( ++v11 >= v9 )
      goto LABEL_4;
  }
}
