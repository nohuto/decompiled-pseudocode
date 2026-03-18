/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x140233CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     PpmParkCalculateUnparkCount @ 0x140047230 (PpmParkCalculateUnparkCount.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140234350 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x14023439C (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402365B8 (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  unsigned int v0; // ecx
  int v1; // r13d
  unsigned int v2; // r12d
  char v3; // si
  __int64 v4; // rdi
  __int16 v5; // ax
  __int64 v6; // r14
  unsigned __int16 *v7; // rcx
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 Prcb; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  size_t v13; // r10
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r14d
  unsigned int v21; // ebx
  __int64 *v22; // rdi
  int v23; // ecx
  unsigned int v24; // edx
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v29[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+60h] [rbp-A8h]
  _DWORD Base[64]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v32[64]; // [rsp+168h] [rbp+60h] BYREF

  v27 = &PpmCurrentProfile[175 * dword_14034BB2C + 5];
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_41:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  v0 = PpmParkNumNodes;
  v1 = 0;
  v2 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = PpmParkNodes + 248LL * v2;
      v28 = v4;
      if ( *(_BYTE *)(v4 + 105) )
        break;
      v1 = 1;
LABEL_39:
      if ( ++v2 >= v0 )
      {
        if ( v1 )
          goto LABEL_41;
        return 1;
      }
    }
    v5 = *(_WORD *)(v4 + 4);
    v6 = 0LL;
    v7 = *(unsigned __int16 **)(v4 + 8);
    LODWORD(NumOfElements) = 0;
    v29[0] = 0LL;
    v8 = *(unsigned __int8 *)(v4 + 115);
    LOWORD(v30) = v5;
    v29[1] = v7;
    while ( !(unsigned int)KeEnumerateNextProcessor(&NumOfElements, v29) )
    {
      v9 = (unsigned int)NumOfElements;
      Prcb = KeGetPrcb(NumOfElements);
      v11 = PpmHeteroUtilityToNormalizedUtility(Prcb + 23936, *(unsigned int *)(Prcb + 24372));
      v6 += v11;
      Base[v9] = v11;
      LODWORD(NumOfElements) = v9 + 1;
    }
    qsort(Base, (unsigned int)NumOfElements, 4uLL, PpmUtilityComparer);
    v12 = *(unsigned __int8 *)(v4 + 6);
    v13 = 0LL;
    v14 = *(_QWORD *)(v4 + 72);
    v15 = 0LL;
    NumOfElements = 0LL;
    if ( (_DWORD)v12 )
    {
      v16 = (unsigned int)v12;
      v17 = (_QWORD *)(v14 + 8 * v12);
      do
      {
        v15 += v6 * *v17;
        v18 = v16;
        v12 = (unsigned int)(v12 - 1);
        --v16;
        v32[v12] = v15;
        v19 = *v17-- * v18;
        v13 += v19;
      }
      while ( (_DWORD)v12 );
      NumOfElements = v13;
    }
    v20 = *(unsigned __int8 *)(v4 + 105);
    v21 = v8;
    if ( v8 >= v20 )
      goto LABEL_20;
    v22 = v27;
    do
    {
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v13,
                            (unsigned int)Base[v21],
                            v32[v21],
                            *((unsigned __int8 *)v22 + v21 + 752)) )
        break;
      v13 = NumOfElements;
      ++v21;
    }
    while ( v21 < v20 );
    v4 = v28;
    if ( v21 <= v8 )
    {
      do
      {
        v13 = NumOfElements;
LABEL_20:
        if ( !v21 )
          goto LABEL_23;
        --v21;
      }
      while ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v13,
                               (unsigned int)Base[v21],
                               v32[v21],
                               *((unsigned __int8 *)v27 + v21 + 112)) );
      ++v21;
LABEL_23:
      v23 = v21 < v8;
    }
    else
    {
      v23 = 2;
    }
    if ( *(char *)(v4 + 124) == v23 )
    {
      v24 = (unsigned __int8)++*(_BYTE *)(v4 + 123);
    }
    else
    {
      v24 = 1;
      *(_BYTE *)(v4 + 124) = v23;
      *(_BYTE *)(v4 + 123) = 1;
      v3 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v3 |= 0x10u;
    }
    else if ( v23 == 2 )
    {
      if ( v24 < *((unsigned __int8 *)v27 + 111) )
      {
LABEL_36:
        *(_BYTE *)(v4 + 122) |= 6u;
        if ( !*(_BYTE *)(v4 + 115) )
        {
          v1 = 1;
          *(_BYTE *)(v4 + 122) &= ~2u;
        }
        PpmEventTraceHeteroResponse(v4, (unsigned int)Base, (unsigned int)v32, NumOfElements, v21, v3 | (2 - (v1 != 0)));
        v0 = PpmParkNumNodes;
        goto LABEL_39;
      }
      v3 |= 0x20u;
    }
    else
    {
      if ( v23 != 1 || v24 < *((unsigned __int8 *)v27 + 110) )
        goto LABEL_36;
      v3 |= 0x40u;
    }
    *(_BYTE *)(v4 + 115) = v21;
    goto LABEL_36;
  }
  return 1;
}
