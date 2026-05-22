/*
 * XREFs of ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18008A5C0
 * Callers:
 *     ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18008AD40 (--_EDWMCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18008A0C4 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::UnregisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  int v3; // r9d
  unsigned int v4; // ecx
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  char v8; // cl
  _DWORD *v9; // r8
  __int64 v10; // rax
  char v11; // dl
  __int64 i; // rcx
  __int64 v13; // r10
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  char v15[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+48h] [rbp-50h]

  (*(void (__fastcall **)(struct DWMCursor *, __int128 *))(*(_QWORD *)a2 + 40LL))(a2, &v14);
  v3 = v14;
  if ( (_DWORD)v14 == *((_DWORD *)this + 310) )
  {
LABEL_5:
    v6 = -2147418113;
  }
  else
  {
    v4 = 0;
    v5 = (_DWORD *)((char *)this + 40);
    while ( *v5 != (_DWORD)v14 )
    {
      ++v4;
      v5 += 6;
      if ( v4 >= 0x32 )
        goto LABEL_5;
    }
    v8 = 0;
    v9 = (_DWORD *)((char *)this + 40);
    v10 = 0LL;
    while ( *v9 != (_DWORD)v14 )
    {
      v10 = (unsigned int)(v10 + 1);
      v9 += 6;
      if ( (unsigned int)v10 >= 0x32 )
        goto LABEL_15;
    }
    *(_OWORD *)((char *)this + 24 * v10 + 40) = *(_OWORD *)((char *)this + 1240);
    v8 = 1;
LABEL_15:
    v6 = v8 == 0 ? 0x80004005 : 0;
    if ( v8 )
    {
      v11 = 0;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 316); i = (unsigned int)(i + 1) )
      {
        v13 = *((_QWORD *)this + 157);
        if ( *(_DWORD *)(v13 + 24 * i + 8) == v3 )
        {
          v11 = 1;
          *(_QWORD *)(v13 + 24 * i) = *((_QWORD *)this + 159);
          *(_OWORD *)(*((_QWORD *)this + 157) + 24 * i + 8) = 0uLL;
          --*((_DWORD *)this + 317);
          v3 = v14;
        }
      }
      v6 = v11 == 0 ? 0x80004005 : 0;
      if ( v11 )
      {
        v15[0] = 1;
        v16 = v14;
        DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v15);
        return v6;
      }
    }
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v6;
}
