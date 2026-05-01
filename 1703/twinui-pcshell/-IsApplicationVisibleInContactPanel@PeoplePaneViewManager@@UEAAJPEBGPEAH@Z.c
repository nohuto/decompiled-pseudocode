/*
 * XREFs of ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1800EABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1800EA854 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::IsApplicationVisibleInContactPanel(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        int *a3)
{
  PeoplePaneViewManager *v5; // rcx
  char *Ptr; // rbx
  char *i; // rdi
  int v9; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF
  int *v11; // [rsp+60h] [rbp+18h]

  v11 = a3;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  Ptr = (char *)this[6].Ptr;
  for ( i = (char *)this[5].Ptr; i != Ptr; i += 16 )
  {
    v9 = 0;
    if ( *(_QWORD *)(*(_QWORD *)i + 48LL)
      && (int)PeoplePaneViewManager::IsWindowVisibleInContactPanel(v5, *(HWND *)(*(_QWORD *)i + 48LL), a2, &v9) >= 0
      && v9 )
    {
      *v11 = 1;
      break;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
