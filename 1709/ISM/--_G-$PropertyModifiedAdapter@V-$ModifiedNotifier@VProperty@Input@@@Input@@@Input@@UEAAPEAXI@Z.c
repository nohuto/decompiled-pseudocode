/*
 * XREFs of ??_G?$PropertyModifiedAdapter@V?$ModifiedNotifier@VProperty@Input@@@Input@@@Input@@UEAAPEAXI@Z @ 0x180023EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall Input::PropertyModifiedAdapter<Input::ModifiedNotifier<Input::Property>>::`scalar deleting destructor'(
        void **Block,
        char a2)
{
  *Block = &Input::Property::`vftable';
  operator delete(Block[4]);
  Block[4] = 0LL;
  *((_DWORD *)Block + 11) = 0;
  *((_DWORD *)Block + 10) = 0;
  operator delete(Block[4]);
  Block[4] = 0LL;
  *((_DWORD *)Block + 11) = 0;
  *((_DWORD *)Block + 10) = 0;
  *Block = &Input::PropertyNode::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
