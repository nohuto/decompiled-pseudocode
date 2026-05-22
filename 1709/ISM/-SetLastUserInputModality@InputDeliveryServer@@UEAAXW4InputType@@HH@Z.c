/*
 * XREFs of ?SetLastUserInputModality@InputDeliveryServer@@UEAAXW4InputType@@HH@Z @ 0x18007EB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::SetLastUserInputModality(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  result = 2LL;
  if ( a2 == 2 )
  {
    result = 1LL;
  }
  else if ( a2 == 4 )
  {
    result = 4LL;
  }
  else if ( a2 != 8 )
  {
    result = 16LL;
    if ( a2 != 16 )
      result = 128LL;
  }
  v5 = (_QWORD *)(a1 + 608);
  if ( *(_DWORD *)(a1 + 608) != (_DWORD)result || *(_DWORD *)(a1 + 612) != a3 || *(_DWORD *)(a1 + 616) != a4 )
  {
    *v5 = __PAIR64__(a3, result);
    *(_DWORD *)(a1 + 616) = a4;
    v6 = *(_QWORD *)(a1 + 392);
    if ( v6 )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v6 + 48LL))(v6, v5, 12LL);
      if ( (int)result < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x23,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputmodalitymanager.cpp",
          (const char *)(unsigned int)result);
        JUMPOUT(0x18007EBF3LL);
      }
    }
  }
  return result;
}
