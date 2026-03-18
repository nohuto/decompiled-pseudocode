/*
 * XREFs of ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0162950
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0160038 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0160B5C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0164570 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003BDB8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C003FC0C (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z @ 0x1C0162684 (-CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0162714 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0163604 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v1; // r14d
  _OWORD *v2; // rsi
  __int64 result; // rax
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // r15
  __int64 v7; // r12
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  ULONG v20; // eax
  unsigned __int8 *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  int v32; // r8d
  unsigned __int64 v33; // r14
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  int v38; // eax
  int v39; // ecx
  __int128 v40; // xmm0
  int v41; // r14d
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  unsigned int v48; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-85h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-71h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-51h]
  unsigned __int16 v55[58]; // [rsp+74h] [rbp-4Dh] BYREF

  v1 = 0;
  v2 = (_OWORD *)((char *)a1 + 288);
  KeyHandle = 0LL;
  v48 = 0;
  v49 = 0;
  memset((char *)a1 + 288, 0, 0x70uLL);
  *((_DWORD *)a1 + 129) = 0;
  result = CitpPostUpdateUseInfoGetUpdateKey(&v48);
  if ( (int)result < 0 )
    return result;
  result = CitpPostUpdateUseInfoGetBuildNumber(&v49);
  if ( (int)result < 0 )
    return result;
  result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
  if ( (int)result < 0 )
    return result;
  memset(v55, 0, 0x70uLL);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PUUActive");
  ResultLength = 124;
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x7Cu,
         &ResultLength) >= 0 )
  {
    if ( v54 == 112 )
    {
      if ( v55[12] == 210 && *(_DWORD *)v55 == v48 )
      {
        v8 = *(_OWORD *)&v55[8];
        *((_OWORD *)a1 + 25) = *(_OWORD *)v55;
        v9 = *(_OWORD *)&v55[16];
        *((_OWORD *)a1 + 26) = v8;
        v10 = *(_OWORD *)&v55[24];
        *((_OWORD *)a1 + 27) = v9;
        v11 = *(_OWORD *)&v55[32];
        *((_OWORD *)a1 + 28) = v10;
        v12 = *(_OWORD *)&v55[40];
        *((_OWORD *)a1 + 29) = v11;
        v13 = *(_OWORD *)&v55[48];
        *((_OWORD *)a1 + 30) = v12;
        *((_OWORD *)a1 + 31) = v13;
        goto LABEL_26;
      }
      v5 = v55[2];
      if ( *(_DWORD *)&v55[48] == v49 )
        v1 = *(_DWORD *)&v55[46];
      v7 = *(_QWORD *)&v55[40];
      v6 = v55[44];
    }
    else
    {
      if ( v54 >= 0x18 )
        v5 = v55[2];
      if ( v54 >= 0x1A )
      {
        if ( v55[12] >= 0xD1u )
        {
          v7 = *(_QWORD *)&v55[40];
          v6 = v55[44];
        }
        if ( v55[12] >= 0xD2u )
          v1 = *(_DWORD *)&v55[46];
      }
    }
  }
  memset(v55, 0, 0x70uLL);
  *(_DWORD *)&v55[48] = v49;
  v55[12] = 210;
  v55[2] = v5;
  *(_QWORD *)&v55[40] = v7;
  *(_DWORD *)&v55[46] = v1;
  if ( v7 || v6 )
  {
    v55[44] = v6;
  }
  else
  {
    if ( !v5 )
      v5 = 1;
    v55[44] = v5;
  }
  *(_DWORD *)v55 = v48;
  *(_QWORD *)&v55[36] = MEMORY[0xFFFFF78000000014];
  v14 = *(_OWORD *)&v55[8];
  *((_OWORD *)a1 + 25) = *(_OWORD *)v55;
  v15 = *(_OWORD *)&v55[16];
  *((_OWORD *)a1 + 26) = v14;
  v16 = *(_OWORD *)&v55[24];
  *((_OWORD *)a1 + 27) = v15;
  v17 = *(_OWORD *)&v55[32];
  *((_OWORD *)a1 + 28) = v16;
  v18 = *(_OWORD *)&v55[40];
  *((_OWORD *)a1 + 29) = v17;
  v19 = *(_OWORD *)&v55[48];
  *((_OWORD *)a1 + 30) = v18;
  *((_OWORD *)a1 + 31) = v19;
  CitpStatIncrement(&v55[2], 1);
LABEL_26:
  CitpStatIncrement(&v55[4], 1);
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v20 = RtlLengthSid(*((PSID *)a1 + 12));
    v21 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
    v22 = 314159LL;
    v23 = v20;
    if ( v20 >= 8uLL )
    {
      v24 = (unsigned __int64)v20 >> 3;
      v23 = v20 - 8 * v24;
      do
      {
        v25 = v21[7];
        v26 = 37
            * (v21[6]
             + 37 * (v21[5] + 37 * (v21[4] + 37 * (v21[3] + 37 * (v21[2] + 37 * (v21[1] + 37 * (*v21 + 37 * v22)))))));
        v21 += 8;
        v22 = v25 + v26;
        --v24;
      }
      while ( v24 );
    }
    if ( v23 < 1 || v23 > 7 )
      goto LABEL_46;
    v27 = v23 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 != 1 )
                {
LABEL_46:
                  *(_DWORD *)&v55[16] = v22;
                  goto LABEL_47;
                }
                LODWORD(v22) = *v21++ + 37 * v22;
              }
              LODWORD(v22) = *v21++ + 37 * v22;
            }
            LODWORD(v22) = *v21++ + 37 * v22;
          }
          LODWORD(v22) = *v21++ + 37 * v22;
        }
        LODWORD(v22) = *v21++ + 37 * v22;
      }
      LODWORD(v22) = *v21++ + 37 * v22;
    }
    LODWORD(v22) = *v21 + 37 * v22;
    goto LABEL_46;
  }
LABEL_47:
  v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 188), v33);
  v34 = *((unsigned int *)a1 + 51);
  v35 = (unsigned int)dword_1C01A168C;
  v36 = 1000LL * *(unsigned int *)&v55[6];
  *((_DWORD *)a1 + 128) = v33;
  v37 = (v34 + v36) % v35;
  v38 = *(_DWORD *)&v55[52];
  *((_DWORD *)a1 + 129) = v34 - v37;
  if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)&v55[36] )
  {
    v39 = -1;
    if ( (MEMORY[0xFFFFF78000000014] - *(_QWORD *)&v55[36]) / 0x2710uLL <= 0xFFFFFFFF )
      v39 = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)&v55[36]) / 0x2710uLL;
    v38 = v39 + *(_DWORD *)&v55[52];
  }
  v40 = *(_OWORD *)v55;
  v41 = v33 - v38;
  result = 0LL;
  v42 = *(_OWORD *)&v55[8];
  *((_DWORD *)a1 + 191) = v41;
  *v2 = v40;
  v43 = *(_OWORD *)&v55[16];
  v2[1] = v42;
  v44 = *(_OWORD *)&v55[24];
  v2[2] = v43;
  v45 = *(_OWORD *)&v55[32];
  v2[3] = v44;
  v46 = *(_OWORD *)&v55[40];
  v2[4] = v45;
  v47 = *(_OWORD *)&v55[48];
  v2[5] = v46;
  v2[6] = v47;
  return result;
}
