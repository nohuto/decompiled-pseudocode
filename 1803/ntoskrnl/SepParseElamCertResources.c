/*
 * XREFs of SepParseElamCertResources @ 0x140633A74
 * Callers:
 *     SeRegisterElamCertResources @ 0x1406339E0 (SeRegisterElamCertResources.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14006D220 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 */

NTSTATUS __fastcall SepParseElamCertResources(_WORD *a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r12
  const wchar_t *v4; // rdi
  NTSTATUS result; // eax
  const wchar_t *v6; // r11
  const wchar_t *v7; // rbx
  unsigned int v8; // r13d
  bool v9; // r8
  char v10; // r9
  unsigned int v11; // ecx
  char v12; // cl
  unsigned int v13; // eax
  int v14; // eax
  unsigned __int16 *v15; // r11
  size_t v16; // r15
  unsigned int v17; // esi
  wchar_t *v18; // r14
  wchar_t *v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // r11
  unsigned __int64 v22; // r8
  wchar_t v23; // ax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int16 v26; // r9
  __int64 v27; // rcx
  wchar_t v28; // ax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+40h] [rbp-C0h]
  const wchar_t *v34; // [rsp+48h] [rbp-B8h]
  unsigned int v35; // [rsp+50h] [rbp-B0h]
  size_t pcchLength; // [rsp+58h] [rbp-A8h] BYREF
  size_t v37; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v38[28]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v39[448]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = 0;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return -1073741811;
  v3 = (unsigned __int64)a1 + a2;
  v35 = (unsigned __int16)*a1;
  v4 = a1 + 1;
  v33 = 0;
  if ( !*a1 )
    return v2;
  while ( 1 )
  {
    if ( (unsigned __int64)(v4 + 1) > v3 )
      return -1073741811;
    result = RtlStringCchLengthW(v4, (v3 - (unsigned __int64)v4) >> 1, &pcchLength);
    if ( result < 0 )
      return result;
    v6 = &v4[pcchLength + 1];
    v7 = v6 + 1;
    v34 = v6;
    if ( (unsigned __int64)(v6 + 1) >= v3 )
      return -1073741811;
    v8 = 0;
    v9 = 1;
    if ( *v4 )
    {
      do
      {
        if ( v8 >= 0x40 )
          return -1073741811;
        if ( v9 )
        {
          if ( v8 >= 0x40uLL )
            _report_rangecheckfailure();
          v39[v8] = 0;
          v10 = 0;
        }
        else
        {
          v39[v8] *= 16;
          v10 = v39[v8];
        }
        v11 = *v4;
        if ( v11 == 32 )
        {
          if ( !v9 )
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
              v12 = v11 - 87;
            }
            else
            {
              v12 = v11 - 55;
            }
          }
          else
          {
            v12 = v11 - 48;
          }
          v39[v8] = v10 + v12;
        }
        v13 = v8 + 1;
        if ( v9 )
          v13 = v8;
        v8 = v13;
        if ( *v4 != 32 )
          v9 = !v9;
        ++v4;
      }
      while ( *v4 );
      if ( !v9 )
        return -1073741811;
    }
    v14 = *v6;
    if ( v14 != 32772 && (unsigned int)(v14 - 32780) > 2 )
      return -1073741811;
    result = RtlStringCchLengthW(v6 + 1, (v3 - (unsigned __int64)v7) >> 1, &v37);
    if ( result < 0 )
      return result;
    v16 = v37;
    v17 = 0;
    v18 = (wchar_t *)&v7[v37];
    v4 = v18 + 1;
    if ( v37 )
    {
      v19 = wcschr(v7, 0x3Bu);
      if ( !v19 )
      {
        v19 = v18;
        goto LABEL_40;
      }
      while ( 1 )
      {
        v20 = 0;
        v21 = 0LL;
        v22 = (unsigned __int64)((char *)v19 - (char *)v7 + 1) >> 1;
        if ( v7 > v19 )
          v22 = 0LL;
        if ( v22 )
        {
          do
          {
            v23 = *v7;
            ++v21;
            ++v7;
            v24 = ((unsigned __int64)v17 << 6) + v20++;
            *(_WORD *)&v39[2 * v24 + 64] = v23;
          }
          while ( v21 != v22 );
        }
        v25 = v20;
        v26 = 2 * v20;
        *(_WORD *)&v39[128 * (unsigned __int64)v17 + 64 + 2 * v25] = 0;
        v27 = 8LL * v17;
        v38[v27] = v26;
        *(_QWORD *)&v38[v27 + 4] = &v39[128 * (unsigned __int64)v17 + 64];
        v38[v27 + 1] = v26 + 2;
        v28 = *v19;
        if ( *v19 )
          v28 = v19[1];
        v7 = v19 + 1;
        if ( !*v19 )
          v7 = v19;
        if ( !v28 )
          break;
        v19 = wcschr(v7, 0x3Bu);
        if ( !v19 )
        {
          v29 = -1LL;
          do
            ++v29;
          while ( v7[v29] );
          v19 = (wchar_t *)&v7[v29];
        }
        if ( ++v17 >= 3 )
          goto LABEL_48;
LABEL_40:
        if ( !v19 )
          goto LABEL_48;
      }
      ++v17;
LABEL_48:
      v15 = (unsigned __int16 *)v34;
    }
    v30 = v16 != 0 ? v17 : 0;
    v31 = -(__int64)v16;
    if ( !qword_1403A5CD0 )
      return -1073741637;
    v32 = v30;
    LOBYTE(v30) = 7;
    v2 = qword_1403A5CD0(v30, v39, v8, *v15, (unsigned __int64)v38 & -(__int64)(v31 != 0), v32, 0LL);
    if ( v2 >= 0 && ++v33 < v35 )
      continue;
    return v2;
  }
}
