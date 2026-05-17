/*
 * XREFs of RtlpHpSegWalk @ 0x180061ADC
 * Callers:
 *     RtlpHpHeapWalk @ 0x1800619F0 (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpVsSubsegmentWalk @ 0x180061D84 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x180061EAC (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportSegment @ 0x1800623A4 (RtlpHpSegReportSegment.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x180062508 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportPageRange @ 0x180108A2C (RtlpHpSegReportPageRange.c)
 */

__int64 __fastcall RtlpHpSegWalk(__int64 a1, __int64 *a2, char a3)
{
  unsigned int v3; // edi
  __int64 *v4; // rsi
  __int64 v5; // r14
  _QWORD *v6; // r15
  signed __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rax
  _DWORD v17[4]; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+78h] [rbp+38h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( !*a2 )
  {
    v11 = (_QWORD *)(a1 + 32);
    if ( (_QWORD *)*v11 != v11 )
    {
      v15 = (_QWORD *)*v11;
      goto LABEL_30;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*((_BYTE *)a2 + 18) & 2) != 0 )
  {
    v6 = (_QWORD *)*a2;
    if ( a3 )
    {
      v7 = (signed __int64)&v6[4 * *(unsigned __int8 *)(a1 + 10)];
      goto LABEL_16;
    }
    if ( *v6 != a1 + 32 )
    {
LABEL_28:
      v15 = (_QWORD *)*v6;
LABEL_30:
      RtlpHpSegReportSegment(a1, a2, v15);
      return v3;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v6 = (_QWORD *)(*a2 & *(_QWORD *)a1);
  v7 = (signed __int64)&v6[4 * ((unsigned __int64)(unsigned int)(*(_DWORD *)a2 - (_DWORD)v6) >> *(_BYTE *)(a1 + 8))];
  if ( (*a2 & 0xFFF) == 0 && (*(_BYTE *)(v7 + 24) & 2) != 0 )
    goto LABEL_39;
  if ( (*(_BYTE *)(v7 + 24) & 2) == 0 )
    v7 += -32LL * *(unsigned __int8 *)(v7 + 31);
  v8 = (v7 & *(_QWORD *)a1) + ((v7 - (v7 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  v9 = *v4;
  v10 = (*(_BYTE *)(v7 + 24) & 4) != 0
      ? RtlpHpLfhSubsegmentWalk(*(_QWORD *)(a1 + 80), v8, v9, (unsigned int)&v19, (__int64)&v18, (__int64)v17)
      : RtlpHpVsSubsegmentWalk(*(_QWORD *)(a1 + 88), v8, v9, (unsigned int)&v19, (__int64)&v18, (__int64)v17);
  *v4 = v10;
  if ( !v10 )
  {
LABEL_39:
    while ( 1 )
    {
      v7 += 32LL * *(unsigned __int8 *)(v7 + 31);
LABEL_16:
      if ( (unsigned int)((v7 - (v7 & *(_QWORD *)v5)) >> 5) >= 0x100 )
        break;
      if ( (*(_BYTE *)(v7 + 24) & 1) == 0 || (*(_BYTE *)(v7 + 24) & 0x10) != 0 )
      {
        *v4 = (v7 & *(_QWORD *)v5) + ((v7 - (v7 & *(_QWORD *)v5)) >> 5 << *(_BYTE *)(v5 + 8));
        *((_WORD *)v4 + 9) = 4096;
        v4[1] = (unsigned __int64)*(unsigned __int8 *)(v7 + 31) << *(_BYTE *)(v5 + 8);
        *((_WORD *)v4 + 8) = 0;
        return v3;
      }
      v13 = (v7 & *(_QWORD *)v5) + ((v7 - (v7 & *(_QWORD *)v5)) >> 5 << *(_BYTE *)(v5 + 8));
      if ( (*(_BYTE *)(v7 + 24) & 0xC) == 0 )
      {
        *v4 = v13;
        RtlpHpSegReportPageRange(v5, v4);
        return v3;
      }
      if ( (*(_BYTE *)(v7 + 24) & 4) != 0 )
      {
        v16 = RtlpHpLfhSubsegmentWalk(*(_QWORD *)(v5 + 80), v13, v13, (unsigned int)&v19, (__int64)&v18, (__int64)v17);
        *v4 = v16;
        if ( v16 )
        {
          RtlpHpSegReportBusyBlock(v5, (_DWORD)v4, v19, v18, v17[0]);
          *((_WORD *)v4 + 9) |= 0x8000u;
          return v3;
        }
      }
      else
      {
        v14 = RtlpHpVsSubsegmentWalk(*(_QWORD *)(v5 + 88), v13, v13, (unsigned int)&v19, (__int64)&v18, (__int64)v17);
        *v4 = v14;
        if ( v14 )
        {
          RtlpHpSegReportBusyBlock(v5, (_DWORD)v4, v19, v18, v17[0]);
          return v3;
        }
      }
    }
    if ( *v6 == v5 + 32 )
      return (unsigned int)-2147483622;
    a2 = v4;
    a1 = v5;
    goto LABEL_28;
  }
  RtlpHpSegReportBusyBlock(v5, (_DWORD)v4, v19, v18, v17[0]);
  *((_WORD *)v4 + 9) |= (*(_BYTE *)(v7 + 24) & 4) << 13;
  return v3;
}
