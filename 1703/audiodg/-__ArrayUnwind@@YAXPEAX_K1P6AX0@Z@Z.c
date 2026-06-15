/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x14001D1B4
 * Callers:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14001D148 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     _o_terminate_0 @ 0x14001DC3E (_o_terminate_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    a4(a1);
  }
}
