/*
 * XREFs of ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1800E9200
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800EA098 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EBCD4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::PeopleShareViewReady(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 v4; // rbx
  char *Ptr; // rax
  char *i; // r8
  _QWORD *v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // r11
  unsigned __int64 v10; // r11
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rdi
  const unsigned __int16 *v13; // r10
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v3 = this - 8;
  v4 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  Ptr = (char *)v3[14].Ptr;
  for ( i = (char *)v3[13].Ptr; i != Ptr; i += 16 )
  {
    v7 = *(_QWORD **)i;
    if ( *(_DWORD *)(*(_QWORD *)i + 60LL) == 1 && !v7[6] )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a2[v8] );
      v9 = v7 + 2;
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      v23 = v8;
      v10 = *v9;
      v24 = v10;
      v11 = &v23;
      if ( v8 >= v10 )
        v11 = &v24;
      v12 = *v11;
      v13 = a2;
      if ( *v11 )
      {
        while ( *(_WORD *)v7 == *v13 )
        {
          v7 = (_QWORD *)((char *)v7 + 2);
          ++v13;
          if ( !--v12 )
            goto LABEL_15;
        }
        v14 = *(_WORD *)v7 < *v13 ? -1 : 1;
      }
      else
      {
LABEL_15:
        v14 = 0;
      }
      if ( !v14 && v10 >= v8 && v10 <= v8 )
        break;
    }
  }
  if ( i == Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    goto LABEL_29;
  }
  std::shared_ptr<PeoplePaneViewInfo>::operator=(&v19, i);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v15 = PeoplePaneViewManager::HandleViewReady((PeoplePaneViewManager *)v3);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v4 = v20;
LABEL_29:
    v16 = 0;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x16A,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v15);
  v4 = v20;
LABEL_30:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      v17 = v20;
      (**(void (__fastcall ***)(__int64))v20)(v20);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return v16;
}
