/*
 * XREFs of sub_18004576C @ 0x18004576C
 * Callers:
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 *     sub_180046AF0 @ 0x180046AF0 (sub_180046AF0.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_18004576C(__int64 a1, _WORD *a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rcx

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    switch ( *a2 )
    {
      case 1:
        if ( !RtlLCIDToCultureName((__int16)a2[2], a3) )
          return (unsigned int)-1073741595;
        return v3;
      case 2:
        v6 = 28LL * (__int16)a2[2];
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v8 = *(_WORD *)(v6 + v7 + 4);
        if ( *(__int16 *)(v6 + v7 + 6) > 0 )
        {
          v9 = *(_QWORD *)(a1 + 32);
          v10 = *(__int16 *)(v6 + v7 + 6);
LABEL_8:
          RtlInitUnicodeString(a3, (PCWSTR)(*(_QWORD *)(v9 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v9 + 16) + 2 * v10)));
          return v3;
        }
        if ( v8 && RtlLCIDToCultureName(v8, a3) )
          return v3;
        break;
      case 3:
        v9 = *(_QWORD *)(a1 + 32);
        v10 = (__int16)a2[2];
        goto LABEL_8;
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
