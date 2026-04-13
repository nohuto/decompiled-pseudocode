/*
 * XREFs of ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800B3CCC
 * Callers:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B3CC4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x1800B3D34 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, int a3, void (*a4)(void *))
{
  int v4; // ebx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a2 * a3];
  while ( --v4 >= 0 )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
