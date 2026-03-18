/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C003051C
 * Callers:
 *     Bulk_PrepareStage @ 0x1C002EC3C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C00235C8 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0023B20 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C003260C (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  unsigned int v1; // r10d
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // r13
  unsigned int v10; // edx
  unsigned int v11; // r9d
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  unsigned __int64 v14; // r8
  char v15; // r11
  unsigned int v16; // ebp
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r9d
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-88h]
  unsigned int v25; // [rsp+B0h] [rbp+8h]
  unsigned int v26; // [rsp+B8h] [rbp+10h]
  unsigned int v27; // [rsp+C8h] [rbp+20h]

  v1 = 0;
  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 56);
  if ( *(_DWORD *)(v3 + 76) <= 2u )
  {
    *((_DWORD *)a1 + 21) = 2;
    *((_DWORD *)a1 + 20) = 2;
    goto LABEL_30;
  }
  v5 = *((unsigned int *)a1 + 10);
  v6 = *(_DWORD *)(*(_QWORD *)(v4 + 56) + 152LL);
  if ( v6 > (unsigned int)v5 )
    v6 = *((_DWORD *)a1 + 10);
  v27 = v6;
  *((_DWORD *)a1 + 20) = (((unsigned __int64)v6 + 8190) >> 12) + 1;
  v7 = *(_QWORD *)(v3 + 48);
  v8 = *(unsigned __int16 *)(v7 + 2);
  if ( v8 <= 0x38 || v8 > 0x3A )
  {
    if ( !TR_IsUrbUsingChainedMdl(v7) )
    {
      *((_DWORD *)a1 + 21) = (v5 + 4095 + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
      goto LABEL_28;
    }
    v9 = (__int64 *)a1[6];
    v10 = v1;
    v11 = v1;
    while ( 1 )
    {
      if ( !(_DWORD)v5 )
        goto LABEL_28;
      v12 = *((_DWORD *)v9 + 10);
      if ( (unsigned int)v5 < v12 )
      {
        v12 = v5;
        LODWORD(v5) = v1;
      }
      else
      {
        LODWORD(v5) = v5 - v12;
      }
      v13 = v12;
      if ( v12 )
        break;
LABEL_26:
      v9 = (__int64 *)*v9;
    }
    while ( 1 )
    {
      v14 = v9[4] + *((unsigned int *)v9 + 11) + (unsigned __int64)(v12 - v13);
      if ( v13 + v11 < v27 )
      {
        v18 = v13;
        v17 = v13;
        v13 = v1;
        v16 = (v18 + (v14 & 0xFFF) + 4095) >> 12;
        v26 = v16;
        v15 = (v18 + (v14 & 0xFFF) + 4095) >> 12;
      }
      else
      {
        v26 = v1;
        v15 = v1;
        v16 = v10 + ((v27 - v11 + (v14 & 0xFFF) + 4095) >> 12);
        v13 += v11 - v27;
        v17 = v1;
      }
      *((_DWORD *)a1 + 21) += v16;
      v25 = v17;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          v14,
          v17,
          v24,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          v14,
          v16,
          v13,
          v15,
          v17,
          *((_DWORD *)a1 + 21));
      v19 = *(unsigned int *)(v4 + 196);
      if ( v16 >= (unsigned int)v19 )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          3u,
          v19,
          0x1Du,
          (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids);
      if ( v16 <= *((_DWORD *)a1 + 20) )
        goto LABEL_24;
      *((_DWORD *)a1 + 20) = v16;
      v1 = 0;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        break;
LABEL_25:
      v11 = v25;
      v10 = v26;
      if ( !v13 )
        goto LABEL_26;
    }
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
      5u,
      0xEu,
      0x1Eu,
      (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids);
LABEL_24:
    v1 = 0;
    goto LABEL_25;
  }
  *((_DWORD *)a1 + 21) = ((unsigned __int64)(v5 + 4095) >> 12) + 1;
LABEL_28:
  *((_DWORD *)a1 + 21) += 2;
LABEL_30:
  v20 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 272LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v22 = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(v22 + 40) != v1 )
    {
      v23 = *(_QWORD *)(v4 + 56);
      if ( *(char *)(v23 + 98) < 0 && *(_DWORD *)(v22 + 20) <= 1u )
      {
        result = v20 / (*(_WORD *)(v23 + 100) & 0x7FFu);
        if ( v20 % (*(_WORD *)(v23 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
