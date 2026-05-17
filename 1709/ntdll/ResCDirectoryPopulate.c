/*
 * XREFs of ResCDirectoryPopulate @ 0x18008EB98
 * Callers:
 *     ResCDirectoryCreateAndPopulate @ 0x18008EB14 (ResCDirectoryCreateAndPopulate.c)
 * Callees:
 *     ResCDirectoryValidateHeader @ 0x18008EC38 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryPopulate(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  if ( !(unsigned int)ResCDirectoryValidateHeader(a2, a3) )
    return 0LL;
  a1[3] = a2;
  a1[4] = a2 + 104;
  v5 = 32LL * *(unsigned int *)(a2 + 52) + a2 + 104;
  a1[5] = v5;
  result = 1LL;
  a1[6] = v5 + 2LL * *(unsigned int *)(a2 + 56);
  return result;
}
