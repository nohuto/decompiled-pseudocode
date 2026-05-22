/*
 * XREFs of ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x18008A740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetDefaultCursor(DWMCursorBroker *this, struct ICursor **a2)
{
  char *v2; // r9
  int v4; // ecx
  _DWORD *i; // rax
  int ValueForKey; // edi
  struct ICursor *v8; // rbx
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  struct ICursor *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = (char *)this + 40;
  v9 = 1;
  v10 = 0LL;
  if ( *((_DWORD *)this + 310) == 1 )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    v4 = 0;
    for ( i = v2; *i != 1; i += 6 )
    {
      if ( (unsigned int)++v4 >= 0x32 )
        return (unsigned int)-2147418113;
    }
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(v2, &v9, &v11);
    if ( ValueForKey >= 0 )
    {
      v8 = v11;
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v11 + 8LL))(v11);
      *a2 = v8;
    }
  }
  return (unsigned int)ValueForKey;
}
