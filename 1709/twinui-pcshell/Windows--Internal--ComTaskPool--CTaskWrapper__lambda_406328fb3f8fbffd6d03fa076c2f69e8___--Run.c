/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_406328fb3f8fbffd6d03fa076c2f69e8___::Run @ 0x18009D300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_406328fb3f8fbffd6d03fa076c2f69e8___::Run(
        __int64 a1)
{
  HRESULT v1; // eax
  int v2; // eax
  LPVOID v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+5Ch] [rbp+14h]

  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v5 = 0LL;
  v1 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x404u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &v5);
  if ( v1 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(LPVOID, int *))(*(_QWORD *)v5 + 120LL))(v5, &v6);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x32A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  }
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
