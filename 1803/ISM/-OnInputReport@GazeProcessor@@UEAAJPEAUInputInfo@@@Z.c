/*
 * XREFs of ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180038000
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x180037EF0 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::OnInputReport(GazeProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rdi
  int v5; // esi
  struct tagPOINT *v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  struct tagPOINT v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h]
  _DWORD v16[6]; // [rsp+68h] [rbp-A0h] BYREF
  int v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+98h] [rbp-70h]
  struct tagPOINT v19; // [rsp+A8h] [rbp-60h]
  char v20; // [rsp+72Ch] [rbp+624h]

  v15 = -2LL;
  v4 = 0LL;
  v13 = 0LL;
  memset_0(v16, 0, 0x6C8uLL);
  v17 = 1736;
  v14 = 0LL;
  if ( *(_DWORD *)a2 != 0x4000 )
  {
    v5 = -2147024809;
    goto LABEL_31;
  }
  if ( *((_BYTE *)this + 48) != 1 )
  {
    v5 = 0;
    goto LABEL_31;
  }
  if ( *((_BYTE *)a2 + 60) )
  {
    v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
           (GazeProcessor *)((char *)this - 24),
           *(struct tagPOINT *)((char *)a2 + 52),
           (struct tagPOINT *)((char *)a2 + 44),
           &v14);
    if ( v5 < 0 )
      goto LABEL_30;
    *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)((char *)a2 + 44);
  }
  else
  {
    v5 = 0;
  }
  if ( *((_BYTE *)a2 + 80) )
  {
    v6 = &v14;
    if ( *((_BYTE *)a2 + 60) )
      v6 = 0LL;
    v5 = GazeProcessor::ConvertDisplayRelativeMicrometersToScreen(
           (GazeProcessor *)((char *)this - 24),
           *(struct tagPOINT *)((char *)a2 + 72),
           (struct tagPOINT *)a2 + 8,
           v6);
    if ( v5 < 0 )
      goto LABEL_30;
    *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 8);
  }
  v16[1] = *((_DWORD *)a2 + 1);
  v17 = 1736;
  v16[0] = 16386;
  v19 = v14;
  v18 = 1;
  v20 = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 56LL))(
    v7,
    *((_QWORD *)this + 5),
    v16,
    0LL,
    *((_QWORD *)this + 19),
    &v13);
  v9 = *((_QWORD *)this + 19);
  v4 = v13;
  if ( v13 == v9 )
  {
    if ( !v13 )
      goto LABEL_31;
    *((_DWORD *)a2 + 10) = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v4 + 24LL))(v4, a2);
    goto LABEL_30;
  }
  if ( v9 )
  {
    *((_DWORD *)a2 + 10) = 2;
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           a2);
    if ( v5 < 0 )
      goto LABEL_30;
    v4 = v13;
  }
  if ( v4 )
  {
    *((_DWORD *)a2 + 10) = 1;
    v5 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v4 + 24LL))(v4, a2);
    if ( v5 >= 0 )
    {
      v4 = v13;
      goto LABEL_23;
    }
LABEL_30:
    v4 = v13;
    goto LABEL_31;
  }
LABEL_23:
  v10 = *((_QWORD *)this + 19);
  if ( v10 != v4 )
  {
    v11 = v4;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v10 = *((_QWORD *)this + 19);
      v4 = v13;
    }
    *((_QWORD *)this + 19) = v11;
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( v4 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)v5;
}
