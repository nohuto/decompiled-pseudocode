/*
 * XREFs of AVrfpFindClosestThunkDuplicate @ 0x1800DAE88
 * Callers:
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800DA91C (AVrfpChainDuplicateVerificationLayers.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     _stricmp @ 0x180091FF0 (_stricmp.c)
 *     _wcsicmp @ 0x1800925A0 (_wcsicmp.c)
 */

const char *__fastcall AVrfpFindClosestThunkDuplicate(__int64 a1, const wchar_t *a2, const char *a3)
{
  __int64 *v3; // rdi
  const wchar_t *v5; // rsi
  __int64 *v6; // rbp
  _QWORD *v7; // rbp
  unsigned int v8; // r14d
  _QWORD *v9; // rbx
  const char **v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rbx
  const char **v13; // r15

  v3 = *(__int64 **)(a1 + 8);
  v5 = a2;
  do
  {
LABEL_17:
    if ( v3 == &AVrfpVerifierProvidersList )
      return 0LL;
    v6 = v3;
    v3 = (__int64 *)v3[1];
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: searching in %ws\n", v6[3]);
    v7 = (_QWORD *)v6[5];
    v8 = 0;
  }
  while ( !*v7 );
  v9 = v7;
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
    {
      v9 = &v7[4 * v8];
      DbgPrint("AVRF: chain: dll: %ws\n", *v9);
    }
    if ( wcsicmp((const wchar_t *)*v9, v5) )
      goto LABEL_16;
    v10 = (const char **)v9[3];
    LODWORD(v11) = 0;
    if ( *v10 )
      break;
LABEL_15:
    v5 = a2;
LABEL_16:
    v9 = &v7[4 * ++v8];
    if ( !*v9 )
      goto LABEL_17;
  }
  v12 = 0LL;
  v13 = v10;
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
    {
      v13 = &v10[3 * v12];
      DbgPrint("AVRF: chain: thunk: %s == %s ?\n", *v13, a3);
    }
    if ( !stricmp(*v13, a3) )
      break;
    v11 = (unsigned int)(v11 + 1);
    v12 = (unsigned int)v11;
    v13 = &v10[3 * v11];
    if ( !*v13 )
      goto LABEL_15;
  }
  if ( (AVrfpDebug & 0x20) != 0 )
    DbgPrint("AVRF: Found duplicate for (%ws: %s) in %ws\n", a2, a3, v7[4 * v8]);
  return v10[3 * v12 + 2];
}
