/*
 * XREFs of ?_Invoke@CTaskWindow@@AEAAJW4WINDOW_ACTION_TYPE@1@@Z @ 0x1800662A8
 * Callers:
 *     ?Cloak@CTaskWindow@@UEAAJXZ @ 0x1800654C0 (-Cloak@CTaskWindow@@UEAAJXZ.c)
 *     ?Uncloak@CTaskWindow@@UEAAJXZ @ 0x1800654E0 (-Uncloak@CTaskWindow@@UEAAJXZ.c)
 *     ?ValidateActivation@CTaskWindow@@UEAA_NXZ @ 0x180065510 (-ValidateActivation@CTaskWindow@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::_Invoke(__int64 a1, int a2)
{
  bool v3; // r12
  signed int v5; // ebx
  int v7; // r14d
  const struct CTaskWindow::WINDOW_ACTION *const near *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  signed int LastError; // eax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  _DWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  bool v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  v3 = 0;
  if ( a2 <= 1 )
  {
    v3 = a2 == 0;
  }
  else if ( a2 != 2 )
  {
    return (unsigned int)-2147019873;
  }
  v7 = *(_DWORD *)(a1 + 52);
  if ( v7 == -1 )
    return (unsigned int)-2147019873;
  v14 = *(_DWORD *)(a1 + 52);
  v8 = (&CTaskWindow::s_rgActions)[a2];
  v9 = a1 + 40;
  v5 = 0;
  v10 = 0LL;
  v15 = *(_QWORD *)(a1 + 40);
  if ( *((_DWORD *)v8 + 2) )
  {
    while ( (*((unsigned __int8 (__fastcall **)(int *))*v8 + v10))(&v14) )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)v8 + 2) )
        goto LABEL_10;
    }
    LastError = GetLastError();
    v5 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v5 = LastError;
    if ( v5 >= 0 )
      return (unsigned int)-2147019873;
  }
  else
  {
LABEL_10:
    if ( *((_DWORD *)v8 + 6) )
    {
      v11 = *(_QWORD *)(a1 + 136);
      v16[0] = a2;
      v12 = 0LL;
      v16[1] = v7;
      v17 = v3;
      v18 = v11;
      v19 = v9;
      do
      {
        v5 = (*(__int64 (__fastcall **)(_DWORD *))(*((_QWORD *)v8 + 2) + 8 * v12))(v16);
        if ( v5 < 0 )
          break;
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *((_DWORD *)v8 + 6) );
    }
  }
  return (unsigned int)v5;
}
