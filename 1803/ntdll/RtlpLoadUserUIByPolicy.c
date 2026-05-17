/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x18006FA90
 * Callers:
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 * Callees:
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F97B4 @ 0x1800F97B4 (sub_1800F97B4.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  __int128 v19; // [rsp+70h] [rbp-10h]
  unsigned __int8 v20; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v21; // [rsp+C8h] [rbp+48h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v20 = 0;
  v21 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v16 = a1;
    }
    else
    {
      v8 = sub_18006F938(0x2000000u, 0, v6, v7, (__int64)&v13);
      if ( v8 < 0 )
        goto LABEL_6;
      v16 = v13;
    }
    v12 = 0LL;
    p_DestinationString = &DestinationString;
    v15 = 48;
    v18 = 64;
    v19 = 0LL;
    v8 = ZwOpenKey(&v12, 131097LL, &v15);
    if ( v8 >= 0 )
    {
      v8 = sub_1800F8384(v12, a2, &v20, &v21);
      if ( !v8 )
      {
        v10 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * *(unsigned __int16 *)(v10 + 4)) = v20;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v21;
            goto LABEL_6;
          }
          v11 = sub_1800F97B4(*a3);
        }
        else
        {
          v11 = sub_180032BDC(1, 0, a2);
        }
        *a3 = v11;
        v10 = v11;
        if ( !v11 )
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
  if ( v12 )
  {
    ZwClose(v12);
    v12 = 0LL;
  }
  if ( v13 )
    sub_18006F918(v13);
  return (unsigned int)v8;
}
