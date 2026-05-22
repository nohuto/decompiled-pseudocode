/*
 * XREFs of ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18002F9D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180030460 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     ?SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z @ 0x1800304F8 (-SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::OnTargetChanged(MobileCursorBroker *this, struct CursorId *a2)
{
  int ValueForKey; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  struct MobileCursor *v8; // rdi
  __int64 v9; // rcx
  char v10; // al
  bool v11; // zf
  struct MobileCursor *v13[2]; // [rsp+30h] [rbp-38h] BYREF

  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((_DWORD *)this + 24, (unsigned int *)a2, v13);
  v6 = ValueForKey;
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 226;
LABEL_4:
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, ValueForKey);
      return v6;
    }
    return v6;
  }
  v8 = v13[0];
  if ( ((*(__int64 (__fastcall **)(struct MobileCursor *))(*(_QWORD *)v13[0] + 48LL))(v13[0]) & 8) != 0 )
  {
LABEL_19:
    ValueForKey = (*(__int64 (__fastcall **)(struct MobileCursor *))(*(_QWORD *)v8 + 72LL))(v8);
    v6 = ValueForKey;
    if ( ValueForKey >= 0 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(*(__int64 (__fastcall **)(struct MobileCursor *, struct MobileCursor **))(*(_QWORD *)v8 + 40LL))(
                                   v8,
                                   v13);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 241;
      goto LABEL_4;
    }
    return v6;
  }
  v6 = (*(__int64 (__fastcall **)(struct MobileCursor *, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, 0LL);
  if ( (v6 & 0x80000000) != 0 )
  {
    v10 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_11;
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 599, v6);
  }
  v10 = Microsoft_OneCore_MinInputEnableBits;
LABEL_11:
  if ( (v6 & 0x80000000) != 0 )
  {
    if ( (v10 & 2) != 0 )
      McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 236, v6);
    return v6;
  }
  v11 = *((_DWORD *)v8 + 16) == 0;
  *((_BYTE *)v8 + 56) = 1;
  if ( v11 )
    MobileCursorBroker::ShowCursor(this, v8, 1);
  ValueForKey = MobileCursorBroker::SetCursorGlyph(this, v8, (const unsigned __int16 *)0x7F00);
  v6 = ValueForKey;
  if ( ValueForKey >= 0 )
    goto LABEL_19;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 238;
    goto LABEL_4;
  }
  return v6;
}
