/*
 * XREFs of KRegKey::QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___ @ 0x1C00BAD04
 * Callers:
 *     ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00BB000 (-QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00CA238 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob__lambda_5658d1e45bdcd14f12a9cd7c7449a826___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD **a3)
{
  _UNKNOWN **v5; // rbx
  NTSTATUS ValueKey; // eax
  unsigned int v8; // esi
  ULONG Length[2]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+40h] [rbp-138h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+0h] BYREF
  int v13; // [rsp+180h] [rbp+8h]
  __int128 v14; // [rsp+184h] [rbp+Ch]

  v5 = 0LL;
  ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, Length);
  v8 = ValueKey;
  if ( ValueKey == -2147483643 )
  {
    if ( !ExAllocatePoolWithTag(PagedPool, Length[0], 0x6E694252u) )
    {
      v8 = -1073741670;
      goto LABEL_3;
    }
    operator delete[](0LL);
    v5 = &retaddr;
    ValueKey = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, &retaddr, Length[0], Length);
    v8 = ValueKey;
  }
  if ( ValueKey >= 0 )
  {
    if ( HIDWORD(retaddr) == 3 )
    {
      if ( v13 == 16 )
      {
        v8 = 0;
        **a3 = v14;
      }
      else
      {
        v8 = -1073741811;
      }
    }
    else
    {
      v8 = -1073741788;
    }
  }
LABEL_3:
  operator delete[](v5);
  return v8;
}
