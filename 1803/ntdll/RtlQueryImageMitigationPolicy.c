/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800DBF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, __int64 *a4, int a5)
{
  __int64 v6; // rbx
  int v8; // r13d
  int v9; // r12d
  int inited; // esi
  const wchar_t *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  int v20; // r14d
  int v21; // r14d
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  char v25; // cl
  __int64 v26; // r11
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  char v30; // cl
  char v31; // cl
  __int64 v32; // r10
  __int64 v33; // r9
  char v34; // r15
  int v35; // r14d
  int v36; // r14d
  int v37; // r14d
  int v38; // r14d
  int v39; // r14d
  char v40; // r15
  bool v41; // zf
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v47; // [rsp+30h] [rbp-51h] BYREF
  char v48[16]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v49; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-29h]
  int v51; // [rsp+60h] [rbp-21h] BYREF
  _QWORD Src[2]; // [rsp+68h] [rbp-19h] BYREF
  int v53; // [rsp+78h] [rbp-9h]
  __int128 v54; // [rsp+80h] [rbp-1h]

  v6 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  v8 = a3 & 4;
  v50 = 0LL;
  v9 = a3 & 8;
  inited = RtlInitUnicodeStringEx((__int64)&v51, a1);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v9 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx((__int64)v48, (__int64)v11);
    if ( inited >= 0 )
    {
      if ( v8 )
      {
        if ( (_WORD)v51 )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( (_WORD)v51 )
        {
          v12 = sub_180076270((unsigned __int16 *)&v51, 9LL, 0, &v47);
        }
        else
        {
          v51 = 48;
          Src[1] = &unk_180110B58;
          Src[0] = 0LL;
          v53 = 576;
          v54 = 0LL;
          v12 = ZwOpenKey();
        }
        inited = v12;
      }
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( v8 )
      {
        if ( v9 )
        {
          v15 = 0LL;
          v16 = 0x2222222222222222LL;
        }
        else
        {
          v15 = 0x12222111211LL;
          v16 = 0x2222200000000000LL;
        }
        v13 = v16 | v15;
        v14 = 0x22022222220222LL;
      }
      else
      {
        inited = ZwQueryValueKey();
        ZwClose();
        if ( inited < 0 )
          return (unsigned int)inited;
        if ( LODWORD(Src[0]) > 0x10 )
          return (unsigned int)-1073741788;
        memmove(&v49, (char *)Src + 4, LODWORD(Src[0]));
        v13 = v49;
        v14 = v50;
      }
      if ( a2 <= 8 )
      {
        if ( a2 != 8 )
        {
          if ( !a2 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            goto LABEL_195;
          }
          v17 = a2 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  v21 = v20 - 2;
                  if ( v21 )
                  {
                    if ( v21 != 1 || a5 != 16 )
                      return (unsigned int)-1073741811;
                    *a4 = 0LL;
                    v22 = 0LL;
                    a4[1] = 0LL;
                    v23 = 0LL;
                    if ( (v13 & 0x30000000000LL) == 0 )
                    {
                      *a4 = 0LL;
                      goto LABEL_40;
                    }
                    if ( (BYTE5(v13) & 3) != 1 )
                    {
                      if ( (BYTE5(v13) & 3) == 2 )
                      {
                        *a4 = 2LL;
                        v23 = 2LL;
                        goto LABEL_40;
                      }
                      if ( (BYTE5(v13) & 3) != 3 )
                      {
LABEL_40:
                        if ( (v13 & 0x40000000000LL) != 0 )
                          *a4 = v23 | 4;
                        v14 >>= 8;
                        goto LABEL_98;
                      }
                      *a4 = 8LL;
                      v22 = 8LL;
                    }
                    v23 = v22 | 1;
                    *a4 = v22 | 1;
                    goto LABEL_40;
                  }
                  if ( a5 != 8 )
                    return (unsigned int)-1073741811;
                  v24 = HIDWORD(v13);
                }
                else
                {
                  if ( a5 != 8 )
                    return (unsigned int)-1073741811;
                  v24 = v13 >> 28;
                }
              }
              else
              {
                if ( a5 != 8 )
                  return (unsigned int)-1073741811;
                v24 = v13 >> 24;
              }
LABEL_45:
              v25 = v24 & 0xF;
              *a4 = 0LL;
              if ( (v25 & 3) != 0 )
              {
                if ( (v25 & 3) == 1 )
                {
                  *a4 = 1LL;
                  v6 = 1LL;
                  goto LABEL_202;
                }
                if ( (v25 & 3) != 2 )
                {
LABEL_202:
                  v41 = (v25 & 4) == 0;
LABEL_203:
                  if ( !v41 )
                    *a4 = v6 | 4;
                  return (unsigned int)inited;
                }
LABEL_48:
                *a4 = 2LL;
                v6 = 2LL;
                goto LABEL_202;
              }
              goto LABEL_201;
            }
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v13 >>= 36;
            goto LABEL_195;
          }
          if ( a5 != 24 )
            return (unsigned int)-1073741811;
          v26 = 0LL;
          *a4 = 0LL;
          v27 = 0LL;
          a4[1] = 0LL;
          a4[2] = 0LL;
          if ( (v13 & 0x300) == 0 )
          {
            *a4 = 0LL;
            goto LABEL_65;
          }
          if ( (BYTE1(v13) & 3) != 1 )
          {
            if ( (BYTE1(v13) & 3) == 2 )
            {
              *a4 = 2LL;
              v27 = 2LL;
              goto LABEL_65;
            }
            if ( (BYTE1(v13) & 3) != 3 )
            {
LABEL_65:
              if ( (v13 & 0x400) != 0 )
                *a4 = v27 | 4;
              v28 = 0LL;
              if ( (v13 & 0x30000) != 0 )
              {
                if ( (BYTE2(v13) & 3) == 1 )
                {
                  a4[1] = 1LL;
                  v28 = 1LL;
                }
                else if ( (BYTE2(v13) & 3) == 2 )
                {
                  v28 = 2LL;
                  a4[1] = 2LL;
                }
              }
              else
              {
                a4[1] = 0LL;
              }
              if ( (v13 & 0x40000) != 0 )
                a4[1] = v28 | 4;
              v29 = v13 >> 20;
LABEL_76:
              v30 = v29 & 0xF;
              if ( (v30 & 3) != 0 )
              {
                if ( (v30 & 3) == 1 )
                {
                  a4[2] &= ~2uLL;
                  a4[2] |= 1uLL;
                }
                else if ( (v30 & 3) == 2 )
                {
                  a4[2] &= ~1uLL;
                  a4[2] |= 2uLL;
                }
              }
              else
              {
                a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              if ( (v30 & 4) != 0 )
                a4[2] |= 4uLL;
              return (unsigned int)inited;
            }
            *a4 = 8LL;
            v26 = 8LL;
          }
          v27 = v26 | 1;
          *a4 = v26 | 1;
          goto LABEL_65;
        }
        if ( a5 != 16 )
          return (unsigned int)-1073741811;
        v31 = (v13 >> 44) & 0xF;
        *a4 = 0LL;
        v32 = 0LL;
        a4[1] = 0LL;
        v33 = 0LL;
        if ( (v31 & 3) == 0 )
        {
          *a4 = 0LL;
          goto LABEL_95;
        }
        if ( (v31 & 3) != 1 )
        {
          if ( (v31 & 3) == 2 )
          {
            *a4 = 2LL;
            v33 = 2LL;
            goto LABEL_95;
          }
          if ( (v31 & 3) != 3 )
          {
LABEL_95:
            if ( (v31 & 4) != 0 )
              *a4 = v33 | 4;
            LOBYTE(v14) = (unsigned __int8)v14 >> 4;
LABEL_98:
            v34 = v14 & 0xF;
            if ( (v34 & 3) != 0 )
            {
              if ( (v34 & 3) == 1 )
              {
                a4[1] = 1LL;
                v6 = 1LL;
LABEL_103:
                if ( (v34 & 4) != 0 )
                  a4[1] = v6 | 4;
                return (unsigned int)inited;
              }
              if ( (v34 & 3) != 2 )
                goto LABEL_103;
              v6 = 2LL;
            }
            a4[1] = v6;
            goto LABEL_103;
          }
          *a4 = 8LL;
          v32 = 8LL;
        }
        v33 = v32 | 1;
        *a4 = v32 | 1;
        goto LABEL_95;
      }
      v35 = a2 - 9;
      if ( !v35 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 48;
        goto LABEL_195;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v44 = 0LL;
        *a4 = 0LL;
        a4[1] = 0LL;
        a4[2] = 0LL;
        if ( ((v13 >> 52) & 3) != 0 )
        {
          if ( ((v13 >> 52) & 3) == 1 )
          {
            *a4 = 1LL;
            v44 = 1LL;
          }
          else if ( ((v13 >> 52) & 3) == 2 )
          {
            *a4 = 2LL;
            v44 = 2LL;
          }
        }
        else
        {
          *a4 = 0LL;
        }
        if ( ((v13 >> 52) & 4) != 0 )
          *a4 = v44 | 4;
        v45 = 0LL;
        if ( (v13 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v13) & 3) == 1 )
          {
            a4[1] = 1LL;
            v45 = 1LL;
          }
          else if ( (HIBYTE(v13) & 3) == 2 )
          {
            v45 = 2LL;
            a4[1] = 2LL;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v13 & 0x400000000000000LL) != 0 )
          a4[1] = v45 | 4;
        v29 = v13 >> 60;
        goto LABEL_76;
      }
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 != 1 || a5 != 8 )
              return (unsigned int)-1073741811;
            v24 = v13 >> 12;
            goto LABEL_45;
          }
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          LOBYTE(v13) = (unsigned __int8)v13 >> 4;
LABEL_195:
          v25 = v13 & 0xF;
          *a4 = 0LL;
          if ( (v25 & 3) != 0 )
          {
            if ( (v25 & 3) != 1 )
            {
              if ( (v25 & 3) == 2 )
                goto LABEL_48;
              if ( (v25 & 3) != 3 )
                goto LABEL_202;
              *a4 = 8LL;
              v6 = 8LL;
            }
            v6 |= 1uLL;
          }
