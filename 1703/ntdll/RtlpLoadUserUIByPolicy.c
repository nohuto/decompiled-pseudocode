/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x18006E400
 * Callers:
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FB628 @ 0x1800FB628 (sub_1800FB628.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  __int128 v21; // [rsp+70h] [rbp-10h]
  unsigned __int8 v22; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v23; // [rsp+C8h] [rbp+48h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v22 = 0;
  v23 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v18 = a1;
    }
    else
    {
      v8 = sub_18006E330(0x2000000u, 0, v6, v7, (__int64)&v15);
      if ( v8 < 0 )
        goto LABEL_6;
      v18 = v15;
    }
    v14 = 0LL;
    p_DestinationString = &DestinationString;
    v17 = 48;
    v20 = 64;
    v21 = 0LL;
    v8 = ZwOpenKey(&v14, 131097LL, &v17);
    if ( v8 >= 0 )
    {
      v8 = sub_1800FA3D4(v14, a2, &v22, &v23);
      if ( !v8 )
      {
        v12 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v12 + 4) < *(_WORD *)(v12 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = v22;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v23;
            goto LABEL_6;
          }
          v13 = sub_1800FB628(v12, v10, v11);
        }
        else
        {
          v13 = sub_180047104(1, 0, a2);
        }
        *a3 = v13;
        if ( !v13 )
        {
          v8 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_6:
  if ( v14 )
  {
    ZwClose(v14);
    v14 = 0LL;
  }
  if ( v15 )
    sub_18006E310(v15);
  return (unsigned int)v8;
}
