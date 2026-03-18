/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x1402491D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     PpmParkCalculateUnparkCount @ 0x14008F450 (PpmParkCalculateUnparkCount.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x140249888 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1402498D4 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x14024B648 (PpmEventTraceHeteroResponse.c)
 */

char PpmCheckComputeHeteroResponse()
{
  int v0; // r13d
  unsigned int v1; // r12d
  char v2; // si
  __int64 v3; // rdi
  __int16 v4; // ax
  __int64 v5; // r14
  unsigned __int16 *v6; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rbx
  __int64 Prcb; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  size_t v12; // r10
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  __int64 v21; // rdi
  int v22; // ecx
  unsigned int v23; // edx
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  unsigned __int16 *v28[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+60h] [rbp-A8h]
  _DWORD Base[64]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[64]; // [rsp+168h] [rbp+60h] BYREF

  v26 = 2688LL * dword_1403661AC + PpmCurrentProfile + 40;
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_41:
    PpmParkCalculateUnparkCount();
    return 1;
  }
  v0 = 0;
  v1 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = PpmParkNodes + 248LL * v1;
      v27 = v3;
      if ( *(_BYTE *)(v3 + 105) )
        break;
      v0 = 1;
LABEL_39:
      if ( ++v1 >= PpmParkNumNodes )
      {
        if ( v0 )
          goto LABEL_41;
        return 1;
      }
    }
    v4 = *(_WORD *)(v3 + 4);
    v5 = 0LL;
    v6 = *(unsigned __int16 **)(v3 + 8);
    LODWORD(NumOfElements) = 0;
    v28[0] = 0LL;
    v7 = *(unsigned __int8 *)(v3 + 115);
    LOWORD(v29) = v4;
    v28[1] = v6;
    while ( !(unsigned int)KeEnumerateNextProcessor(&NumOfElements, v28) )
    {
      v8 = (unsigned int)NumOfElements;
      Prcb = KeGetPrcb(NumOfElements);
      v10 = PpmHeteroUtilityToNormalizedUtility(Prcb + 23808, *(unsigned int *)(Prcb + 24244));
      v5 += v10;
      Base[v8] = v10;
      LODWORD(NumOfElements) = v8 + 1;
    }
    qsort(Base, (unsigned int)NumOfElements, 4uLL, PpmUtilityComparer);
    v11 = *(unsigned __int8 *)(v3 + 6);
    v12 = 0LL;
    v13 = *(_QWORD *)(v3 + 72);
    v14 = 0LL;
    NumOfElements = 0LL;
    if ( (_DWORD)v11 )
    {
      v15 = (unsigned int)v11;
      v16 = (__int64 *)(v13 + 8 * v11);
      do
      {
        v14 += v5 * *v16;
        v11 = (unsigned int)(v11 - 1);
        v31[v11] = v14;
        v17 = *v16--;
        v18 = v15 * v17;
        --v15;
        v12 += v18;
      }
      while ( (_DWORD)v11 );
      NumOfElements = v12;
    }
    v19 = *(unsigned __int8 *)(v3 + 105);
    v20 = v7;
    if ( v7 >= v19 )
      goto LABEL_20;
    v21 = v26;
    do
    {
      if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                            v12,
                            (unsigned int)Base[v20],
                            v31[v20],
                            *(unsigned __int8 *)(v20 + v21 + 1392)) )
        break;
      v12 = NumOfElements;
      ++v20;
    }
    while ( v20 < v19 );
    v3 = v27;
    if ( v20 <= v7 )
    {
      do
      {
        v12 = NumOfElements;
LABEL_20:
        if ( !v20 )
          goto LABEL_23;
        --v20;
      }
      while ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                               v12,
                               (unsigned int)Base[v20],
                               v31[v20],
                               *(unsigned __int8 *)(v20 + v26 + 112)) );
      ++v20;
LABEL_23:
      v22 = v20 < v7;
    }
    else
    {
      v22 = 2;
    }
    if ( *(char *)(v3 + 124) == v22 )
    {
      v23 = (unsigned __int8)++*(_BYTE *)(v3 + 123);
    }
    else
    {
      v23 = 1;
      *(_BYTE *)(v3 + 124) = v22;
      *(_BYTE *)(v3 + 123) = 1;
      v2 = 4;
    }
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v2 |= 0x10u;
    }
    else if ( v22 == 2 )
    {
      if ( v23 < *(unsigned __int8 *)(v26 + 111) )
      {
LABEL_36:
        *(_BYTE *)(v3 + 122) |= 6u;
        if ( !*(_BYTE *)(v3 + 115) )
        {
          v0 = 1;
          *(_BYTE *)(v3 + 122) &= ~2u;
        }
        PpmEventTraceHeteroResponse(v3, (unsigned int)Base, (unsigned int)v31, NumOfElements, v20, v2 | (2 - (v0 != 0)));
        goto LABEL_39;
      }
      v2 |= 0x20u;
    }
    else
    {
      if ( v22 != 1 || v23 < *(unsigned __int8 *)(v26 + 110) )
        goto LABEL_36;
      v2 |= 0x40u;
    }
    *(_BYTE *)(v3 + 115) = v20;
    goto LABEL_36;
  }
  return 1;
}
