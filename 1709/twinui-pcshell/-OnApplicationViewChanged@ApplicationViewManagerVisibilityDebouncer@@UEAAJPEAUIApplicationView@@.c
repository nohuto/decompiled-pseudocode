/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18007BC20 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18007C740 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____ @ 0x18007CA00 (CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer--ApplicationViewManagerNotification.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  RTL_SRWLOCK *v7; // r15
  __int64 v8; // rbx
  PVOID Ptr; // rcx
  __int64 v10; // rsi
  ULONGLONG TickCount64; // r8
  __int64 v12; // r9
  int v13; // ebx
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  char *v17; // rax
  int v18; // eax
  _QWORD v20[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  ULONGLONG v23; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  void *v25; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF

  v26 = a2;
  v20[1] = -2LL;
  v7 = a1 + 14;
  AcquireSRWLockExclusive(a1 + 14);
  v20[2] = v7;
  if ( !a3 )
  {
    v23 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v25 = &v26;
    if ( (int)CTSimpleFixedArray_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification_CSimpleArrayStandardCompareHelper_ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification___::FindEx_CLambdaCompareHelper__lambda_ca95877a0acb9673608c45b7c9bea6a2_____(
                &a1[9],
                &v25,
                &v21,
                v20) >= 0 )
    {
      v8 = v20[0];
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        &a1[9],
        v20[0]);
      if ( !v8 )
      {
        Ptr = a1[22].Ptr;
        if ( Ptr )
        {
          a1[22].Ptr = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        }
      }
      goto LABEL_40;
    }
  }
  v10 = v26;
  *(_QWORD *)&v21 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  DWORD2(v21) = a3;
  v22 = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v23 = TickCount64;
  v13 = 0;
  *((RTL_SRWLOCK *)&v14 + 1) = a1[10];
  v15 = (unsigned __int64)a1[12].Ptr;
  if ( *((_QWORD *)&v14 + 1) != v15 )
  {
LABEL_28:
    v17 = (char *)a1[9].Ptr + 32 * (__int64)a1[10].Ptr++;
    if ( v17 )
    {
      *(_QWORD *)v17 = 0LL;
      if ( v17 != (char *)&v21 )
      {
        *(_QWORD *)v17 = v10;
        v10 = 0LL;
      }
      *((_DWORD *)v17 + 2) = a3;
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)&v14 + 1) = &v22;
      if ( v17 + 16 != (char *)&v22 )
      {
        *((_QWORD *)v17 + 2) = a4;
        a4 = 0LL;
      }
      *((_QWORD *)v17 + 3) = TickCount64;
    }
    goto LABEL_34;
  }
  TickCount64 = *((_QWORD *)&v14 + 1) + 1LL;
  v13 = -2147024774;
  if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) > 0xFFFFFFFE || (v13 = 0, TickCount64 <= v15) )
  {
LABEL_26:
    if ( v13 < 0 )
      goto LABEL_34;
    TickCount64 = v23;
    goto LABEL_28;
  }
  v14 = v15 * (unsigned __int128)2u;
  v12 = 2 * v15;
  if ( !is_mul_ok(v15, 2uLL) )
  {
    v12 = -1LL;
    v13 = -2147024362;
  }
  if ( v13 >= 0 )
  {
    v16 = v15 + 4096;
    if ( v12 - v15 <= 0x1000 )
      v16 = v12;
    if ( TickCount64 > v16 )
      v16 = TickCount64;
    if ( v16 > 0xFFFFFFFE )
      v16 = 4294967294LL;
    v25 = 0LL;
    v14 = v16 * (unsigned __int128)0x20uLL;
    if ( is_mul_ok(v16, 0x20uLL) )
    {
      v13 = CTCoAllocPolicy::Realloc((IMalloc *)&v25, *((__int64 *)&v14 + 1), a1[9].Ptr, 32 * v16, &v25);
      if ( v13 >= 0 )
      {
        a1[12].Ptr = (PVOID)v16;
        a1[9].Ptr = v25;
      }
    }
    else
    {
      v13 = -2147024362;
    }
    goto LABEL_26;
  }
LABEL_34:
  if ( a4 )
    (*(void (__fastcall **)(__int64, _QWORD, ULONGLONG, __int64))(*(_QWORD *)a4 + 16LL))(
      a4,
      *((_QWORD *)&v14 + 1),
      TickCount64,
      v12);
  if ( v10 )
    (*(void (__fastcall **)(__int64, _QWORD, ULONGLONG, __int64))(*(_QWORD *)v10 + 16LL))(
      v10,
      *((_QWORD *)&v14 + 1),
      TickCount64,
      v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_42;
  }
LABEL_40:
  v18 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)&a1[-1]);
  v13 = v18;
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v18);
LABEL_42:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  return (unsigned int)v13;
}
