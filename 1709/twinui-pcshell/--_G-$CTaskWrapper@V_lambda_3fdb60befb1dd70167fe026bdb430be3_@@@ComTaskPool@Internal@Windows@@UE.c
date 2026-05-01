/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_3fdb60befb1dd70167fe026bdb430be3_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18019F410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800277DC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

unsigned __int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_3fdb60befb1dd70167fe026bdb430be3_>::`scalar deleting destructor'(
        unsigned __int64 *Block,
        char a2)
{
  std::wstring::~wstring(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
