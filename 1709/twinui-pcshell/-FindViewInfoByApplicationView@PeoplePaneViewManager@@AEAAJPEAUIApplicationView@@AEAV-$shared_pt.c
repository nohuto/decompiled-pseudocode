/*
 * XREFs of ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801133B8
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180112910 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180112E24 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationView(__int64 a1, __int64 a2, __int64 *a3)
{
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // r15
  unsigned int v12; // ebx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]

  v6 = (volatile signed __int32 *)a3[1];
  a3[1] = 0LL;
  *a3 = 0LL;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(a1 + 128));
  v15 = a1 + 128;
  v7 = *(_QWORD *)(a1 + 144);
  for ( i = *(_QWORD *)(a1 + 136); i != v7; i += 16LL )
  {
    v9 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 48LL) )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 336) + 48LL))(
        *(_QWORD *)(a1 + 336),
        *(_QWORD *)(v9 + 48),
        &v14);
      v10 = v14;
      v11 = v14 == a2;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    else
    {
      v11 = 0;
    }
    if ( v11 )
      break;
  }
  if ( i == *(_QWORD *)(a1 + 144) )
  {
    v12 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v12 = 0;
  }
  if ( a1 != -128 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 128));
  return v12;
}
