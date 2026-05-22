/*
 * XREFs of ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x18002BB1C
 * Callers:
 *     ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BA10 (-OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BAD0 (-OnConnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewHierarchy::AddViewsOnProxyConnection(ViewHierarchy *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  char *v6; // rsi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 9);
  v3 = (_QWORD *)((char *)this + 80);
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 40LL))(v2, v3);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( *v3 )
  {
    v6 = (char *)this + 8;
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v3 + 64LL))(*v3, (char *)this + 8);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v15 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v3 + 48LL))(*v3, &v15);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_17;
    }
    v9 = 0;
    if ( v15 > 0 )
    {
      while ( 1 )
      {
        v16 = 0LL;
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v3 + 56LL))(*v3, v9, &v16);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x64,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
            (const char *)(unsigned int)v10);
          JUMPOUT(0x18002BCC0LL);
        }
        v11 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(v6, *v3, v9, v16);
        v12 = retaddr;
        if ( v11 < 0 )
          break;
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( (int)++v9 >= v15 )
          return;
      }
LABEL_17:
      wil::details::in1diag3::FailFast_Hr(
        v12,
        (void *)0x65,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
}
