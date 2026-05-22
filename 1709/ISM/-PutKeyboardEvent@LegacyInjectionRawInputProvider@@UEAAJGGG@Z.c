/*
 * XREFs of ?PutKeyboardEvent@LegacyInjectionRawInputProvider@@UEAAJGGG@Z @ 0x180086A40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutKeyboardEvent(
        LegacyInjectionRawInputProvider *this,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4)
{
  unsigned __int16 v5; // si
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  DWORD v12; // ebx
  _DWORD *v13; // rcx
  DWORD v14; // eax
  char v15; // al
  char v16; // al
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rbx
  DWORD TickCount; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[356]; // [rsp+38h] [rbp-C8h] BYREF

  v5 = a3;
  v8 = 0;
  if ( !*((_BYTE *)this + 104) )
  {
    LOBYTE(a3) = 1;
    v9 = (*(__int64 (__fastcall **)(LegacyInjectionRawInputProvider *, __int64, __int64))(*(_QWORD *)this + 24LL))(
           this,
           4LL,
           a3);
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_55;
      v11 = 458;
      goto LABEL_54;
    }
  }
  if ( !a4 )
  {
    if ( v5 )
    {
      v21 = (__int64 *)*((_QWORD *)this + 12);
      v22 = *v21;
      TickCount = GetTickCount();
      v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, DWORD))(v22 + 24))(v21, 0LL, a2, v5, TickCount);
      v8 = v9;
      if ( v9 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_55;
        v11 = 538;
LABEL_54:
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v11, v9);
LABEL_55:
        if ( IsDebuggerPresent() )
          __debugbreak();
        goto LABEL_57;
      }
    }
    return v8;
  }
  if ( a4 <= 0x77u )
  {
    switch ( a4 )
    {
      case 0x77u:
        v12 = 10;
        goto LABEL_29;
      case 0x1Bu:
        v12 = 2;
        goto LABEL_29;
      case 0x71u:
        v12 = 1;
        goto LABEL_29;
      case 0x72u:
        v12 = 3;
        goto LABEL_29;
      case 0x75u:
        v12 = 8;
        goto LABEL_29;
      case 0x76u:
        v12 = 7;
        goto LABEL_29;
    }
LABEL_24:
    v12 = 0x7FFFFFFF;
    goto LABEL_29;
  }
  switch ( a4 )
  {
    case 'x':
      v12 = 5;
      break;
    case 'y':
      v12 = 6;
      break;
    case 'z':
      v12 = 0;
      break;
    case '|':
      v12 = 9;
      break;
    default:
      v12 = 11;
      if ( a4 == 135 )
        break;
      goto LABEL_24;
  }
LABEL_29:
  PerformanceCount.LowPart = v12;
  v8 = 0;
  if ( v12 != 0x7FFFFFFF )
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset(v26, 0, sizeof(v26));
    v13 = (_DWORD *)*((_QWORD *)this + 14);
    HIDWORD(v26[0]) = *v13;
    LODWORD(v26[0]) = v13[1];
    v14 = GetTickCount();
    LODWORD(v26[5]) = 2848;
    LODWORD(v26[1]) = v14;
    v26[2] = PerformanceCount.QuadPart;
    v15 = v26[86];
    if ( (a2 & 0x8000u) != 0 )
      v15 = 1;
    LODWORD(v26[87]) = v12;
    LOBYTE(v26[86]) = v15;
    if ( (a2 & 5) == 5 )
    {
      BYTE1(v26[86]) = 1;
    }
    else if ( (a2 & 1) == 0 )
    {
      v16 = BYTE4(v26[87]);
      if ( (a2 & 4) != 0 )
        v16 = 0;
      BYTE4(v26[87]) = v16;
LABEL_39:
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), v26);
      v8 = v17;
      if ( v17 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_43;
        v19 = 520;
        goto LABEL_42;
      }
      return v8;
    }
    BYTE4(v26[87]) = 1;
    goto LABEL_39;
  }
  v20 = *((_QWORD *)this + 12);
  if ( v20 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 40LL))(v20, a2, a4);
    v8 = v17;
    if ( v17 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_43:
        if ( IsDebuggerPresent() )
          __debugbreak();
LABEL_57:
        __fastfail(7u);
      }
      v19 = 528;
LABEL_42:
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, v19, v17);
      goto LABEL_43;
    }
  }
  return v8;
}
