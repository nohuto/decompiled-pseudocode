/*
 * XREFs of ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180021000
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180020F40 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SstpStateChangeTriage(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v7; // edx
  __int64 v8; // r11

  v7 = 0;
  while ( 1 )
  {
    v8 = 32LL * v7;
    if ( *(_QWORD *)&a4[v8 + 24] == a1 )
      break;
    if ( ++v7 >= 6 )
      return 0LL;
  }
  (*(void (__fastcall **)(struct _WNF_STATE_NAME, _QWORD, struct _WNF_TYPE_ID *, char *, const void *, unsigned int))&a4[v8 + 32])(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6);
  return 0LL;
}
