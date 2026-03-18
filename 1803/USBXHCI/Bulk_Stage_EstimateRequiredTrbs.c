/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C002E004
 * Callers:
 *     Bulk_PrepareStage @ 0x1C002C70C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0020E84 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C00214B0 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C00300DC (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  unsigned int v1; // r11d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 *v11; // r14
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned __int64 v18; // r9
  char v19; // r10
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-88h]
  unsigned int v29; // [rsp+B0h] [rbp+8h]
  int v30; // [rsp+B8h] [rbp+10h]
  unsigned int v31; // [rsp+C0h] [rbp+18h]

  v1 = 0;
  v3 = *a1;
  v4 = 2;
  v5 = *(_QWORD *)(v3 + 56);
  if ( *(_DWORD *)(v3 + 76) <= 2u )
  {
    *((_DWORD *)a1 + 20) = 2;
    goto LABEL_33;
  }
  v6 = *((unsigned int *)a1 + 10);
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL);
  v8 = v6;
  if ( v7 <= (unsigned int)v6 )
    v8 = v7;
  v31 = v8;
  *((_DWORD *)a1 + 20) = ((unsigned __int64)(v8 + 8190) >> 12) + 1;
  v9 = *(_QWORD *)(v3 + 48);
  v10 = *(unsigned __int16 *)(v9 + 2);
  if ( v10 <= 0x38 || v10 > 0x3A )
  {
    v11 = (__int64 *)a1[6];
    if ( !TR_IsUrbUsingChainedMdl(v9) )
    {
      *((_DWORD *)a1 + 21) = (v6 + 4095 + (unsigned __int64)((*((_DWORD *)v11 + 8) + *((_DWORD *)v11 + 11)) & 0xFFF)) >> 12;
      goto LABEL_31;
    }
    v13 = v1;
    v14 = v1;
    while ( 1 )
    {
      if ( !(_DWORD)v6 )
        goto LABEL_31;
      v15 = *((_DWORD *)v11 + 10);
      v16 = v6;
      LODWORD(v6) = v6 - v15;
      if ( v16 < v15 )
        LODWORD(v6) = v1;
      v30 = v6;
      if ( v16 < v15 )
        v15 = v16;
      if ( v15 )
        break;
LABEL_29:
      v11 = (__int64 *)*v11;
    }
    v17 = v15;
    while ( 1 )
    {
      v18 = v11[4] + *((unsigned int *)v11 + 11) + (unsigned __int64)(v17 - v15);
      if ( v15 + v14 < v12 )
      {
        v21 = v15;
        v14 = v15;
        v15 = v1;
        v20 = (v21 + (v18 & 0xFFF) + 4095) >> 12;
        v29 = v20;
        v19 = (v21 + (v18 & 0xFFF) + 4095) >> 12;
      }
      else
      {
        v29 = v1;
        v19 = v1;
        v20 = v13 + ((v12 - v14 + (v18 & 0xFFF) + 4095) >> 12);
        v15 += v14 - v12;
        v14 = v1;
      }
      v22 = v20 + *((_DWORD *)a1 + 21);
      *((_DWORD *)a1 + 21) = v22;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v1 )
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v22,
          v18,
          v28,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v18,
          v20,
          v15,
          v19,
          v14,
          v22);
      v23 = *(unsigned int *)(v5 + 196);
      if ( v20 >= (unsigned int)v23 )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          3u,
          v23,
          0x1Du,
          (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids);
      if ( v20 <= *((_DWORD *)a1 + 20) )
        goto LABEL_26;
      *((_DWORD *)a1 + 20) = v20;
      v1 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        break;
LABEL_27:
      v13 = v29;
      v12 = v31;
      if ( !v15 )
      {
        LODWORD(v6) = v30;
        goto LABEL_29;
      }
    }
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
      5u,
      0xEu,
      0x1Eu,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids);
LABEL_26:
    v1 = 0;
    goto LABEL_27;
  }
  *((_DWORD *)a1 + 21) = ((unsigned __int64)(v6 + 4095) >> 12) + 1;
LABEL_31:
  v4 = ++*((_DWORD *)a1 + 21) + 1;
LABEL_33:
  *((_DWORD *)a1 + 21) = v4;
  v24 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 272LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v26 = *(_QWORD *)(v5 + 48);
    if ( *(_DWORD *)(v26 + 40) != v1 )
    {
      v27 = *(_QWORD *)(v5 + 56);
      if ( *(char *)(v27 + 98) < 0 && *(_DWORD *)(v26 + 20) <= 1u )
      {
        result = v24 / (*(_WORD *)(v27 + 100) & 0x7FFu);
        if ( v24 % (*(_WORD *)(v27 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
