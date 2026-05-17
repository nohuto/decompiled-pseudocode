/*
 * XREFs of RtlFindCharInUnicodeString @ 0x180035010
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180033FC4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008B7E0 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlDowncaseUnicodeChar @ 0x1800E8CC0 (RtlDowncaseUnicodeChar.c)
 */

__int64 __fastcall RtlFindCharInUnicodeString(int a1, __int16 *a2, __int64 a3, _WORD *a4)
{
  __int64 v4; // rbp
  char v6; // r12
  __int64 result; // rax
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r8
  __int16 v10; // r11
  char *v11; // r13
  __int16 *v12; // rsi
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // di
  int v15; // r8d
  int v16; // r15d
  __int16 v17; // cx
  __int16 v18; // bx
  __int16 v19; // bx
  int v20; // r12d
  __int16 v21; // dx
  unsigned __int16 v22; // cx
  signed __int64 v23; // r13
  _WORD *v24; // r14
  int v25; // r12d
  __int16 v26; // r8
  unsigned __int16 i; // dx
  unsigned __int16 v28; // cx
  int v29; // r12d
  __int16 v30; // r15
  __int16 v31; // [rsp+20h] [rbp-A8h]
  int v32; // [rsp+24h] [rbp-A4h]
  _WORD *v33; // [rsp+28h] [rbp-A0h]
  int v34; // [rsp+30h] [rbp-98h]
  _WORD v35[32]; // [rsp+40h] [rbp-88h] BYREF

  LODWORD(v4) = 0;
  v33 = a4;
  v6 = a1;
  if ( a4 )
    *a4 = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 || !a4 )
    return 3221225485LL;
  result = 0LL;
  if ( a2 )
  {
    if ( (*(_BYTE *)a2 & 1) != 0
      || (v8 = a2[1], (v8 & 1) != 0)
      || (unsigned __int16)*a2 > v8
      || v8 == 0xFFFF
      || !*((_QWORD *)a2 + 1) && (*a2 || v8) )
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
        || (v9 = *(_WORD *)(a3 + 2), (v9 & 1) != 0)
        || *(_WORD *)a3 > v9
        || v9 == 0xFFFF
        || !*(_QWORD *)(a3 + 8) && (*(_WORD *)a3 || v9) )
      {
        result = 3221225485LL;
      }
    }
    if ( (int)result >= 0 )
    {
      v10 = *a2;
      v11 = *(char **)(a3 + 8);
      v12 = (__int16 *)*((_QWORD *)a2 + 1);
      v13 = (unsigned __int16)*a2 >> 1;
      v14 = *(_WORD *)a3 >> 1;
      v15 = a1 & 1;
      v31 = *a2;
      v32 = v15;
      if ( (a1 & 1) != 0 )
      {
        v16 = -1;
        v34 = -1;
        v12 = &v12[v13 - 1];
      }
      else
      {
        v16 = 1;
        v34 = 1;
      }
      if ( (a1 & 4) == 0 )
      {
        if ( v14 == 1 )
        {
          v17 = *(_WORD *)v11;
          if ( (v6 & 2) != 0 )
          {
            if ( v13 )
            {
              do
              {
                if ( *v12 != v17 )
                  break;
                v12 += v16;
                --v13;
              }
              while ( v13 );
              goto LABEL_27;
            }
          }
          else if ( v13 )
          {
            do
            {
              if ( *v12 == v17 )
                break;
              v12 += v16;
              --v13;
            }
            while ( v13 );
            goto LABEL_27;
          }
        }
        else if ( v13 )
        {
          v20 = a1 & 2;
          while ( 1 )
          {
            v21 = *v12;
            v22 = 0;
            if ( v20 )
            {
              if ( v14 )
              {
                do
                {
                  if ( v21 == *(_WORD *)&v11[2 * v22] )
                    break;
                  ++v22;
                }
                while ( v22 < v14 );
                LODWORD(v4) = 0;
              }
              if ( v22 == v14 )
                goto LABEL_27;
            }
            else
            {
              if ( v14 )
              {
                do
                {
                  if ( v21 == *(_WORD *)&v11[2 * v22] )
                    break;
                  ++v22;
                }
                while ( v22 < v14 );
                LODWORD(v4) = 0;
              }
              if ( v22 != v14 )
                goto LABEL_27;
            }
            v12 += v16;
            if ( !--v13 )
              goto LABEL_27;
          }
        }
        return 3221226021LL;
      }
      if ( v14 <= 0x20u )
      {
        if ( v14 )
        {
          v4 = v14;
          v23 = v11 - (char *)v35;
          v24 = v35;
          do
          {
            *v24 = RtlDowncaseUnicodeChar(*(unsigned __int16 *)((char *)v24 + v23));
            ++v24;
            --v4;
          }
          while ( v4 );
        }
        if ( v13 )
        {
          v25 = v6 & 2;
          while ( 1 )
          {
            v26 = RtlDowncaseUnicodeChar((unsigned __int16)*v12);
            if ( v25 )
            {
              for ( i = v4; i < v14; ++i )
              {
                if ( v26 == v35[i] )
                  break;
              }
              if ( i == v14 )
                goto LABEL_80;
            }
            else
            {
              v28 = v4;
              if ( (unsigned __int16)v4 < v14 )
              {
                do
                {
                  if ( v26 == v35[v28] )
                    break;
                  ++v28;
                }
                while ( v28 < v14 );
                LODWORD(v4) = 0;
              }
              if ( v28 != v14 )
                goto LABEL_80;
            }
            v12 += v16;
            if ( !--v13 )
              goto LABEL_80;
          }
        }
        return 3221226021LL;
      }
      if ( v13 )
      {
        v29 = a1 & 2;
        while ( 1 )
        {
          v30 = RtlDowncaseUnicodeChar((unsigned __int16)*v12);
          if ( v29 )
          {
            do
            {
              if ( v30 == (unsigned __int16)RtlDowncaseUnicodeChar(*(unsigned __int16 *)&v11[2 * (unsigned __int16)v4]) )
                break;
              LOWORD(v4) = v4 + 1;
            }
            while ( (unsigned __int16)v4 < v14 );
            if ( (_WORD)v4 == v14 )
              goto LABEL_79;
          }
          else
          {
            do
            {
              if ( v30 == (unsigned __int16)RtlDowncaseUnicodeChar(*(unsigned __int16 *)&v11[2 * (unsigned __int16)v4]) )
                break;
              LOWORD(v4) = v4 + 1;
            }
            while ( (unsigned __int16)v4 < v14 );
            if ( (_WORD)v4 != v14 )
            {
LABEL_79:
              LODWORD(v4) = 0;
LABEL_80:
              v10 = v31;
              a4 = v33;
              v15 = v32;
LABEL_27:
              if ( v13 )
              {
                v18 = v13 - 1;
                if ( v15 )
                  v19 = 2 * v18;
                else
                  v19 = v10 - 2 * v18;
                *a4 = v19;
                return (unsigned int)v4;
              }
              return 3221226021LL;
            }
          }
          LODWORD(v4) = 0;
          v12 += v34;
          if ( !--v13 )
            goto LABEL_80;
        }
      }
      return 3221226021LL;
    }
  }
  return result;
}
