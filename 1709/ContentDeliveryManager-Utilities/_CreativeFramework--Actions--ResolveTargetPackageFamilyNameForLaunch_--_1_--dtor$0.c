/*
 * XREFs of _CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch_::_1_::dtor$0 @ 0x1800BAC5C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18003EECC (--1-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::pair<std::wstring,std::wstring>::~pair<std::wstring,std::wstring>(*(_QWORD *)(a2 + 48));
  }
}
