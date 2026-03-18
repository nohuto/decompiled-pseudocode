/*
 * XREFs of NtGdiGetUFIPathname @ 0x1C028DE80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     TraceGreReleaseSemaphore @ 0x1C013E728 (TraceGreReleaseSemaphore.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     TraceGreAcquireSemaphoreEx @ 0x1C024A52C (TraceGreAcquireSemaphoreEx.c)
 *     GreGetUFIPathname @ 0x1C0255CC0 (GreGetUFIPathname.c)
 */

__int64 __fastcall NtGdiGetUFIPathname(
        _QWORD *a1,
        _DWORD *a2,
        char *a3,
        _DWORD *a4,
        char a5,
        _DWORD *a6,
        _DWORD *a7,
        volatile void *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  _QWORD *v12; // rdx
  _DWORD *v13; // r13
  _DWORD *v14; // r14
  char *v15; // rsi
  bool v16; // cf
  unsigned int UFIPathname; // edi
  size_t v18; // r8
  _DWORD *v19; // rdx
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  int v23[2]; // [rsp+60h] [rbp-2D8h] BYREF
  int v24; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-2C8h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-2C0h] BYREF
  __int64 v27; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-2B0h] BYREF
  char *v29; // [rsp+90h] [rbp-2A8h]
  __int64 v30; // [rsp+98h] [rbp-2A0h]
  int v31[2]; // [rsp+A0h] [rbp-298h] BYREF
  _DWORD *v32; // [rsp+A8h] [rbp-290h]
  _DWORD *v33; // [rsp+B0h] [rbp-288h]
  _DWORD *v34; // [rsp+B8h] [rbp-280h]
  _DWORD *v35; // [rsp+C0h] [rbp-278h]
  _BYTE v36[528]; // [rsp+E0h] [rbp-258h] BYREF

  v32 = a4;
  v12 = a1;
  v28 = (__int64)a2;
  *(_QWORD *)v23 = a3;
  v33 = a4;
  v13 = a6;
  v34 = a6;
  Address = a8;
  v14 = a9;
  v35 = a9;
  v30 = (__int64)a9;
  v25 = (__int64)a9;
  v15 = 0LL;
  v29 = 0LL;
  LODWORD(v27) = 0;
  v24 = 0;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v12 = (_QWORD *)W32UserProbeAddress;
  *(_QWORD *)v31 = *v12;
  GreAcquireSemaphore(ghsemPublicPFT);
  TraceGreAcquireSemaphoreEx((__int64)L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  v16 = v25 != 0;
  v25 = -v25;
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)v31,
                  v23,
                  0LL,
                  0,
                  &v28,
                  a5,
                  (int *)&Address,
                  &v27,
                  Address,
                  (_DWORD *)((unsigned __int64)&v25 & -(__int64)v16),
                  (unsigned int *)((unsigned __int64)&v24 & -(__int64)(a10 != 0LL)));
  if ( UFIPathname )
  {
    if ( v23[0] > 0x104u )
    {
      if ( v23[0] <= 0x1388000u )
      {
        v15 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * v23[0]));
        v29 = v15;
      }
      UFIPathname &= -(v15 != 0LL);
    }
    else
    {
      v15 = v36;
      v29 = v36;
    }
  }
  if ( UFIPathname && !(_DWORD)Address && v15 )
  {
    v16 = v30 != 0;
    v30 = -v30;
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)v31,
                    0LL,
                    v15,
                    v23[0],
                    &v28,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)((unsigned __int64)&v25 & -(__int64)v16),
                    (unsigned int *)((unsigned __int64)&v24 & -(__int64)(a10 != 0LL)));
  }
  TraceGreReleaseSemaphore((__int64)L"ghsemPublicPFT", ghsemPublicPFT);
  GreReleaseSemaphoreInternal(ghsemPublicPFT);
  if ( UFIPathname )
  {
    if ( v23[0] > 0x30Cu )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (_DWORD *)W32UserProbeAddress;
        *a2 = v23[0];
      }
      if ( a3 )
      {
        v18 = 2LL * (unsigned int)v23[0];
        if ( (unsigned __int64)&a3[v18] > W32UserProbeAddress || &a3[v18] <= a3 )
          *W32UserProbeAddress = 0;
        memmove(a3, v15, v18);
      }
      v19 = v32;
      if ( v32 )
      {
        if ( (unsigned __int64)v32 >= W32UserProbeAddress )
          v19 = (_DWORD *)W32UserProbeAddress;
        *v19 = v28;
      }
      if ( (_DWORD)Address )
      {
        if ( a6 )
        {
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v13 = (_DWORD *)W32UserProbeAddress;
          *v13 = (_DWORD)Address;
        }
        v20 = a7;
        if ( a7 )
        {
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v20 = (_DWORD *)W32UserProbeAddress;
          *v20 = v27;
        }
      }
      if ( a9 )
      {
        if ( (unsigned __int64)a9 >= W32UserProbeAddress )
          v14 = (_DWORD *)W32UserProbeAddress;
        *v14 = v25;
      }
      v21 = a10;
      if ( a10 )
      {
        if ( (unsigned __int64)a10 >= W32UserProbeAddress )
          v21 = (_DWORD *)W32UserProbeAddress;
        *v21 = v24;
      }
    }
  }
  if ( v15 && v15 != v36 )
    FreeTmpBuffer(v15);
  return UFIPathname;
}
