/*
 * XREFs of BgQueryBootGraphicsInformation @ 0x140164DD4
 * Callers:
 *     BgkQueryBootGraphicsInformation @ 0x14083B524 (BgkQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140164E84 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int BootGraphicsInformation; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 || a1 >= 4 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_14039D7F0 & 1) != 0 )
    BootGraphicsInformation = BgpFwQueryBootGraphicsInformation((unsigned int)a1, a2);
  else
    BootGraphicsInformation = -1073741823;
  BgpFwReleaseLock();
  return BootGraphicsInformation;
}
