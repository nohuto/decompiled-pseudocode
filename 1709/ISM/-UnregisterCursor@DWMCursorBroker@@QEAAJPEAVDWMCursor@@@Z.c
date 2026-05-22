/*
 * XREFs of ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180025C24
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x1800266A0 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1800256E8 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::UnregisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  __int64 v3; // rcx
  int v4; // r8d
  _DWORD *v5; // rax
  __int64 v7; // rax
  _DWORD *v8; // rcx
  char v9; // al
  char v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r10
  char v13; // al
  __int128 v14; // [rsp+40h] [rbp-68h] BYREF
  char v15[8]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v16; // [rsp+58h] [rbp-50h]

  (*(void (__fastcall **)(struct DWMCursor *, __int128 *))(*(_QWORD *)a2 + 40LL))(a2, &v14);
  v4 = v14;
  if ( (_DWORD)v14 == *((_DWORD *)this + 312) )
  {
LABEL_5:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 498, 255);
    goto LABEL_7;
  }
  LODWORD(v3) = 0;
  v5 = (_DWORD *)((char *)this + 48);
  while ( *v5 != (_DWORD)v14 )
  {
    v3 = (unsigned int)(v3 + 1);
    v5 += 6;
    if ( (unsigned int)v3 >= 0x32 )
      goto LABEL_5;
  }
  v7 = 0LL;
  v8 = (_DWORD *)((char *)this + 48);
  while ( *v8 != (_DWORD)v14 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 6;
    if ( (unsigned int)v7 >= 0x32 )
    {
      v9 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq((__int64)v8, &MinInput_Warning_CheckResult, 0, 212, 5);
        v9 = Microsoft_OneCore_MinInputEnableBits;
      }
      if ( (v9 & 2) != 0 )
        McTemplateU0qqq((__int64)v8, &MinInput_Warning_CheckResult, 0, 501, 5);
      goto LABEL_7;
    }
  }
  v10 = 0;
  *(_OWORD *)((char *)this + 24 * v7 + 48) = *((_OWORD *)this + 78);
  v11 = 0LL;
  if ( !*((_DWORD *)this + 318) )
    goto LABEL_23;
  do
  {
    v12 = *((_QWORD *)this + 158);
    if ( *(_DWORD *)(v12 + 24 * v11 + 8) == v4 )
    {
      v10 = 1;
      *(_QWORD *)(v12 + 24 * v11) = *((_QWORD *)this + 160);
      *(_OWORD *)(*((_QWORD *)this + 158) + 24 * v11 + 8) = 0uLL;
      --*((_DWORD *)this + 319);
      v4 = v14;
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < *((_DWORD *)this + 318) );
  if ( !v10 )
  {
LABEL_23:
    v13 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 249, 5);
      v13 = Microsoft_OneCore_MinInputEnableBits;
    }
    if ( (v13 & 2) != 0 )
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 502, 5);
LABEL_7:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v15[0] = 1;
  v16 = v14;
  DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v15);
  return 0LL;
}
