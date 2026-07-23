/*
 * XREFs of sub_180035DEC @ 0x180035DEC
 * Callers:
 *     sub_180030D2C @ 0x180030D2C (sub_180030D2C.c)
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 *     sub_180032408 @ 0x180032408 (sub_180032408.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_180035DEC(__int64 a1, _WORD *a2, _UNICODE_STRING *a3)
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
