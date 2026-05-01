/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180078C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180079020 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180079978 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____ @ 0x180079CE4 (CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer--ApplicationViewManagerNotification.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rbx
  PVOID Ptr; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  ULONGLONG TickCount64; // r13
  int v13; // ebx
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  char *v17; // rax
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h] BYREF
  ULONGLONG v24; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  void *v26; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+48h] BYREF

  v27 = a2;
  SRWLock[1] = (PSRWLOCK)-2LL;
  wil::srwlock::lock_exclusive(a1 + 12, SRWLock);
  if ( !a3 )
  {
    v24 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v26 = &v27;
    if ( (int)CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____(
                &a1[7],
                &v26,
                &v22,
                &v20) >= 0 )
    {
      v7 = v20;
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        &a1[7],
        v20);
      if ( !v7 )
      {
        Ptr = a1[20].Ptr;
        if ( Ptr )
        {
          a1[20].Ptr = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        }
      }
      goto LABEL_39;
    }
  }
  v9 = v27;
  *(_QWORD *)&v22 = v27;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  DWORD2(v22) = a3;
  v23 = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v24 = TickCount64;
  v13 = 0;
  *((RTL_SRWLOCK *)&v14 + 1) = a1[8];
  v15 = (unsigned __int64)a1[10].Ptr;
  if ( *((_QWORD *)&v14 + 1) != v15 )
  {
LABEL_27:
    v17 = (char *)a1[7].Ptr + 32 * (__int64)a1[8].Ptr++;
    if ( v17 )
    {
      *(_QWORD *)v17 = 0LL;
      if ( v17 != (char *)&v22 )
      {
        *(_QWORD *)v17 = v9;
        v9 = 0LL;
      }
      *((_DWORD *)v17 + 2) = a3;
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)&v14 + 1) = &v23;
      if ( v17 + 16 != (char *)&v23 )
      {
        *((_QWORD *)v17 + 2) = a4;
        a4 = 0LL;
      }
      *((_QWORD *)v17 + 3) = TickCount64;
    }
    goto LABEL_33;
  }
  v10 = *((_QWORD *)&v14 + 1) + 1LL;
  v13 = -2147024774;
  if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) > 0xFFFFFFFE || (v13 = 0, v10 <= v15) )
  {
LABEL_26:
    if ( v13 < 0 )
      goto LABEL_33;
    goto LABEL_27;
  }
  v14 = v15 * (unsigned __int128)2u;
  v11 = 2 * v15;
  if ( !is_mul_ok(v15, 2uLL) )
  {
    v11 = -1LL;
    v13 = -2147024362;
  }
  if ( v13 >= 0 )
  {
    v16 = v15 + 4096;
    if ( v11 - v15 <= 0x1000 )
      v16 = v11;
    if ( v10 > v16 )
      v16 = v10;
    if ( v16 > 0xFFFFFFFE )
      v16 = 4294967294LL;
    v26 = 0LL;
    v14 = v16 * (unsigned __int128)0x20uLL;
    if ( is_mul_ok(v16, 0x20uLL) )
    {
      v13 = CTCoAllocPolicy::Realloc((IMalloc *)&v26, *((__int64 *)&v14 + 1), a1[7].Ptr, 32 * v16, &v26);
      if ( v13 >= 0 )
      {
        a1[10].Ptr = (PVOID)v16;
        a1[7].Ptr = v26;
      }
    }
    else
    {
      v13 = -2147024362;
    }
    goto LABEL_26;
  }
LABEL_33:
  if ( a4 )
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD *)a4 + 16LL))(
      a4,
      *((_QWORD *)&v14 + 1),
      v10,
      v11);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD *)v9 + 16LL))(
      v9,
      *((_QWORD *)&v14 + 1),
      v10,
      v11);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_41;
  }
LABEL_39:
  v18 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)&a1[-1]);
  v13 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v18);
LABEL_41:
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return (unsigned int)v13;
}
