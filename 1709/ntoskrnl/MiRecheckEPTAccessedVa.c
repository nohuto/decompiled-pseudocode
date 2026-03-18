/*
 * XREFs of MiRecheckEPTAccessedVa @ 0x14021DDC0
 * Callers:
 *     MiProcessVmAccessedInfo @ 0x14021DCA4 (MiProcessVmAccessedInfo.c)
 * Callees:
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiRecheckEPTAccessedVa(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int64 *v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r11
  _QWORD v18[3]; // [rsp+20h] [rbp-48h] BYREF

  v5 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v5 != *a3 )
  {
    v6 = 3LL;
    v7 = v5;
    LODWORD(v8) = 3;
    v9 = v18;
    do
    {
      *v9 = v7;
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v9;
      --v6;
    }
    while ( v6 );
    while ( 1 )
    {
      v8 = (unsigned int)(v8 - 1);
      v10 = (__int64 *)v18[v8];
      v11 = *v10;
      if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v11) = MiReadPteShadow();
      if ( (v11 & 1) == 0 || (v11 & 0x80u) != 0LL )
        return 0LL;
      if ( !(_DWORD)v8 )
      {
        *a3 = v5;
        break;
      }
    }
  }
  v12 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = *v12;
  v14 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL )
  {
    v14 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v13) = MiReadPteShadow();
  }
  if ( (v13 & 1) == 0 )
    return 0LL;
  if ( (unsigned __int8)((MiGetWsleContents(v14, a2) & 0xF) - 8) > 2u )
    return v15;
  return v16;
}
