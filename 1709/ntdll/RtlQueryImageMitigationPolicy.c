/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E0FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  int v7; // r12d
  int v8; // r15d
  int inited; // edi
  const wchar_t *v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  unsigned __int64 v21; // rcx
  char v22; // cl
  unsigned __int64 v23; // rcx
  char v24; // cl
  bool v25; // zf
  char v26; // cl
  char v27; // r14
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  char v33; // r14
  bool v34; // zf
  HANDLE Handle; // [rsp+30h] [rbp-51h] BYREF
  char v37[16]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-29h]
  int v40; // [rsp+60h] [rbp-21h] BYREF
  _QWORD Src[2]; // [rsp+68h] [rbp-19h] BYREF
  int v42; // [rsp+78h] [rbp-9h]
  __int128 v43; // [rsp+80h] [rbp-1h]

  Handle = 0LL;
  v38 = 0LL;
  v7 = a3 & 4;
  v39 = 0LL;
  v8 = a3 & 8;
  inited = RtlInitUnicodeStringEx((__int64)&v40, a1);
  if ( inited >= 0 )
  {
    v10 = L"MitigationOptions";
    if ( v8 )
      v10 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx((__int64)v37, (__int64)v10);
    if ( inited >= 0 )
    {
      if ( v7 )
      {
        if ( (_WORD)v40 )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( (_WORD)v40 )
        {
          v11 = RtlpOpenImageFileOptionsKeyEx((unsigned __int16 *)&v40, 9LL, 0, &Handle);
        }
        else
        {
          Src[0] = 0LL;
          v40 = 48;
          Src[1] = &unk_180113AD8;
          v42 = 576;
          v43 = 0LL;
          v11 = NtOpenKey();
        }
        inited = v11;
      }
      if ( inited < 0 )
        return (unsigned int)inited;
      if ( v7 )
      {
        if ( v8 )
        {
          v14 = 0LL;
          v15 = 0x2222222222222222LL;
        }
        else
        {
          v14 = 0x12222111211LL;
          v15 = 0x2222200000000000LL;
        }
        v12 = v15 | v14;
        v13 = 0x22022222220222LL;
      }
      else
      {
        inited = NtQueryValueKey();
        NtClose(Handle);
        if ( inited < 0 )
          return (unsigned int)inited;
        if ( LODWORD(Src[0]) > 0x10 )
          return (unsigned int)-1073741788;
        memmove(&v38, (char *)Src + 4, LODWORD(Src[0]));
        v12 = v38;
        v13 = v39;
      }
      if ( a2 <= 8 )
      {
        if ( a2 != 8 )
        {
          if ( !a2 )
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            goto LABEL_194;
          }
          v16 = a2 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 2;
                  if ( v20 )
                  {
                    if ( v20 != 1 || a5 != 16 )
                      return (unsigned int)-1073741811;
                    *a4 = 0LL;
                    a4[1] = 0LL;
                    if ( (v12 & 0x30000000000LL) == 0 )
                    {
                      *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
                      goto LABEL_40;
                    }
                    if ( (BYTE5(v12) & 3) != 1 )
                    {
                      if ( (BYTE5(v12) & 3) == 2 )
                      {
                        *a4 &= ~1uLL;
                        *a4 |= 2uLL;
                        goto LABEL_40;
                      }
                      if ( (BYTE5(v12) & 3) != 3 )
                      {
LABEL_40:
                        if ( (v12 & 0x40000000000LL) != 0 )
                          *a4 |= 4uLL;
                        v13 >>= 8;
LABEL_98:
                        v27 = v13 & 0xF;
                        if ( (v27 & 3) != 0 )
                        {
                          if ( (v27 & 3) == 1 )
                          {
                            a4[1] &= ~2uLL;
                            a4[1] |= 1uLL;
                          }
                          else if ( (v27 & 3) == 2 )
                          {
                            a4[1] &= ~1uLL;
                            a4[1] |= 2uLL;
                          }
                        }
                        else
                        {
                          a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
                        }
                        if ( (v27 & 4) != 0 )
                          a4[1] |= 4uLL;
                        return (unsigned int)inited;
                      }
                      *a4 |= 8uLL;
                    }
                    *a4 &= ~2uLL;
                    *a4 |= 1uLL;
                    goto LABEL_40;
                  }
                  if ( a5 != 8 )
                    return (unsigned int)-1073741811;
                  v21 = HIDWORD(v12);
                }
                else
                {
                  if ( a5 != 8 )
                    return (unsigned int)-1073741811;
                  v21 = v12 >> 28;
                }
              }
              else
              {
                if ( a5 != 8 )
                  return (unsigned int)-1073741811;
                v21 = v12 >> 24;
              }
LABEL_45:
              v22 = v21 & 0xF;
              *a4 = 0LL;
              if ( (v22 & 3) != 0 )
              {
                if ( (v22 & 3) != 1 )
                {
                  if ( (v22 & 3) != 2 )
                  {
LABEL_201:
                    v34 = (v22 & 4) == 0;
LABEL_202:
                    if ( !v34 )
                      *a4 |= 4uLL;
                    return (unsigned int)inited;
                  }
LABEL_48:
                  *a4 &= ~1uLL;
                  *a4 |= 2uLL;
                  goto LABEL_201;
                }
                goto LABEL_199;
              }
              goto LABEL_200;
            }
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v12 >>= 36;
            goto LABEL_194;
          }
          if ( a5 != 24 )
            return (unsigned int)-1073741811;
          *a4 = 0LL;
          a4[1] = 0LL;
          a4[2] = 0LL;
          if ( (v12 & 0x300) == 0 )
          {
            *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_64;
          }
          if ( (BYTE1(v12) & 3) != 1 )
          {
            if ( (BYTE1(v12) & 3) == 2 )
            {
              *a4 &= ~1uLL;
              *a4 |= 2uLL;
              goto LABEL_64;
            }
            if ( (BYTE1(v12) & 3) != 3 )
            {
LABEL_64:
              if ( (v12 & 0x400) != 0 )
                *a4 |= 4uLL;
              if ( (v12 & 0x30000) != 0 )
              {
                if ( (BYTE2(v12) & 3) == 1 )
                {
                  a4[1] &= ~2uLL;
                  a4[1] |= 1uLL;
                }
                else if ( (BYTE2(v12) & 3) == 2 )
                {
                  a4[1] &= ~1uLL;
                  a4[1] |= 2uLL;
                }
              }
              else
              {
                a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              if ( (v12 & 0x40000) != 0 )
                a4[1] |= 4uLL;
              v23 = v12 >> 20;
LABEL_75:
              v24 = v23 & 0xF;
              if ( (v24 & 3) != 0 )
              {
                if ( (v24 & 3) == 1 )
                {
                  a4[2] &= ~2uLL;
                  a4[2] |= 1uLL;
                }
                else if ( (v24 & 3) == 2 )
                {
                  a4[2] &= ~1uLL;
                  a4[2] |= 2uLL;
                }
              }
              else
              {
                a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              v25 = (v24 & 4) == 0;
LABEL_82:
              if ( !v25 )
                a4[2] |= 4uLL;
              return (unsigned int)inited;
            }
            *a4 |= 8uLL;
          }
          *a4 &= ~2uLL;
          *a4 |= 1uLL;
          goto LABEL_64;
        }
        if ( a5 != 16 )
          return (unsigned int)-1073741811;
        v26 = (v12 >> 44) & 0xF;
        *a4 = 0LL;
        a4[1] = 0LL;
        if ( (v26 & 3) == 0 )
        {
          *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_95;
        }
        if ( (v26 & 3) != 1 )
        {
          if ( (v26 & 3) == 2 )
          {
            *a4 &= ~1uLL;
            *a4 |= 2uLL;
            goto LABEL_95;
          }
          if ( (v26 & 3) != 3 )
          {
LABEL_95:
            if ( (v26 & 4) != 0 )
              *a4 |= 4uLL;
            LOBYTE(v13) = (unsigned __int8)v13 >> 4;
            goto LABEL_98;
          }
          *a4 |= 8uLL;
        }
        *a4 &= ~2uLL;
        *a4 |= 1uLL;
        goto LABEL_95;
      }
      v28 = a2 - 9;
      if ( !v28 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v12 >>= 48;
        goto LABEL_194;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        *a4 = 0LL;
        a4[1] = 0LL;
        a4[2] = 0LL;
        if ( ((v12 >> 52) & 3) != 0 )
        {
          if ( ((v12 >> 52) & 3) == 1 )
          {
            *a4 &= ~2uLL;
            *a4 |= 1uLL;
          }
          else if ( ((v12 >> 52) & 3) == 2 )
          {
            *a4 &= ~1uLL;
            *a4 |= 2uLL;
          }
        }
        else
        {
          *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( ((v12 >> 52) & 4) != 0 )
          *a4 |= 4uLL;
        if ( (v12 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v12) & 3) == 1 )
          {
            a4[1] &= ~2uLL;
            a4[1] |= 1uLL;
          }
          else if ( (HIBYTE(v12) & 3) == 2 )
          {
            a4[1] &= ~1uLL;
            a4[1] |= 2uLL;
          }
        }
        else
        {
          a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v12 & 0x400000000000000LL) != 0 )
          a4[1] |= 4uLL;
        v23 = v12 >> 60;
        goto LABEL_75;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        if ( a5 != 48 )
          return (unsigned int)-1073741811;
        memset(a4, 0, 0x30uLL);
        if ( (v13 & 0x30000) != 0 )
        {
          if ( (BYTE2(v13) & 3) == 1 )
          {
            a4[3] &= ~2uLL;
            a4[3] |= 1uLL;
          }
          else if ( (BYTE2(v13) & 3) == 2 )
          {
            a4[3] &= ~1uLL;
            a4[3] |= 2uLL;
          }
        }
        else
        {
          a4[3] &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v13 & 0x40000) != 0 )
          a4[3] |= 4uLL;
        if ( ((v13 >> 20) & 3) != 0 )
        {
          if ( ((v13 >> 20) & 3) == 1 )
          {
            a4[4] &= ~2uLL;
            a4[4] |= 1uLL;
          }
          else if ( ((v13 >> 20) & 3) == 2 )
          {
            a4[4] &= ~1uLL;
            a4[4] |= 2uLL;
          }
        }
        else
        {
          a4[4] &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( ((v13 >> 20) & 4) != 0 )
          a4[4] |= 4uLL;
        if ( (v13 & 0x3000000) != 0 )
        {
          if ( (BYTE3(v13) & 3) == 1 )
          {
            a4[5] &= ~2uLL;
            a4[5] |= 1uLL;
          }
          else if ( (BYTE3(v13) & 3) == 2 )
          {
            a4[5] &= ~1uLL;
            a4[5] |= 2uLL;
          }
        }
        else
        {
          a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v13 & 0x4000000) != 0 )
          a4[5] |= 4uLL;
        if ( ((v13 >> 28) & 3) != 0 )
        {
          if ( ((v13 >> 28) & 3) == 1 )
          {
            *a4 &= ~2uLL;
            *a4 |= 1uLL;
          }
          else if ( ((v13 >> 28) & 3) == 2 )
          {
            *a4 &= ~1uLL;
            *a4 |= 2uLL;
          }
        }
        else
        {
          *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( ((v13 >> 28) & 4) != 0 )
          *a4 |= 4uLL;
        if ( (v13 & 0x300000000LL) != 0 )
        {
          if ( (BYTE4(v13) & 3) == 1 )
          {
            a4[1] &= ~2uLL;
            a4[1] |= 1uLL;
          }
          else if ( (BYTE4(v13) & 3) == 2 )
          {
            a4[1] &= ~1uLL;
            a4[1] |= 2uLL;
          }
        }
        else
        {
          a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v13 & 0x400000000LL) != 0 )
          a4[1] |= 4uLL;
        if ( (v13 & 0x30000000000LL) != 0 )
        {
          if ( (BYTE5(v13) & 3) == 1 )
          {
            a4[2] &= ~2uLL;
            a4[2] |= 1uLL;
          }
          else if ( (BYTE5(v13) & 3) == 2 )
          {
            a4[2] &= ~1uLL;
            a4[2] |= 2uLL;
          }
        }
        else
        {
          a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        v25 = (v13 & 0x40000000000LL) == 0;
        goto LABEL_82;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 1 || a5 != 8 )
            return (unsigned int)-1073741811;
          v21 = v12 >> 12;
          goto LABEL_45;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        LOBYTE(v12) = (unsigned __int8)v12 >> 4;
LABEL_194:
        v22 = v12 & 0xF;
        *a4 = 0LL;
        if ( (v22 & 3) != 0 )
        {
          if ( (v22 & 3) != 1 )
          {
            if ( (v22 & 3) == 2 )
              goto LABEL_48;
            if ( (v22 & 3) != 3 )
              goto LABEL_201;
            *a4 |= 8uLL;
          }
LABEL_199:
          *a4 &= ~2uLL;
          *a4 |= 1uLL;
          goto LABEL_201;
        }
LABEL_200:
        *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_201;
      }
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v33 = (v13 >> 36) & 0xF;
      *a4 = 0LL;
      if ( (v33 & 3) == 0 )
      {
        *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_125;
      }
      if ( (v33 & 3) != 1 )
      {
        if ( (v33 & 3) == 2 )
        {
          *a4 &= ~1uLL;
          *a4 |= 2uLL;
          goto LABEL_125;
        }
        if ( (v33 & 3) != 3 )
        {
LABEL_125:
          v34 = (v33 & 4) == 0;
          goto LABEL_202;
        }
        *a4 |= 8uLL;
      }
      *a4 &= ~2uLL;
      *a4 |= 1uLL;
      goto LABEL_125;
    }
  }
  return (unsigned int)inited;
}
