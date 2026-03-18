/*
 * XREFs of ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0085DD4
 * Callers:
 *     IsDwmInputThread @ 0x1C00168B0 (IsDwmInputThread.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CInputManager::IsDwmInputThread(struct _ETHREAD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( g_pInputManager )
    return *((_QWORD *)g_pInputManager + 1) == (_QWORD)a1;
  return result;
}
