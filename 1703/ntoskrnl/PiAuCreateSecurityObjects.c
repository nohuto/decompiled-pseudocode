/*
 * XREFs of PiAuCreateSecurityObjects @ 0x14081D098
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PiAuFreeUserSids @ 0x14081D0F4 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x14081D17C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateUserSids @ 0x14081D310 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 */

__int64 PiAuCreateSecurityObjects()
{
  int UserSids; // ebx
  _BYTE v2[72]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, 0x38uLL);
  UserSids = PiAuCreateUserSids(v2);
  if ( UserSids >= 0 )
  {
    UserSids = PiAuCreateStandardSecurityObject(v2);
    if ( UserSids >= 0 )
      UserSids = PiAuCreateLocalSystemSecurityObject(v2);
  }
  PiAuFreeUserSids(v2);
  return (unsigned int)UserSids;
}
