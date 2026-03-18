/*
 * XREFs of IsCapturedBySystem @ 0x1C00985F0
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r10d

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
  v3 = 0;
  if ( v2 )
    return CInputDest::operator==((int *)(v2 + 2544), a1) != 0;
  return v3;
}
