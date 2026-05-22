/*
 * XREFs of ?OnGamepadIsSupportedForProcess@MPCManager@@QEAAXK@Z @ 0x18005DFF8
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800AA3A0 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall MPCManager::OnGamepadIsSupportedForProcess(MPCManager *this, int a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rbx
  int v6; // eax
  __int64 *v7; // rax
  __int64 *i; // rax
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 14);
  v5 = (__int64 *)*v2;
  while ( v5 != v2 )
  {
    v14 = v5[9];
    LODWORD(v10) = a2;
    LOWORD(v9) = 4;
    v6 = CoreUICallSend(*((_QWORD *)this + 2), &v14, 1LL, 1LL, v9, &unk_1800E53DD, v10, v11, v12);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v6);
    if ( !*((_BYTE *)v5 + 25) )
    {
      v7 = (__int64 *)v5[2];
      if ( *((_BYTE *)v7 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v5 = i;
        v5 = i;
      }
      else
      {
        do
        {
          v5 = v7;
          v7 = (__int64 *)*v7;
        }
        while ( !*((_BYTE *)v7 + 25) );
      }
    }
  }
}
