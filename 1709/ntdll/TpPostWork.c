/*
 * XREFs of TpPostWork @ 0x180047120
 * Callers:
 *     LdrpQueueWork @ 0x18004B450 (LdrpQueueWork.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpPostWork(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  _PEB_LDR_DATA *v4; // rdx
  int ShutdownThreadId; // eax

  v4 = Ldr;
  if ( !Ldr )
    return TppRaiseInvalidParameter(Ldr, v4, a3, a4);
  ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
  if ( (ShutdownThreadId & 0x10000) != 0 )
    return TppRaiseInvalidParameter(Ldr, v4, a3, a4);
  if ( (ShutdownThreadId & 0x20000) != 0 )
    return TppRaiseInvalidParameter(Ldr, v4, a3, a4);
  if ( Ldr->SsHandle != TppWorkpCleanupGroupMemberVFuncs )
    return TppRaiseInvalidParameter(Ldr, v4, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return TppRaiseInvalidParameter(Ldr, v4, a3, a4);
  else
    return TppWorkPost(v4);
}
