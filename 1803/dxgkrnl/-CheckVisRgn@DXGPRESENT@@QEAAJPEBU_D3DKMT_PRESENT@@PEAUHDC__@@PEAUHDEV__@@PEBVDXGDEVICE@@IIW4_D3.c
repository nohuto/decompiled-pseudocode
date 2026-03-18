/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0108110
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0014AA4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0019BCC (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0107C60 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01085B4 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C015505C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0155D94 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01B03A0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  __int64 v28; // rsi
  char v29; // r15
  unsigned int v30; // ebx
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // esi
  __int64 v40; // r13
  signed int v41; // ebx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v47; // esi
  __int64 v48; // rbx
  __int64 v49; // rax
  HDC v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  int v55; // edx
  int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rsi
  PVOID v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // r15d
  __int16 v64; // ax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  const struct tagRECT *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // ebx
  signed int v76; // r11d
  __int64 v77; // rsi
  unsigned int *v78; // r8
  unsigned int v79; // eax
  int v80; // eax
  unsigned int v81; // eax
  signed int v82; // r9d
  int v83; // r10d
  int v84; // eax
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  const struct tagRECT *ContentRect; // rax
  _QWORD *v90; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v91; // ecx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  int v96; // [rsp+30h] [rbp-58h]
  int v97; // [rsp+34h] [rbp-54h]
  signed int v98; // [rsp+38h] [rbp-50h]
  int v99; // [rsp+3Ch] [rbp-4Ch]
  int v100; // [rsp+40h] [rbp-48h] BYREF
  int v101; // [rsp+44h] [rbp-44h] BYREF
  __int64 v102; // [rsp+48h] [rbp-40h]
  unsigned int v105; // [rsp+B0h] [rbp+28h]

  v13 = 0;
  v14 = *((_QWORD *)a5 + 5);
  v15 = *((_QWORD *)a5 + 211);
  v102 = v15;
  v16 = *(_QWORD *)(v14 + 104);
  if ( !(*(unsigned int (**)(void))(v16 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v66 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v66 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v66);
    return 3223191559LL;
  }
  v97 = (*(__int64 (__fastcall **)(int *))(v16 + 224))(&v100);
  v21 = (*(__int64 (__fastcall **)(int *))(v16 + 312))(&v101);
  if ( !v97 || (v15 = 0LL, v102 = 0LL, v100) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v15 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v67 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v67 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v67);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v16 + 72))(a3, (char *)this + 24) )
      {
        v70 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v70 + 24) = this;
        *(_QWORD *)(v70 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v70);
        return 3221225485LL;
      }
      v25 = (*(__int64 (__fastcall **)(HDC, char *))(v16 + 320))(a3, (char *)this + 40);
      v27 = (_DWORD *)((char *)this + 24);
      if ( v25 )
      {
LABEL_8:
        if ( *v27 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
        {
          *((_DWORD *)this + 1) |= 3u;
          v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, v26);
          v95[3] = -1071775738LL;
          v95[4] = this;
          v95[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v95);
          return 3223191558LL;
        }
        if ( (*((_BYTE *)a5 + 1709) & 1) == 0 )
          *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2)
                                                                                             + 520LL)
                                                                                 + 8LL)
                                                                     + 536LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 528LL));
        if ( (!v15 || !v21 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v15 + 2456), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v97 || !v21 || v101 )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            v71 = WdLogNewEntry5_WdEvent(v27, v26);
            *(_QWORD *)(v71 + 24) = a5;
            WdLogEvent5_WdEvent(v71);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( !v15 )
          goto LABEL_123;
        v28 = *(_QWORD *)(v15 + 2456);
        v29 = 0;
        v30 = 0;
        if ( *(_DWORD *)(v28 + 80) )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(v28 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 160)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 144)) )
            {
              v72 = WdLogNewEntry5_WdAssertion(v31);
              *(_QWORD *)(v72 + 24) = 5391LL;
              WdLogEvent5_WdAssertion(v72);
            }
            v32 = *(_DWORD *)(v28 + 80);
            if ( v30 < v32
              || (v73 = WdLogNewEntry5_WdAssertion(v31),
                  *(_QWORD *)(v73 + 24) = 5392LL,
                  WdLogEvent5_WdAssertion(v73),
                  v32 = *(_DWORD *)(v28 + 80),
                  v30 < v32) )
            {
              if ( a5 == *(const struct DXGDEVICE **)(3760LL * v30 + *(_QWORD *)(v28 + 112) + 688) )
                break;
            }
            if ( ++v30 >= v32 )
            {
              v28 = *(_QWORD *)(v15 + 2456);
              goto LABEL_23;
            }
          }
          v13 = 0;
          goto LABEL_123;
        }
