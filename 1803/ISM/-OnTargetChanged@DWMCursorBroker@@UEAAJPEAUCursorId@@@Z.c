/*
 * XREFs of ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180089DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18008A0C4 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::OnTargetChanged(DWMCursorBroker *this, struct CursorId *a2)
{
  int ValueForKey; // ebx
  __int64 v5; // rdi
  __int128 v6; // xmm0
  _QWORD v8[2]; // [rsp+20h] [rbp-78h] BYREF
  char v9[8]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+38h] [rbp-60h]
  int v11; // [rsp+48h] [rbp-50h]

  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((char *)this + 40, a2, v8);
  if ( ValueForKey >= 0 )
  {
    v5 = v8[0];
    ValueForKey = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 56LL))(v8[0]);
    if ( ValueForKey >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      v6 = *(_OWORD *)a2;
      v9[0] = 6;
      v10 = v6;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      ValueForKey = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v9);
      if ( ValueForKey >= 0 )
        *(_OWORD *)a2 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 40LL))(v5, v8);
    }
  }
  return (unsigned int)ValueForKey;
}
