/*
 * XREFs of MiParseImageLoadConfig @ 0x1404F6FD8
 * Callers:
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiFreeImageCfgContext @ 0x1400B61F8 (MiFreeImageCfgContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlCreateRvaList @ 0x1404F6AE4 (RtlCreateRvaList.c)
 *     MiCaptureImageCfgContext @ 0x1404F6C80 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationRva @ 0x1404F7BA0 (MiLogRelocationRva.c)
 *     MiFreeImageLoadConfig @ 0x1405E056C (MiFreeImageLoadConfig.c)
 */

__int64 __fastcall MiParseImageLoadConfig(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 *a6)
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
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r9
  int v21; // [rsp+28h] [rbp-2E0h]
  SIZE_T v22; // [rsp+28h] [rbp-2E0h]
  int v23; // [rsp+68h] [rbp-2A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-298h]
  unsigned __int64 v25; // [rsp+78h] [rbp-290h]
  __int64 v26; // [rsp+80h] [rbp-288h]
  unsigned __int64 v27; // [rsp+88h] [rbp-280h]
  __int64 v28; // [rsp+90h] [rbp-278h]
  __int64 v29; // [rsp+98h] [rbp-270h]
  __int64 v30; // [rsp+A0h] [rbp-268h]
  __int64 v31; // [rsp+A8h] [rbp-260h]
  void *Src; // [rsp+B0h] [rbp-258h]
  __int64 v33; // [rsp+B8h] [rbp-250h]
  __int64 v34; // [rsp+C0h] [rbp-248h]
  __int64 v35; // [rsp+C8h] [rbp-240h]
  int v36[60]; // [rsp+D0h] [rbp-238h] BYREF
  _BYTE v37[256]; // [rsp+1C0h] [rbp-148h] BYREF

  v24 = a2;
  v28 = a1;
  v33 = a1;
  v29 = a2;
  v34 = a2;
  v30 = a4;
  v35 = a4;
  v31 = (__int64)a6;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v23 = 0;
  memset(v36, 0, 0xE8uLL);
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v25 = *(_QWORD *)a4;
  v27 = v25;
  RvaList = 0;
  v11 = *(unsigned int *)(a4 + 96);
  if ( !(_DWORD)v11 )
    goto LABEL_31;
  v12 = *(_DWORD *)(a4 + 100);
  v13 = *(_WORD *)(a4 + 48);
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
  if ( (unsigned int)v11 + v14 > (unsigned int)v11 && (unsigned int)v11 + v14 <= *(_DWORD *)(a4 + 16) )
  {
    v15 = (unsigned int *)(v24 + v11);
    Src = (void *)(v24 + v11);
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
        v16 = *(_DWORD *)(a4 + 96);
        if ( v16 + v12 > v16 && v16 + v12 <= *(_DWORD *)(a4 + 16) )
        {
          memmove(v37, v15, v12);
          if ( a1 )
            v8 = MiReferenceControlAreaFile(a1);
          if ( v8 )
            MiLogRelocationRva(*(unsigned int *)(a4 + 96), v12, v8, a1);
          *(_QWORD *)v36 = v33;
          *(_QWORD *)&v36[2] = v8;
          *(_QWORD *)&v36[4] = v34;
          *(_QWORD *)&v36[6] = v25;
          v36[8] = a3;
          v36[9] = 0;
          *(_QWORD *)&v36[10] = v35;
          *(_QWORD *)&v36[12] = v37;
          v36[14] = v12;
          RvaList = MiCaptureImageCfgContext(a1, v8, v24, v25, a3, v21, a4, (__int64)v37, v12, &v23, (__int64)&v36[16]);
          if ( RvaList >= 0 )
          {
            *(_DWORD *)a6 |= v23;
            v18 = *(_DWORD *)a6;
            v19 = 0LL;
            if ( (*(_DWORD *)a6 & 1) != 0 )
            {
              v36[22] = 1;
              *(_QWORD *)&v36[28] = MiImageCfgRvaIteratorFirst;
              *(_QWORD *)&v36[30] = MiImageCfgRvaIteratorNext;
              v19 = 1LL;
              if ( (v18 & 8) != 0 )
              {
                v36[23] = 4;
                *(_QWORD *)&v36[38] = 0LL;
                *(_QWORD *)&v36[40] = 0LL;
                v19 = 2LL;
              }
            }
            v36[25] = v19;
            if ( !(_DWORD)v19 )
            {
              RvaList = 0;
              goto LABEL_33;
            }
            RvaList = RtlCreateRvaList((__int64)v36, 1LL, v17, v19, &v36[22], v22, a6 + 1);
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
    MiDereferenceControlAreaFile(a1, v8);
  MiFreeImageCfgContext((__int64)&v36[16]);
  return (unsigned int)RvaList;
}
