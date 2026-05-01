/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4262453b2a750cdf384f2747cf54dd98___::Run @ 0x180105A80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAXXZ @ 0x180102AC4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIHolographicViewTransitionNotification@@@@AEAAX.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4262453b2a750cdf384f2747cf54dd98___::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-30h]
  __int64 *v18; // [rsp+48h] [rbp-28h]
  unsigned int v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 *v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  v14 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v15 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v15);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v3);
  v16 = 0;
  v17 = 0LL;
  v18 = &v14;
  ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(&v16);
  v19 = v15;
  v20 = 0LL;
  v21 = &v14;
  ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(&v19);
  while ( 1 )
  {
    if ( v16 == v19 )
    {
      result = (__int64)v21;
      if ( v18 == v21 )
        break;
    }
    v5 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64 *))(*v17 + 8))(v17);
    v6 = *v5;
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 32) == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 32))(v5, v7);
      v9 = retaddr;
      if ( v8 >= 0 )
        goto LABEL_16;
      v10 = 1917LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v6 + 24))(v5, v7);
      v9 = retaddr;
      if ( v8 >= 0 )
        goto LABEL_16;
      v10 = 1918LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v9,
      (void *)v10,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v8);
LABEL_16:
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
    ++v16;
    ObjectArrayAdapter<IHolographicViewTransitionNotification>::Iterator::GetCurrentObject(&v16);
  }
  v11 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  }
  v13 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return result;
}
