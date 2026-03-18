/*
 * XREFs of ?Thunk_Reply_PrepareConnection_11@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@@SAJPEAXPEAPEAX@Z @ 0x1C006BF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Thunk_Reply_PrepareConnection_11(
        __int64 a1,
        int **a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = **a2;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = a2[2];
  result = 0LL;
  CoreMessagingK::RegistrarClient::s_Reply_Result = v2;
  return result;
}
