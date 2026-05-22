/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::SetTimeout @ 0x1800C3BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::SetTimeout(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // cc
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v4 = PerformanceCount.QuadPart / (qword_18010F2B8 / 1000);
  v5 = 10000 * (a2 - v4);
  v6 = a2 <= v4;
  v7 = *(_QWORD *)(a1 + 88);
  if ( v6 )
    v5 = 10000LL;
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64, LONGLONG))(*(_QWORD *)v8 + 16LL))(
      v8,
      PerformanceCount.QuadPart % (qword_18010F2B8 / 1000));
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v7 + 56LL))(
         v7,
         (a1 + 16) & -(__int64)(a1 != 0),
         v5,
         &v14);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x77,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v9);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
