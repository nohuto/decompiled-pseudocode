/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z @ 0x1C0126910
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        int a1,
        int a2,
        char a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        void *a7)
{
  __int64 v11; // rcx

  HMValidateHandleNoSecure((unsigned __int64)a7, 19);
  v11 = a2 != 0;
  if ( a4 || !a3 )
  {
    if ( a1 && (a5 & 0x10E7) == 0x10E7 )
      v11 = 4327LL;
  }
  else
  {
    LOWORD(v11) = v11 | 0x40;
  }
  LOWORD(v11) = (a5 >> 7) & 2 | v11;
  InputExtensibilityCallout::CoreMsgSendMessage(v11, 9);
}
