/*
 * XREFs of FreellegalIOAddressList @ 0x1C00AF470
 * Callers:
 *     InitIllegalIOAddressListFromHAL @ 0x1C00ACABC (InitIllegalIOAddressListFromHAL.c)
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