LABEL_23:
        v33 = *(_QWORD *)(v28 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v33 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v33 + 144));
        v34 = *(_DWORD *)(v28 + 80);
        v35 = 0;
        if ( v34 )
        {
          v36 = *(_QWORD *)(v28 + 112);
          while ( 1 )
          {
            v37 = 3760LL * v35;
            if ( *(_QWORD *)(v37 + v36 + 688) )
            {
              if ( *(_DWORD *)(v37 + v36 + 696) == 1 )
                break;
            }
            if ( ++v35 >= v34 )
              goto LABEL_30;
          }
          v29 = 1;
        }
LABEL_30:
        v38 = *((_DWORD *)this + 10);
        v39 = v38 + *((_DWORD *)this + 6);
        v40 = *(_QWORD *)(v15 + 2456);
        v41 = v38 + *((_DWORD *)this + 8);
        v42 = *((_DWORD *)this + 11);
        v43 = (unsigned int)(v42 + *((_DWORD *)this + 7));
        v44 = v42 + *((_DWORD *)this + 9);
        v45 = *(_QWORD *)(v40 + 16);
        v99 = v39;
        v98 = v41;
        v105 = v43;
        v96 = v44;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v45 + 160) )
        {
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v45 + 144));
          v43 = v105;
          v44 = v96;
        }
        if ( v39 != v41 && (_DWORD)v43 != v44 )
        {
          Current = DXGPROCESS::GetCurrent(v45, v43);
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL) )
          {
            v45 = *(unsigned int *)(v40 + 80);
            v47 = 0;
            if ( !(_DWORD)v45 )
            {
LABEL_87:
              v13 = 0;
              v75 = 0;
              if ( !(_DWORD)v45 )
              {
LABEL_115:
                if ( (a2->Flags.Value & 0x100) == 0 && a9 )
                {
                  v87 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v43);
                  v87[3] = 261LL;
                  v87[4] = this;
                  v87[5] = a2->hSource;
                  v87[6] = a2->Flags.Value;
                  v87[7] = a2->VidPnSourceId;
                  WdLogEvent5_WdEvent(v87);
                  return 261LL;
                }
                v15 = v102;
LABEL_42:
                if ( v29 )
                {
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                    goto LABEL_44;
                  if ( !v97 )
                  {
                    v88 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v43);
                    v88[3] = -1071774910LL;
                    v88[4] = this;
                    v88[5] = a2->hSource;
                    v88[6] = a2->Flags.Value;
                    v88[7] = a2->VidPnSourceId;
                    WdLogEvent5_WdEvent(v88);
                    return 3223192386LL;
                  }
                }
LABEL_123:
                if ( (a2->Flags.Value & 0x10000) == 0 )
                {
                  v50 = a3;
                  if ( !a2->hWindow )
                  {
LABEL_129:
                    if ( (a2->Flags.Value & 0x100) != 0 )
                    {
                      ContentRect = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v15 + 2456), a2->VidPnSourceId);
                      v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(
                              (unsigned int)ContentRect->left,
                              (unsigned int)ContentRect->top,
                              (unsigned int)ContentRect->right,
                              (unsigned int)ContentRect->bottom);
                      goto LABEL_50;
                    }
LABEL_46:
                    v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(0LL, 0LL, 0LL, 0LL);
                    if ( v52 )
                    {
                      v53 = (a2->Flags.Value & 0x10000) != 0 ? 5LL : 4LL;
                      if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v16 + 88))(v50, v52, v53) == -1 )
                      {
                        (*(void (__fastcall **)(__int64))(v16 + 128))(v52);
                        goto LABEL_133;
                      }
                    }
