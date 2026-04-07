/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180075B44
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x180074F5C (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180076240 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763EC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CLivePreview *v4; // rcx
  unsigned int v5; // r15d
  struct _LIST_ENTRY *v6; // r13
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int v8; // r12d
  bool IsTrulyMaximized; // r14
  HMONITOR v10; // rax
  __int64 v11; // r8
  bool v12; // cf
  __int64 v13; // rdi
  CLivePreview *v14; // rcx
  unsigned int v15; // edi
  const wchar_t **v16; // r14
  char v17; // di
  bool v18; // zf
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  unsigned int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  bool v29; // [rsp+38h] [rbp-D0h]
  _QWORD v30[3]; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+58h] [rbp-B0h]
  unsigned int v32; // [rsp+5Ch] [rbp-ACh]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  _QWORD v34[3]; // [rsp+68h] [rbp-A0h] BYREF
  bool v35; // [rsp+80h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-80h]
  struct tagRECT rcDst; // [rsp+90h] [rbp-78h] BYREF
  WCHAR ClassName[264]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                           *((_QWORD *)this + 36));
  *((_DWORD *)this + 142) = 0;
  v5 = 0;
  *((_DWORD *)this + 143) = 0;
  v31 = 0;
  v6 = WindowListForDesktop;
  Blink = WindowListForDesktop->Blink;
  v32 = 0;
  LODWORD(v33) = 0;
  *(_OWORD *)&v30[1] = 0LL;
  if ( Blink != WindowListForDesktop )
  {
    v8 = v30[0];
    while ( 1 )
    {
      if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v4, (const struct CWindowData *)Blink) )
        goto LABEL_60;
      BYTE2(Blink[37].Flink) &= 0x3Fu;
      IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v4, (const struct CWindowData *)Blink);
      v29 = IsTrulyMaximized;
      v10 = MonitorFromWindow((HWND)Blink[2].Blink, 0);
      v12 = *((_DWORD *)this + 142) < 0x1Eu;
      v30[0] = v10;
      if ( !v12 )
      {
        BYTE2(Blink[37].Flink) |= 0xC0u;
        goto LABEL_59;
      }
      if ( !IsTrulyMaximized )
      {
        if ( GetClassNameW((HWND)Blink[2].Blink, ClassName, 260) )
        {
          v15 = 0;
          v16 = (const wchar_t **)&off_1800A87E0;
          while ( _wcsicmp(*v16, ClassName) )
          {
            ++v15;
            ++v16;
            if ( v15 >= 3 )
              goto LABEL_20;
          }
          BYTE2(Blink[37].Flink) |= 0xC0u;
        }
LABEL_20:
        if ( (BYTE2(Blink[37].Flink) & 0x40) != 0 )
          goto LABEL_29;
        v17 = ((__int64)Blink[6].Blink & 0x80) != 0;
        if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
        {
          if ( !Blink[34].Flink )
          {
            v18 = (HIDWORD(Blink[6].Flink) & 0x40000000) == 0;
            goto LABEL_26;
          }
          goto LABEL_27;
        }
        if ( Blink[23].Flink )
          goto LABEL_27;
        v18 = (HIDWORD(Blink[6].Flink) & 0xC00000) == 12582912;
LABEL_26:
        if ( !v18 )
LABEL_27:
          v17 = 1;
        BYTE2(Blink[37].Flink) &= ~0x40u;
        BYTE2(Blink[37].Flink) |= v17 << 6;
        goto LABEL_29;
      }
      if ( !v10 )
        goto LABEL_13;
      v13 = 0LL;
      if ( *((_DWORD *)this + 82) )
        break;
LABEL_29:
      v19 = BYTE2(Blink[37].Flink);
      if ( v19 < 0x80u || (v19 & 0x40) == 0 )
      {
        ++*((_DWORD *)this + 142);
        v20 = BYTE2(Blink[37].Flink);
        if ( v20 < 0x80u )
        {
          v21 = *((_DWORD *)this + 143);
          if ( v21 >= 0xA )
          {
            BYTE2(Blink[37].Flink) = v20 | 0x80;
          }
          else
          {
            v22 = 0LL;
            *((_DWORD *)this + 143) = v21 + 1;
            if ( *((_DWORD *)this + 82) )
            {
              while ( 1 )
              {
                v11 = *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v22);
                if ( *(_BYTE *)(v11 + 594) < 0x80u
                  && *(_DWORD *)(v11 + 112) == 1
                  && IntersectRect(&rcDst, (const RECT *)&Blink[3], (const RECT *)(v11 + 48))
                  && EqualRect(&rcDst, (const RECT *)&Blink[3]) )
                {
                  break;
                }
                v22 = (unsigned int)(v22 + 1);
                if ( (unsigned int)v22 >= *((_DWORD *)this + 82) )
                  goto LABEL_42;
              }
              --*((_DWORD *)this + 143);
              BYTE2(Blink[37].Flink) |= 0x80u;
            }
          }
        }
LABEL_42:
        LOBYTE(v11) = BYTE2(Blink[37].Flink);
        if ( (v11 & 0x40) == 0 && ((LODWORD(Blink[7].Flink) - 8) & 0xFFFFFFFD) == 0 )
        {
          v23 = 0LL;
          if ( !v5 )
            goto LABEL_49;
          do
          {
            if ( v30[0] == *(_QWORD *)(v30[1] + 8 * v23) )
              break;
            v23 = (unsigned int)(v23 + 1);
          }
          while ( (unsigned int)v23 < v5 );
          if ( (unsigned int)v23 < v5 )
          {
            LOBYTE(v11) = v11 | 0x40;
            BYTE2(Blink[37].Flink) = v11;
          }
          else
          {
LABEL_49:
            v24 = v5 + 1;
            if ( v5 + 1 >= v5 )
              v8 = v5 + 1;
            if ( v24 >= v5 )
            {
              if ( v8 > v32 )
              {
                v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v30[1], 8u, 1, v30);
                if ( v26 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0xC0u);
                v5 = v33;
              }
              else
              {
                v25 = v5;
                v5 = v8;
                LODWORD(v33) = v8;
                *(_QWORD *)(v30[1] + 8 * v25) = v30[0];
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24 < v5 ? 0x80070216 : 0, 0xB5u);
            }
          }
        }
      }
LABEL_59:
      v35 = v29;
      v36 = v30[0];
      v34[0] = Blink;
      *(_OWORD *)&v34[1] = 0LL;
      v27 = DynArray<LivePreviewVisual,0>::AddMultipleAndSet((__int64)this + 304, (__int64)v34, v11);
      v2 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x152u);
        goto LABEL_63;
      }
LABEL_60:
      Blink = Blink->Blink;
      if ( Blink == v6 )
        goto LABEL_63;
    }
    while ( 1 )
    {
      v14 = (CLivePreview *)*((_QWORD *)this + 38);
      if ( *((_QWORD *)v14 + 5 * v13 + 4) == v30[0]
        && CLivePreview::_IsTrulyMaximized(v14, *((const struct CWindowData **)v14 + 5 * v13)) )
      {
        break;
      }
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *((_DWORD *)this + 82) )
        goto LABEL_29;
    }
LABEL_13:
    BYTE2(Blink[37].Flink) |= 0xC0u;
    goto LABEL_29;
  }
LABEL_63:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v30[1]);
  return v2;
}
