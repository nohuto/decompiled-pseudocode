/*
 * XREFs of ??_G?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@UEAAPEAXI@Z @ 0x180079310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x1800791F8 (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>::`scalar deleting destructor'(
        _QWORD *Block,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(
    Block,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
