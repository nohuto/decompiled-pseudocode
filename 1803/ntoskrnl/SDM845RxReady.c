/*
 * XREFs of SDM845RxReady @ 0x1402CBDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall SDM845RxReady(__int64 *a1)
{
  char v1; // bl
  __int64 v2; // rdi
  int v3; // eax

  v1 = 0;
  if ( !a1 )
    return 0;
  v2 = *a1;
  if ( !*a1 )
    return 0;
  if ( dword_1403EBF60 )
    return 1;
  v3 = ((__int64 (__fastcall *)(__int64))off_140399430[0])(v2 + 2052);
  if ( (v3 & 0x70000000) != 0
    || (v3 & 0x1FFFFFF) != 0
    || (((__int64 (__fastcall *)(__int64))off_140399430[0])(v2 + 1600) & 0x4000000) != 0
    && ((unsigned int (__fastcall *)(__int64))off_140399430[0])(v2 + 2064) )
  {
    return 1;
  }
  return v1;
}
