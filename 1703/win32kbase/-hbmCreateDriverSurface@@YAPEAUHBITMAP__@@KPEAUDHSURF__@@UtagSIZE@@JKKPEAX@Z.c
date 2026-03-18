/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00881A4
 * Callers:
 *     EngCreateDeviceSurface @ 0x1C00880D0 (EngCreateDeviceSurface.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1C0088130 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateBitmap @ 0x1C0088170 (EngCreateBitmap.c)
 *     EngCreateDeviceBitmap @ 0x1C00FBE70 (EngCreateDeviceBitmap.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+68h] [rbp-1h] BYREF
  char v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+74h] [rbp+Bh]
  unsigned int v17; // [rsp+78h] [rbp+Fh] BYREF
  struct tagSIZE v18; // [rsp+7Ch] [rbp+13h]
  _DWORD v19[5]; // [rsp+84h] [rbp+1Bh]
  LONG cy; // [rsp+CCh] [rbp+63h]

  cy = a3.cy;
  v7 = 0LL;
  if ( a3.cx < 0 || a3.cy < 0 )
    return 0LL;
  v19[0] = 0;
  v19[4] = 0;
  v17 = a5 & 0xFFFF7FFF;
  v18 = a3;
  *(_QWORD *)&v19[1] = 0LL;
  v19[3] = a6;
  if ( !a7 || !a4 )
    goto LABEL_19;
  switch ( a5 & 0xFFFF7FFF )
  {
    case 1u:
      v11 = 8LL * a4;
LABEL_17:
      if ( v11 <= 0xFFFFFFFF )
      {
        v18.cx = v11;
        break;
      }
      return 0LL;
    case 2u:
      v11 = 2LL * a4;
      goto LABEL_17;
    case 3u:
LABEL_12:
      v18.cx = a4;
      break;
    case 4u:
      a4 >>= 1;
      goto LABEL_12;
    case 5u:
      v18.cx = a4 / 3;
      break;
    case 6u:
      a4 >>= 2;
      goto LABEL_12;
  }
LABEL_19:
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v14,
    (struct _DEVBITMAPINFO *)&v17,
    a7,
    0LL,
    0,
    0LL,
    0LL,
    (a5 & 0x8000) == 0,
    a7 == 0LL,
    0,
    0);
  v12 = v14;
  if ( v14 )
  {
    if ( a1 == 3 )
      *(_DWORD *)(v14 + 112) |= 0x400000u;
    if ( a1 )
    {
      *(_DWORD *)(v12 + 88) = 0;
      *(_QWORD *)(v12 + 80) = 0LL;
      *(_QWORD *)(v12 + 72) = 0LL;
    }
    *(_DWORD *)(v12 + 112) |= 0x200000u;
    if ( a3.cx <= *(_DWORD *)(v12 + 56) && cy <= *(_DWORD *)(v12 + 60) )
      *(struct tagSIZE *)(v12 + 56) = a3;
    v15 |= 1u;
    *(_QWORD *)(v12 + 24) = a2;
    *(_WORD *)(v12 + 100) = a1;
    if ( (a5 & 0x8000) != 0 )
      *(_DWORD *)(v12 + 112) |= 0x40000u;
    v7 = *(_QWORD *)(v12 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v14);
  return v7;
}
