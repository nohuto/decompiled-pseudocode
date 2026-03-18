/*
 * XREFs of DbgkpInitializePhase1SiloState @ 0x1405C4710
 * Callers:
 *     DbgkInitializeServerSilo @ 0x1406A98F0 (DbgkInitializeServerSilo.c)
 *     DbgkpInitializePhase1 @ 0x14083EE04 (DbgkpInitializePhase1.c)
 * Callees:
 *     DbgkpCreateNotificationEvent @ 0x1405C474C (DbgkpCreateNotificationEvent.c)
 */

__int64 __fastcall DbgkpInitializePhase1SiloState(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v5; // [rsp+28h] [rbp-10h]

  v4 = 4718662;
  v5 = L"\\KernelObjects\\SystemErrorPortReady";
  v1 = DbgkpCreateNotificationEvent(&v4, a1 + 24);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
