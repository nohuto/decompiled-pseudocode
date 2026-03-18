/*
 * XREFs of ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0082FBC
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00820D4 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00230F4 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0083C90 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z @ 0x1C00840F4 (-CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0084178 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v1; // edi
  __int64 result; // rax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r14
  __int64 v6; // r15
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  ULONG v12; // eax
  unsigned __int8 *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  int v22; // r9d
  unsigned __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  unsigned __int16 v33; // ax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // r9d
  int v40; // r9d
  unsigned int v41; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-85h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-71h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-51h]
  unsigned __int16 v48[58]; // [rsp+74h] [rbp-4Dh] BYREF

  v1 = 0;
  KeyHandle = 0LL;
  v41 = 0;
  v42 = 0;
  memset((char *)a1 + 288, 0, 0x68uLL);
  *((_DWORD *)a1 + 125) = 0;
  result = CitpPostUpdateUseInfoGetUpdateKey(&v41);
  if ( (int)result >= 0 )
  {
    result = CitpPostUpdateUseInfoGetBuildNumber(&v42);
    if ( (int)result >= 0 )
    {
      result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
      if ( (int)result >= 0 )
      {
        memset(v48, 0, 0x68uLL);
        v4 = 0;
        v5 = 0;
        v6 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"PUUActive");
        ResultLength = 116;
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x74u,
               &ResultLength) >= 0 )
        {
          if ( v47 == 104 )
          {
            if ( v48[12] == 210 && *(_DWORD *)v48 == v41 )
            {
              v7 = *(_OWORD *)&v48[8];
              *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)v48;
              v8 = *(_OWORD *)&v48[16];
              *(_OWORD *)((char *)a1 + 408) = v7;
              v9 = *(_OWORD *)&v48[24];
              *(_OWORD *)((char *)a1 + 424) = v8;
              v10 = *(_OWORD *)&v48[32];
              *(_OWORD *)((char *)a1 + 440) = v9;
              v11 = *(_OWORD *)&v48[40];
              *(_OWORD *)((char *)a1 + 456) = v10;
              *(_QWORD *)&v10 = *(_QWORD *)&v48[48];
              *(_OWORD *)((char *)a1 + 472) = v11;
              *((_QWORD *)a1 + 61) = v10;
              goto LABEL_9;
            }
            v4 = v48[2];
            if ( *(_DWORD *)&v48[48] == v42 )
              v1 = *(_DWORD *)&v48[46];
            v6 = *(_QWORD *)&v48[40];
            v5 = v48[44];
          }
          else
          {
            if ( v47 >= 0x18 )
              v4 = v48[2];
            if ( v47 >= 0x1A )
            {
              if ( v48[12] >= 0xD1u )
              {
                v6 = *(_QWORD *)&v48[40];
                v5 = v48[44];
              }
              if ( v48[12] >= 0xD2u )
                v1 = *(_DWORD *)&v48[46];
            }
          }
        }
        memset(v48, 0, 0x68uLL);
        *(_DWORD *)&v48[48] = v42;
        v48[12] = 210;
        v48[2] = v4;
        *(_QWORD *)&v48[40] = v6;
        *(_DWORD *)&v48[46] = v1;
        if ( v6 || v5 )
        {
          v48[44] = v5;
        }
        else
        {
          if ( v4 )
            v33 = v4;
          else
            v33 = 1;
          v48[44] = v33;
        }
        *(_DWORD *)v48 = v41;
        *(_QWORD *)&v48[36] = MEMORY[0xFFFFF78000000014];
        v34 = *(_OWORD *)&v48[8];
        *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)v48;
        v35 = *(_OWORD *)&v48[16];
        *(_OWORD *)((char *)a1 + 408) = v34;
        v36 = *(_OWORD *)&v48[24];
        *(_OWORD *)((char *)a1 + 424) = v35;
        v37 = *(_OWORD *)&v48[32];
        *(_OWORD *)((char *)a1 + 440) = v36;
        v38 = *(_OWORD *)&v48[40];
        *(_OWORD *)((char *)a1 + 456) = v37;
        *(_QWORD *)&v37 = *(_QWORD *)&v48[48];
        *(_OWORD *)((char *)a1 + 472) = v38;
        *((_QWORD *)a1 + 61) = v37;
        CitpStatIncrement(&v48[2], 1);
LABEL_9:
        CitpStatIncrement(&v48[4], 1);
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
LABEL_24:
          v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 188), v23);
          v24 = *(_QWORD *)((char *)a1 + 204);
          v25 = (unsigned int)dword_1C019372C;
          v26 = *(unsigned int *)&v48[6];
          v27 = *(_OWORD *)v48;
          v28 = *(_OWORD *)&v48[8];
          *((_DWORD *)a1 + 124) = v23;
          *((_OWORD *)a1 + 18) = v27;
          v29 = *(_OWORD *)&v48[16];
          *((_DWORD *)a1 + 125) = v24 - ((unsigned __int64)(unsigned int)v24 + 1000 * v26) % v25;
          *((_OWORD *)a1 + 19) = v28;
          v30 = *(_OWORD *)&v48[24];
          *((_OWORD *)a1 + 20) = v29;
          v31 = *(_OWORD *)&v48[32];
          *((_OWORD *)a1 + 21) = v30;
          v32 = *(_OWORD *)&v48[40];
          *((_OWORD *)a1 + 22) = v31;
          *(_QWORD *)&v31 = *(_QWORD *)&v48[48];
          *((_OWORD *)a1 + 23) = v32;
          *((_QWORD *)a1 + 48) = v31;
          return 0LL;
        }
        v12 = RtlLengthSid(*((PSID *)a1 + 12));
        v13 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
        v14 = 314159LL;
        v15 = v12;
        if ( v12 >= 8uLL )
        {
          v16 = (unsigned __int64)v12 >> 3;
          v15 = v12 - 8 * v16;
          do
          {
            v17 = v13[7];
            v18 = 37
                * (v13[6]
                 + 37
                 * (v13[5] + 37 * (v13[4] + 37 * (v13[3] + 37 * (v13[2] + 37 * (v13[1] + 37 * (*v13 + 37 * v14)))))));
            v13 += 8;
            v14 = v17 + v18;
            --v16;
          }
          while ( v16 );
        }
        if ( v15 >= 1 && v15 <= 7 )
        {
          v19 = v15 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              v21 = v20 - 1;
              if ( v21 )
              {
                v22 = v21 - 1;
                if ( v22 )
                {
                  v39 = v22 - 1;
                  if ( v39 )
                  {
                    v40 = v39 - 1;
                    if ( v40 )
                    {
                      if ( v40 != 1 )
                        goto LABEL_23;
                      LODWORD(v14) = *v13++ + 37 * v14;
                    }
                    LODWORD(v14) = *v13++ + 37 * v14;
                  }
                  LODWORD(v14) = *v13++ + 37 * v14;
                }
                LODWORD(v14) = *v13++ + 37 * v14;
              }
              LODWORD(v14) = *v13++ + 37 * v14;
            }
            LODWORD(v14) = *v13++ + 37 * v14;
          }
          LODWORD(v14) = *v13 + 37 * v14;
        }
LABEL_23:
        *(_DWORD *)&v48[16] = v14;
        goto LABEL_24;
      }
    }
  }
  return result;
}
