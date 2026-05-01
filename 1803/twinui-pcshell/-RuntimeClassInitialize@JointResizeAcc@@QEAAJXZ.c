/*
 * XREFs of ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1802EB154
 * Callers:
 *     ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1802EABA0 (--$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall JointResizeAcc::RuntimeClassInitialize(JointResizeAcc *this)
{
  unsigned __int64 v1; // r8
  __int64 v3; // rdi
  _WORD *v4; // rax
  char *v5; // rcx
  signed __int64 v6; // rax
  __int64 v7; // rdx
  __int16 v8; // r8
  char *v9; // rax
  const char *v10; // r9
  unsigned int v12; // ebx
  __int64 v13; // rsi
  LPVOID v14; // rax
  WNDCLASSEXW v15; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v1 = *((_QWORD *)this + 11);
  if ( v1 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)this + 9);
    if ( *((_QWORD *)this + 9) )
      v1 = *((_QWORD *)this + 10) + 1LL;
    else
      v1 = 0LL;
    *((_QWORD *)this + 11) = v1;
  }
  v3 = 21LL;
  if ( !v1 )
  {
    if ( is_mul_ok(0x15uLL, 2uLL) )
    {
      v4 = CoTaskMemAlloc(0x2AuLL);
      if ( v4 )
      {
        *((_QWORD *)this + 11) = 21LL;
        *((_QWORD *)this + 9) = v4;
        *v4 = 0;
        goto LABEL_10;
      }
      goto LABEL_18;
    }
LABEL_25:
    v12 = -2147024362;
    goto LABEL_26;
  }
  if ( v1 < 0x15 )
  {
    if ( !is_mul_ok(v1, 2uLL) )
      goto LABEL_25;
    v13 = 21LL;
    if ( 2 * v1 >= 0x15 )
      v13 = 2 * v1;
    v14 = CoTaskMemRealloc(*((LPVOID *)this + 9), 2 * v13);
    if ( !v14 )
    {
LABEL_18:
      v12 = -2147024882;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
        (const char *)v12);
      return v12;
    }
    *((_QWORD *)this + 11) = v13;
    *((_QWORD *)this + 9) = v14;
  }
LABEL_10:
  v5 = (char *)*((_QWORD *)this + 9);
  v6 = (char *)L"Joint Resize Divider" - v5;
  do
  {
    v7 = v3 - 1;
    if ( v3 == 1 )
      break;
    v8 = *(_WORD *)&v5[v6];
    if ( !v8 )
      break;
    *(_WORD *)v5 = v8;
    --v3;
    v5 += 2;
  }
  while ( v7 );
  v9 = v5 - 2;
  if ( v3 )
    v9 = v5;
  *(_WORD *)v9 = 0;
  *((_QWORD *)this + 10) = 20LL;
  v15.cbSize = 80;
  memset_0(&v15.style, 0, 0x4CuLL);
  v15.cbWndExtra = 8;
  v15.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointResizeAcc>::s_WndProcBase;
  v15.hInstance = &_ImageBase;
  v15.lpszClassName = L"JointResizeAcc";
  RegisterClassExW(&v15);
  CreateWindowExW(0x8200000u, L"JointResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
  if ( *((_QWORD *)this + 5) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4B,
             (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
             v10);
}
