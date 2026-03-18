/*
 * XREFs of SmCrEncCleanup @ 0x140445364
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400067F4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     BCryptCloseAlgorithmProvider @ 0x140147534 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x14025DAF0 (BCryptDestroyKey.c)
 */

void __fastcall SmCrEncCleanup(__int64 a1, ULONG a2)
{
  struct _PRIVILEGE_SET *v3; // rcx
  void *v4; // rcx
  struct _PRIVILEGE_SET *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx

  v3 = *(struct _PRIVILEGE_SET **)(a1 + 16);
  if ( v3 )
    MiDeleteSubsection(v3);
  v4 = *(void **)(a1 + 32);
  if ( v4 )
    BCryptDestroyKey(v4);
  v5 = *(struct _PRIVILEGE_SET **)(a1 + 40);
  if ( v5 )
    MiDeleteSubsection(v5);
  v6 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v6 )
    MiDeleteSubsection(v6);
  if ( *(_QWORD *)a1 )
    BCryptCloseAlgorithmProvider(*(BCRYPT_ALG_HANDLE *)a1, a2);
}
