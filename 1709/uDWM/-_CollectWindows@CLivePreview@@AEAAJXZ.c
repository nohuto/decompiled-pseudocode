/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18006A81C
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180034B78 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800256C4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B544 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6EC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x1800803E0 (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
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
  bool v11; // cf
  __int64 v12; // rdi
  CLivePreview *v13; // rcx
  unsigned int v14; // edi
  const wchar_t **v15; // r14
  char v16; // di
  bool v17; // zf
  char v18; // al
  char v19; // al
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // r8
  char v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  bool v30; // [rsp+38h] [rbp-D0h]
  _QWORD v31[3]; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+58h] [rbp-B0h]
  unsigned int v33; // [rsp+5Ch] [rbp-ACh]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  _QWORD v35[3]; // [rsp+68h] [rbp-A0h] BYREF
  bool v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h]
  struct tagRECT rcDst; // [rsp+90h] [rbp-78h] BYREF
  WCHAR ClassName[264]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           *((_QWORD *)this + 36));
  *((_DWORD *)this + 142) = 0;
  v5 = 0;
  *((_DWORD *)this + 143) = 0;
  v32 = 0;
  v6 = WindowListForDesktop;
  Blink = WindowListForDesktop->Blink;
  v33 = 0;
  LODWORD(v34) = 0;
  *(_OWORD *)&v31[1] = 0LL;
  if ( Blink != WindowListForDesktop )
  {
    v8 = v31[0];
    while ( 1 )
    {
      if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v4, (const struct CWindowData *)Blink) )
        goto LABEL_60;
      BYTE2(Blink[37].Flink) &= 0x3Fu;
      IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v4, (const struct CWindowData *)Blink);
      v30 = IsTrulyMaximized;
      v10 = MonitorFromWindow((HWND)Blink[2].Blink, 0);
      v11 = *((_DWORD *)this + 142) < 0x1Eu;
      v31[0] = v10;
      if ( !v11 )
      {
        BYTE2(Blink[37].Flink) |= 0xC0u;
        goto LABEL_59;
      }
      if ( !IsTrulyMaximized )
      {
        if ( GetClassNameW((HWND)Blink[2].Blink, ClassName, 260) )
        {
          v14 = 0;
          v15 = (const wchar_t **)off_1800A7710;
          while ( _wcsicmp(*v15, ClassName) )
          {
            ++v14;
            ++v15;
            if ( v14 >= 3 )
              goto LABEL_20;
          }
          BYTE2(Blink[37].Flink) |= 0xC0u;
        }
LABEL_20:
        if ( (BYTE2(Blink[37].Flink) & 0x40) != 0 )
          goto LABEL_29;
        v16 = ((__int64)Blink[6].Blink & 0x80) != 0;
        if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
        {
          if ( !Blink[34].Flink )
          {
            v17 = (HIDWORD(Blink[6].Flink) & 0x40000000) == 0;
            goto LABEL_26;
          }
          goto LABEL_27;
        }
        if ( Blink[23].Flink )
          goto LABEL_27;
        v17 = (HIDWORD(Blink[6].Flink) & 0xC00000) == 12582912;
LABEL_26:
        if ( !v17 )
LABEL_27:
          v16 = 1;
        BYTE2(Blink[37].Flink) &= ~0x40u;
        BYTE2(Blink[37].Flink) |= v16 << 6;
        goto LABEL_29;
      }
      if ( !v10 )
        goto LABEL_13;
      v12 = 0LL;
      if ( *((_DWORD *)this + 82) )
        break;
LABEL_29:
      v18 = BYTE2(Blink[37].Flink);
      if ( v18 >= 0 || (v18 & 0x40) == 0 )
      {
        ++*((_DWORD *)this + 142);
        v19 = BYTE2(Blink[37].Flink);
        if ( v19 >= 0 )
        {
          v20 = *((_DWORD *)this + 143);
          if ( v20 >= 0xA )
          {
            BYTE2(Blink[37].Flink) = v19 | 0x80;
          }
          else
          {
            v21 = 0LL;
            *((_DWORD *)this + 143) = v20 + 1;
            if ( *((_DWORD *)this + 82) )
            {
              while ( 1 )
              {
                v22 = *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v21);
                if ( *(char *)(v22 + 594) >= 0
                  && *(_DWORD *)(v22 + 112) == 1
                  && IntersectRect(&rcDst, (const RECT *)&Blink[3], (const RECT *)(v22 + 48))
                  && EqualRect(&rcDst, (const RECT *)&Blink[3]) )
                {
                  break;
                }
                v21 = (unsigned int)(v21 + 1);
                if ( (unsigned int)v21 >= *((_DWORD *)this + 82) )
                  goto LABEL_42;
              }
              --*((_DWORD *)this + 143);
              BYTE2(Blink[37].Flink) |= 0x80u;
            }
          }
        }
LABEL_42:
        v23 = BYTE2(Blink[37].Flink);
        if ( (v23 & 0x40) == 0 && ((LODWORD(Blink[7].Flink) - 8) & 0xFFFFFFFD) == 0 )
        {
          v24 = 0LL;
          if ( !v5 )
            goto LABEL_49;
          do
          {
            if ( v31[0] == *(_QWORD *)(v31[1] + 8 * v24) )
              break;
            v24 = (unsigned int)(v24 + 1);
          }
          while ( (unsigned int)v24 < v5 );
          if ( (unsigned int)v24 < v5 )
          {
            BYTE2(Blink[37].Flink) = v23 | 0x40;
          }
          else
          {
LABEL_49:
            v25 = v5 + 1;
            if ( v5 + 1 >= v5 )
              v8 = v5 + 1;
            if ( v25 >= v5 )
            {
              if ( v8 > v33 )
              {
                v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v31[1], 8u, 1, v31);
                if ( v27 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC0u);
                v5 = v34;
              }
              else
              {
                v26 = v5;
                v5 = v8;
                LODWORD(v34) = v8;
                *(_QWORD *)(v31[1] + 8 * v26) = v31[0];
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25 < v5 ? 0x80070216 : 0, 0xB5u);
            }
          }
        }
      }
LABEL_59:
      v36 = v30;
      v37 = v31[0];
      v35[0] = Blink;
      *(_OWORD *)&v35[1] = 0LL;
      v28 = DynArray<LivePreviewVisual,0>::AddMultipleAndSet((char *)this + 304, v35);
      v2 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x152u);
        goto LABEL_63;
      }
LABEL_60:
      Blink = Blink->Blink;
      if ( Blink == v6 )
        goto LABEL_63;
    }
    while ( 1 )
    {
      v13 = (CLivePreview *)*((_QWORD *)this + 38);
      if ( *((_QWORD *)v13 + 5 * v12 + 4) == v31[0]
        && CLivePreview::_IsTrulyMaximized(v13, *((const struct CWindowData **)v13 + 5 * v12)) )
      {
        break;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 82) )
        goto LABEL_29;
    }
LABEL_13:
    BYTE2(Blink[37].Flink) |= 0xC0u;
    goto LABEL_29;
  }
LABEL_63:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v31[1]);
  return v2;
}
