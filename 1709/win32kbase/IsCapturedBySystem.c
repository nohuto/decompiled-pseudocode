/*
 * XREFs of IsCapturedBySystem @ 0x1C00A25E0
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  v3 = 0;
  if ( v2 )
    return CInputDest::operator==((int *)(v2 + 2696), a1) != 0;
  return v3;
}
