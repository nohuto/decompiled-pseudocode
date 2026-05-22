/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180007350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::SendDeviceCommand(
        InputStateManager *this,
        int a2,
        struct DeviceCommandMessage *a3)
{
  char *v3; // rbx
  __int64 v5; // rdi
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  _DWORD *i; // rcx
  __int64 v16; // rcx
  _DWORD v17[256]; // [rsp+30h] [rbp-428h]

  v3 = (char *)this + 4168;
  if ( !a2 )
  {
    v5 = 0LL;
    v6 = (_DWORD *)((char *)this + 4168);
    v7 = 256LL;
    do
    {
      if ( *v6 != *((_DWORD *)v3 + 1024) )
      {
        v17[v5] = *v6;
        v5 = (unsigned int)(v5 + 1);
      }
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v8 = 0LL;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        v9 = (unsigned int)v17[v8];
        if ( (_DWORD)v9 == *((_DWORD *)v3 + 1024) )
          break;
        v10 = 0LL;
        v11 = v3;
        while ( *v11 != (_DWORD)v9 )
        {
          v10 = (unsigned int)(v10 + 1);
          v11 += 4;
          if ( (unsigned int)v10 >= 0x100 )
          {
            v12 = -2147467259;
            goto LABEL_16;
          }
        }
        (*(void (__fastcall **)(_QWORD, __int64, struct DeviceCommandMessage *))(**(_QWORD **)&v3[16 * v10 + 8] + 24LL))(
          *(_QWORD *)&v3[16 * v10 + 8],
          v9,
          a3);
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= (unsigned int)v5 )
          return 0;
      }
      v12 = -2147024809;
LABEL_16:
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      return v12;
    }
    return 0;
  }
  if ( a2 == *((_DWORD *)this + 2066) )
    return 0;
  v14 = 0LL;
  for ( i = (_DWORD *)((char *)this + 4168); *i != a2; i += 4 )
  {
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= 0x100 )
      return 0;
  }
  v16 = *(_QWORD *)&v3[16 * v14 + 8];
  v12 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  return v12;
}
