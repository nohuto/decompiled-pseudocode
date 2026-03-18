/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x140072540
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  _BYTE *v4; // rsi
  unsigned __int64 v5; // r9
  __int64 v7; // rbp
  int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r8
  unsigned int v11; // ebx
  unsigned __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r10
  char v16; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+40h] [rbp-38h] BYREF

  *a4 = 0;
  v4 = a4;
  v5 = 0xFFFFF68000000000uLL;
  v7 = 2LL;
  do
  {
    v8 = 3;
    v9 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v10 = (unsigned __int64 *)&v17;
    do
    {
      *v10 = v9;
      v9 = v5 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
      --v10;
      --v8;
    }
    while ( v8 );
    v11 = 0;
    v12 = (unsigned __int64 *)&v16;
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(*v12);
      if ( !v13 )
        break;
      if ( (v13 & 1) == 0 && v11 != 2 )
      {
        LOBYTE(v13) = MiMakeSystemAddressValid((__int64)((v14 << 25) - (v5 << 25)) >> 16, 1);
        v5 = 0xFFFFF68000000000uLL;
      }
      ++v11;
      ++v12;
      if ( v11 >= 3 )
        goto LABEL_8;
    }
    LOBYTE(v13) = 1 << (2 - v11);
    *v4 = v13;
LABEL_8:
    ++v4;
    a1 = a2;
    --v7;
  }
  while ( v7 );
  return v13;
}
