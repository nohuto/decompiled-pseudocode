/*
 * XREFs of sub_180068ED0 @ 0x180068ED0
 * Callers:
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 * Callees:
 *     sub_180003160 @ 0x180003160 (sub_180003160.c)
 *     sub_180003844 @ 0x180003844 (sub_180003844.c)
 *     sub_180069414 @ 0x180069414 (sub_180069414.c)
 *     _wcsnicmp @ 0x18008CC10 (_wcsnicmp.c)
 *     sub_1800F4430 @ 0x1800F4430 (sub_1800F4430.c)
 */

__int64 __fastcall sub_180068ED0(
        wchar_t *String1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // rax
  unsigned __int16 *v9; // rbx
  unsigned __int16 *v10; // r8
  _DWORD *v11; // rdi
  unsigned __int16 *v12; // r13
  char v13; // r15
  wchar_t *v14; // r14
  __int64 v15; // rax
  unsigned __int16 *v16; // r12
  wchar_t *v17; // rdx
  unsigned __int16 *v18; // r10
  unsigned __int16 *v19; // r9
  wchar_t *v20; // rbp
  unsigned __int64 v21; // rax
  signed __int64 v22; // r10
  unsigned __int64 v23; // r11
  wchar_t *v24; // rdi
  unsigned __int64 v25; // rsi
  const wchar_t *v26; // rdx
  __int16 v27; // r10
  wchar_t *v29; // r9
  __int64 v30; // r10
  __int16 v31; // r11
  unsigned __int16 v32; // cx
  int v33; // eax
  int v34; // r13d
  int v35; // esi
  int v36; // r11d
  wchar_t *v37; // r12
  int v38; // r9d
  int v39; // r10d
  int i; // r8d
  int v41; // ecx
  int v42; // eax
  __int64 v43; // r11
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // esi
  unsigned __int16 *v48; // r11
  int v49; // r10d
  unsigned __int16 *v50; // rax
  __int64 v51; // r11
  __int16 v52; // r10
  int v53; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v54; // [rsp+28h] [rbp-70h]
  unsigned __int64 v55; // [rsp+30h] [rbp-68h]
  wchar_t *v56; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v57; // [rsp+40h] [rbp-58h]
  int v58; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v59; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v60; // [rsp+B8h] [rbp+20h]

  v60 = a4;
  v59 = a3;
  v8 = a7;
  v9 = a3;
  v10 = (unsigned __int16 *)*a4;
  v11 = a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 > 0 )
  {
    v12 = &v9[(_QWORD)v10];
    v13 = a5;
    v14 = String1;
    v15 = a2;
    v16 = v9;
    v17 = String1 - 1;
    v54 = v9;
    v56 = String1 - 1;
    v18 = v9;
    v57 = v9;
    v19 = v9;
    v20 = &String1[v15];
    v55 = (unsigned __int64)v12;
    *a8 = v9 - 1;
    if ( String1 >= v20 )
    {
LABEL_28:
      if ( v19 != v18 && (v13 || v20 - v17 <= 256LL - (*(v20 - 1) != 46)) )
      {
        *v11 = v19 - v18;
        return 0LL;
      }
    }
    else
    {
      while ( 1 )
      {
        LOBYTE(v10) = v13;
        v21 = sub_180069414(v14, v20, v10, v19);
        v24 = (wchar_t *)v21;
        if ( (wchar_t *)v21 == v14 )
          break;
        if ( v13 )
        {
          v25 = v21 - (_QWORD)v14;
        }
        else
        {
          if ( a6 && (*v14 == 45 || v21 > v23 && *(_WORD *)(v21 - 2) == 45) )
            return 3221227286LL;
          v25 = v21 - (_QWORD)v14;
          if ( (__int64)((v21 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFFEuLL) > v22 )
            return 3221227286LL;
        }
        if ( (__int64)(((char *)v20 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
          goto LABEL_11;
        v26 = L"xl--";
        if ( !v13 )
          v26 = L"xn--";
        if ( wcsnicmp(v14, v26, 4uLL) )
        {
LABEL_11:
          if ( (__int64)(((char *)v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(v25 & 0xFFFFFFFFFFFFFFFEuLL) )
            return 3221227286LL;
          v10 = v14;
          if ( v14 < v24 )
          {
            v27 = 1;
            while ( (v13 || (!a6 || (unsigned __int8)sub_1800F4430(*v10, 0LL, v10, v19)) && *v10 >= 0x20u && *v10 != 127)
                 && (unsigned __int16)(*v10 - v27) <= 0x7Eu )
            {
              *v9 = *v10++;
              v59 = ++v9;
              if ( v10 >= v24 )
                goto LABEL_20;
            }
            return 3221227286LL;
          }
        }
        else
        {
          v14 += 4;
          *a7 = 0;
          v10 = v24 - 1;
          if ( v24 - 1 < v14 )
          {
LABEL_94:
            v10 = 0LL;
          }
          else
          {
            while ( *v10 != 45 )
            {
              if ( --v10 < v14 )
                goto LABEL_94;
            }
          }
          if ( v10 == v24 - 1 )
            return 3221227286LL;
          if ( v10 && v10 > v14 )
          {
            v29 = v14;
            v30 = v10 - v14;
            if ( v14 != v10 )
            {
              v31 = 1;
              do
              {
                if ( v9 >= v12 )
                  break;
                if ( !v13 && (a6 && !(unsigned __int8)sub_1800F4430(*v29, 0LL, v10, v29) || *v29 < 0x20u || *v29 == 127) )
                  return 3221227286LL;
                v32 = *v29;
                if ( (unsigned __int16)(*v29 - v31) > 0x7Eu )
                  return 3221227286LL;
                if ( !v13 && (unsigned __int16)(v32 - 65) <= 0x19u )
                  v32 += 32;
                *v9 = v32;
                ++v29;
                v59 = ++v9;
              }
              while ( v29 != v10 );
              if ( v29 != v10 )
                return 3221227286LL;
            }
          }
          else
          {
            LODWORD(v30) = 0;
          }
          v58 = 0;
          v33 = v30 + 1;
          v34 = 128;
          if ( (int)v30 <= 0 )
            v33 = 0;
          v35 = 0;
          v36 = 72;
          v37 = &v14[v33];
          if ( v37 < v24 )
          {
LABEL_61:
            v38 = 1;
            v39 = v35;
            for ( i = 36; v37 < v24; i += 36 )
            {
              if ( (unsigned __int16)(*v37 - 48) <= 9u )
              {
                v41 = *v37 - 22;
              }
              else if ( (unsigned __int16)(*v37 - 97) > 0x19u )
              {
                v41 = (unsigned __int16)(*v37 - 65) > 0x19u ? -1 : *v37 - 65;
              }
              else
              {
                v41 = *v37 - 97;
              }
              ++v37;
              if ( v41 < 0 || v41 > (0x7FFFFFF - v35) / v38 )
                break;
              v35 += v38 * v41;
              if ( i <= v36 )
              {
                v42 = 1;
              }
              else if ( i < v36 + 26 )
              {
                v42 = i - v36;
              }
              else
              {
                v42 = 26;
              }
              if ( v41 < v42 )
              {
                v53 = sub_180003160(v35 - v39, (unsigned int)(v9 - v54) - v58 + 1, v39 == 0);
                v44 = v43 - v58;
                v45 = v35 / (v44 + 1);
                v46 = v35 % (v44 + 1);
                v47 = v46;
                if ( v45 > 0x7FFFFFF - v34 )
                  return 3221227286LL;
                v34 += v45;
                if ( v34 < 128 || v34 > 55295 && (unsigned int)(v34 - 57344) > 0x101FFF )
                  return 3221227286LL;
                if ( v58 > 0 )
                {
                  v48 = v54;
                  if ( (int)v46 > 0 )
                  {
                    while ( v48 < v9 )
                    {
                      LODWORD(v46) = v46 - 1;
                      v50 = v48 + 1;
                      if ( (unsigned __int16)(*v48 + 10240) > 0x7FFu )
                        v50 = v48;
                      v48 = v50 + 1;
                      if ( (int)v46 <= 0 )
                        goto LABEL_80;
                    }
                    return 3221227286LL;
                  }
                }
                else
                {
                  v48 = &v54[(int)v46];
                }
LABEL_80:
                if ( v34 >= 0x10000 )
                {
                  if ( (unsigned __int64)v9 >= v55 - 2 || v48 > v9 )
                    return 3221227286LL;
                  sub_180003844((v34 - 0x10000) / 1024 - 10240, v48, &v59);
                  sub_180003844(v52 - 9216, (unsigned __int16 *)(v51 + 2), &v59);
                  v49 = 1;
                  ++v58;
                }
                else
                {
                  if ( (unsigned __int64)v9 >= v55 || v48 > v9 )
                    return 3221227286LL;
                  sub_180003844(v34, v48, &v59);
                }
                v9 = v59;
                v35 = v49 + v47;
                if ( v37 >= v24 )
                  goto LABEL_86;
                v36 = v53;
                goto LABEL_61;
              }
              if ( v38 > 0x7FFFFFF / (36 - v42) )
                return 3221227286LL;
              v38 *= 36 - v42;
            }
            return 3221227286LL;
          }
LABEL_86:
          v12 = (unsigned __int16 *)v55;
          v16 = v54;
        }
LABEL_20:
        if ( !v13 && ((__int64)(((char *)v24 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v16) )
          return 3221227286LL;
        if ( v24 != v20 )
        {
          if ( v9 >= v12 )
            return 3221227286LL;
          *v9++ = *v24;
          v59 = v9;
        }
        if ( v13 )
        {
          v17 = v24;
          v56 = v24;
          v13 = 0;
          *a8 = (char *)v9 - (v20 != v24 ? 2 : 0);
          if ( v24 == v20 - 1 )
            return 3221227286LL;
        }
        else
        {
          v17 = v56;
        }
        v54 = v9;
        v14 = v24 + 1;
        v16 = v9;
        v19 = v9;
        if ( v24 >= v20 )
          goto LABEL_27;
      }
      if ( !v13 && (wchar_t *)v21 == v20 )
      {
        v17 = v56;
LABEL_27:
        v11 = v60;
        v18 = v57;
        goto LABEL_28;
      }
    }
  }
  return 3221227286LL;
}
