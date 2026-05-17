/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x18006C490
 * Callers:
 *     sub_18006DDE4 @ 0x18006DDE4 (sub_18006DDE4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FB628 @ 0x1800FB628 (sub_1800FB628.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-20h]
  __int128 v17; // [rsp+58h] [rbp-18h]
  unsigned __int8 v18; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v19; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0LL;
  v4 = a2;
  v18 = 0;
  v19 = 0;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      v11 = 0LL;
      p_DestinationString = &DestinationString;
      v13 = 48;
      v14 = 0LL;
      v16 = 64;
      v17 = 0LL;
      v5 = ZwOpenKey(&v11, 131097LL, &v13);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = v11;
      a2 = v4;
    }
    v5 = sub_1800FA3D4(a1, a2, &v18, &v19);
    if ( !v5 )
    {
      v9 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v9 + 4) < *(_WORD *)(v9 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = v18;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v19;
          goto LABEL_5;
        }
        v10 = sub_1800FB628(v9, v7, v8);
      }
      else
      {
        v10 = sub_180047104(1, 1, v4);
      }
      *a3 = v10;
      if ( !v10 )
      {
        v5 = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_5:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v5;
}
