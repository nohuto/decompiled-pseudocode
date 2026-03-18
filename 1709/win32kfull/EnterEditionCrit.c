/*
 * XREFs of EnterEditionCrit @ 0x1C01153C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterEditionCrit(unsigned int a1)
{
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return 1LL;
  EnterCrit(a1, 1LL);
  EnterDeviceInfoListCrit_();
  return 0LL;
}
