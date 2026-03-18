/*
 * XREFs of PopSaveHiberContextWrapper @ 0x140188D80
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveStateForHibernate @ 0x140181F40 (KeSaveStateForHibernate.c)
 *     PopHiberCheckResume @ 0x1404335B0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 */

__int64 __fastcall PopSaveHiberContextWrapper(PVOID Address)
{
  PVOID v1; // rbp
  bool v2; // zf
  __int64 result; // rax

  if ( !__readgsdword(0x1A4u) )
  {
    v1 = Address;
    KeSaveStateForHibernate((__int64)&PoWakeState);
    v2 = (unsigned __int8)PopHiberCheckResume() == 0;
    result = 1073742484LL;
    if ( !v2 )
      return result;
    Address = v1;
  }
  return PopSaveHiberContext(Address);
}
