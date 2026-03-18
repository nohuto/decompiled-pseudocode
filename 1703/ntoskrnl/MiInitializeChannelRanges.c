/*
 * XREFs of MiInitializeChannelRanges @ 0x140812FB0
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

unsigned __int64 MiInitializeChannelRanges()
{
  unsigned __int64 result; // rax
  __int64 v1; // r9
  unsigned int v2; // edx
  int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned __int16 v7; // ax
  unsigned int v8; // r10d
  unsigned int v9; // edx
  unsigned int v10; // r11d
  int v11; // ebx
  char *v12; // r14
  unsigned int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // r8
  char *v16; // rcx
  __int64 i; // rax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // r10d
  int v22; // ebx
  char *v23; // rsi
  unsigned int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // ecx
  __int64 v28; // r8
  char *v29; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // r8d
  int v35; // edx
  char v36[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-50h]
  signed __int32 v38[8]; // [rsp+48h] [rbp-40h] BYREF

  result = (unsigned __int64)memset(v38, 0, sizeof(v38));
  if ( dword_1403E311C )
  {
    if ( byte_14036CFD5 != 1 )
    {
      if ( dword_1403E3134 )
      {
        v37 = 256;
        result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, char *))off_14033C718[0])(
                   31LL,
                   8LL,
                   &qword_14036C1D8,
                   v36);
        v1 = qword_14036C1D8;
        if ( qword_14036C1D8 )
        {
          v2 = 0;
          v3 = 0;
          if ( *(_QWORD *)qword_14036C1D8 == -1LL )
            goto LABEL_16;
          do
          {
            v4 = *(unsigned __int16 *)(v1 + 12);
            if ( v2 <= v4 )
              v2 = *(unsigned __int16 *)(v1 + 12);
            if ( *(_BYTE *)(v1 + 14) == 1 )
            {
              v3 = 1;
            }
            else
            {
              result = *(unsigned __int16 *)(v1 + 10);
              if ( (unsigned __int16)result < 0x40u && (unsigned __int16)v4 < 4u )
              {
                v5 = v4 + 4 * (unsigned __int16)result;
                result = (unsigned __int64)v38;
                _bittestandset(v38, v5);
              }
            }
            v1 += 16LL;
          }
          while ( *(_QWORD *)v1 != -1LL );
          v1 = qword_14036C1D8;
          if ( !v3 )
LABEL_16:
            v2 = 0;
          v6 = v2 + 1;
          MmNumberOfChannels = v6;
          if ( v6 == 1 )
          {
            qword_14036C1D8 = 0LL;
          }
          else
          {
            if ( v6 > 4 )
            {
              while ( *(_QWORD *)v1 != -1LL )
              {
                if ( *(_WORD *)(v1 + 12) >= 4u )
                {
                  v7 = *(_WORD *)(v1 + 10);
                  if ( v7 < 0x40u )
                  {
                    v8 = 4 * v7;
                    v9 = v37 - 1;
                    v10 = v8 < v37 ? v8 : 0;
                    v11 = ((unsigned __int64)v38 & 4) != 0 ? 0x20 : 0;
                    v12 = (char *)v38 - (-(__int64)(((unsigned __int64)v38 & 4) != 0) & 4);
                    while ( 1 )
                    {
                      v13 = v11 + v9;
                      v14 = v11 + v10;
                      if ( v9 - v10 == -1 )
                        goto LABEL_26;
                      v15 = (1LL << (v14 & 0x3F)) - 1;
                      v16 = &v12[8 * ((unsigned __int64)v14 >> 6)];
                      for ( i = v15 | ~*(_QWORD *)v16; i == -1; i = ~*(_QWORD *)v16 )
                      {
                        v16 += 8;
                        if ( v16 > &v12[8 * ((unsigned __int64)v13 >> 6)] )
                          goto LABEL_26;
                      }
                      _BitScanForward64((unsigned __int64 *)&i, ~i);
                      v18 = i + ((unsigned int)((v16 - v12) >> 3) << 6);
                      if ( v18 > v13 )
                      {
LABEL_26:
                        v18 = -1;
                      }
                      else if ( v18 != -1 )
                      {
                        break;
                      }
                      if ( !v10 )
                        break;
                      v19 = v8 + 1;
                      if ( v8 + 1 > v37 )
                        v19 = v37;
                      v9 = v19 - 1;
                      v10 = 0;
                    }
                    v20 = v18 - v11;
                    if ( v18 == -1 )
                      v20 = -1;
                    if ( v20 < v8 || v20 >= v8 + 4 )
                    {
                      *(_BYTE *)(v1 + 14) = 0;
                      *(_WORD *)(v1 + 12) = 3;
                    }
                    else
                    {
                      *(_WORD *)(v1 + 12) = v20 & 3;
                    }
                  }
                }
                v1 += 16LL;
              }
              MmNumberOfChannels = 4;
            }
            v21 = 0;
            v22 = ((unsigned __int64)v38 & 4) != 0 ? 0x20 : 0;
            v23 = (char *)v38 - (-(__int64)(((unsigned __int64)v38 & 4) != 0) & 4);
            while ( 1 )
            {
              v24 = v21 < v37 ? v21 : 0;
              v25 = v37 - 1;
              while ( 1 )
              {
                v26 = v22 + v25;
                v27 = v22 + v24;
                result = v25 - v24 + 1;
                if ( !(_DWORD)result )
                  goto LABEL_48;
                v28 = (1LL << (v27 & 0x3F)) - 1;
                v29 = &v23[8 * ((unsigned __int64)v27 >> 6)];
                for ( result = v28 | ~*(_QWORD *)v29; result == -1LL; result = ~*(_QWORD *)v29 )
                {
                  v29 += 8;
                  if ( v29 > &v23[8 * ((unsigned __int64)v26 >> 6)] )
                    goto LABEL_48;
                }
                _BitScanForward64(&result, ~result);
                v30 = result + ((unsigned int)((v29 - v23) >> 3) << 6);
                if ( v30 <= v26 )
                {
                  if ( v30 != -1 )
                    break;
                }
                else
                {
LABEL_48:
                  v30 = -1;
                }
                if ( !v24 )
                  break;
                v31 = v21 + 1;
                if ( v21 + 1 > v37 )
                  v31 = v37;
                v25 = v31 - 1;
                v24 = 0;
              }
              v32 = v30 - v22;
              if ( v30 == -1 )
                v32 = -1;
              if ( v32 == -1 || v32 < v21 )
                break;
              v33 = qword_14036C1D8;
              v21 = v32 + 1;
              v34 = v32 >> 2;
              v35 = v32 & 3;
              while ( *(_QWORD *)v33 != -1LL )
              {
                if ( *(unsigned __int16 *)(v33 + 10) == v34 && *(unsigned __int16 *)(v33 + 12) == v35 )
                  *(_BYTE *)(v33 + 14) = 0;
                v33 += 16LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
