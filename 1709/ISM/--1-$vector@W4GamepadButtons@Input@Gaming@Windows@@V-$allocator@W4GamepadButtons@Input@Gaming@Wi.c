/*
 * XREFs of ??1?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAA@XZ @ 0x18002B640
 * Callers:
 *     ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078 (-Reset@CShellEdgyImpl@@QEAAXXZ.c)
 *     ??1?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@XZ @ 0x180041FD8 (--1-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@QEAA@XZ.c)
 *     ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x180042490 (--_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z.c)
 *     ??_EInputQueue@@EEAAPEAXI@Z @ 0x180081120 (--_EInputQueue@@EEAAPEAXI@Z.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180082B08 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x180083F30 (-GetAllAncestors@ViewHierarchy@@UEBA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     _std::vector_std::pair_unsigned_short_bool__std::allocator_std::pair_unsigned_short_bool_____::_Range_construct_or_tidy_std::pair_unsigned_short_bool__const_____ptr64__::_1_::catch$44 @ 0x1800CE93D (_std--vector_std--pair_unsigned_short_bool__std--allocator_std--pair_unsigned_short_bool_____--_.c)
 *     _ViewMenuChordedKeyHandler::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800CE993 (_ViewMenuChordedKeyHandler--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _InputAttemptedTargetManager::ProcessInputAttempt_::_1_::dtor$0 @ 0x1800D06BD (_InputAttemptedTargetManager--ProcessInputAttempt_--_1_--dtor$0.c)
 *     _ViewHierarchy::GetAllAncestors_::_1_::dtor$0 @ 0x1800D0804 (_ViewHierarchy--GetAllAncestors_--_1_--dtor$0.c)
 *     _MPCInputRouter::Update3DFocusWNF_::_1_::dtor$1 @ 0x1800D1986 (_MPCInputRouter--Update3DFocusWNF_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__ @ 0x1800D2860 (_dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<enum Windows::Gaming::Input::GamepadButtons>::~vector<enum Windows::Gaming::Input::GamepadButtons>(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) >> 2;
    if ( v3 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18002B6B4LL);
  }
}
