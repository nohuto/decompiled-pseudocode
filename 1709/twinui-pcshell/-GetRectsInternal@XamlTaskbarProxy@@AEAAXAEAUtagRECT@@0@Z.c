/*
 * XREFs of ?GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z @ 0x1801530C0
 * Callers:
 *     ?GetStuckRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x1801527A0 (-GetStuckRect@XamlTaskbarProxy@@UEAA-AUtagRECT@@XZ.c)
 *     ?GetStartButtonRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x180152870 (-GetStartButtonRect@XamlTaskbarProxy@@UEAA-AUtagRECT@@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlTaskbarProxy::GetRectsInternal(XamlTaskbarProxy *this, struct tagRECT *a2, struct tagRECT *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // eax
  LONG v13; // eax
  int v14; // eax
  LONG v15; // eax
  int v16; // eax
  LONG v17; // ecx
  int v18; // eax
  LONG v19; // ecx
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int nNumerator; // [rsp+40h] [rbp+20h] BYREF
  double v23; // [rsp+58h] [rbp+38h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**((_QWORD **)this + 8) + 112LL))(
         *((_QWORD *)this + 8),
         &nNumerator,
         &nNumerator);
  if ( v6 < 0 )
  {
    v7 = 195LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarproxy.cpp",
      (const char *)(unsigned int)v6);
    return;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8), a2);
  if ( v6 < 0 )
  {
    v7 = 200LL;
    goto LABEL_3;
  }
  *a3 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 48LL))(*((_QWORD *)this + 9), &v23);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  v9 = MulDiv((int)v23, nNumerator, 96);
  v10 = *((_QWORD *)this + 9);
  v11 = v9;
  LODWORD(v23) = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v10 + 56LL))(v10, &v23);
  if ( v12 < 0 )
    __abi_WinRTraiseException(v12);
  switch ( LODWORD(v23) )
  {
    case 0:
      v19 = v11 + a2->left;
      a2->right = v19;
      a3->right = v19;
      v20 = (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9), &v23);
      if ( v20 < 0 )
        __abi_WinRTraiseException(v20);
      goto LABEL_19;
    case 1:
      v17 = v11 + a2->top;
      a2->bottom = v17;
      a3->bottom = v17;
      v18 = (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), &v23);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      goto LABEL_17;
    case 2:
      v15 = a2->right - v11;
      a2->left = v15;
      a3->left = v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9), &v23);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
LABEL_19:
      a3->bottom = a3->top + (int)v23;
      return;
    case 3:
      v13 = a2->bottom - v11;
      a2->top = v13;
      a3->top = v13;
      v14 = (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), &v23);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
LABEL_17:
      a3->right = a3->left + (int)v23;
      break;
  }
}
