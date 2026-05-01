/*
 * XREFs of ?EndAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18008B840
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::EndAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this)
{
  __int64 v2; // rcx

  v2 = *((unsigned int *)this + 8);
  if ( (_DWORD)v2 )
  {
    DwmpEndTransitionRequest(v2);
    *((_DWORD *)this + 8) = 0;
  }
  return 0LL;
}