LABEL_50:
                    if ( v52 )
                    {
                      Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                      v55 = *((_DWORD *)this + 1);
                      if ( (*(_DWORD *)&Value & 0x10000) != 0 )
                      {
                        if ( a2->hDestination )
                          v56 = v55 & 0xFFFFFFEF;
                        else
                          v56 = v55 | 0x10;
                      }
                      else if ( (v55 & 0x20) != 0 )
                      {
                        v56 = v55 | 0x10;
                      }
                      else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 300LL) & 0x10) != 0
                             && (*(_BYTE *)&Value & 3) != 0 )
                      {
                        v56 = v55 | 0x10;
                      }
                      else
                      {
                        v56 = *((_DWORD *)this + 1) ^ (*((_DWORD *)this + 1) ^ (16
                                                                              * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v16 + 136))(
                                                                                  v15,
                                                                                  a4,
                                                                                  a2->hWindow,
                                                                                  v52))) & 0x10;
                      }
                      *((_DWORD *)this + 1) = v56;
                      if ( (v56 & 0x10) != 0
                        && (a2->Flags.Value & 0x100) != 0
                        && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 2456), a5, a2->VidPnSourceId)
                        && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                         *(DXGADAPTER ***)(v15 + 2456),
                                         a2->VidPnSourceId)
                           + 2) == 41 )
                      {
                        if ( (v91 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                              (*(_BYTE *)&v91 & 1) != 0)
                          && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                          || (*(_BYTE *)&v91 & 2) != 0 && !a2->hWindow )
                        {
                          *((_DWORD *)this + 1) &= ~0x10u;
                        }
                      }
                      if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
                        goto LABEL_64;
                      v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 112))(v52, 0LL, 0LL);
                      v59 = v57;
                      if ( v57 )
                      {
                        operator delete[](*((void **)this + 2));
                        v60 = operator new[]((unsigned int)v59, 0x4B677844u, PagedPool);
                        *((_QWORD *)this + 2) = v60;
                        if ( v60 )
                        {
                          v63 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(v16 + 112))(
                                  v52,
                                  (unsigned int)v59,
                                  v60);
                          if ( v63 > (unsigned int)v59 )
                          {
                            v94 = WdLogNewEntry5_WdAssertion(v62);
                            *(_QWORD *)(v94 + 24) = 9941LL;
                            WdLogEvent5_WdAssertion(v94);
                          }
                          *((_DWORD *)this + 1) |= 2u;
                          if ( (a2->Flags.Value & 0x10000) != 0 )
                          {
                            v64 = (*(__int64 (__fastcall **)(HWND))(v16 + 384))(a2->hWindow);
                            v13 = 0;
                          }
                          else
                          {
                            v13 = 0;
                            v64 = 0;
                          }
                          *((_WORD *)this + 214) = v64;
                          if ( v63 <= 0x20 )
                          {
                            if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                              (*(void (__fastcall **)(HDC, char *))(v16 + 248))(a3, (char *)this + 128);
                          }
                          else
                          {
                            v13 = DXGPRESENT::CombineRectList((struct tagRECT *)this, a2, a3, a5, a6, a7);
                          }
LABEL_64:
                          (*(void (__fastcall **)(__int64))(v16 + 128))(v52);
                          *((_QWORD *)this + 6) = a2->hWindow;
                          return v13;
                        }
                        v93 = WdLogNewEntry5_WdLowResource(v61);
                        *(_QWORD *)(v93 + 24) = this;
                        *(_QWORD *)(v93 + 32) = v59;
                        WdLogEvent5_WdLowResource(v93);
                      }
                      else
                      {
                        v92 = WdLogNewEntry5_WdError(v58);
                        *(_QWORD *)(v92 + 24) = this;
                        *(_QWORD *)(v92 + 32) = v52;
                        WdLogEvent5_WdError(v92);
                      }
                      (*(void (__fastcall **)(__int64))(v16 + 128))(v52);
                      return 3221225495LL;
                    }
LABEL_133:
                    v90 = (_QWORD *)WdLogNewEntry5_WdLowResource(v51);
                    v90[3] = this;
                    v90[4] = a2->hWindow;
                    v90[5] = v50;
                    v90[6] = a4;
                    v90[7] = a2->Flags.Value;
                    WdLogEvent5_WdLowResource(v90);
                    return 3221225495LL;
                  }
                  if ( (*(unsigned int (__fastcall **)(HDC))(v16 + 56))(a3)
                    && (!v15 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 2456), a5)) )
                  {
                    *((_DWORD *)this + 1) |= 0x10u;
                    *((_QWORD *)this + 6) = a2->hWindow;
                    return 0LL;
                  }
