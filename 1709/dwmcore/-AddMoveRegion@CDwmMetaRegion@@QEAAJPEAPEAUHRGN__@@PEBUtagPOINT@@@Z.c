/*
 * XREFs of ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x18014E918
 * Callers:
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x18014E850 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800BB9B8 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x18014F030 (-CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ.c)
 *     ?SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z @ 0x18014FF8C (-SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddMoveRegion(CDwmMetaRegion *this, HRGN *a2, const struct tagPOINT *a3)
{
  HRGN v5; // rdx
  HRGN v6; // r15
  HRGN RectRgn; // rbp
  HRGN v8; // r13
  HRGN v9; // r12
  signed int v10; // ebx
  signed int LastError; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  DWORD v16; // r9d
  signed int v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  int v20; // r8d
  signed int v21; // eax
  int v22; // edx
  unsigned int v23; // ecx
  int v24; // r8d
  signed int v25; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // r8d
  int v29; // eax
  signed int v30; // eax
  int v31; // edx
  unsigned int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  CDwmMetaRegion *v35; // rax
  HRGN v36; // rsi
  signed int v37; // eax
  int v38; // edx
  unsigned int v39; // ecx
  int v40; // r8d
  signed int v41; // eax
  int v42; // edx
  unsigned int v43; // ecx
  int v44; // r8d
  signed int v45; // eax
  int v46; // edx
  unsigned int v47; // ecx
  int v48; // r8d
  signed int v49; // eax
  int v50; // edx
  unsigned int v51; // ecx
  int v52; // r8d
  signed int v53; // eax
  int v54; // edx
  unsigned int v55; // ecx
  int v56; // r8d
  signed int v57; // eax
  int v58; // edx
  unsigned int v59; // ecx
  int v60; // r8d
  signed int v61; // eax
  int v62; // edx
  unsigned int v63; // ecx
  int v64; // r8d
  int v65; // eax
  signed int v66; // eax
  int v67; // edx
  unsigned int v68; // ecx
  int v69; // r8d
  CDwmMetaRegion *v70; // rcx
  int v71; // eax
  unsigned int v73; // [rsp+20h] [rbp-48h]
  HRGN hrgnDst; // [rsp+78h] [rbp+10h]
  HRGN ho; // [rsp+88h] [rbp+20h]

  v5 = *a2;
  ho = 0LL;
  v6 = 0LL;
  RectRgn = 0LL;
  hrgnDst = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( v5 && a3 && *((_BYTE *)this + 40) )
  {
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( !RectRgn )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v14, v13, v15);
      v73 = 164;
LABEL_10:
      v16 = v10;
      goto LABEL_95;
    }
    SetLastError(0);
    if ( !CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
    {
      v17 = GetLastError();
      v10 = v17;
      if ( v17 > 0 )
        v10 = (unsigned __int16)v17 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v19, v18, v20);
      v73 = 168;
      goto LABEL_10;
    }
    OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
    SetLastError(0);
    v6 = CreateRectRgn(0, 0, 0, 0);
    if ( !v6 )
    {
      v21 = GetLastError();
      v10 = v21;
      if ( v21 > 0 )
        v10 = (unsigned __int16)v21 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v23, v22, v24);
      v73 = 175;
      goto LABEL_10;
    }
    SetLastError(0);
    if ( !CombineRgn(v6, v6, *a2, 2) )
    {
      v25 = GetLastError();
      v10 = v25;
      if ( v25 > 0 )
        v10 = (unsigned __int16)v25 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v27, v26, v28);
      v73 = 179;
      goto LABEL_10;
    }
    SetLastError(0);
    v29 = CombineRgn(v6, v6, RectRgn, 1);
    if ( !v29 )
    {
      v30 = GetLastError();
      v10 = v30;
      if ( v30 > 0 )
        v10 = (unsigned __int16)v30 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v32, v31, v33);
      v73 = 184;
      goto LABEL_10;
    }
    if ( v29 != 1 )
    {
      OffsetRgn(v6, -*((_DWORD *)this + 4), -*((_DWORD *)this + 5));
      CDwmMetaRegion::SetMoveRegion(this, v6);
      v6 = 0LL;
      *((_DWORD *)this + 4) += a3->x;
      *((_DWORD *)this + 5) += a3->y;
      goto LABEL_40;
    }
    CDwmMetaRegion::SetMoveRegion(this, *a2);
    *a2 = 0LL;
    v34 = (__int64)*a3;
  }
  else
  {
    CDwmMetaRegion::SetMoveRegion(this, v5);
    *a2 = 0LL;
    v34 = (__int64)*a3;
    *((_BYTE *)this + 40) = 1;
  }
  *((_QWORD *)this + 2) = v34;
LABEL_40:
  if ( *((_BYTE *)this + 40) != 1 )
    goto LABEL_98;
  v35 = (CDwmMetaRegion *)((char *)this + 8);
  if ( !*((_QWORD *)this + 1) )
  {
    if ( !*(_QWORD *)this )
      goto LABEL_98;
    v35 = this;
  }
  v36 = *(HRGN *)v35;
  SetLastError(0);
  ho = CreateRectRgn(0, 0, 0, 0);
  if ( !ho )
  {
    v37 = GetLastError();
    v10 = v37;
    if ( v37 > 0 )
      v10 = (unsigned __int16)v37 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v39, v38, v40);
    v73 = 237;
    goto LABEL_10;
  }
  SetLastError(0);
  hrgnDst = CreateRectRgn(0, 0, 0, 0);
  if ( !hrgnDst )
  {
    v41 = GetLastError();
    v10 = v41;
    if ( v41 > 0 )
      v10 = (unsigned __int16)v41 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v43, v42, v44);
    v73 = 238;
    goto LABEL_10;
  }
  SetLastError(0);
  v8 = CreateRectRgn(0, 0, 0, 0);
  if ( !v8 )
  {
    v45 = GetLastError();
    v10 = v45;
    if ( v45 > 0 )
      v10 = (unsigned __int16)v45 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v47, v46, v48);
    v73 = 240;
    goto LABEL_10;
  }
  SetLastError(0);
  if ( !CombineRgn(v8, v8, *((HRGN *)this + 3), 2) )
  {
    v49 = GetLastError();
    v10 = v49;
    if ( v49 > 0 )
      v10 = (unsigned __int16)v49 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v51, v50, v52);
    v73 = 244;
    goto LABEL_10;
  }
  SetLastError(0);
  v9 = CreateRectRgn(0, 0, 0, 0);
  if ( !v9 )
  {
    v53 = GetLastError();
    v10 = v53;
    if ( v53 > 0 )
      v10 = (unsigned __int16)v53 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v55, v54, v56);
    v73 = 246;
    goto LABEL_10;
  }
  SetLastError(0);
  if ( !CombineRgn(v9, v9, *((HRGN *)this + 3), 2) )
  {
    v57 = GetLastError();
    v10 = v57;
    if ( v57 > 0 )
      v10 = (unsigned __int16)v57 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v59, v58, v60);
    v73 = 250;
    goto LABEL_10;
  }
  OffsetRgn(v9, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
  SetLastError(0);
  if ( !CombineRgn(ho, v8, v9, 2) )
  {
    v61 = GetLastError();
    v10 = v61;
    if ( v61 > 0 )
      v10 = (unsigned __int16)v61 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v63, v62, v64);
    v73 = 257;
    goto LABEL_10;
  }
  SetLastError(0);
  v65 = CombineRgn(hrgnDst, ho, v36, 1);
  if ( !v65 )
  {
    v66 = GetLastError();
    v10 = v66;
    if ( v66 > 0 )
      v10 = (unsigned __int16)v66 | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v68, v67, v69);
    v73 = 263;
    goto LABEL_10;
  }
  v70 = this;
  if ( v65 != 1 )
    goto LABEL_97;
  v71 = CDwmMetaRegion::CalculateNoMoveDirty(this);
  v10 = v71;
  if ( v71 >= 0 )
    goto LABEL_98;
  v73 = 274;
  v16 = v71;
LABEL_95:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, v73);
  if ( v10 >= 0 )
    goto LABEL_98;
  v70 = this;
LABEL_97:
  CDwmMetaRegion::ClearMoveData(v70);
LABEL_98:
  if ( v6 )
    DeleteObject(v6);
  if ( RectRgn )
    DeleteObject(RectRgn);
  if ( v8 )
    DeleteObject(v8);
  if ( v9 )
    DeleteObject(v9);
  if ( hrgnDst )
    DeleteObject(hrgnDst);
  if ( ho )
    DeleteObject(ho);
  return (unsigned int)v10;
}
