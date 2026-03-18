/*
 * XREFs of IsMouseButtonDown @ 0x1C012E290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char IsMouseButtonDown()
{
  __int64 v0; // rax

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v0 )
    LOBYTE(v0) = *(_DWORD *)(v0 + 2688) != 0;
  return v0;
}
