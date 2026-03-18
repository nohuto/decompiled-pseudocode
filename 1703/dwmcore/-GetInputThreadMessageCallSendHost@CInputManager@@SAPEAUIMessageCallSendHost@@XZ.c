/*
 * XREFs of ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x180189B30
 * Callers:
 *     ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x18017BED0 (-PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     <none>
 */

struct IMessageCallSendHost *__fastcall CInputManager::GetInputThreadMessageCallSendHost(CMit *a1)
{
  CISMInputThread *v1; // rcx

  if ( (dword_18023E9D0 & 4) != 0 )
    return CMit::MessageCallSendHost(a1);
  if ( CInputManager::s_pInputManager )
  {
    v1 = (CISMInputThread *)*((_QWORD *)CInputManager::s_pInputManager + 28);
    if ( v1 )
      return CISMInputThread::MessageCallSendHost(v1);
  }
  return 0LL;
}
