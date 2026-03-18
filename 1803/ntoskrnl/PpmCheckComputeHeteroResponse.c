/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x14027F160
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmParkCalculateUnparkCount @ 0x140037A00 (PpmParkCalculateUnparkCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14027F84C (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x14027F898 (PpmHeteroUtilityToNormalizedUtility.c)
 *     PpmEventTraceHeteroResponse @ 0x1402815C0 (PpmEventTraceHeteroResponse.c)
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
  _QWORD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  __int64 *v21; // rdi
  int v22; // ecx
  __int64 *v23; // r14
  unsigned int v24; // edx
  char v25; // al
  bool v26; // zf
  size_t NumOfElements; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  unsigned __int16 *v32[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+68h] [rbp-A0h]
  _DWORD Base[64]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v35[64]; // [rsp+178h] [rbp+70h] BYREF

  v29 = PpmCurrentProfile;
  v30 = 2688LL * dword_1403AAA2C;
  if ( PpmHeteroPolicy != 4 )
  {
LABEL_43:
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
      v31 = v3;
      if ( *(_BYTE *)(v3 + 105) )
        break;
      v0 = 1;
LABEL_41:
      if ( ++v1 >= PpmParkNumNodes )
      {
        if ( v0 )
          goto LABEL_43;
        return 1;
      }
    }
    v4 = *(_WORD *)(v3 + 4);
    v5 = 0LL;
    v6 = *(unsigned __int16 **)(v3 + 8);
    LODWORD(NumOfElements) = 0;
    v32[0] = 0LL;
    v7 = *(unsigned __int8 *)(v3 + 115);
    v33 = v4;
    v32[1] = v6;
    while ( !(unsigned int)KeEnumerateNextProcessor(&NumOfElements, v32) )
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
      v16 = (_QWORD *)(v13 + 8 * v11);
      do
      {
        v14 += v5 * *v16;
        v17 = v15;
        v11 = (unsigned int)(v11 - 1);
        --v15;
        v35[v11] = v14;
        v18 = *v16-- * v17;
        v12 += v18;
      }
      while ( (_DWORD)v11 );
      NumOfElements = v12;
    }
    v19 = *(unsigned __int8 *)(v3 + 105);
    v20 = v7;
    if ( v7 < v19 )
    {
      v21 = &v29[(unsigned __int64)v30 / 8];
      do
      {
        if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                              v12,
                              (unsigned int)Base[v20],
                              v35[v20],
                              *((unsigned __int8 *)v21 + v20 + 1433)) )
          break;
        v12 = NumOfElements;
        ++v20;
      }
      while ( v20 < v19 );
      v3 = v31;
      if ( v20 > v7 )
      {
        v22 = 2;
        goto LABEL_26;
      }
      v12 = NumOfElements;
    }
    if ( v20 )
    {
      v23 = &v29[(unsigned __int64)v30 / 8];
      while ( 1 )
      {
        --v20;
        if ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                             v12,
                             (unsigned int)Base[v20],
                             v35[v20],
                             *((unsigned __int8 *)v23 + v20 + 153)) )
          break;
        v12 = NumOfElements;
        if ( !v20 )
          goto LABEL_25;
      }
      ++v20;
    }
LABEL_25:
    v22 = v20 < v7;
LABEL_26:
    if ( *(char *)(v3 + 124) == v22 )
    {
      v24 = (unsigned __int8)++*(_BYTE *)(v3 + 123);
    }
    else
    {
      v24 = 1;
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
      if ( v24 < LOBYTE(v29[(unsigned __int64)v30 / 8 + 19]) )
      {
LABEL_38:
        v25 = *(_BYTE *)(v3 + 122) | 6;
        v26 = *(_BYTE *)(v3 + 115) == 0;
        *(_BYTE *)(v3 + 122) = v25;
        if ( v26 )
        {
          v0 = 1;
          *(_BYTE *)(v3 + 122) = v25 & 0xFD;
        }
        PpmEventTraceHeteroResponse(v3, (unsigned int)Base, (unsigned int)v35, NumOfElements, v20, v2 | (2 - (v0 != 0)));
        goto LABEL_41;
      }
      v2 |= 0x20u;
    }
    else
    {
      if ( v22 != 1 || v24 < HIBYTE(v29[(unsigned __int64)v30 / 8 + 18]) )
        goto LABEL_38;
      v2 |= 0x40u;
    }
    *(_BYTE *)(v3 + 115) = v20;
    goto LABEL_38;
  }
  return 1;
}
