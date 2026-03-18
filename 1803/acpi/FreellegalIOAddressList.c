/*
 * XREFs of FreellegalIOAddressList @ 0x1C009C2E8
 * Callers:
 *     InitIllegalIOAddressListFromHAL @ 0x1C009C330 (InitIllegalIOAddressListFromHAL.c)
 * Callees:
 *     <none>
 */

void FreellegalIOAddressList()
{
  if ( gpBadIOAddressList )
  {
    ExFreePoolWithTag(gpBadIOAddressList, 0);
    gpBadIOAddressList = 0LL;
  }
  if ( gpBadIOErrorLogDoneList )
  {
    ExFreePoolWithTag(gpBadIOErrorLogDoneList, 0);
    gpBadIOErrorLogDoneList = 0LL;
  }
}
