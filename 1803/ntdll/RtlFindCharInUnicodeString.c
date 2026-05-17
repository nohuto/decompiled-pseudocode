/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18003F370
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlDowncaseUnicodeChar @ 0x1800E4AB0 (RtlDowncaseUnicodeChar.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, __int16 *a2, __int64 a3, _WORD *a4)
{
  char v5; // r12
  __int64 result; // rax
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // dx
  char *v10; // r13
  __int16 *v11; // rsi
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // di
  int v14; // r10d
  int v15; // r8d
  __int16 v16; // cx
  __int16 v17; // bx
  __int16 v18; // dx
  int v19; // r12d
  __int16 v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // rbp
  signed __int64 v23; // r13
  _WORD *v24; // r14
  int v25; // r12d
  __int16 v26; // r8
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  int v29; // r12d
  __int16 v30; // r15
  unsigned __int16 v31; // bp
  unsigned __int16 v32; // [rsp+20h] [rbp-A8h]
  int v33; // [rsp+24h] [rbp-A4h]
  int v34; // [rsp+28h] [rbp-A0h]
  _WORD *v35; // [rsp+30h] [rbp-98h]
  _WORD v36[32]; // [rsp+40h] [rbp-88h] BYREF

  v35 = a4;
  v5 = a1;
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 || !a4 )
    return 3221225485LL;
  result = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0
      || (v7 = a2[1], (v7 & 1) != 0)
      || (unsigned __int16)*a2 > v7
      || v7 == 0xFFFF
      || !*((_QWORD *)a2 + 1) && (*a2 || v7) )
    {
      result = 3221225485LL;
    }
  }
  if ( (int)result >= 0 )
  {
    result = 0LL;
    if ( a3 )
    {
      if ( (*(_BYTE *)a3 & 1) != 0
        || (v8 = *(_WORD *)(a3 + 2), (v8 & 1) != 0)
        || *(_WORD *)a3 > v8
        || v8 == 0xFFFF
        || !*(_QWORD *)(a3 + 8) && (*(_WORD *)a3 || v8) )
      {
        result = 3221225485LL;
      }
    }
    if ( (int)result >= 0 )
    {
      v9 = *a2;
      v10 = *(char **)(a3 + 8);
      v11 = (__int16 *)*((_QWORD *)a2 + 1);
      v12 = v9 >> 1;
      v13 = *(_WORD *)a3 >> 1;
      v14 = a1 & 1;
      v32 = v9;
      v33 = v14;
      if ( (a1 & 1) != 0 )
      {
        v15 = -1;
        v11 = &v11[v12 - 1];
      }
      else
      {
        v15 = 1;
      }
      v34 = v15;
      if ( (a1 & 4) == 0 )
      {
        if ( v13 == 1 )
        {
          v16 = *(_WORD *)v10;
          if ( (v5 & 2) != 0 )
          {
            if ( v12 )
            {
              do
              {
                if ( *v11 != v16 )
                  break;
                v11 += v15;
                --v12;
              }
              while ( v12 );
              goto LABEL_27;
            }
          }
          else if ( v12 )
          {
            do
            {
              if ( *v11 == v16 )
                break;
              v11 += v15;
              --v12;
            }
            while ( v12 );
            goto LABEL_27;
          }
        }
        else if ( v12 )
        {
          v19 = a1 & 2;
          while ( 1 )
          {
            v20 = *v11;
            v21 = 0;
            if ( v19 )
            {
              if ( v13 )
              {
                do
                {
                  if ( v20 == *(_WORD *)&v10[2 * v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v13 );
              }
              if ( v21 == v13 )
                goto LABEL_42;
            }
            else
            {
              if ( v13 )
              {
                do
                {
                  if ( v20 == *(_WORD *)&v10[2 * v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v13 );
              }
              if ( v21 != v13 )
                goto LABEL_42;
            }
            v11 += v15;
            if ( !--v12 )
              goto LABEL_42;
          }
        }
        return 3221226021LL;
      }
      if ( v13 <= 0x20u )
      {
        if ( v13 )
        {
          v22 = v13;
          v23 = v10 - (char *)v36;
          v24 = v36;
          do
          {
            *v24 = RtlDowncaseUnicodeChar(*(unsigned __int16 *)((char *)v24 + v23));
            ++v24;
            --v22;
          }
          while ( v22 );
        }
        if ( v12 )
        {
          v25 = v5 & 2;
          while ( 1 )
          {
            v26 = RtlDowncaseUnicodeChar((unsigned __int16)*v11);
            if ( v25 )
            {
              for ( i = 0; i < v13; ++i )
              {
                if ( v26 == v36[i] )
                  break;
              }
              if ( i == v13 )
                goto LABEL_73;
            }
            else
            {
              for ( j = 0; j < v13; ++j )
              {
                if ( v26 == v36[j] )
                  break;
              }
              if ( j != v13 )
                goto LABEL_73;
            }
            v11 += v34;
            if ( !--v12 )
              goto LABEL_73;
          }
        }
        return 3221226021LL;
      }
      if ( v12 )
      {
        v29 = a1 & 2;
        while ( 1 )
        {
          v30 = RtlDowncaseUnicodeChar((unsigned __int16)*v11);
          v31 = 0;
          if ( v29 )
          {
            do
            {
              if ( v30 == (unsigned __int16)RtlDowncaseUnicodeChar(*(unsigned __int16 *)&v10[2 * v31]) )
                break;
              ++v31;
            }
            while ( v31 < v13 );
            if ( v31 == v13 )
              goto LABEL_73;
          }
          else
          {
            do
            {
              if ( v30 == (unsigned __int16)RtlDowncaseUnicodeChar(*(unsigned __int16 *)&v10[2 * v31]) )
                break;
              ++v31;
            }
            while ( v31 < v13 );
            if ( v31 != v13 )
            {
LABEL_73:
              v14 = v33;
              a4 = v35;
LABEL_42:
              v9 = v32;
LABEL_27:
              if ( v12 )
              {
                result = 0LL;
                v17 = 2 * v12 - 2;
                v18 = v9 - v17;
                if ( !v14 )
                  v17 = v18;
                *a4 = v17;
                return result;
              }
              return 3221226021LL;
            }
          }
          v11 += v34;
          if ( !--v12 )
            goto LABEL_73;
        }
      }
      return 3221226021LL;
    }
  }
  return result;
}
