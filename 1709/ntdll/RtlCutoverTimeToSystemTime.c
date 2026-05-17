/*
 * XREFs of RtlCutoverTimeToSystemTime @ 0x180069F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeFieldsToTime @ 0x18006A0A0 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x18006A290 (RtlTimeToTimeFields.c)
 */

bool __fastcall RtlCutoverTimeToSystemTime(_WORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r13
  __int16 v8; // r12
  __int16 v9; // r15
  __int16 v10; // ax
  __int16 v11; // si
  __int16 v12; // di
  __int16 v13; // r15
  __int16 i; // r13
  __int16 v16; // [rsp+20h] [rbp-40h]
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  _WORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v19; // [rsp+34h] [rbp-2Ch]
  __int16 v20; // [rsp+36h] [rbp-2Ah]
  __int16 v21; // [rsp+38h] [rbp-28h]
  __int16 v22; // [rsp+3Ah] [rbp-26h]
  __int16 v23; // [rsp+3Ch] [rbp-24h]
  __int16 v24; // [rsp+3Eh] [rbp-22h]
  __int16 v25; // [rsp+40h] [rbp-20h] BYREF
  __int16 v26; // [rsp+42h] [rbp-1Eh]
  __int16 v27; // [rsp+44h] [rbp-1Ch]
  _BYTE v28[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v29; // [rsp+54h] [rbp-Ch]
  __int16 v30; // [rsp+5Eh] [rbp-2h]
  bool v31; // [rsp+A0h] [rbp+40h]

  v4 = a2;
  RtlTimeToTimeFields(a3, &v25);
  if ( !*a1 )
  {
    v8 = a1[2];
    if ( v8 <= 5 && v8 )
    {
      v9 = a1[7];
      v10 = a1[1];
      v31 = 0;
      v11 = v25;
      v16 = v9;
      if ( !a4 )
      {
        if ( v10 >= v26 )
          v31 = v10 <= v26;
        else
          v11 = v25 + 1;
      }
      v18[1] = a1[1];
      v24 = 0;
      while ( 1 )
      {
        v20 = a1[3];
        v12 = 1;
        v21 = a1[4];
        v22 = a1[5];
        v23 = a1[6];
        v18[0] = v11;
        v19 = 1;
        if ( !(unsigned __int8)RtlTimeFieldsToTime(v18, &v17) )
          break;
        RtlTimeToTimeFields(&v17, v28);
        if ( v30 <= v9 )
        {
          if ( v30 < v9 )
            v12 = v9 - v30 + 1;
        }
        else
        {
          v12 = v9 - v30 + 8;
        }
        v13 = v12;
        if ( v8 > 1 )
        {
          for ( i = 1; i < v8; ++i )
          {
            v12 += 7;
            v19 = v12;
            if ( !(unsigned __int8)RtlTimeFieldsToTime(v18, &v17) )
              break;
            RtlTimeToTimeFields(&v17, v28);
            v13 = v29;
          }
          v4 = a2;
        }
        v19 = v13;
        if ( !(unsigned __int8)RtlTimeFieldsToTime(v18, &v17) )
          break;
        if ( !v31 || v13 >= v27 && (v13 != v27 || v17 >= *a3) )
        {
          *v4 = v17;
          return 1;
        }
        v9 = v16;
        ++v11;
        v31 = 0;
      }
    }
    return 0;
  }
  return (unsigned __int8)RtlTimeFieldsToTime(a1, v4) && (a4 || *v4 >= *a3);
}
