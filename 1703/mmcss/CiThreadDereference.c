/*
 * XREFs of CiThreadDereference @ 0x1C000B2F0
 * Callers:
 *     CiThreadNotification @ 0x1C0001AE0 (CiThreadNotification.c)
 *     CiThreadCreate @ 0x1C000A7C0 (CiThreadCreate.c)
 *     CiDispatchClose @ 0x1C000B240 (CiDispatchClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadDereference(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // zf
  bool v3; // sf
  bool v4; // of
  signed __int64 v5; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = __OFSUB__(v1, 1LL);
  v2 = v1 == 1;
  v3 = v1 - 1 < 0;
  v5 = v1 - 1;
  if ( v3 ^ v4 | v2 )
  {
    if ( v5 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0x4873634Du);
  }
}
