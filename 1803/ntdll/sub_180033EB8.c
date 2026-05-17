/*
 * XREFs of sub_180033EB8 @ 0x180033EB8
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180034B2C @ 0x180034B2C (sub_180034B2C.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180054094 @ 0x180054094 (sub_180054094.c)
 *     sub_180069E8C @ 0x180069E8C (sub_180069E8C.c)
 *     sub_18007DBEC @ 0x18007DBEC (sub_18007DBEC.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800DB9E4 @ 0x1800DB9E4 (sub_1800DB9E4.c)
 */

__int64 __fastcall sub_180033EB8(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4, __int64 *a5)
{
  unsigned __int16 v8; // bx
  int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  _DWORD *v12; // r13
  char v13; // r9
  unsigned __int64 v14; // r10
  int v15; // esi
  __int64 v16; // r8
  int v17; // ecx
  int v18; // edi
  int v19; // ecx
  __int64 v20; // rcx
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v22; // ecx
  int AlternateResourceModule; // eax
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  _WORD *v29; // rax
  int v30; // eax
  int v31; // ecx
  __int64 v32; // r9
  char v33; // [rsp+30h] [rbp-D0h]
  _WORD v34[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v35; // [rsp+38h] [rbp-C8h]
  _BYTE v36[2]; // [rsp+3Ah] [rbp-C6h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-C4h]
  char v38; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h]
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  __int64 *v41; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _WORD v48[64]; // [rsp+90h] [rbp-70h] BYREF

  v41 = a5;
  v43 = a3;
  v45 = a2;
  v44 = 0LL;
  v8 = 0;
  v34[0] = 0;
  v9 = 0;
  v38 = 0;
  v10 = 0LL;
  v37 = 0;
  v11 = 0;
  v40 = 0;
  v12 = 0LL;
  v13 = 0;
  v33 = 0;
  v39 = a1;
  v14 = a1;
  v15 = -1073020927;
  if ( a3 - 3 > 1 )
    return (unsigned int)-1073741583;
  v16 = *(unsigned __int16 *)(a2 + 16);
  v35 = v16;
  v36[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              v17 = v9;
              v18 = v9++;
              if ( !v17 )
                break;
              v19 = v17 - 1;
              if ( v19 )
              {
                v20 = (unsigned int)(v19 - 1);
                if ( !(_DWORD)v20 )
                {
                  v34[0] = 0;
                  if ( (unsigned __int8)sub_180034B2C(v20, v10, v16)
                    && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                        v11 < MergedPrefLanguages[2]) )
                  {
                    sub_180034D90(
                      (_DWORD)MergedPrefLanguages,
                      NtCurrentTeb()->MergedPrefLanguages,
                      v11,
                      (unsigned int)v34,
                      (__int64)v36);
                    v8 = v34[0];
                  }
                  else
                  {
                    v8 = 0;
                    v34[0] = 0;
                  }
                  if ( !v8 )
                    goto LABEL_54;
                  if ( v36[0] && (a4 & 0x100000) != 0 )
                  {
                    v8 = -4370;
                    v34[0] = -4370;
                  }
                  ++v11;
                  v9 = v18;
                  v40 = v11;
                  goto LABEL_12;
                }
                if ( (_DWORD)v20 == 1 )
                {
                  if ( !v12 )
                  {
                    v12 = sub_180033B60(v14, v10, 0, 1);
                    if ( !v12 )
                      goto LABEL_54;
                  }
                  if ( *v12 != -20054323 || (v12[6] & 2) == 0 || !v12[31] )
                    goto LABEL_54;
                  RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v12 + (unsigned int)v12[31]));
                  if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, v42) )
                  {
                    v15 = -1073020923;
LABEL_54:
                    v8 = -4370;
                    v34[0] = -4370;
                    goto LABEL_44;
                  }
                  v8 = v42[0];
                  v34[0] = v42[0];
                  if ( (a4 & 0x100000) != 0 )
                  {
                    sub_180034D90(v31, NtCurrentTeb()->MergedPrefLanguages, 0, (unsigned int)v34, (__int64)v36);
                    v14 = v39;
                    v16 = v35;
                    v13 = v33;
                    if ( v36[0] )
                    {
                      v8 = -4370;
                      v34[0] = -4370;
                    }
                    else
                    {
                      v8 = v34[0];
                    }
                    goto LABEL_13;
                  }
