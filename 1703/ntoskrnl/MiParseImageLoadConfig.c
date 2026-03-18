/*
 * XREFs of MiParseImageLoadConfig @ 0x140497854
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     MiFreeImageCfgContext @ 0x140061888 (MiFreeImageCfgContext.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiLogRelocationRva @ 0x14049620C (MiLogRelocationRva.c)
 *     MiCaptureImageCfgContext @ 0x140497C20 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x140497F7C (RtlCreateRvaList.c)
 *     MiFreeImageLoadConfig @ 0x14058207C (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_DWORD *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  int RvaList; // edi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int16 v13; // ax
  unsigned int v14; // eax
  unsigned int *v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // eax
  int v18; // r8d
  int v19; // eax
  int v20; // r9d
  __int64 v22; // [rsp+28h] [rbp-2D0h]
  int Src[60]; // [rsp+C0h] [rbp-238h] BYREF
  _BYTE v25[256]; // [rsp+1B0h] [rbp-148h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  memset(Src, 0, 0xE8uLL);
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  RvaList = 0;
  v11 = *((unsigned int *)a4 + 24);
  if ( !(_DWORD)v11 )
    goto LABEL_33;
  v12 = *((_DWORD *)a4 + 25);
  v13 = *((_WORD *)a4 + 24);
  if ( v13 == 523 )
  {
    v14 = 148;
  }
  else
  {
    if ( v13 != 267 )
      goto LABEL_33;
    v14 = 92;
  }
  if ( (unsigned int)v11 + v14 > (unsigned int)v11 && (unsigned int)v11 + v14 <= *((_DWORD *)a4 + 4) )
  {
    v15 = (unsigned int *)(a2 + v11);
    if ( v12 >= v14 )
    {
      v16 = *a4;
    }
    else
    {
      if ( !v9 || *(_WORD *)(v9 + 48) != 332 )
        goto LABEL_33;
      if ( v12 > 4 )
        v12 = *v15;
      v16 = *a4;
      if ( v12 < v14 )
        goto LABEL_33;
    }
    if ( v12 >= 0xF4 )
      v12 = 244;
    v17 = *((_DWORD *)a4 + 24);
    if ( v17 + v12 > v17 && v17 + v12 <= *((_DWORD *)a4 + 4) )
    {
      memmove(v25, v15, v12);
      if ( a1 )
        v8 = MiReferenceControlAreaFile((__int64)a1);
      if ( v8 )
        MiLogRelocationRva(*((_DWORD *)a4 + 24), v12, v8, a1);
      *(_QWORD *)Src = a1;
      *(_QWORD *)&Src[2] = v8;
      *(_QWORD *)&Src[4] = a2;
      *(_QWORD *)&Src[6] = v16;
      Src[8] = a3;
      Src[9] = 0;
      *(_QWORD *)&Src[10] = a4;
      *(_QWORD *)&Src[12] = v25;
      Src[14] = v12;
      RvaList = MiCaptureImageCfgContext((_DWORD)a1, v8, a2, v16, a3);
      if ( RvaList >= 0 )
      {
        *a6 = *a6;
        v19 = *a6;
        v20 = 0;
        if ( (*a6 & 1) != 0 )
        {
          Src[22] = 1;
          *(_QWORD *)&Src[28] = MiImageCfgRvaIteratorFirst;
          *(_QWORD *)&Src[30] = MiImageCfgRvaIteratorNext;
          v20 = 1;
          if ( (v19 & 0x80u) != 0 )
          {
            Src[23] = 16;
            *(_QWORD *)&Src[38] = 0LL;
            *(_QWORD *)&Src[40] = 0LL;
            v20 = 2;
          }
        }
        Src[25] = v20;
        if ( !v20 )
        {
          RvaList = 0;
          goto LABEL_35;
        }
        RvaList = RtlCreateRvaList((int)Src, 1, v18, v20, &Src[22], v22, (__int64)(a6 + 2));
      }
    }
  }
LABEL_33:
  if ( RvaList < 0 )
    MiFreeImageLoadConfig(a6);
LABEL_35:
  if ( v8 )
    MiDereferenceControlAreaFile((__int64)a1, v8);
  MiFreeImageCfgContext((__int64)&Src[16]);
  return (unsigned int)RvaList;
}
