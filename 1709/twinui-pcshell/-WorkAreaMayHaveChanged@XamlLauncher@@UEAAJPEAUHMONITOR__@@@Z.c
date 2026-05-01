/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18017FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::WorkAreaMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HMONITOR v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_QWORD *)this + 27);
  if ( !v4 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 120LL))(*((_QWORD *)this + 27)) )
  {
    return 0LL;
  }
  v6 = *((_QWORD *)this + 12);
  v7 = 0LL;
  if ( !*(_QWORD *)(v6 + 64) )
  {
    v10 = -2147023728;
    v11 = 2147943568LL;
    v12 = 267LL;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(v6 + 64);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v7 = *(_QWORD *)(v6 + 64);
  v9 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v7 + 40LL))(v7, &v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( a2 == v15 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9));
      v10 = v13;
      if ( v13 < 0 )
      {
        v11 = (unsigned int)v13;
        v12 = 272LL;
        goto LABEL_16;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
  v11 = (unsigned int)v9;
  v12 = 269LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)v11);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
