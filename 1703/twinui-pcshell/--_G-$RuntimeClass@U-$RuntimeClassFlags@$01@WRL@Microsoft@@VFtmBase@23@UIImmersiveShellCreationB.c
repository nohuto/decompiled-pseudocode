/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationBehavior@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800CB590
 * Callers:
 *     <none>
 * Callees:
 *     ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180005734 (--1OWNERSHIP_CHANGE_INFO@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

OWNERSHIP_CHANGE_INFO *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        OWNERSHIP_CHANGE_INFO *Block,
        char a2)
{
  *((_DWORD *)Block + 9) = -1073741823;
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
