/*
 * XREFs of ?RuntimeClassInitialize@InputAcknowledge@@UEAAJIPEAVInputQueue@@@Z @ 0x180082CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputAcknowledge::RuntimeClassInitialize(InputAcknowledge *this, int a2, struct InputQueue *a3)
{
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_DWORD *)this + 5) = a2;
  if ( *((struct InputQueue **)this + 3) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct InputQueue *))(*(_QWORD *)a3 + 8LL))(a3);
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a3;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (__int64 *)((char *)this + 32);
  *((_BYTE *)this + 16) = 0;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = CoreUICreate((char *)this + 32);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = *v6;
  v10 = (_QWORD *)((char *)this + 40);
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), InputAcknowledge *, char *))(*(_QWORD *)v9 + 120LL))(
          v9,
          InputAcknowledge::OnAcknowledgeTimeoutStatic,
          this,
          (char *)this + 40);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 80LL))(*v10, 100000000LL, 0LL);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x180082DD7LL);
  }
  return 0LL;
}
