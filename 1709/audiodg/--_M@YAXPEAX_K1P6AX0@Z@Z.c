/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14001CEB8
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140016700 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1400300D0 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x14001CF24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
