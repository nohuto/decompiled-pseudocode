/*
 * XREFs of PolicyConfigSetPropertyValue @ 0x180045C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall PolicyConfigSetPropertyValue(
        __int64 a1,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        const struct tagPROPVARIANT *a5)
{
  int (*v5)(CPolicyConfig *__hidden, const unsigned __int16 *, int, const struct _tagpropertykey *, const struct tagPROPVARIANT *); // rax

  v5 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(*(_QWORD *)g_PolicyConfig + 96LL);
  if ( v5 == CPolicyConfig::SetPropertyValue )
    return CPolicyConfig::SetPropertyValue(g_PolicyConfig, a2, a3, a4, a5);
  else
    return ((__int64 (__fastcall *)(CPolicyConfig *))v5)(g_PolicyConfig);
}
