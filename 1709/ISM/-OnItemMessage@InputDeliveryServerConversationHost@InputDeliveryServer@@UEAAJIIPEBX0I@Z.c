/*
 * XREFs of ?OnItemMessage@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x1800815B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServerConversationHost::OnItemMessage(
        InputDeliveryServer **this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        struct InputDeliveryServerMessage *a5,
        unsigned int a6)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a6 != 72 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\InputDeliveryServer.h",
      a4);
    JUMPOUT(0x1800815E3LL);
  }
  return InputDeliveryServer::OnAppThreadMessage(this[2], a5);
}
