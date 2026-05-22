/*
 * XREFs of ??1?$list@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@2@@std@@QEAA@XZ @ 0x18000A5CC
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$11 @ 0x1800CCA58 (_TestCommandHost--TestCommandHost_--_1_--dtor$11.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$14 @ 0x1800CE6A7 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$14.c)
 *     _InputAttemptedTargetManager::InputAttemptedTargetManager_::_1_::dtor$11 @ 0x1800D065B (_InputAttemptedTargetManager--InputAttemptedTargetManager_--_1_--dtor$11.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::list<std::pair<unsigned int const,tagInputRoutingInfo>>::~list<std::pair<unsigned int const,tagInputRoutingInfo>>(
        void **a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = *a1;
  v3 = *(_QWORD **)*a1;
  *v1 = v1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v3 != *a1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != *a1 );
  }
  operator delete(*a1);
}
