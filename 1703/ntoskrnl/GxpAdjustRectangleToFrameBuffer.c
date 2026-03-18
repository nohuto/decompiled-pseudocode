/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x140140C9C
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x140140AAC (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x1407561CC (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5,
        char a6)
{
  unsigned int v7; // r13d
  unsigned int v8; // r10d
  unsigned int v9; // esi
  unsigned int v10; // r11d
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r9d
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // ebx
  unsigned int v19; // [rsp+0h] [rbp-28h]
  __int64 v20; // [rsp+8h] [rbp-20h]
  unsigned __int64 v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+78h] [rbp+50h]

  v7 = a1[1];
  v8 = *a1;
  v9 = v7;
  v10 = *a3;
  v22 = *a1;
  v11 = *a2;
  v12 = 0;
  v20 = v11;
  v13 = v11;
  v21 = *(_QWORD *)a3;
  v19 = a3[2];
  if ( *a3 < (unsigned int)v11 )
    return (unsigned int)-1073741811;
  v14 = a3[1];
  if ( v14 < HIDWORD(v11) )
    return (unsigned int)-1073741811;
  v15 = *(_QWORD *)a3;
  if ( v7 > (int)v21 - (int)v11 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v9 = v21 - v11;
  }
  if ( v8 > HIDWORD(v21) - HIDWORD(v11) )
  {
    if ( a6 )
    {
      v8 = HIDWORD(v21) - HIDWORD(v11);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    if ( v9 < v7 && BYTE2(BgInternal) == 2 )
    {
      v13 = 0;
      LODWORD(v20) = 0;
    }
    else
    {
      v13 = v10 - v11 - v9;
      LODWORD(v20) = v13;
    }
    if ( v8 < v22 && BYTE2(BgInternal) == 2 )
    {
      v16 = 0;
      HIDWORD(v20) = 0;
LABEL_8:
      v10 = HIDWORD(v21);
LABEL_9:
      v17 = *a1;
      goto LABEL_10;
    }
    v16 = v14 - HIDWORD(v11) - v8;
    HIDWORD(v20) = v16;
  }
  else
  {
    v16 = HIDWORD(v11);
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) != 0 || !(_BYTE)BgInternal )
    goto LABEL_8;
  v15 = v14;
  v21 = __PAIR64__(v10, v14);
  if ( BYTE2(BgInternal) == 1 )
  {
    if ( v9 >= v7 )
    {
      v16 = v10 - v11 - v9;
      HIDWORD(v20) = v16;
    }
    else
    {
      v16 = 0;
      HIDWORD(v20) = 0;
    }
    v13 = *((_DWORD *)a2 + 1);
    LODWORD(v20) = v13;
    goto LABEL_9;
  }
  v17 = *a1;
  if ( v8 >= v22 )
  {
    v13 = v14 - *((_DWORD *)a2 + 1) - v8;
    LODWORD(v20) = v13;
  }
  else
  {
    v13 = 0;
    LODWORD(v20) = 0;
  }
  v16 = v11;
  HIDWORD(v20) = v11;
LABEL_10:
  if ( v15 < v13 || v10 < v16 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v17;
    *a4 = v7;
  }
  if ( a5 )
    *a5 = v11;
  *(_QWORD *)a3 = v21;
  a3[2] = v19;
  *a2 = v20;
  *a1 = v8;
  a1[1] = v9;
  return v12;
}
