/*
 * XREFs of ?RegisterWithCursorBroker@DWMCursor@@IEAAJXZ @ 0x180026B1C
 * Callers:
 *     ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18002678C (-Initialize@DWMCursor@@QEAAJ_N@Z.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180025784 (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::RegisterWithCursorBroker(DWMCursor *this)
{
  _DWORD *v1; // rbp
  __int64 v3; // rcx
  int v4; // r11d
  _DWORD *v5; // rax
  unsigned int v6; // r10d
  char v7; // bl
  int v8; // r9d
  int v9; // r9d
  __int64 v10; // rax
  _DWORD *v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  unsigned int i; // edi
  __int64 result; // rax
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 5);
  (*(void (__fastcall **)(DWMCursor *, __int128 *))(*(_QWORD *)this + 40LL))(this, &v16);
  v4 = v1[312];
  if ( (_DWORD)v16 != v4 )
  {
    v3 = 0LL;
    v5 = v1 + 12;
    while ( *v5 != (_DWORD)v16 )
    {
      v3 = (unsigned int)(v3 + 1);
      v5 += 6;
      if ( (unsigned int)v3 >= 0x32 )
        goto LABEL_5;
    }
    v7 = -1;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 472;
LABEL_10:
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, v9, v7);
      goto LABEL_11;
    }
    goto LABEL_11;
  }
LABEL_5:
  v6 = 0;
  LOBYTE(v3) = 0;
  if ( (_DWORD)v16 == v4 )
  {
    v7 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_11;
    v8 = 152;
LABEL_24:
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, v8, v7);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 475;
      goto LABEL_10;
    }
LABEL_11:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v10 = 0LL;
  v11 = v1 + 12;
  do
  {
    if ( *v11 == (_DWORD)v16 )
    {
      v12 = 3 * v10;
      goto LABEL_27;
    }
    if ( !(_BYTE)v3 && *v11 == v4 )
    {
      v6 = v10;
      LOBYTE(v3) = 1;
    }
    v10 = (unsigned int)(v10 + 1);
    v11 += 6;
  }
  while ( (unsigned int)v10 < 0x32 );
  if ( !(_BYTE)v3 )
  {
    v7 = 5;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_11;
    v8 = 182;
    goto LABEL_24;
  }
  v12 = 3LL * v6;
  *(_OWORD *)&v1[6 * v6 + 12] = v16;
LABEL_27:
  *(_QWORD *)&v1[2 * v12 + 16] = this;
  v13 = v1 + 332;
  for ( i = 0; i < 0xA; ++i )
  {
    if ( *v13 )
      DWMCursorBroker::DuplicateHandleAndVerifySend((DWMCursorBroker *)v1, this, i);
    v13 += 2;
  }
  result = 0LL;
  *((_BYTE *)this + 65) = 1;
  return result;
}
