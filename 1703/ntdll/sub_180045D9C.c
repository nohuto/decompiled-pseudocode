/*
 * XREFs of sub_180045D9C @ 0x180045D9C
 * Callers:
 *     sub_180045CA4 @ 0x180045CA4 (sub_180045CA4.c)
 * Callees:
 *     sub_180045EFC @ 0x180045EFC (sub_180045EFC.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_180045D9C(__int64 a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  __int16 v8; // dx
  DWORD v9; // esi
  int v10; // eax
  __int16 v11; // cx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  bool v16; // zf
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    *a4 = -1;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return 3221225524LL;
    v8 = -1;
    v9 = ((Lcid - 4096) & 0xFFFFFBFF) != 0 ? Lcid : 0;
    if ( *a3 )
    {
      v8 = sub_180045EFC(*(_QWORD *)(a1 + 32), a3, 0LL, &Lcid);
      if ( v8 < 0 )
      {
LABEL_22:
        v8 = -1;
LABEL_10:
        v11 = 0;
        if ( *(_WORD *)(a2 + 4) )
        {
          v12 = *(_QWORD *)(a2 + 24);
          while ( 1 )
          {
            if ( *(_WORD *)(v12 + 6LL * v11) == 1 )
            {
              if ( !v9 )
                goto LABEL_20;
              v16 = *(__int16 *)(v12 + 6LL * v11 + 4) == v9;
              goto LABEL_19;
            }
            if ( *(_WORD *)(v12 + 6LL * v11) != 2 )
              break;
            v13 = 28LL * *(__int16 *)(v12 + 6LL * v11 + 4);
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
            if ( v8 > 0 && v8 == *(_WORD *)(v13 + v14 + 6) )
            {
LABEL_16:
              *a4 = v11;
              return 0LL;
            }
            if ( v9 )
            {
              v16 = v9 == *(unsigned __int16 *)(v13 + v14 + 4);
LABEL_19:
              if ( v16 )
                goto LABEL_16;
            }
LABEL_20:
            if ( ++v11 >= (int)*(unsigned __int16 *)(a2 + 4) )
              return 3221225524LL;
          }
          if ( *(_WORD *)(v12 + 6LL * v11) != 3 || v8 == -1 )
            goto LABEL_20;
          v16 = *(_WORD *)(v12 + 6LL * v11 + 4) == (unsigned __int16)v8;
          goto LABEL_19;
        }
        return 3221225524LL;
      }
      v10 = 0;
    }
    else
    {
      v10 = -1073741811;
    }
    if ( v10 >= 0 )
      goto LABEL_10;
    goto LABEL_22;
  }
  return 3221225485LL;
}
