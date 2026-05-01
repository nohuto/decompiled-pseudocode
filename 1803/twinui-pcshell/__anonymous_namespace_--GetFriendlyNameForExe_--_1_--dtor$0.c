/*
 * XREFs of __anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor$0 @ 0x18026585E
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1800F5E94 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString(*(HSTRING **)(a2 + 72));
  }
}
