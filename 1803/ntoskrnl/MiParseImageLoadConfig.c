/*
 * XREFs of MiParseImageLoadConfig @ 0x14053D084
 * Callers:
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiFreeImageCfgContext @ 0x14009D5A4 (MiFreeImageCfgContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLogRelocationRva @ 0x1404BD2AC (MiLogRelocationRva.c)
 *     MiCaptureImageCfgContext @ 0x14053D860 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x14053DBA4 (RtlCreateRvaList.c)
 *     MiFreeImageLoadConfig @ 0x1405F0A68 (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(_DWORD *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, _DWORD *a6)
{
  ULONG_PTR v8; // r15
  __int64 v9; // r13
  int RvaList; // esi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int16 v13; // ax
  unsigned int v14; // eax
  unsigned int *v15; // rdx
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // eax
  int v19; // r9d
  size_t v21; // [rsp+28h] [rbp-2E0h]
  __int64 v23; // [rsp+78h] [rbp-290h]
  int v27[60]; // [rsp+D0h] [rbp-238h] BYREF
  _BYTE v28[256]; // [rsp+1C0h] [rbp-148h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  memset(v27, 0, 0xE8uLL);
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v23 = *a4;
  RvaList = 0;
  v11 = *((unsigned int *)a4 + 24);
  if ( !(_DWORD)v11 )
    goto LABEL_31;
  v12 = *((_DWORD *)a4 + 25);
  v13 = *((_WORD *)a4 + 24);
  if ( v13 == 523 )
  {
    v14 = 148;
  }
  else
  {
    if ( v13 != 267 )
      goto LABEL_31;
    v14 = 92;
  }
  if ( (unsigned int)v11 + v14 > (unsigned int)v11 && (unsigned int)v11 + v14 <= *((_DWORD *)a4 + 4) )
  {
    v15 = (unsigned int *)(a2 + v11);
    if ( v12 >= v14 )
      goto LABEL_16;
    if ( v9 && *(_WORD *)(v9 + 48) == 332 )
    {
      if ( v12 > 4 )
        v12 = *v15;
      if ( v12 >= v14 )
      {
LABEL_16:
        if ( v12 >= 0x100 )
          v12 = 256;
        v16 = *((_DWORD *)a4 + 24);
        if ( v16 + v12 > v16 && v16 + v12 <= *((_DWORD *)a4 + 4) )
        {
          memmove(v28, v15, v12);
          if ( a1 )
            v8 = MiReferenceControlAreaFile((__int64)a1);
          if ( v8 )
            MiLogRelocationRva(*((_DWORD *)a4 + 24), v12, v8, a1);
          *(_QWORD *)v27 = a1;
          *(_QWORD *)&v27[2] = v8;
          *(_QWORD *)&v27[4] = a2;
          *(_QWORD *)&v27[6] = v23;
          v27[8] = a3;
          v27[9] = 0;
          *(_QWORD *)&v27[10] = a4;
          *(_QWORD *)&v27[12] = v28;
          v27[14] = v12;
          RvaList = MiCaptureImageCfgContext((_DWORD)a1, v8, a2, v23, a3);
          if ( RvaList >= 0 )
          {
            *a6 = *a6;
            v18 = *a6;
            v19 = 0;
            if ( (*a6 & 1) != 0 )
            {
              v27[22] = 1;
              *(_QWORD *)&v27[28] = MiImageCfgRvaIteratorFirst;
              *(_QWORD *)&v27[30] = MiImageCfgRvaIteratorNext;
              v19 = 1;
              if ( (v18 & 8) != 0 )
              {
                v27[23] = 4;
                *(_QWORD *)&v27[38] = 0LL;
                *(_QWORD *)&v27[40] = 0LL;
                v19 = 2;
              }
            }
            v27[25] = v19;
            if ( !v19 )
            {
              RvaList = 0;
              goto LABEL_33;
            }
            RvaList = RtlCreateRvaList((int)v27, 1, v17, v19, &v27[22], v21, (__int64)(a6 + 2));
          }
        }
      }
    }
  }
LABEL_31:
  if ( RvaList < 0 )
    MiFreeImageLoadConfig(a6);
LABEL_33:
  if ( v8 )
    MiDereferenceControlAreaFile((__int64)a1, v8);
  MiFreeImageCfgContext((__int64)&v27[16]);
  return (unsigned int)RvaList;
}
