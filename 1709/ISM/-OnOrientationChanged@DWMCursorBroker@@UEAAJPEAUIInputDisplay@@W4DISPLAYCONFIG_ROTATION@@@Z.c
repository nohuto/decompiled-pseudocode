/*
 * XREFs of ?OnOrientationChanged@DWMCursorBroker@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x180026040
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1800256E8 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::OnOrientationChanged(
        DWMCursorBroker *this,
        struct IInputDisplay *a2,
        enum DISPLAYCONFIG_ROTATION a3)
{
  unsigned int v3; // esi
  char *v4; // r8
  int v5; // r9d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-218h] BYREF
  char v16[8]; // [rsp+40h] [rbp-208h] BYREF
  __int128 v17; // [rsp+48h] [rbp-200h]
  enum DISPLAYCONFIG_ROTATION v18; // [rsp+58h] [rbp-1F0h]
  _QWORD v19[50]; // [rsp+80h] [rbp-1C8h]

  v3 = 0;
  v18 = a3;
  v4 = (char *)this + 40;
  v16[0] = 7;
  v5 = *((_DWORD *)this + 310);
  v8 = 0LL;
  v9 = 50LL;
  do
  {
    if ( *(_DWORD *)v4 != v5 )
    {
      v19[v8] = *((_QWORD *)v4 + 2);
      v8 = (unsigned int)(v8 + 1);
    }
    v4 += 24;
    --v9;
  }
  while ( v9 );
  v10 = 0LL;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v11 = v19[v10];
      if ( (struct IInputDisplay *)(*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v11 + 56LL))(
                                     v11,
                                     v9,
                                     v4) == a2 )
      {
        v17 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 40LL))(v11, v15);
        v12 = DWMCursorBroker::SendAndVerifyEndpoints(
                (DWMCursorBroker *)((char *)this - 8),
                (struct CursorMessage *)v16);
        v3 = v12;
        if ( v12 < 0 )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)v8 )
        return v3;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 587, v12);
  }
  return v3;
}
