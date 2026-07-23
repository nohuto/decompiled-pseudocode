/*
 * XREFs of sub_18006E760 @ 0x18006E760
 * Callers:
 *     sub_18006E66C @ 0x18006E66C (sub_18006E66C.c)
 *     sub_1800FC4A0 @ 0x1800FC4A0 (sub_1800FC4A0.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 *     RtlGetParentLocaleName @ 0x180047A90 (RtlGetParentLocaleName.c)
 *     sub_18006E860 @ 0x18006E860 (sub_18006E860.c)
 */

__int64 __fastcall sub_18006E760(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int8 v4; // al
  int v6; // r14d
  WCHAR *v7; // rsi
  WCHAR *v8; // rax
  NTSTATUS v9; // ebx
  int v10; // r9d
  _UNICODE_STRING ParentLocaleName; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 v13; // [rsp+70h] [rbp+30h] BYREF
  __int16 v14; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v4 = 0;
  v13 = 0;
  v6 = a1;
  v7 = 0LL;
  if ( a1 && a2 )
  {
    v8 = (WCHAR *)sub_180045488(a1, 0x55u);
    v7 = v8;
    if ( !v8 )
    {
      v9 = -1073741801;
      goto LABEL_18;
    }
    ParentLocaleName.Buffer = v8;
    *(_DWORD *)&ParentLocaleName.Length = 11141120;
    v9 = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
    if ( v9 < 0 || (v9 = sub_18006E860(v6, ParentLocaleName.Buffer, (unsigned int)&v13, v10, (__int64)&v14), v9 < 0) )
    {
      v4 = 0;
      v14 = 0;
      v13 = 0;
    }
    else
    {
      v4 = v13;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v4 = v13;
  }
  if ( !v4 )
  {
    if ( v9 >= 0 )
      v9 = -1073741823;
    goto LABEL_18;
  }
  if ( v9 < 0 )
  {
LABEL_18:
    *(_WORD *)(a2 + 10) = 0;
    *(_WORD *)(a2 + 8) &= 0x3FFFu;
    return (unsigned int)v9;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v4 << 14;
  *(_WORD *)(a2 + 10) = v14;
  return (unsigned int)v9;
}