LABEL_12:
                  v13 = v33;
                  v16 = v35;
                  v14 = v39;
LABEL_13:
                  v10 = v37;
                  goto LABEL_18;
                }
                if ( v13 || v38 || (int)sub_180054094(v14, v10, v16) < 0 )
                  return (unsigned int)v15;
                v14 = v39;
                v10 = 0LL;
                v16 = v35;
                v13 = 1;
                v37 = 0;
                a4 |= 0x400000u;
                v33 = 1;
                v9 = 0;
                v11 = 0;
                v40 = 0;
              }
              else
              {
                if ( v8 == 0xEEEE )
                  goto LABEL_34;
                if ( (a4 & 4) != 0 )
                {
                  v8 = -4370;
                  v34[0] = -4370;
                  v9 = -2;
                }
                else
                {
                  if ( (v16 & 0x3FF) == 0 )
                    goto LABEL_34;
                  v30 = sub_18007EC88(v8, v34, v16);
                  v10 = v37;
                  v14 = v39;
                  v16 = v35;
                  v13 = v33;
                  if ( v30 >= 0 )
                  {
                    v8 = v34[0];
                    if ( v34[0] )
                    {
                      v9 = v18;
                      goto LABEL_18;
                    }
                  }
                  v9 = -2;
LABEL_34:
                  v8 = -4370;
                  v34[0] = -4370;
                }
              }
            }
            if ( (v16 & 0xF3FF) != 0 || (_WORD)v16 == 3072 )
              v8 = v16;
            else
              v8 = -4370;
            v34[0] = v8;
LABEL_18:
            ;
          }
          while ( v8 == 0xEEEE );
          v22 = 0;
          if ( !(_DWORD)v10 )
            break;
          v29 = v48;
          while ( *v29 != v8 )
          {
            ++v22;
            ++v29;
            if ( v22 >= (unsigned int)v10 )
              goto LABEL_20;
          }
        }
LABEL_20:
        if ( (unsigned int)v10 >= 0x40 )
          return (unsigned int)v15;
        v46 = 0LL;
        v37 = v10 + 1;
        v48[(unsigned int)v10] = v8;
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v14, v8, (unsigned int)&v44, (unsigned int)&v46, a4);
        v15 = AlternateResourceModule;
        if ( AlternateResourceModule >= 0 )
          break;
        if ( AlternateResourceModule != -1073741772 )
        {
          v10 = v37;
          v14 = v39;
          v16 = v35;
          v13 = v33;
          if ( AlternateResourceModule != -1073741766 )
            continue;
        }
        v15 = -1073020927;
        goto LABEL_44;
      }
      v24 = v44;
      v25 = v45;
      v38 = 1;
      *(_QWORD *)(v45 + 16) = v8;
      v26 = sub_180032DB4(v24, v25, 3u, 0x30u, v41);
      v15 = v26;
      if ( (a4 & 0x40) != 0 )
      {
        if ( v26 < 0 )
          goto LABEL_39;
        v15 = sub_180069E8C(v24, *v41, 0, *(_DWORD *)(v45 + 24), 0);
        if ( v15 >= 0 )
          break;
        *v41 = 0LL;
      }
      if ( v15 >= 0 )
        break;
LABEL_39:
      if ( (unsigned __int8)sub_18007DBEC(v39, v24) )
        return (unsigned int)v15;
      v11 = v40;
LABEL_44:
      v10 = v37;
      v14 = v39;
      v16 = v35;
      v13 = v33;
    }
    if ( *v41 > v24 && (!v46 || *v41 < v24 + v46) )
      break;
    *v41 = 0LL;
    v15 = -1073741701;
    DbgPrintEx(85, 2, (int)"'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    v10 = v37;
    v14 = v39;
    v16 = v35;
    v13 = v33;
    v11 = v40;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v24 = v44;
    v27 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  }
  else
  {
    v27 = 2147353477LL;
  }
  if ( (*(_BYTE *)v27 & 2) != 0 )
  {
    if ( (a4 & 0x40) != 0 )
      v32 = 9LL;
    else
      v32 = (a4 & 1) != 0 ? 5 : 3;
    sub_1800DB9E4(v24, v45, v43, v32);
  }
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v39;
  return (unsigned int)v15;
}
