/*
 * XREFs of ?PutKeyboardEvent@LegacyInjectionRawInputProvider@@UEAAJGGG@Z @ 0x18006B870
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutKeyboardEvent(
        LegacyInjectionRawInputProvider *this,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4)
{
  unsigned __int16 v5; // r14
  unsigned int v8; // edi
  DWORD v9; // ebx
  _DWORD *v10; // rcx
  char v11; // al
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rbx
  DWORD TickCount; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  char v22; // [rsp+240h] [rbp+140h]
  DWORD v23; // [rsp+248h] [rbp+148h]
  char v24; // [rsp+24Ch] [rbp+14Ch]

  v5 = a3;
  v8 = 0;
  if ( *((_BYTE *)this + 88)
    || (LOBYTE(a3) = 1,
        v8 = (*(__int64 (__fastcall **)(LegacyInjectionRawInputProvider *, __int64, __int64))(*(_QWORD *)this + 24LL))(
               this,
               4LL,
               a3),
        (v8 & 0x80000000) == 0) )
  {
    if ( !a4 )
    {
      if ( !v5 )
        return v8;
      v14 = (__int64 *)*((_QWORD *)this + 10);
      v15 = *v14;
      TickCount = GetTickCount();
      v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, DWORD))(v15 + 24))(
              v14,
              0LL,
              a2,
              v5,
              TickCount);
      goto LABEL_40;
    }
    if ( a4 <= 0x77u )
    {
      switch ( a4 )
      {
        case 0x77u:
          v9 = 10;
          goto LABEL_27;
        case 0x1Bu:
          v9 = 2;
          goto LABEL_27;
        case 0x71u:
          v9 = 1;
          goto LABEL_27;
        case 0x72u:
          v9 = 3;
          goto LABEL_27;
        case 0x75u:
          v9 = 8;
          goto LABEL_27;
        case 0x76u:
          v9 = 7;
          goto LABEL_27;
      }
LABEL_22:
      v9 = 0x7FFFFFFF;
      goto LABEL_27;
    }
    switch ( a4 )
    {
      case 'x':
        v9 = 5;
        break;
      case 'y':
        v9 = 6;
        break;
      case 'z':
        v9 = 0;
        break;
      case '|':
        v9 = 9;
        break;
      default:
        v9 = 11;
        if ( a4 == 135 )
          break;
        goto LABEL_22;
    }
LABEL_27:
    PerformanceCount.LowPart = v9;
    v8 = 0;
    if ( v9 == 0x7FFFFFFF )
    {
      v13 = *((_QWORD *)this + 10);
      if ( !v13 )
        return v8;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, a2, a4);
      goto LABEL_40;
    }
    memset_0(v19, 0, 0x6C8uLL);
    v21 = 1736;
    QueryPerformanceCounter(&PerformanceCount);
    v10 = (_DWORD *)*((_QWORD *)this + 12);
    v19[1] = *v10;
    v19[0] = v10[1];
    v19[2] = GetTickCount();
    v20 = PerformanceCount;
    v23 = v9;
    if ( (a2 & 5) == 5 )
    {
      v22 = 1;
    }
    else if ( (a2 & 1) == 0 )
    {
      v11 = v24;
      if ( (a2 & 4) != 0 )
        v11 = 0;
      v24 = v11;
      goto LABEL_35;
    }
    v24 = 1;
LABEL_35:
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v19);
LABEL_40:
    v8 = v12;
    if ( v12 >= 0 )
      return v8;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v8;
}
