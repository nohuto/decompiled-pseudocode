/*
 * XREFs of ??$_Assign_range@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x1801A9D30
 * Callers:
 *     ??4?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AA060 (--4-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 * Callees:
 *     ?_Buy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAA_N_K@Z @ 0x18008C490 (-_Buy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$bas.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18008C8B4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801A9EC4 (--$_Uninitialized_copy_al_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x18021F4F8 (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 */

void __fastcall std::vector<std::wstring>::_Assign_range<std::wstring *>(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  char *v3; // rbx
  char *v4; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 *v9; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rbp
  char *v15; // rdi
  __int64 i; // rbx

  v3 = (char *)*a1;
  v4 = (char *)a1[1];
  v5 = ((char *)a3 - (char *)a2) >> 5;
  v6 = (__int64)&v4[-*a1] >> 5;
  v7 = (a1[2] - *a1) >> 5;
  v9 = a2;
  if ( v5 > v7 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v11 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
            a1,
            v5);
    if ( v3 )
    {
      if ( v3 != v4 )
      {
        do
        {
          std::wstring::_Tidy_deallocate((__int64)v3);
          v3 += 32;
        }
        while ( v3 != v4 );
        v3 = (char *)*a1;
      }
      std::_Deallocate(v3, v7, 0x20uLL);
    }
    std::vector<std::wstring>::_Buy(a1, v11);
    v12 = *a1;
    v13 = v9;
LABEL_15:
    a1[1] = std::_Uninitialized_copy_al_unchecked<std::wstring *,std::wstring *,std::allocator<std::wstring>>(
              v13,
              a3,
              v12);
    return;
  }
  if ( v5 > v6 )
  {
    v14 = &a2[4 * v6];
    if ( a2 != v14 )
    {
      do
      {
        std::wstring::operator=((void **)v3, v9);
        v3 += 32;
        v9 += 4;
      }
      while ( v9 != v14 );
      v4 = (char *)a1[1];
    }
    v12 = (__int64)v4;
    v13 = v14;
    goto LABEL_15;
  }
  v15 = &v3[32 * v5];
  if ( a2 != a3 )
  {
    do
    {
      std::wstring::operator=((void **)v3, v9);
      v3 += 32;
      v9 += 4;
    }
    while ( v9 != a3 );
    v4 = (char *)a1[1];
  }
  for ( i = (__int64)v15; (char *)i != v4; i += 32LL )
    std::wstring::_Tidy_deallocate(i);
  a1[1] = (__int64)v15;
}
