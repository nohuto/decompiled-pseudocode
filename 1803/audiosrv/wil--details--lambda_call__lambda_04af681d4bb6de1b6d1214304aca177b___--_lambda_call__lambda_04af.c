/*
 * XREFs of wil::details::lambda_call__lambda_04af681d4bb6de1b6d1214304aca177b___::_lambda_call__lambda_04af681d4bb6de1b6d1214304aca177b___ @ 0x18009A14C
 * Callers:
 *     _CAudioDGProcess::LaunchADGProcess_::_1_::dtor$0 @ 0x180069EED (_CAudioDGProcess--LaunchADGProcess_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_04af681d4bb6de1b6d1214304aca177b___::_lambda_call__lambda_04af681d4bb6de1b6d1214304aca177b___(
        _BYTE *a1)
{
  void *v2; // rcx
  __int64 v3; // rax
  void *v4; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(void **)(*(_QWORD *)a1 + 88LL);
    if ( v2 )
    {
      WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
      v3 = *(_QWORD *)a1;
      v4 = *(void **)(*(_QWORD *)a1 + 88LL);
      if ( v4 )
      {
        if ( v4 != (void *)-1LL )
        {
          CloseHandle(v4);
          *(_QWORD *)(*(_QWORD *)a1 + 88LL) = 0LL;
          v3 = *(_QWORD *)a1;
        }
      }
      *(_DWORD *)(v3 + 96) = 0;
    }
  }
}
