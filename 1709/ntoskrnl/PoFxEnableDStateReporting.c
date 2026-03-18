/*
 * XREFs of PoFxEnableDStateReporting @ 0x1406F7D00
 * Callers:
 *     <none>
 * Callees:
 *     PoFxStartDevicePowerManagement @ 0x140150FF0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopFxRegisterDevice @ 0x1405CA0E4 (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxEnableDStateReporting(struct _DEVICE_OBJECT *Object)
{
  int v2; // ebx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v5[64]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v6[7]; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v7[3]; // [rsp+C8h] [rbp+2Fh] BYREF

  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    memset(v6, 0, sizeof(v6));
    HIDWORD(v6[3]) = 1;
    memset(v7, 0, sizeof(v7));
    v6[4] = v7;
    v2 = PopFxRegisterDevice(Object, (int)v5, (int)v6, 1, 0LL, 0LL, BugCheckParameter2);
    if ( v2 >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2[0] + 624) |= 1u;
      PoFxStartDevicePowerManagement(BugCheckParameter2[0]);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
