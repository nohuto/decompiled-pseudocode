/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0046620
 * Callers:
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00465B4 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     GreGetDIBitsInternal @ 0x1C00800D0 (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBRUSH a1)
{
  int v1; // edi
  LONG v2; // ebx
  LONG v3; // esi
  HDC v4; // rcx
  __int64 DIBitmapReal; // r14
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  int DIBitsInternal; // edi
  unsigned int v10; // ecx
  _BYTE *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v15; // [rsp+38h] [rbp-61h]
  __int64 v16; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v17[2]; // [rsp+78h] [rbp-21h] BYREF
  LONG v18; // [rsp+7Ch] [rbp-1Dh]
  int v19; // [rsp+80h] [rbp-19h]
  __int16 v20; // [rsp+88h] [rbp-11h]
  __int16 v21; // [rsp+8Ah] [rbp-Fh]
  tagBITMAPINFO v22; // [rsp+98h] [rbp-1h] BYREF

  v1 = (int)a1;
  if ( !a1 )
    return 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, v17) || v20 != 1 || v21 != 32 )
    return 0LL;
  memset(&v22, 0, sizeof(v22));
  v2 = v18;
  v3 = v19;
  v22.bmiHeader.biSize = 40;
  v4 = *(HDC *)(gpDispInfo + 48LL);
  v22.bmiHeader.biWidth = v18;
  v22.bmiHeader.biHeight = v19;
  *(_QWORD *)&v22.bmiHeader.biPlanes = 2097153LL;
  DIBitmapReal = GreCreateDIBitmapReal(v4, 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, (__int64)&v16);
  if ( DIBitmapReal )
  {
    memset(&v22, 0, sizeof(v22));
    v22.bmiHeader.biWidth = v2;
    v22.bmiHeader.biSize = 40;
    v6 = *(_QWORD *)(gpDispInfo + 48LL);
    v22.bmiHeader.biHeight = v3;
    *(_QWORD *)&v22.bmiHeader.biPlanes = 2097153LL;
    v15 = v3 * (((32 * v2 + 31) >> 3) & 0xFFFFFFFC);
    v7 = (unsigned int *)v16;
    DIBitsInternal = GreGetDIBitsInternal(v6, v1, 0, v3, v16, &v22, 0, v15, 0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v8 = (unsigned int)(v22.bmiHeader.biWidth * v22.bmiHeader.biHeight);
      v10 = 0;
      if ( (_DWORD)v8 )
      {
        v11 = (char *)v7 + 3;
        while ( !*v11 )
        {
          ++v10;
          v11 += 4;
          if ( v10 >= (unsigned int)v8 )
            goto LABEL_13;
        }
        DIBitsInternal = 1;
      }
LABEL_13:
      if ( DIBitsInternal && (_DWORD)v8 )
      {
        v12 = (unsigned int)v8;
        do
        {
          v13 = *v7++;
          *((_BYTE *)v7 - 2) = HIBYTE(v13) * BYTE2(v13) / 0xFFu;
          *((_BYTE *)v7 - 3) = HIBYTE(v13) * BYTE1(v13) / 0xFFu;
          v8 = HIBYTE(v13) * (unsigned __int8)v13 / 0xFFu;
          *((_BYTE *)v7 - 4) = v8;
          --v12;
        }
        while ( v12 );
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal, v8);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
