/*
 * XREFs of ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x180178168
 * Callers:
 *     ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x1801780A0 (-AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800C23DC (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ @ 0x18017887C (-CalculateNoMoveDirty@CDwmMetaRegion@@AEAAJXZ.c)
 *     ?SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z @ 0x1801797C8 (-SetMoveRegion@CDwmMetaRegion@@AEAAXPEAUHRGN__@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801CD110 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddMoveRegion(CDwmMetaRegion *this, HRGN *a2, const struct tagPOINT *a3)
{
  HRGN RectRgn; // rbp
  HRGN v6; // rdx
  HRGN v7; // r15
  HRGN v8; // r12
  HRGN v9; // r13
  signed int v10; // ebx
  signed int LastError; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  signed int v18; // eax
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // r8d
  signed int v22; // eax
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // r8d
  signed int v26; // eax
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // r8d
  int v30; // eax
  signed int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  int v34; // r8d
  char v35; // al
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
  HRGN hrgnDst; // [rsp+78h] [rbp+10h]
  HRGN ho; // [rsp+88h] [rbp+20h]

  RectRgn = 0LL;
  ho = 0LL;
  v6 = *a2;
  v7 = 0LL;
  hrgnDst = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( v6 && a3 && *((_BYTE *)this + 40) )
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
      v16 = v10;
      v17 = 164;
      goto LABEL_93;
    }
    SetLastError(0);
    if ( !CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 3), 2) )
    {
      v18 = GetLastError();
      v10 = v18;
      if ( v18 > 0 )
        v10 = (unsigned __int16)v18 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v20, v19, v21);
      v16 = v10;
      v17 = 168;
      goto LABEL_93;
    }
    OffsetRgn(RectRgn, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
    SetLastError(0);
    v7 = CreateRectRgn(0, 0, 0, 0);
    if ( !v7 )
    {
      v22 = GetLastError();
      v10 = v22;
      if ( v22 > 0 )
        v10 = (unsigned __int16)v22 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v24, v23, v25);
      v16 = v10;
      v17 = 175;
      goto LABEL_93;
    }
    SetLastError(0);
    if ( !CombineRgn(v7, v7, *a2, 2) )
    {
      v26 = GetLastError();
      v10 = v26;
      if ( v26 > 0 )
        v10 = (unsigned __int16)v26 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v28, v27, v29);
      v16 = v10;
      v17 = 179;
      goto LABEL_93;
    }
    SetLastError(0);
    v30 = CombineRgn(v7, v7, RectRgn, 1);
    if ( !v30 )
    {
      v31 = GetLastError();
      v10 = v31;
      if ( v31 > 0 )
        v10 = (unsigned __int16)v31 | 0x80070000;
      if ( v10 >= 0 )
        v10 = CheckGUIHandleQuota(v33, v32, v34);
      v16 = v10;
      v17 = 184;
      goto LABEL_93;
    }
    if ( v30 == 1 )
    {
      CDwmMetaRegion::SetMoveRegion(this, *a2);
      *a2 = 0LL;
      *((struct tagPOINT *)this + 2) = *a3;
    }
    else
    {
      OffsetRgn(v7, -*((_DWORD *)this + 4), -*((_DWORD *)this + 5));
      CDwmMetaRegion::SetMoveRegion(this, v7);
      v7 = 0LL;
      *((_DWORD *)this + 4) += a3->x;
      *((_DWORD *)this + 5) += a3->y;
    }
    v35 = *((_BYTE *)this + 40);
  }
  else
  {
    CDwmMetaRegion::SetMoveRegion(this, v6);
    *a2 = 0LL;
    *((struct tagPOINT *)this + 2) = *a3;
    v35 = 1;
    *((_BYTE *)this + 40) = 1;
  }
  if ( v35 == 1 )
  {
    v36 = (HRGN)*((_QWORD *)this + 1);
    if ( v36 || (v36 = *(HRGN *)this) != 0LL )
    {
      SetLastError(0);
      v9 = CreateRectRgn(0, 0, 0, 0);
      if ( v9 )
      {
        SetLastError(0);
        hrgnDst = CreateRectRgn(0, 0, 0, 0);
        if ( hrgnDst )
        {
          SetLastError(0);
          ho = CreateRectRgn(0, 0, 0, 0);
          if ( ho )
          {
            SetLastError(0);
            if ( CombineRgn(ho, ho, *((HRGN *)this + 3), 2) )
            {
              SetLastError(0);
              v8 = CreateRectRgn(0, 0, 0, 0);
              if ( v8 )
              {
                SetLastError(0);
                if ( CombineRgn(v8, v8, *((HRGN *)this + 3), 2) )
                {
                  OffsetRgn(v8, *((_DWORD *)this + 4), *((_DWORD *)this + 5));
                  SetLastError(0);
                  if ( CombineRgn(v9, ho, v8, 2) )
                  {
                    SetLastError(0);
                    v65 = CombineRgn(hrgnDst, v9, v36, 1);
                    if ( v65 )
                    {
                      v70 = this;
                      if ( v65 != 1 )
                      {
LABEL_95:
                        CDwmMetaRegion::ClearMoveData(v70);
                        goto LABEL_96;
                      }
                      v10 = CDwmMetaRegion::CalculateNoMoveDirty(this);
                      v16 = v10;
                      if ( v10 >= 0 )
                        goto LABEL_96;
                      v17 = 274;
                    }
                    else
                    {
                      v66 = GetLastError();
                      v10 = v66;
                      if ( v66 > 0 )
                        v10 = (unsigned __int16)v66 | 0x80070000;
                      if ( v10 >= 0 )
                        v10 = CheckGUIHandleQuota(v68, v67, v69);
                      v16 = v10;
                      v17 = 263;
                    }
                  }
                  else
                  {
                    v61 = GetLastError();
                    v10 = v61;
                    if ( v61 > 0 )
                      v10 = (unsigned __int16)v61 | 0x80070000;
                    if ( v10 >= 0 )
                      v10 = CheckGUIHandleQuota(v63, v62, v64);
                    v16 = v10;
                    v17 = 257;
                  }
                }
                else
                {
                  v57 = GetLastError();
                  v10 = v57;
                  if ( v57 > 0 )
                    v10 = (unsigned __int16)v57 | 0x80070000;
                  if ( v10 >= 0 )
                    v10 = CheckGUIHandleQuota(v59, v58, v60);
                  v16 = v10;
                  v17 = 250;
                }
              }
              else
              {
                v53 = GetLastError();
                v10 = v53;
                if ( v53 > 0 )
                  v10 = (unsigned __int16)v53 | 0x80070000;
                if ( v10 >= 0 )
                  v10 = CheckGUIHandleQuota(v55, v54, v56);
                v16 = v10;
                v17 = 246;
              }
            }
            else
            {
              v49 = GetLastError();
              v10 = v49;
              if ( v49 > 0 )
                v10 = (unsigned __int16)v49 | 0x80070000;
              if ( v10 >= 0 )
                v10 = CheckGUIHandleQuota(v51, v50, v52);
              v16 = v10;
              v17 = 244;
            }
          }
          else
          {
            v45 = GetLastError();
            v10 = v45;
            if ( v45 > 0 )
              v10 = (unsigned __int16)v45 | 0x80070000;
            if ( v10 >= 0 )
              v10 = CheckGUIHandleQuota(v47, v46, v48);
            v16 = v10;
            v17 = 240;
          }
        }
        else
        {
          v41 = GetLastError();
          v10 = v41;
          if ( v41 > 0 )
            v10 = (unsigned __int16)v41 | 0x80070000;
          if ( v10 >= 0 )
            v10 = CheckGUIHandleQuota(v43, v42, v44);
          v16 = v10;
          v17 = 238;
        }
      }
      else
      {
        v37 = GetLastError();
        v10 = v37;
        if ( v37 > 0 )
          v10 = (unsigned __int16)v37 | 0x80070000;
        if ( v10 >= 0 )
          v10 = CheckGUIHandleQuota(v39, v38, v40);
        v16 = v10;
        v17 = 237;
      }
LABEL_93:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17);
      if ( v10 >= 0 )
        goto LABEL_96;
      v70 = this;
      goto LABEL_95;
    }
  }
LABEL_96:
  if ( v7 )
    DeleteObject(v7);
  if ( RectRgn )
    DeleteObject(RectRgn);
  if ( ho )
    DeleteObject(ho);
  if ( v8 )
    DeleteObject(v8);
  if ( hrgnDst )
    DeleteObject(hrgnDst);
  if ( v9 )
    DeleteObject(v9);
  return (unsigned int)v10;
}
