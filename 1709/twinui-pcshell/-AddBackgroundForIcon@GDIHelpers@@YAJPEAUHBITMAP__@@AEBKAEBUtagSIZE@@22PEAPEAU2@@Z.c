/*
 * XREFs of ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1801C9D54
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801CB860 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@PEAUHBITMAP__@@@Z @ 0x180051434 (--0-$CAutoHandle@PEAUHBITMAP__@@@@QEAA@PEAUHBITMAP__@@@Z.c)
 *     ??1?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ @ 0x180197C94 (--1-$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1801C9C48 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall GDIHelpers::AddBackgroundForIcon(
        HANDLE h,
        HBITMAP a2,
        LONG *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        struct tagSIZE *a6)
{
  HDC CompatibleDC; // rax
  unsigned int LastError; // r15d
  HDC v10; // rdi
  HDC v11; // rax
  HDC v12; // rbx
  HGDIOBJ v13; // r13
  const char *v14; // r9
  HBITMAP v15; // rax
  HGDIOBJ v16; // r14
  LONG cx; // r10d
  const struct tagRECT *cy; // r8
  int v19; // eax
  int v20; // r11d
  int v21; // r9d
  HGDIOBJ ha; // [rsp+60h] [rbp-A0h] BYREF
  const struct tagSIZE *v24; // [rsp+68h] [rbp-98h]
  HBITMAP v25; // [rsp+70h] [rbp-90h]
  const struct tagSIZE *v26; // [rsp+78h] [rbp-88h]
  HGDIOBJ v27; // [rsp+80h] [rbp-80h]
  struct tagSIZE *v28; // [rsp+88h] [rbp-78h]
  void *ppvBits; // [rsp+90h] [rbp-70h] BYREF
  _BYTE pv[4]; // [rsp+98h] [rbp-68h] BYREF
  int wSrc; // [rsp+9Ch] [rbp-64h]
  int hSrc; // [rsp+A0h] [rbp-60h]
  RECT rcSrc; // [rsp+B8h] [rbp-48h] BYREF
  BITMAPINFO pbmi; // [rsp+C8h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v26 = a5;
  v28 = a6;
  v24 = a4;
  v25 = a2;
  CompatibleDC = CreateCompatibleDC(0LL);
  LastError = 0;
  v10 = CompatibleDC;
  if ( CompatibleDC )
  {
    v11 = CreateCompatibleDC(CompatibleDC);
    v12 = v11;
    if ( v11 )
    {
      v13 = SelectObject(v11, h);
      if ( GetObjectW(h, 32, pv) )
      {
        pbmi.bmiHeader.biSize = 44;
        memset(&pbmi.bmiHeader.biWidth, 0, 0x28uLL);
        pbmi.bmiHeader.biWidth = *a3;
        pbmi.bmiHeader.biHeight = a3[1];
        *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
        v15 = CreateDIBSection(v10, &pbmi, 0, &ppvBits, 0LL, 0);
        CAutoHandle<HBITMAP__ *>::CAutoHandle<HBITMAP__ *>(&ha, (__int64)v15);
        v27 = ha;
        if ( ha )
        {
          v16 = SelectObject(v10, ha);
          cx = v24->cx;
          cy = (const struct tagRECT *)(unsigned int)v24->cy;
          rcSrc.left = (*a3 - v24->cx) / 2;
          v19 = a3[1] - (_DWORD)cy;
          rcSrc.right = cx + rcSrc.left;
          rcSrc.top = v19 / 2;
          rcSrc.bottom = (_DWORD)cy + v19 / 2;
          GDIHelpers::FillRectARGB(v10, &rcSrc, cy, *(_DWORD *)v25);
          v20 = hSrc;
          v21 = wSrc;
          LODWORD(ha) = 33488896;
          if ( v26->cx < wSrc )
            v21 = v26->cx;
          if ( v26->cy < hSrc )
            v20 = v26->cy;
          GdiAlphaBlend(
            v10,
            (*a3 - v21) / 2,
            (a3[1] - v20) / 2,
            v21,
            v20,
            v12,
            0,
            0,
            wSrc,
            hSrc,
            (BLENDFUNCTION)33488896);
          ha = 0LL;
          *v28 = (struct tagSIZE)v27;
          SelectObject(v10, v16);
        }
        else
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18D,
            (__int64)"shell\\inc\\gdihelpers.h",
            (const char *)0x8007000ELL);
        }
        CAutoHandle<HBITMAP__ *>::~CAutoHandle<HBITMAP__ *>(&ha);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x181,
                      (__int64)"shell\\inc\\gdihelpers.h",
                      v14);
      }
      SelectObject(v12, v13);
      DeleteDC(v12);
    }
    else
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"shell\\inc\\gdihelpers.h",
        (const char *)0x8007000ELL);
    }
    DeleteDC(v10);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"shell\\inc\\gdihelpers.h",
      (const char *)0x8007000ELL);
  }
  return LastError;
}
