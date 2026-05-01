/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180147DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180146EF0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 */

CWRLExecuteCommandBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        CWRLExecuteCommandBase *Block,
        char a2)
{
  *((_DWORD *)Block + 29) = -1073741823;
  CWRLExecuteCommandBase::~CWRLExecuteCommandBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
