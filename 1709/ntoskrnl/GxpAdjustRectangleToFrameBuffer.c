/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x14013BF44
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14013BD50 (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x1407CEA70 (GxpReadFrameBufferPixels.c)
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
  unsigned int v7; // r12d
  unsigned int v8; // r10d
  unsigned int v10; // r11d
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r9d
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  unsigned int v17; // r8d
  unsigned int v18; // ebx
  __int64 v20; // [rsp+0h] [rbp-28h]
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]
  unsigned int v22; // [rsp+78h] [rbp+50h]
  unsigned int v23; // [rsp+80h] [rbp+58h]

  v7 = a1[1];
  v8 = *a1;
  v10 = *a3;
  v11 = v7;
  v22 = *a1;
  v12 = *a2;
  v13 = 0;
  v20 = v12;
  v14 = v12;
  v21 = *(_QWORD *)a3;
  v23 = a3[2];
  if ( *a3 < (unsigned int)v12 )
    return (unsigned int)-1073741811;
  v15 = a3[1];
  if ( v15 < HIDWORD(v12) )
    return (unsigned int)-1073741811;
  v16 = *(_QWORD *)a3;
  if ( v7 > (int)v21 - (int)v12 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v11 = v21 - v12;
  }
  if ( v8 > HIDWORD(v21) - HIDWORD(v12) )
  {
    if ( a6 )
    {
      v8 = HIDWORD(v21) - HIDWORD(v12);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    if ( v11 < v7 && BYTE2(BgInternal) == 2 )
    {
      v14 = 0;
      LODWORD(v20) = 0;
    }
    else
    {
      v14 = v10 - v11 - v12;
      LODWORD(v20) = v14;
    }
    if ( v8 < v22 && BYTE2(BgInternal) == 2 )
    {
      v17 = 0;
      HIDWORD(v20) = 0;
LABEL_8:
      v10 = HIDWORD(v21);
LABEL_9:
      v18 = *a1;
      goto LABEL_10;
    }
    v17 = v15 - v8 - HIDWORD(v12);
    HIDWORD(v20) = v17;
  }
  else
  {
    v17 = HIDWORD(v12);
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) != 0 || !(_BYTE)BgInternal )
    goto LABEL_8;
  v16 = v15;
  v21 = __PAIR64__(v10, v15);
  if ( BYTE2(BgInternal) == 1 )
  {
    if ( v11 >= v7 )
    {
      v17 = v10 - v12 - v11;
      HIDWORD(v20) = v17;
    }
    else
    {
      v17 = 0;
      HIDWORD(v20) = 0;
    }
    v14 = *((_DWORD *)a2 + 1);
    LODWORD(v20) = v14;
    goto LABEL_9;
  }
  v18 = *a1;
  if ( v8 >= v22 )
  {
    v14 = v15 - *((_DWORD *)a2 + 1) - v8;
    LODWORD(v20) = v14;
  }
  else
  {
    v14 = 0;
    LODWORD(v20) = 0;
  }
  v17 = v12;
  HIDWORD(v20) = v12;
LABEL_10:
  if ( v16 < v14 || v10 < v17 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v18;
    *a4 = v7;
  }
  if ( a5 )
    *a5 = v12;
  *(_QWORD *)a3 = v21;
  a3[2] = v23;
  *a2 = v20;
  *a1 = v8;
  a1[1] = v11;
  return v13;
}
