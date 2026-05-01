/*
 * XREFs of ??$_Assign_range@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x18013749C
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1801376B0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@0PEAV12@AEAU?$_Wrap_alloc@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18013734C (--$_Uninitialized_copy_al_unchecked1@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@Compos.c)
 *     ??$_Copy_unchecked@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@YAPEAV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@0PEAV12@@Z @ 0x1801373D8 (--$_Copy_unchecked@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     ?Release@?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x180139AC4 (-Release@-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>::_Assign_range<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * *>(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  char *v3; // r14
  char *v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  size_t v14; // rbx
  void *v15; // rax
  _QWORD *v16; // rcx
  char *v17; // r8
  _QWORD *v18; // rcx
  char *v19; // r8
  unsigned __int64 v20; // rbx
  __int64 result; // rax
  char *v22; // rbx
  char *v23; // rbp
  char *i; // r14
  __int64 v25; // rcx

  v3 = *(char **)a1;
  v4 = *(char **)(a1 + 8);
  v5 = (__int64)(a3 - (_QWORD)a2) >> 3;
  v6 = (__int64)&v4[-*(_QWORD *)a1] >> 5;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 5;
  if ( v5 > v7 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v11 = v7 >> 1;
    if ( v7 <= 0x7FFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v12 = v11 + v7;
      if ( v11 + v7 < v5 )
        v12 = (__int64)(a3 - (_QWORD)a2) >> 3;
      v5 = v12;
    }
    if ( v3 )
    {
      while ( v3 != v4 )
      {
        Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release(v3);
        v13 = *((_QWORD *)v3 + 1);
        if ( v13 )
        {
          *((_QWORD *)v3 + 1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( *(_QWORD *)v3 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 16LL))(*(_QWORD *)v3);
        v3 += 32;
      }
      std::_Deallocate(*(char **)a1, v7, 0x20uLL);
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v5 )
    {
      if ( v5 > 0x7FFFFFFFFFFFFFFLL )
        std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
      v14 = 32 * v5;
      if ( v14 < 0x1000 )
      {
        v16 = operator new(v14);
      }
      else
      {
        if ( v14 + 39 < v14 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v15 = operator new(v14 + 39);
        v16 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v16 - 1) = v15;
      }
      *(_QWORD *)a1 = v16;
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = v14 + *(_QWORD *)a1;
    }
    v17 = *(char **)a1;
    v18 = a2;
    goto LABEL_27;
  }
  v19 = *(char **)a1;
  if ( v5 > v6 )
  {
    v20 = (unsigned __int64)&a2[v6];
    std::_Copy_unchecked<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * *,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *>(
      a2,
      v20,
      (__int64)v19);
    v17 = *(char **)(a1 + 8);
    v18 = (_QWORD *)v20;
LABEL_27:
    result = std::_Uninitialized_copy_al_unchecked1<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * *,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *,std::allocator<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>(
               v18,
               a3,
               (__int64)v17);
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  v22 = &v3[32 * v5];
  result = std::_Copy_unchecked<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * *,Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1> *>(
             a2,
             a3,
             (__int64)v19);
  v23 = *(char **)(a1 + 8);
  for ( i = v22; i != v23; i += 32 )
  {
    result = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::Release(i);
    v25 = *((_QWORD *)i + 1);
    if ( v25 )
    {
      *((_QWORD *)i + 1) = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    if ( *(_QWORD *)i )
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)i + 16LL))(*(_QWORD *)i);
  }
  *(_QWORD *)(a1 + 8) = v22;
  return result;
}
