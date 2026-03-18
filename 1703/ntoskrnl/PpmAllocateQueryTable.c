/*
 * XREFs of PpmAllocateQueryTable @ 0x1406D5948
 * Callers:
 *     PpmRegisterSpmSettings @ 0x1406D5EF0 (PpmRegisterSpmSettings.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PpmAllocateQueryTable(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  wchar_t **v4; // rdx
  __int64 v5; // r9
  char *v6; // rcx
  char *v7; // r8
  wchar_t *v8; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x4E8uLL, 0x704D5053u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4E8uLL);
    v4 = &PpmPolicyAliasList;
    v5 = 20LL;
    v6 = v3 + 24;
    v7 = v3 + 1176;
    do
    {
      v8 = *v4;
      v4 += 2;
      *(_QWORD *)v6 = v7;
      v7 += 4;
      *((_QWORD *)v6 - 1) = v8;
      *((_QWORD *)v6 + 2) = a1;
      *((_DWORD *)v6 + 6) = 4;
      *((_DWORD *)v6 + 2) = 67108868;
      *((_DWORD *)v6 - 4) = 288;
      v6 += 56;
      --v5;
    }
    while ( v5 );
  }
  return v3;
}
