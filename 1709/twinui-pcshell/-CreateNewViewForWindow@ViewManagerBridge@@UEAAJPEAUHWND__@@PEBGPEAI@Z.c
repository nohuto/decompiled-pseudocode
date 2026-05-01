/*
 * XREFs of ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x180133C30
 * Callers:
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801229C0 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::CreateNewViewForWindow(
        ViewManagerBridge *this,
        HWND a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r10
  const unsigned __int16 *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // [rsp+50h] [rbp-18h] BYREF
  const unsigned __int16 *v12; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+74h] [rbp+Ch]

  *a4 = 0;
  if ( *((_BYTE *)this + 153) )
  {
    v5 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return v5;
  }
  v7 = *((_QWORD *)this + 15);
  if ( a3 )
  {
    v8 = a3;
    v9 = 0;
    v12 = a3;
    while ( *a3 )
    {
      ++a3;
      ++v9;
    }
    v11 = v9 | 0x80000000;
  }
  else
  {
    v8 = 0LL;
    v12 = 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, unsigned __int64, _QWORD, int, _QWORD, unsigned int *))(*(_QWORD *)v7 + 24LL))(
         v7,
         a2,
         0LL,
         (unsigned __int64)&v11 & -(__int64)(v8 != 0LL),
         0LL,
         8,
         0LL,
         &v14);
  if ( (v5 & 0x80000000) != 0 )
  {
    v10 = 425LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)v5);
    return v5;
  }
  v5 = v15;
  if ( v15 < 0 )
  {
    v10 = 427LL;
    goto LABEL_12;
  }
  *a4 = v14;
  return 0LL;
}
