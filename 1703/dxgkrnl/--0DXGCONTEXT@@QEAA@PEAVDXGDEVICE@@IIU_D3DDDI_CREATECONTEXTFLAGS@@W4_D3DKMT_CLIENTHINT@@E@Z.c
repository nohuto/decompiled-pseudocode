/*
 * XREFs of ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00BC358
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

DXGCONTEXT *__fastcall DXGCONTEXT::DXGCONTEXT(
        DXGCONTEXT *this,
        struct DXGDEVICE *a2,
        int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        enum _D3DKMT_CLIENTHINT a6,
        char a7)
{
  int v7; // edi
  unsigned int v9; // esi
  DXGCONTEXT *result; // rax

  v7 = 0;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v9 = a4;
  *((_DWORD *)this + 36) = a6;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 68) = -1;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((struct _D3DDDI_CREATECONTEXTFLAGS *)this + 87) = a5;
  *((_DWORD *)this + 84) = a3;
  *((_BYTE *)this + 366) = a7;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 85) = a4;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_WORD *)this + 182) = 0;
  *(_WORD *)((char *)this + 367) = 0;
  *((_BYTE *)this + 369) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 98) = 59;
  memset((char *)this + 192, 0, 0x20uLL);
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  while ( 1 )
  {
    v9 >>= 1;
    if ( !v9 )
      break;
    ++v7;
  }
  result = this;
  *((_DWORD *)this + 86) = v7;
  return result;
}
