/*
 * XREFs of SepCaptureUnicodeStringArray @ 0x140546370
 * Callers:
 *     NtSetCachedSigningLevel2 @ 0x14048B484 (NtSetCachedSigningLevel2.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140545A44 (SepCaptureTokenSecurityAttributesInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x140546170 (NtQuerySecurityAttributesToken.c)
 *     NtQuerySecurityPolicy @ 0x14078BF64 (NtQuerySecurityPolicy.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeCaptureUnicodeStringStructures @ 0x1405465A0 (SeCaptureUnicodeStringStructures.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureUnicodeStringArray(__int64 a1, unsigned int a2, unsigned __int8 a3, _QWORD *a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned int v9; // edx
  SIZE_T v10; // rdx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // r15
  unsigned int v13; // r8d
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // r14
  char *v16; // rsi
  unsigned __int16 v17; // cx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  void *Src; // [rsp+28h] [rbp-50h] BYREF
  char *v21; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v6 = 0;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
  {
    *a4 = a1;
    return 0LL;
  }
  result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
  if ( (int)result >= 0 )
  {
    v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF )
      v9 = -1;
    else
      v9 = 16 * v5;
    if ( v8 > 0xFFFFFFFF )
    {
      if ( a3 == 1 && Src )
        ExFreePoolWithTag(Src, 0);
      return 3221225621LL;
    }
    else if ( ((v9 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < v9 )
    {
      if ( a3 == 1 && Src )
        ExFreePoolWithTag(Src, 0);
      return 3221225621LL;
    }
    else
    {
      v10 = (v9 + 1) & 0xFFFFFFFE;
      v11 = 0;
      v12 = (unsigned __int16 *)Src;
      while ( v11 < (unsigned int)v5 )
      {
        v13 = v10 + *((unsigned __int16 *)Src + 8 * v11);
        if ( v13 < (unsigned int)v10 )
        {
          if ( a3 == 1 && Src )
          {
            ExFreePoolWithTag(Src, 0);
            return 3221225621LL;
          }
          return 3221225621LL;
        }
        v10 = v13;
        ++v11;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x74416553u);
      v15 = PoolWithTag;
      P = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v12, 16 * v5);
        v16 = (char *)(((unsigned __int64)&v15[v8 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        v21 = v16;
        while ( v6 < (unsigned int)v5 )
        {
          v17 = v12[8 * v6];
          if ( v17 )
          {
            v18 = *(_QWORD *)&v12[8 * v6 + 4];
            if ( (v18 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v19 = v18 + v17;
            if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v17 = v12[8 * v6];
            }
          }
          memmove(v16, *(const void **)&v12[8 * v6 + 4], v17);
          v15[2 * v6 + 1] = v16;
          WORD1(v15[2 * v6]) = v15[2 * v6];
          v16 += v12[8 * v6];
          v21 = v16;
          ++v6;
        }
        if ( a3 == 1 && v12 )
          ExFreePoolWithTag(v12, 0);
        *a4 = v15;
        return 0LL;
      }
      if ( a3 == 1 && v12 )
        ExFreePoolWithTag(v12, 0);
      return 3221225626LL;
    }
  }
  return result;
}
