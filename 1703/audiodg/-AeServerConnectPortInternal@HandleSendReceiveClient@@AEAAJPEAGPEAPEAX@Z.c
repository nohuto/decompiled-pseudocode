/*
 * XREFs of ?AeServerConnectPortInternal@HandleSendReceiveClient@@AEAAJPEAGPEAPEAX@Z @ 0x1400467A8
 * Callers:
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140046890 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 */

NTSTATUS __fastcall HandleSendReceiveClient::AeServerConnectPortInternal(
        HandleSendReceiveClient *this,
        unsigned __int16 *a2,
        void **a3)
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v6[10]; // [rsp+70h] [rbp-68h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    memset(v6, 0, 0x48uLL);
    *a3 = 0LL;
    LODWORD(v6[1]) = 0;
    v6[2] = 48LL;
    HIDWORD(v6[0]) = 12;
    WORD2(v6[1]) = 257;
    return NtAlpcConnectPort(a3, &DestinationString, 0LL, v6, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
