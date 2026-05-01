/*
 * XREFs of ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801C2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1801C2E50 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsApplicationVisibleInContactPanel(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 *Ptr; // r14
  RTL_SRWLOCK *v7; // rax
  __int64 *v8; // rdi
  PeoplePaneViewManager *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  HWND v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  int **v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+30h] BYREF
  char v18; // [rsp+98h] [rbp+38h] BYREF
  int *v19; // [rsp+A0h] [rbp+40h] BYREF

  v19 = a3;
  v3 = this + 5;
  AcquireSRWLockShared(this + 5);
  Ptr = (__int64 *)this[7].Ptr;
  v7 = this - 11;
  v8 = (__int64 *)this[6].Ptr;
  *(_QWORD *)&v14 = v7;
  *((_QWORD *)&v14 + 1) = a2;
  v16 = &v19;
  v15 = v14;
  v10 = *(_QWORD *)CAutoHandle<void *>::CAutoHandle<void *>(&v18, &v15);
  while ( v8 != Ptr )
  {
    v11 = *v8;
    v17 = 0;
    v12 = *(HWND *)(v11 + 48);
    if ( v12
      && (int)PeoplePaneViewManager::IsWindowVisibleInContactPanel(v9, v12, *(const unsigned __int16 **)(v10 + 8), &v17) >= 0
      && v17 )
    {
      ***(_DWORD ***)(v10 + 16) = 1;
      break;
    }
    v8 += 2;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
