/*
 * XREFs of SepParseElamCertResources @ 0x14059BC24
 * Callers:
 *     SeRegisterElamCertResources @ 0x14059BB90 (SeRegisterElamCertResources.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 */

NTSTATUS __fastcall SepParseElamCertResources(_WORD *a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r12
  const wchar_t *v4; // rbx
  NTSTATUS result; // eax
  __int64 v6; // r11
  const wchar_t *v7; // r8
  const wchar_t *v8; // rdi
  unsigned int v9; // r14d
  bool v10; // dl
  unsigned int v11; // eax
  char v12; // al
  unsigned int v13; // eax
  int v14; // eax
  size_t v15; // r15
  unsigned int v16; // esi
  wchar_t *v17; // r13
  wchar_t *v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // r11
  unsigned __int64 v21; // rdx
  wchar_t v22; // ax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+40h] [rbp-C0h]
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  size_t pcchLength; // [rsp+48h] [rbp-B8h] BYREF
  size_t v34; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v35; // [rsp+58h] [rbp-A8h]
  _WORD v36[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[448]; // [rsp+90h] [rbp-70h] BYREF

  v2 = 0;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return -1073741811;
  v3 = (unsigned __int64)a1 + a2;
  v32 = (unsigned __int16)*a1;
  v4 = a1 + 1;
  v31 = 0;
  if ( *a1 )
  {
    while ( (unsigned __int64)(v4 + 1) <= v3 )
    {
      result = RtlStringCchLengthW(v4, (v3 - (unsigned __int64)v4) >> 1, &pcchLength);
      if ( result < 0 )
        return result;
      v7 = &v4[pcchLength + 1];
      v8 = v7 + 1;
      v35 = v7;
      if ( (unsigned __int64)(v7 + 1) >= v3 )
        break;
      v9 = 0;
      v10 = 1;
      if ( *v4 )
      {
        while ( v9 < 0x40 )
        {
          if ( v10 )
          {
            if ( v9 >= 0x40uLL )
              _report_rangecheckfailure();
            v37[v9] = 0;
          }
          else
          {
            v37[v9] *= 16;
          }
          v11 = *v4;
          if ( v11 == 32 )
          {
            if ( !v10 )
              return -1073741811;
          }
          else
          {
            if ( v11 <= 0x2F )
              return -1073741811;
            if ( v11 > 0x39 )
            {
              if ( v11 <= 0x40 )
                return -1073741811;
              if ( v11 > 0x46 )
              {
                if ( v11 - 97 > 5 )
                  return -1073741811;
                v12 = *(_BYTE *)v4 - 87;
              }
              else
              {
                v12 = *(_BYTE *)v4 - 55;
              }
            }
            else
            {
              v12 = *(_BYTE *)v4 - 48;
            }
            v37[v9] += v12;
          }
          v13 = v9 + 1;
          if ( v10 )
            v13 = v9;
          v9 = v13;
          if ( *v4 != 32 )
            v10 = !v10;
          v4 = (const wchar_t *)((char *)v4 + v6);
          if ( !*v4 )
          {
            if ( !v10 )
              return -1073741811;
            goto LABEL_21;
          }
        }
        return -1073741811;
      }
LABEL_21:
      v14 = *v7;
      if ( v14 != 32772 && v14 - 32780 > (unsigned int)v6 )
        return -1073741811;
      result = RtlStringCchLengthW(v8, (v3 - (unsigned __int64)v8) >> 1, &v34);
      if ( result < 0 )
        return result;
      v15 = v34;
      v16 = 0;
      v17 = (wchar_t *)&v8[v34];
      v4 = v17 + 1;
      if ( v34 )
      {
        v18 = wcschr(v8, 0x3Bu);
        if ( v18 || (v18 = v17) != 0LL )
        {
          while ( 1 )
          {
            v19 = 0;
            v20 = 0LL;
            v21 = (unsigned __int64)((char *)v18 - (char *)v8 + 1) >> 1;
            if ( v8 > v18 )
              v21 = 0LL;
            if ( v21 )
            {
              do
              {
                v22 = *v8;
                ++v20;
                ++v8;
                v23 = ((unsigned __int64)v16 << 6) + v19++;
                *(_WORD *)&v37[2 * v23 + 64] = v22;
              }
              while ( v20 != v21 );
            }
            v24 = v19;
            v8 = v18 + 1;
            v25 = 2 * v19;
            *(_WORD *)&v37[128 * (unsigned __int64)v16 + 64 + 2 * v24] = 0;
            v26 = 2LL * v16;
            v36[4 * v26] = v25;
            v36[4 * v26 + 1] = v25 + 2;
            *(_QWORD *)&v36[4 * v26 + 4] = &v37[128 * (unsigned __int64)v16 + 64];
            if ( !*v18 )
              v8 = v18;
            if ( !*v8 )
              break;
            v18 = wcschr(v8, 0x3Bu);
            if ( !v18 )
            {
              v29 = -1LL;
              do
                ++v29;
              while ( v8[v29] );
              v18 = (wchar_t *)&v8[v29];
            }
            if ( ++v16 >= 3 || !v18 )
              goto LABEL_34;
          }
          ++v16;
        }
      }
LABEL_34:
      v27 = v15 != 0 ? v16 : 0;
      v28 = -(__int64)v15;
      if ( !qword_140348BD0 )
        return -1073741637;
      v30 = v27;
      LOBYTE(v27) = 7;
      v2 = qword_140348BD0(v27, v37, v9, *v35, (unsigned __int64)v36 & -(__int64)(v28 != 0), v30, 0LL);
      if ( v2 >= 0 && ++v31 < v32 )
        continue;
      return v2;
    }
    return -1073741811;
  }
  return v2;
}
