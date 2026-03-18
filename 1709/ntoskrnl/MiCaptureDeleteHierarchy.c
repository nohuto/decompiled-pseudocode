/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x140112A38
 * Callers:
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  _BYTE *v4; // rsi
  unsigned __int64 v5; // r9
  __int64 v8; // rbp
  int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // r8
  unsigned int v12; // ebx
  __int64 **v13; // rdi
  __int64 *v14; // r10
  __int64 PteShadow; // rax
  char v17; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+40h] [rbp-38h] BYREF

  *a4 = 0;
  v4 = a4;
  v5 = 0xFFFFF68000000000uLL;
  v8 = 2LL;
  do
  {
    v9 = 3;
    v10 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v11 = (unsigned __int64 *)&v18;
    do
    {
      *v11 = v10;
      v10 = v5 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      --v11;
      --v9;
    }
    while ( v9 );
    v12 = 0;
    v13 = (__int64 **)&v17;
    while ( 1 )
    {
      v14 = *v13;
      PteShadow = **v13;
      if ( (unsigned __int64)*v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(*v13, **v13);
      if ( !PteShadow )
        break;
      if ( (PteShadow & 1) == 0 && v12 != 2 )
      {
        LOBYTE(PteShadow) = MiMakeSystemAddressValid((__int64)(((_QWORD)v14 << 25) - (v5 << 25)) >> 16, 0LL, 0, a3, 1);
        v5 = 0xFFFFF68000000000uLL;
      }
      ++v12;
      ++v13;
      if ( v12 >= 3 )
        goto LABEL_15;
    }
    LOBYTE(PteShadow) = 1 << (2 - v12);
    *v4 = PteShadow;
LABEL_15:
    ++v4;
    a1 = a2;
    --v8;
  }
  while ( v8 );
  return PteShadow;
}
