/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0099310
 * Callers:
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0099988 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBRUSH a1)
{
  LONG v2; // ebx
  int v3; // esi
  __int64 v4; // rcx
  int v5; // edx
  __int64 DIBitmapReal; // r14
  HDC v7; // rcx
  unsigned int *v8; // rbx
  int DIBitsInternal; // edi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+38h] [rbp-61h]
  __int64 v17; // [rsp+70h] [rbp-29h] BYREF
  char v18[4]; // [rsp+78h] [rbp-21h] BYREF
  LONG v19; // [rsp+7Ch] [rbp-1Dh]
  int v20; // [rsp+80h] [rbp-19h]
  __int16 v21; // [rsp+88h] [rbp-11h]
  __int16 v22; // [rsp+8Ah] [rbp-Fh]
  tagBITMAPINFO v23; // [rsp+98h] [rbp-1h] BYREF

  if ( !a1 )
    return 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, v18) || v21 != 1 || v22 != 32 )
    return 0LL;
  memset(&v23, 0, sizeof(v23));
  v2 = v19;
  v3 = v20;
  v23.bmiHeader.biSize = 40;
  v4 = *(_QWORD *)(gpDispInfo + 48LL);
  v23.bmiHeader.biWidth = v19;
  v23.bmiHeader.biHeight = v20;
  *(_QWORD *)&v23.bmiHeader.biPlanes = 2097153LL;
  DIBitmapReal = GreCreateDIBitmapReal(v4, v5, 0, (unsigned int)&v23, 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, (__int64)&v17);
  if ( DIBitmapReal )
  {
    memset(&v23, 0, sizeof(v23));
    v23.bmiHeader.biWidth = v2;
    v23.bmiHeader.biSize = 40;
    v7 = *(HDC *)(gpDispInfo + 48LL);
    v23.bmiHeader.biHeight = v3;
    *(_QWORD *)&v23.bmiHeader.biPlanes = 2097153LL;
    v16 = v3 * (((32 * v2) >> 3) & 0xFFFFFFFC);
    v8 = (unsigned int *)v17;
    DIBitsInternal = GreGetDIBitsInternal(v7, (__int64)a1, 0, v3, v17, &v23, 0, v16, 0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v10 = v23.bmiHeader.biWidth * v23.bmiHeader.biHeight;
      v11 = 0;
      if ( v23.bmiHeader.biWidth * v23.bmiHeader.biHeight )
      {
        v12 = (char *)v8 + 3;
        while ( !*v12 )
        {
          ++v11;
          v12 += 4;
          if ( v11 >= v10 )
            goto LABEL_13;
        }
        DIBitsInternal = 1;
      }
LABEL_13:
      if ( DIBitsInternal && v10 )
      {
        v13 = v10;
        do
        {
          v14 = *v8++;
          *((_BYTE *)v8 - 2) = HIBYTE(v14) * BYTE2(v14) / 0xFFu;
          *((_BYTE *)v8 - 3) = HIBYTE(v14) * BYTE1(v14) / 0xFFu;
          *((_BYTE *)v8 - 4) = HIBYTE(v14) * (unsigned __int8)v14 / 0xFFu;
          --v13;
        }
        while ( v13 );
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
