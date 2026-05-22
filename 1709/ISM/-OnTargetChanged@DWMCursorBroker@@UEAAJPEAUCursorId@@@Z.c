/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180025270
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1800256E8 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  int ValueForKey; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int128 v10; // xmm0
  char v12; // [rsp+30h] [rbp-88h]
  _QWORD v13[3]; // [rsp+38h] [rbp-80h] BYREF
  char v14[8]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v15; // [rsp+58h] [rbp-60h]
  int v16; // [rsp+68h] [rbp-50h]

  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((char *)this + 48, a2, v13);
  v6 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v8 = v13[0];
    ValueForKey = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 72LL))(v13[0]);
    v6 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v7 = 180;
      goto LABEL_4;
    }
    LOBYTE(v9) = ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) & 8) != 0 ? v12 : 0;
    ValueForKey = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, v9);
    v6 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v6;
      v7 = 184;
      goto LABEL_4;
    }
    v10 = *(_OWORD *)a2;
    v14[0] = 6;
    v15 = v10;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    ValueForKey = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v14);
    v6 = ValueForKey;
    if ( ValueForKey >= 0 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 40LL))(v8, v13);
      return v6;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 189;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 179;
LABEL_4:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, ValueForKey);
  }
  return v6;
}
