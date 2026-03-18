/*
 * XREFs of AdtpEtwBuildString @ 0x1405D0BF4
 * Callers:
 *     AdtpPackageParameters @ 0x14014C5B0 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpEtwBuildString(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned __int16 v5; // r10
  unsigned int v7; // edx
  unsigned __int16 v9; // r11
  unsigned int v10; // edi
  bool v11; // zf
  _WORD *PoolWithTag; // rbx
  __int64 v13; // rax
  __int64 result; // rax

  v5 = *a2;
  v7 = *a2 >> 1;
  v9 = a2[1];
  v10 = v7 + 1;
  v11 = v9 == v5;
  if ( v9 > v5 )
  {
    PoolWithTag = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !PoolWithTag[v7] )
    {
LABEL_8:
      *(_QWORD *)a1 = PoolWithTag;
      *(_DWORD *)(a1 + 8) = 2 * v10;
      result = 0LL;
      *(_DWORD *)(a1 + 12) = 0;
      return result;
    }
    v11 = v9 == v5;
  }
  if ( v11 && v10 > 1 )
  {
    PoolWithTag = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !PoolWithTag[v7 - 1] )
    {
      v10 = v7;
      goto LABEL_8;
    }
  }
  v13 = (unsigned int)*a4;
  if ( (unsigned int)v13 + v10 < 0x400 )
  {
    PoolWithTag = (_WORD *)(a3 + 2 * v13);
    *a4 = v13 + v10;
LABEL_7:
    memmove(PoolWithTag, *((const void **)a2 + 1), *a2);
    PoolWithTag[v10 - 1] = 0;
    goto LABEL_8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v10, 0x6B416553u);
  if ( PoolWithTag )
  {
    *a5 = 1;
    goto LABEL_7;
  }
  return 3221225495LL;
}