LABEL_201:
          *a4 = v6;
          goto LABEL_202;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v40 = (v14 >> 36) & 0xF;
        *a4 = 0LL;
        if ( (v40 & 3) != 0 )
        {
          if ( (v40 & 3) != 1 )
          {
            if ( (v40 & 3) == 2 )
            {
              *a4 = 2LL;
              v6 = 2LL;
              goto LABEL_124;
            }
            if ( (v40 & 3) != 3 )
            {
LABEL_124:
              v41 = (v40 & 4) == 0;
              goto LABEL_203;
            }
            *a4 = 8LL;
            v6 = 8LL;
          }
          v6 |= 1uLL;
        }
        *a4 = v6;
        goto LABEL_124;
      }
      if ( a5 != 48 )
        return (unsigned int)-1073741811;
      memset(a4, 0, 0x30uLL);
      v42 = 0LL;
      if ( (v14 & 0x30000) != 0 )
      {
        if ( (BYTE2(v14) & 3) == 1 )
        {
          a4[3] = 1LL;
          v42 = 1LL;
        }
        else if ( (BYTE2(v14) & 3) == 2 )
        {
          a4[3] = 2LL;
          v42 = 2LL;
        }
      }
      else
      {
        a4[3] = 0LL;
      }
      if ( (v14 & 0x40000) != 0 )
        a4[3] = v42 | 4;
      v43 = 0LL;
      if ( ((v14 >> 20) & 3) != 0 )
      {
        if ( ((v14 >> 20) & 3) == 1 )
        {
          a4[4] = 1LL;
          v43 = 1LL;
        }
        else if ( ((v14 >> 20) & 3) == 2 )
        {
          v43 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[4] = v43;
        }
      }
      else
      {
        a4[4] = 0LL;
      }
      if ( ((v14 >> 20) & 4) != 0 )
        a4[4] = v43 | 4;
      if ( (v14 & 0x3000000) != 0 )
      {
        if ( (BYTE3(v14) & 3) == 1 )
        {
          a4[5] &= ~2uLL;
          a4[5] |= 1uLL;
        }
        else if ( (BYTE3(v14) & 3) == 2 )
        {
          a4[5] &= ~1uLL;
          a4[5] |= 2uLL;
        }
      }
      else
      {
        a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v14 & 0x4000000) != 0 )
        a4[5] |= 4uLL;
      if ( ((v14 >> 28) & 3) != 0 )
      {
        if ( ((v14 >> 28) & 3) == 1 )
        {
          *a4 &= ~2uLL;
          *a4 |= 1uLL;
        }
        else if ( ((v14 >> 28) & 3) == 2 )
        {
          *a4 &= ~1uLL;
          *a4 |= 2uLL;
        }
      }
      else
      {
        *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( ((v14 >> 28) & 4) != 0 )
        *a4 |= 4uLL;
      if ( (v14 & 0x300000000LL) != 0 )
      {
        if ( (BYTE4(v14) & 3) == 1 )
        {
          a4[1] &= ~2uLL;
          a4[1] |= 1uLL;
        }
        else if ( (BYTE4(v14) & 3) == 2 )
        {
          a4[1] &= ~1uLL;
          a4[1] |= 2uLL;
        }
      }
      else
      {
        a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v14 & 0x400000000LL) != 0 )
        a4[1] |= 4uLL;
      if ( (v14 & 0x30000000000LL) != 0 )
      {
        if ( (BYTE5(v14) & 3) == 1 )
        {
          a4[2] &= ~2uLL;
          a4[2] |= 1uLL;
        }
        else if ( (BYTE5(v14) & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
      }
      else
      {
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v14 & 0x40000000000LL) != 0 )
        a4[2] |= 4uLL;
    }
  }
  return (unsigned int)inited;
}
