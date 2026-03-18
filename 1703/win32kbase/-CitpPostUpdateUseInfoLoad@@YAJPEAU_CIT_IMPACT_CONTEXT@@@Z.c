/*
 * XREFs of ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00856D4
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0086458 (-CitpStart@@YAJXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0053010 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0085A04 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0085B68 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  _OWORD *v1; // r12
  __int64 result; // rax
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // di
  __int64 v6; // r14
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
  unsigned int v41; // [rsp+38h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-65h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-41h]
  unsigned __int16 v47[50]; // [rsp+64h] [rbp-3Dh] BYREF

  v1 = (_OWORD *)((char *)a1 + 640);
  KeyHandle = 0LL;
  v41 = 0;
  memset((char *)a1 + 640, 0, 0x60uLL);
  *((_DWORD *)a1 + 209) = 0;
  result = CitpPostUpdateUseInfoGetUpdateKey(&v41);
  if ( (int)result >= 0 )
  {
    result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
    if ( (int)result >= 0 )
    {
      memset(v47, 0, 0x60uLL);
      v4 = 0;
      v5 = 0;
      v6 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"PUUActive");
      ResultLength = 108;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x6Cu,
             &ResultLength) >= 0 )
      {
        if ( v46 == 96 )
        {
          if ( v47[12] == 209 && *(_DWORD *)v47 == v41 )
          {
            v7 = *(_OWORD *)&v47[8];
            *((_OWORD *)a1 + 46) = *(_OWORD *)v47;
            v8 = *(_OWORD *)&v47[16];
            *((_OWORD *)a1 + 47) = v7;
            v9 = *(_OWORD *)&v47[24];
            *((_OWORD *)a1 + 48) = v8;
            v10 = *(_OWORD *)&v47[32];
            *((_OWORD *)a1 + 49) = v9;
            v11 = *(_OWORD *)&v47[40];
            *((_OWORD *)a1 + 50) = v10;
            *((_OWORD *)a1 + 51) = v11;
            goto LABEL_8;
          }
          v4 = v47[2];
        }
        else
        {
          if ( v46 >= 0x18 )
            v4 = v47[2];
          if ( v46 < 0x1A || v47[12] < 0xD1u )
            goto LABEL_31;
        }
        v5 = v47[44];
        v6 = *(_QWORD *)&v47[40];
      }
LABEL_31:
      memset(v47, 0, 0x60uLL);
      v47[2] = v4;
      v47[12] = 209;
      *(_QWORD *)&v47[40] = v6;
      if ( v6 || v5 )
      {
        v47[44] = v5;
      }
      else
      {
        v33 = 1;
        if ( v4 )
          v33 = v4;
        v47[44] = v33;
      }
      *(_DWORD *)v47 = v41;
      *(_QWORD *)&v47[36] = MEMORY[0xFFFFF78000000014];
      v34 = *(_OWORD *)&v47[8];
      *((_OWORD *)a1 + 46) = *(_OWORD *)v47;
      v35 = *(_OWORD *)&v47[16];
      *((_OWORD *)a1 + 47) = v34;
      v36 = *(_OWORD *)&v47[24];
      *((_OWORD *)a1 + 48) = v35;
      v37 = *(_OWORD *)&v47[32];
      *((_OWORD *)a1 + 49) = v36;
      v38 = *(_OWORD *)&v47[40];
      *((_OWORD *)a1 + 50) = v37;
      *((_OWORD *)a1 + 51) = v38;
      CitpStatIncrement(&v47[2], 1);
LABEL_8:
      CitpStatIncrement(&v47[4], 1);
      if ( !(unsigned __int8)RtlIsMultiSessionSku() )
      {
LABEL_22:
        v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 544), v23);
        v24 = *((_QWORD *)a1 + 70);
        v25 = (unsigned int)dword_1C018E894;
        v26 = *(unsigned int *)&v47[6];
        v27 = *(_OWORD *)v47;
        v28 = *(_OWORD *)&v47[8];
        *((_DWORD *)a1 + 208) = v23;
        *v1 = v27;
        v29 = *(_OWORD *)&v47[16];
        v1[1] = v28;
        v30 = *(_OWORD *)&v47[24];
        v1[2] = v29;
        LODWORD(v24) = v24 - ((unsigned __int64)(unsigned int)v24 + 1000 * v26) % v25;
        result = 0LL;
        v31 = *(_OWORD *)&v47[32];
        *((_DWORD *)a1 + 209) = v24;
        v1[3] = v30;
        v32 = *(_OWORD *)&v47[40];
        v1[4] = v31;
        v1[5] = v32;
        return result;
      }
      v12 = RtlLengthSid(*((PSID *)a1 + 52));
      v13 = (unsigned __int8 *)*((_QWORD *)a1 + 52);
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
               + 37 * (v13[5] + 37 * (v13[4] + 37 * (v13[3] + 37 * (v13[2] + 37 * (v13[1] + 37 * (*v13 + 37 * v14)))))));
          v13 += 8;
          v14 = v17 + v18;
          --v16;
        }
        while ( v16 );
      }
      if ( (unsigned __int64)(v15 - 1) <= 6 )
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
                      goto LABEL_21;
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
LABEL_21:
      *(_DWORD *)&v47[16] = v14;
      goto LABEL_22;
    }
  }
  return result;
}
