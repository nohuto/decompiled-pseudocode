/*
 * XREFs of SepCaptureFqbnArray @ 0x14072C2F0
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14046C82C (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureFqbnArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v5; // r12
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned __int16 *PoolWithTag; // rbx
  SIZE_T v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r15d
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  char *v18; // rsi
  unsigned int i; // edi
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx

  v5 = 24LL * a2;
  v6 = 0xFFFFFFFFLL;
  if ( v5 <= 0xFFFFFFFF )
    v6 = (unsigned int)v5;
  v7 = -1073741675;
  result = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( (_DWORD)v6 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v6] > 0x7FFFFFFF0000LL || &Src[v6] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src, (unsigned int)v6);
    if ( ((v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
      goto LABEL_13;
    v10 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
    v11 = 0LL;
    v12 = a2;
    while ( 1 )
    {
      v13 = v10;
      if ( (unsigned int)v11 >= a2 )
        break;
      v14 = v10 + PoolWithTag[12 * v11 + 4];
      v15 = -1;
      if ( v14 >= (unsigned int)v10 )
        v15 = v10 + PoolWithTag[12 * v11 + 4];
      v10 = v15;
      if ( v14 < v13 )
        goto LABEL_13;
      v11 = (unsigned int)(v11 + 1);
    }
    v16 = ExAllocatePoolWithTag(PagedPool, v10, 0x74416553u);
    v17 = v16;
    if ( !v16 )
    {
      v7 = -1073741670;
LABEL_13:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v7;
    }
    memmove(v16, PoolWithTag, v5);
    v18 = (char *)(((unsigned __int64)&v17[v5 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    for ( i = 0; i < v12; ++i )
    {
      v20 = PoolWithTag[12 * i + 4];
      if ( v20 )
      {
        v21 = *(_QWORD *)&PoolWithTag[12 * i + 8];
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v21 + v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(v18, *(const void **)&PoolWithTag[12 * i + 8], PoolWithTag[12 * i + 4]);
      v17[3 * i + 2] = v18;
      v18 += PoolWithTag[12 * i + 4];
      v12 = a2;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    *a4 = v17;
    return 0LL;
  }
  return result;
}
