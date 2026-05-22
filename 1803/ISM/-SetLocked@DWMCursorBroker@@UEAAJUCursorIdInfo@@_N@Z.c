/*
 * XREFs of ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x18008A010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::SetLocked(__int64 a1, int *a2)
{
  __int64 v2; // rdx
  char v3; // r11
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a2;
  v6 = *((_QWORD *)a2 + 1);
  if ( (int)FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(a1 + 32, &v5, &v7) >= 0 )
  {
    LOBYTE(v2) = v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, v2);
  }
  return 0LL;
}
