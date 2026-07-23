/*
 * XREFs of sub_18006FB8C @ 0x18006FB8C
 * Callers:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18006FB8C(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int i; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  LCID v10; // ecx
  _UNICODE_STRING LocaleName; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v12[176]; // [rsp+30h] [rbp-D8h] BYREF

  memset(v12, 0, 0xAAuLL);
  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(v3 + 16) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v3 + 6); ++i )
    {
      v5 = *(_QWORD *)(v3 + 16) + 28LL * i;
      if ( *(__int16 *)(v5 + 6) <= 0 )
      {
        v10 = *(unsigned __int16 *)(v5 + 4);
        *(_DWORD *)&LocaleName.Length = 11141120;
        LocaleName.Buffer = (PWCH)v12;
        if ( RtlLcidToLocaleName(v10, &LocaleName, 2u, 0) < 0 )
          goto LABEL_12;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = (unsigned int)*(__int16 *)(v5 + 6);
        if ( v6 && *(_WORD *)(v5 + 6) && (unsigned int)v7 <= *(unsigned __int16 *)(v6 + 6) )
          v8 = *(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7);
        else
          v8 = 0LL;
        if ( !v8 )
          goto LABEL_12;
      }
      sub_18006FC80(a1, v5);
LABEL_12:
      v3 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
