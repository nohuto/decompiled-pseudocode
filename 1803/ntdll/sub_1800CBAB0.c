/*
 * XREFs of sub_1800CBAB0 @ 0x1800CBAB0
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_1800252F4 @ 0x1800252F4 (sub_1800252F4.c)
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     LdrProcessInitializationComplete @ 0x180083490 (LdrProcessInitializationComplete.c)
 *     sub_1800CA644 @ 0x1800CA644 (sub_1800CA644.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1800CB704 @ 0x1800CB704 (sub_1800CB704.c)
 */

_BYTE *__fastcall sub_1800CBAB0(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *result; // rax
  char v12; // [rsp+20h] [rbp-288h]
  int v13[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE v14[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = v14;
  v7 = 0;
  v12 = a3;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 > 0x214 )
  {
    result = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7 + 42);
    v6 = result;
    if ( !result )
      return result;
    a3 = v12;
  }
  *((_WORD *)v6 + 3) = a1;
  if ( a2 != -1 )
  {
    *((_QWORD *)v6 + 4) = a2;
    v6[40] = a3;
    v6[41] = a4;
    if ( v7 )
    {
      sub_1800CB704((__int64)a5, (_WORD *)v6 + 21, v7, v13);
      if ( a6 )
        sub_1800CB704((__int64)a6, &v6[v13[0] + 42], v7 - v13[0], v13);
      RtlGetCurrentServiceSessionId();
      ZwTraceEvent();
    }
  }
  result = v14;
  if ( v14 != v6 )
    return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
  return result;
}
