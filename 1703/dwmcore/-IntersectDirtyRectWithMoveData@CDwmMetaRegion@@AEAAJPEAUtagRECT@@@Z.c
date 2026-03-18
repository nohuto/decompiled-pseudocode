/*
 * XREFs of ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x1800D1898
 * Callers:
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801591CC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x18004FCC0 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::IntersectDirtyRectWithMoveData(CDwmMetaRegion *this, struct tagRECT *a2)
{
  signed int v2; // ebx
  HRGN v3; // r14
  HRGN v4; // rsi
  HRGN RectRgn; // r15
  signed int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r8d
  signed int LastError; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r8d
  signed int v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  int v20; // r8d
  int v21; // eax
  signed int v22; // eax
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // r8d
  signed int v26; // eax
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // r8d

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( !*((_BYTE *)this + 40) || !a2 )
    return (unsigned int)v2;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v15, v14, v16);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x171u);
    goto LABEL_13;
  }
  SetLastError(0);
  v3 = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( !v3 )
  {
    v8 = GetLastError();
    v2 = v8;
    if ( v8 > 0 )
      v2 = (unsigned __int16)v8 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v10, v9, v11);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x176u);
    goto LABEL_13;
  }
  SetLastError(0);
  v4 = CreateRectRgn(0, 0, 0, 0);
  if ( !v4 )
  {
    v17 = GetLastError();
    v2 = v17;
    if ( v17 > 0 )
      v2 = (unsigned __int16)v17 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v19, v18, v20);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x178u);
    goto LABEL_13;
  }
  SetLastError(0);
  if ( !CombineRgn(v4, v4, *((HRGN *)this + 3), 2) )
  {
    v26 = GetLastError();
    v2 = v26;
    if ( v26 > 0 )
      v2 = (unsigned __int16)v26 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v28, v27, v29);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x17Cu);
    goto LABEL_13;
  }
  OffsetRgn(v4, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
  SetLastError(0);
  v21 = CombineRgn(RectRgn, v3, v4, 1);
  if ( !v21 )
  {
    v22 = GetLastError();
    v2 = v22;
    if ( v22 > 0 )
      v2 = (unsigned __int16)v22 | 0x80070000;
    if ( v2 >= 0 )
      v2 = CheckGUIHandleQuota(v24, v23, v25);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x182u);
    goto LABEL_13;
  }
  if ( v21 != 1 )
  {
    CDwmMetaRegion::ClearMoveData(this);
LABEL_13:
    if ( v2 < 0 )
      CDwmMetaRegion::ClearMoveData(this);
  }
  if ( v3 )
    DeleteObject(v3);
  if ( v4 )
    DeleteObject(v4);
  if ( RectRgn )
    DeleteObject(RectRgn);
  return (unsigned int)v2;
}
