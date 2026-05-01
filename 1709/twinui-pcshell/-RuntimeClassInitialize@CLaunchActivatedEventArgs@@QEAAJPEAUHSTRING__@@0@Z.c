/*
 * XREFs of ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x1801E11FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5d878536394a9e5d6c15e6b3f5940618___::Run @ 0x1801CEBB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5d878536394a9e5d6c15e6b3f5940618___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::RuntimeClassInitialize(
        CLaunchActivatedEventArgs *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v5; // edi
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v5 = WindowsDuplicateString(a2, &newString);
  if ( v5 < 0 )
  {
    v9 = 33LL;
  }
  else
  {
    v6 = (HSTRING)*((_QWORD *)this + 40);
    *((_QWORD *)this + 40) = newString;
    WindowsDeleteString(v6);
    v5 = WindowsDuplicateString(a3, &newString);
    if ( v5 >= 0 )
    {
      v7 = (HSTRING)*((_QWORD *)this + 41);
      *((_QWORD *)this + 41) = newString;
      WindowsDeleteString(v7);
      return 0LL;
    }
    v9 = 37LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
