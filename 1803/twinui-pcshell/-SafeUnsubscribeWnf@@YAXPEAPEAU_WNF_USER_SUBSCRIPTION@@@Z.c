/*
 * XREFs of ?SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801888C0
 * Callers:
 *     ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x180188D60 (-UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SafeUnsubscribeWnf(struct _WNF_USER_SUBSCRIPTION **a1)
{
  __int64 v1; // rax

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    RtlUnsubscribeWnfNotificationWaitForCompletion(v1);
  }
}
