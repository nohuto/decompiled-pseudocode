/*
 * XREFs of ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x180199D90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1801A46A8 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged(__int64 a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v3; // rdi

  v3 = (RTL_SRWLOCK *)(a1 + 472);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 472));
  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a1 + 464) = 1;
      break;
    case 2:
      *(_DWORD *)(a1 + 464) = 2;
      break;
    case 4:
      *(_DWORD *)(a1 + 464) = 3;
      break;
    case 8:
      *(_DWORD *)(a1 + 464) = 4;
      break;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( a3 == 1 )
    KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(a1 + 480));
  return 0LL;
}
