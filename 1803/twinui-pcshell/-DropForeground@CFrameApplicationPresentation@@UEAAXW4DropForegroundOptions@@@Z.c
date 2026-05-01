/*
 * XREFs of ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x180136AF0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___ @ 0x180135FFC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::DropForeground(unsigned int *a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v3) = a2;
  *(_QWORD *)&v3 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_6bdb0a767824ae94d9b9ef25c3406932___(a1, &v3);
}