LABEL_45:
                  if ( a2->hWindow )
                    goto LABEL_46;
                  goto LABEL_129;
                }
LABEL_44:
                v50 = a3;
                goto LABEL_45;
              }
              while ( 1 )
              {
                if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v40, v75)
                  || !(unsigned int)DmmGetTargetUsage(
                                      *(DXGADAPTER **)(v40 + 16),
                                      *(_DWORD *)(3760LL * v75 + *(_QWORD *)(v40 + 112) + 1068)) )
                {
                  v76 = v98;
                  v45 = (unsigned int)v98;
                  v77 = 3760LL * v75;
                  v78 = (unsigned int *)(v77 + *(_QWORD *)(v40 + 112));
                  v79 = v78[159];
                  v43 = v78[157];
                  if ( v98 >= (int)v79 )
                    v45 = v79;
                  v80 = v99;
                  if ( v99 <= (int)v43 )
                    v80 = v78[157];
                  if ( v80 < (int)v45 )
                  {
                    v81 = v78[158];
                    v82 = v105;
                    v45 = v105;
                    v43 = v78[160];
                    v83 = v96;
                    if ( (int)v105 <= (int)v81 )
                      v45 = v81;
                    v84 = v96;
                    if ( v96 >= (int)v43 )
                      v84 = v78[160];
                    if ( (int)v45 < v84 )
                    {
                      if ( !v78[174] )
                      {
                        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v40, v75) )
                          goto LABEL_40;
                        v82 = v105;
                        v83 = v96;
                        v76 = v98;
                      }
                      v85 = *(_QWORD *)(v40 + 112);
                      v45 = (unsigned int)v99;
                      if ( v99 >= *(_DWORD *)(v77 + v85 + 628)
                        && v76 <= *(_DWORD *)(v77 + v85 + 636)
                        && v82 >= *(_DWORD *)(v77 + v85 + 632)
                        && v83 <= *(_DWORD *)(v77 + v85 + 640) )
                      {
                        break;
                      }
                    }
                  }
                }
                if ( ++v75 >= *(_DWORD *)(v40 + 80) )
                {
                  v13 = 0;
                  goto LABEL_115;
                }
              }
              v15 = v102;
              if ( (*((_DWORD *)a5 + 82) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v102 + 2456)))
                && !DXGDEVICE::AllowLegacyPresent(a5, v43) )
              {
                *((_DWORD *)this + 1) |= 3u;
                *((_QWORD *)this + 6) = a2->hWindow;
                v86 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v43);
                v86[3] = -1071775738LL;
                v86[4] = this;
                v86[5] = a2->hSource;
                v86[6] = a2->Flags.Value;
                v86[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v86);
                if ( !*((_DWORD *)a5 + 82) && v29 )
                  *((_DWORD *)this + 1) |= 0x80u;
                return 3223191558LL;
              }
LABEL_41:
              v13 = 0;
              goto LABEL_42;
            }
            while ( 1 )
            {
              v48 = 3760LL * v47;
              v49 = *(_QWORD *)(v40 + 112);
              if ( *(_DWORD *)(v49 + v48 + 696) == 1 )
              {
                if ( v47 >= (unsigned int)v45 )
                {
                  v74 = WdLogNewEntry5_WdAssertion(v45);
                  *(_QWORD *)(v74 + 24) = 5429LL;
                  WdLogEvent5_WdAssertion(v74);
                  v49 = *(_QWORD *)(v40 + 112);
                }
                if ( *(_BYTE *)(v49 + v48 + 720) )
                  break;
              }
              v45 = *(unsigned int *)(v40 + 80);
              if ( ++v47 >= (unsigned int)v45 )
                goto LABEL_87;
            }
          }
        }
LABEL_40:
        v15 = v102;
        goto LABEL_41;
      }
    }
    else
    {
      if ( !v15 || v15 != *((_QWORD *)a5 + 211) )
      {
        v68 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v68 + 24) = 9613LL;
        WdLogEvent5_WdAssertion(v68);
      }
      v69 = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v15 + 2456), a2->VidPnSourceId);
      v27 = (_DWORD *)((char *)this + 24);
      *(struct tagRECT *)((char *)this + 24) = *v69;
    }
    *((_QWORD *)this + 5) = 0LL;
    goto LABEL_8;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
