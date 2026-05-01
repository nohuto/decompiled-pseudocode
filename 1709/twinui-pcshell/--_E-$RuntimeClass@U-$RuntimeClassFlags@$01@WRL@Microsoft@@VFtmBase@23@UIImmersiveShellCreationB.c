/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationBehavior@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DF6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x1800059F4 (--1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

CApplicationManager::ACTIVATION_STACK_DATA *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::`vector deleting destructor'(
        CApplicationManager::ACTIVATION_STACK_DATA *Block,
        char a2)
{
  *((_DWORD *)Block + 13) = -1073741823;
  CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
