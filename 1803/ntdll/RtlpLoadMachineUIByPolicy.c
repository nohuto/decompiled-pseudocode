/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x18006E970
 * Callers:
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 * Callees:
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F97B4 @ 0x1800F97B4 (sub_1800F97B4.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-20h]
  __int128 v15; // [rsp+58h] [rbp-18h]
  unsigned __int8 v16; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v17; // [rsp+B8h] [rbp+48h] BYREF

  v9 = 0LL;
  v4 = a2;
  v16 = 0;
  v17 = 0;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      v9 = 0LL;
      p_DestinationString = &DestinationString;
      v11 = 48;
      v12 = 0LL;
      v14 = 64;
      v15 = 0LL;
      v5 = ZwOpenKey(&v9, 131097LL, &v11);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = v9;
      a2 = v4;
    }
    v5 = sub_1800F8384(a1, a2, &v16, &v17);
    if ( !v5 )
    {
      v7 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v7 + 4) < *(_WORD *)(v7 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(v7 + 24) + 6LL * *(unsigned __int16 *)(v7 + 4)) = v16;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v17;
          goto LABEL_5;
        }
        v8 = sub_1800F97B4(*a3);
      }
      else
      {
        v8 = sub_180032BDC(1, 1, v4);
      }
      *a3 = v8;
      v7 = v8;
      if ( !v8 )
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
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)v5;
}
