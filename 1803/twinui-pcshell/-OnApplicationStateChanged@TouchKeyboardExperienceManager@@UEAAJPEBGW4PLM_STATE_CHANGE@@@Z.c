/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18023F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnhancingXamlSipExperience@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241454 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnhancingXamlSipExperience@@@wil@@CA.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024B61C (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024D448 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  v5 = (RTL_SRWLOCK *)(a1 + 496);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 496));
  if ( a3 == 1 )
  {
    wil::Feature<__WilFeatureTraits_Feature_EnhancingXamlSipExperience>::ReportUsageToService((unsigned int)(a3 - 1));
    *(_DWORD *)(a1 + 488) = *(_DWORD *)(a1 + 488) != 4;
  }
  else
  {
    v6 = (unsigned int)(a3 - 2);
    if ( a3 == 2 )
    {
      *(_DWORD *)(a1 + 488) = 2;
    }
    else
    {
      v6 = (unsigned int)(a3 - 4);
      if ( a3 == 4 )
      {
        *(_DWORD *)(a1 + 488) = 3;
      }
      else if ( a3 == 8 )
      {
        *(_DWORD *)(a1 + 488) = 4;
      }
    }
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  wil::Feature<__WilFeatureTraits_Feature_EnhancingXamlSipExperience>::ReportUsageToService(v6);
  if ( a3 == 1 )
  {
    KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(a1 + 504));
  }
  else if ( a3 == 8 )
  {
    v7 = (_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 336) = 0LL;
    if ( *(_QWORD *)(a1 + 344) >= 8uLL )
      v7 = (_QWORD *)*v7;
    *(_WORD *)v7 = 0;
    v8 = *(_QWORD **)(a1 + 504);
    v9 = v8 + 33;
    v8[35] = 0LL;
    if ( v8[36] >= 8uLL )
      v9 = (_QWORD *)*v9;
    *(_WORD *)v9 = 0;
    KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)v8, &word_18035ABCC);
  }
  return 0LL;
}
