/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00FCB10
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007804 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000F5F4 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00AC394 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z @ 0x1C00B5588 (-DmmIsTargetHMD@@YAEPEAVDXGADAPTER@@I@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00FC650 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00FD014 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0175878 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01B45E8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  const struct DXGDEVICE *v9; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  LONG *p_right; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  unsigned int v33; // ebx
  __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // r12
  LONG right; // ecx
  int v44; // esi
  unsigned int v45; // ebx
  LONG bottom; // ecx
  int v47; // r13d
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 CurrentProcess; // rax
  __int64 v52; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v54; // rbx
  unsigned int v55; // esi
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  unsigned int v61; // eax
  __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  void *v64; // rcx
  SIZE_T v65; // rdx
  PVOID PoolWithTag; // r8
  __int64 v67; // rcx
  unsigned int v68; // r14d
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v78; // rsi
  __int64 v79; // rax
  unsigned int v80; // ebx
  __int64 v81; // rsi
  int v82; // eax
  int v83; // eax
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  const struct tagRECT *ContentRect; // rax
  __int64 v89; // rcx
  _QWORD *v90; // rax
  LONG top; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v92; // ecx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  unsigned int v98; // [rsp+30h] [rbp-68h]
  unsigned int v99; // [rsp+34h] [rbp-64h]
  int v100; // [rsp+38h] [rbp-60h]
  int v101; // [rsp+3Ch] [rbp-5Ch]
  int v102; // [rsp+40h] [rbp-58h] BYREF
  int v103; // [rsp+44h] [rbp-54h] BYREF
  __int64 v104; // [rsp+48h] [rbp-50h]
  __int64 v105; // [rsp+50h] [rbp-48h]

  v9 = a5;
  v105 = 0LL;
  v12 = *((_QWORD *)a5 + 5);
  v13 = *((_QWORD *)a5 + 209);
  v104 = v13;
  v14 = *(_QWORD *)(v12 + 96);
  if ( !(*(unsigned int (**)(void))(v14 + 208))() )
  {
    this->top |= 3u;
    *(_QWORD *)&this[3].left = a2->hWindow;
    v70 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
    *(_QWORD *)(v70 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v70);
    return 3223191559LL;
  }
  v101 = (*(__int64 (__fastcall **)(int *))(v14 + 224))(&v102);
  v21 = (*(__int64 (__fastcall **)(int *))(v14 + 312))(&v103);
  if ( !v101 || (v13 = 0LL, v104 = 0LL, v102) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v13 )
    {
      this->top |= 3u;
      *(_QWORD *)&this[3].left = a2->hWindow;
      v71 = WdLogNewEntry5_WdEvent(v20, v19, v22, v23);
      *(_QWORD *)(v71 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v71);
      return 3223191559LL;
    }
    this->top &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      p_right = &this[1].right;
      if ( !(*(unsigned int (__fastcall **)(HDC, LONG *))(v14 + 72))(a3, &this[1].right) )
      {
        v73 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v73 + 24) = this;
        *(_QWORD *)(v73 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v73);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, LONG *))(v14 + 328))(a3, &this[2].right) )
      {
LABEL_8:
        if ( *p_right >= this[2].left || this[1].bottom >= this[2].top )
        {
          this->top |= 3u;
          v97 = (_QWORD *)WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
          v97[3] = -1071775738LL;
          v97[4] = this;
          v97[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v97);
          return 3223191558LL;
        }
        if ( !*((_BYTE *)a5 + 1693) )
          this[4].left = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 504LL) + 8LL)
                                                           + 440LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 512LL));
        if ( (!v13 || !v21 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v13 + 2304), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v101 || !v21 || v103 )
          {
            this->top |= 0x10u;
            *(_QWORD *)&this[3].left = a2->hWindow;
            v74 = WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
            *(_QWORD *)(v74 + 24) = a5;
            WdLogEvent5_WdEvent(v74);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( !v13 )
        {
LABEL_47:
          if ( (a2->Flags.Value & 0x10000) == 0 )
          {
            if ( !a2->hWindow )
            {
LABEL_133:
              if ( (a2->Flags.Value & 0x100) != 0 )
              {
                ContentRect = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v13 + 2304), a2->VidPnSourceId);
                v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(
                        (unsigned int)ContentRect->left,
                        (unsigned int)ContentRect->top,
                        (unsigned int)ContentRect->right,
                        (unsigned int)ContentRect->bottom);
                goto LABEL_53;
              }
LABEL_49:
              v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(0LL, 0LL, 0LL, 0LL);
              if ( !v58 )
                goto LABEL_162;
              if ( (a2->Flags.Value & 0x10000) != 0 )
                v59 = 5LL;
              else
                v59 = 4LL;
              if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v14 + 88))(a3, v58, v59) == -1 )
              {
                (*(void (__fastcall **)(__int64))(v14 + 128))(v58);
                v90 = (_QWORD *)WdLogNewEntry5_WdLowResource(v89);
                v90[3] = this;
                v90[4] = a2->hWindow;
                v90[5] = a3;
                v90[6] = a4;
                v90[7] = a2->Flags.Value;
                WdLogEvent5_WdLowResource(v90);
                return 3221225495LL;
              }
LABEL_53:
              if ( v58 )
              {
                Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                if ( (*(_DWORD *)&Value & 0x10000) != 0 )
                {
                  if ( a2->hDestination )
                    this->top &= ~0x10u;
                  else
                    this->top |= 0x10u;
                }
                else
                {
                  top = this->top;
                  if ( (top & 0x20) != 0 )
                  {
                    this->top = top | 0x10;
                  }
                  else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 300LL) & 0x10) != 0
                         && (*(_BYTE *)&Value & 3) != 0 )
                  {
                    this->top = top | 0x10;
                  }
                  else
                  {
                    this->top ^= (this->top ^ (16
                                             * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v14 + 136))(
                                                 v13,
                                                 a4,
                                                 a2->hWindow,
                                                 v58))) & 0x10;
                  }
                }
                if ( (this->top & 0x10) != 0
                  && (a2->Flags.Value & 0x100) != 0
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2304), v9, a2->VidPnSourceId)
                  && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v13 + 2304), a2->VidPnSourceId)
                     + 2) == 41 )
                {
                  if ( (v92 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                        (*(_BYTE *)&v92 & 1) != 0)
                    && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                    || (*(_BYTE *)&v92 & 2) != 0 && !a2->hWindow )
                  {
                    this->top &= ~0x10u;
                  }
                }
                if ( (this->top & 0x10) != 0 )
                  goto LABEL_72;
                v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 112))(v58, 0LL, 0LL);
                v63 = v61;
                if ( !v61 )
                {
                  v93 = WdLogNewEntry5_WdError(v62);
                  *(_QWORD *)(v93 + 24) = this;
                  *(_QWORD *)(v93 + 32) = v58;
                  WdLogEvent5_WdError(v93);
LABEL_157:
                  (*(void (__fastcall **)(__int64))(v14 + 128))(v58);
                  return 3221225495LL;
                }
                v64 = *(void **)&this[1].left;
                if ( v64 )
                  ExFreePoolWithTag(v64, 0);
                v65 = v63;
                if ( (_DWORD)v63 )
                {
                  if ( v63 > 0x7FFFFFFF )
                  {
                    PoolWithTag = 0LL;
                    goto LABEL_65;
                  }
                }
                else
                {
                  v65 = 1LL;
                }
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, v65, 0x4B677844u);
LABEL_65:
                *(_QWORD *)&this[1].left = PoolWithTag;
                if ( PoolWithTag )
                {
                  v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v14 + 112))(v58, (unsigned int)v63);
                  if ( v68 > (unsigned int)v63 )
                  {
                    v95 = WdLogNewEntry5_WdAssertion(v67);
                    *(_QWORD *)(v95 + 24) = 9787LL;
                    WdLogEvent5_WdAssertion(v95);
                  }
                  this->top |= 2u;
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                    LOWORD(this[26].bottom) = (*(__int64 (__fastcall **)(HWND))(v14 + 392))(a2->hWindow);
                  else
                    LOWORD(this[26].bottom) = 0;
                  if ( v68 <= 0x20 )
                  {
                    if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects((DXGPRESENT *)this, a2, a6, a7) )
                      (*(void (__fastcall **)(HDC, struct tagRECT *))(v14 + 248))(a3, this + 8);
                  }
                  else
                  {
                    LODWORD(v105) = DXGPRESENT::CombineRectList(this, a2, a3, v9, a6, a7);
                  }
LABEL_72:
                  (*(void (__fastcall **)(__int64))(v14 + 128))(v58);
                  *(_QWORD *)&this[3].left = a2->hWindow;
                  return (unsigned int)v105;
                }
                v94 = WdLogNewEntry5_WdLowResource(v64);
                *(_QWORD *)(v94 + 24) = this;
                *(_QWORD *)(v94 + 32) = v63;
                WdLogEvent5_WdLowResource(v94);
                goto LABEL_157;
              }
LABEL_162:
              v96 = (_QWORD *)WdLogNewEntry5_WdLowResource(v57);
              v96[3] = this;
              v96[4] = a2->hWindow;
              v96[5] = a3;
              v96[6] = a4;
              v96[7] = a2->Flags.Value;
              WdLogEvent5_WdLowResource(v96);
              return 3221225495LL;
            }
            if ( (*(unsigned int (__fastcall **)(HDC))(v14 + 56))(a3)
              && (!v13 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 2304), v9)) )
            {
              this->top |= 0x10u;
              *(_QWORD *)&this[3].left = a2->hWindow;
              return 0LL;
            }
          }
          if ( a2->hWindow )
            goto LABEL_49;
          goto LABEL_133;
        }
        v32 = *(_QWORD *)(v13 + 2304);
        v33 = 0;
        if ( *(_DWORD *)(v32 + 80) )
        {
          do
          {
            v34 = *(_QWORD *)(v32 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v34 + 160)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 144)) )
            {
              v75 = WdLogNewEntry5_WdAssertion(v34);
              *(_QWORD *)(v75 + 24) = 5045LL;
              WdLogEvent5_WdAssertion(v75);
            }
            if ( v33 >= *(_DWORD *)(v32 + 80) )
            {
              v76 = WdLogNewEntry5_WdAssertion(v34);
              *(_QWORD *)(v76 + 24) = 5046LL;
              WdLogEvent5_WdAssertion(v76);
            }
            v35 = *(_DWORD *)(v32 + 80);
            if ( v33 < v35 && a5 == *(const struct DXGDEVICE **)(3760LL * v33 + *(_QWORD *)(v32 + 112) + 688) )
              goto LABEL_47;
          }
          while ( ++v33 < v35 );
        }
        v36 = *(_QWORD *)(v13 + 2304);
        v37 = *(_QWORD *)(v36 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v37 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v37 + 144));
        v38 = *(unsigned int *)(v36 + 80);
        v39 = 0LL;
        if ( (_DWORD)v38 )
        {
          v40 = *(_QWORD *)(v36 + 112);
          while ( 1 )
          {
            v41 = 3760LL * (unsigned int)v39;
            if ( *(_QWORD *)(v41 + v40 + 688) )
            {
              if ( *(_DWORD *)(v41 + v40 + 696) == 1 )
                break;
            }
            v39 = (unsigned int)(v39 + 1);
            if ( (unsigned int)v39 >= (unsigned int)v38 )
              goto LABEL_91;
          }
          v42 = 1;
        }
        else
        {
LABEL_91:
          v42 = 0;
        }
        right = this[2].right;
        v44 = right + *p_right;
        v45 = right + this[2].left;
        bottom = this[2].bottom;
        v47 = bottom + this[1].bottom;
        v48 = *(_QWORD *)(v104 + 2304);
        v49 = (unsigned int)(bottom + this[2].top);
        v100 = v44;
        v50 = *(_QWORD *)(v48 + 16);
        v99 = v45;
        v98 = v49;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v50 + 160) )
        {
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v50 + 144));
          v49 = v98;
        }
        if ( v44 != v45 && v47 != (_DWORD)v49 )
        {
          CurrentProcess = PsGetCurrentProcess(v50, v49);
          ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v52);
          v54 = ProcessDxgProcess;
          if ( ProcessDxgProcess )
          {
            if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
            {
              ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
              v78 = ThreadProperty;
              if ( ThreadProperty )
              {
                ObfDereferenceObject(ThreadProperty);
                v54 = *v78;
              }
            }
          }
          if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v54 + 96) + 224LL))(0LL) )
          {
            v50 = *(unsigned int *)(v48 + 80);
            v55 = 0;
            if ( (_DWORD)v50 )
            {
              while ( 1 )
              {
                v56 = 3760LL * v55;
                if ( *(_DWORD *)(v56 + *(_QWORD *)(v48 + 112) + 696) == 1 )
                {
                  if ( v55 >= (unsigned int)v50 )
                  {
                    v79 = WdLogNewEntry5_WdAssertion(v50);
                    *(_QWORD *)(v79 + 24) = 5083LL;
                    WdLogEvent5_WdAssertion(v79);
                  }
                  if ( *(_BYTE *)(v56 + *(_QWORD *)(v48 + 112) + 720) )
                    break;
                }
                v50 = *(unsigned int *)(v48 + 80);
                if ( ++v55 >= (unsigned int)v50 )
                  goto LABEL_95;
              }
            }
            else
            {
LABEL_95:
              v80 = 0;
              if ( *(_DWORD *)(v48 + 80) )
              {
                while ( 1 )
                {
                  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v48, v80)
                    || !DmmIsTargetHMD(
                          *(struct DXGADAPTER **)(v48 + 16),
                          *(_DWORD *)(3760LL * v80 + *(_QWORD *)(v48 + 112) + 1068)) )
                  {
                    v38 = v99;
                    v81 = 3760LL * v80;
                    v49 = v81 + *(_QWORD *)(v48 + 112);
                    v50 = *(unsigned int *)(v49 + 628);
                    v82 = *(_DWORD *)(v49 + 636);
                    if ( v100 > (int)v50 )
                      v50 = (unsigned int)v100;
                    if ( (int)v99 < v82 )
                      v82 = v99;
                    if ( (int)v50 < v82 )
                    {
                      v50 = *(unsigned int *)(v49 + 632);
                      v83 = *(_DWORD *)(v49 + 640);
                      v39 = v98;
                      if ( v47 > (int)v50 )
                        v50 = (unsigned int)v47;
                      if ( (int)v98 < v83 )
                        v83 = v98;
                      if ( (int)v50 < v83 )
                      {
                        if ( !*(_DWORD *)(v49 + 696) )
                        {
                          if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v48, v80) )
                            goto LABEL_43;
                          v39 = v98;
                          v38 = v99;
                        }
                        v84 = *(_QWORD *)(v48 + 112);
                        v50 = (unsigned int)v100;
                        if ( v100 >= *(_DWORD *)(v81 + v84 + 628)
                          && (int)v38 <= *(_DWORD *)(v81 + v84 + 636)
                          && v47 >= *(_DWORD *)(v81 + v84 + 632)
                          && (int)v39 <= *(_DWORD *)(v81 + v84 + 640) )
                        {
                          break;
                        }
                      }
                    }
                  }
                  if ( ++v80 >= *(_DWORD *)(v48 + 80) )
                    goto LABEL_122;
                }
                v9 = a5;
                if ( (*((_DWORD *)a5 + 82) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v104 + 2304)))
                  && !DXGDEVICE::AllowLegacyPresent(a5, v49) )
                {
                  this->top |= 3u;
                  *(_QWORD *)&this[3].left = a2->hWindow;
                  v85 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v39, v38);
                  v85[3] = -1071775738LL;
                  v85[4] = this;
                  v85[5] = a2->hSource;
                  v85[6] = a2->Flags.Value;
                  v85[7] = a2->VidPnSourceId;
                  WdLogEvent5_WdEvent(v85);
                  if ( !*((_DWORD *)a5 + 82) && v42 )
                    this->top |= 0x80u;
                  return 3223191558LL;
                }
                goto LABEL_44;
              }
LABEL_122:
              if ( (a2->Flags.Value & 0x100) == 0 && a9 )
              {
                v86 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v39, v38);
                v86[3] = 261LL;
                v86[4] = this;
                v86[5] = a2->hSource;
                v86[6] = a2->Flags.Value;
                v86[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v86);
                return 261LL;
              }
            }
          }
        }
LABEL_43:
        v9 = a5;
LABEL_44:
        if ( v42 && (a2->Flags.Value & 0x10000) == 0 && !v101 )
        {
          v87 = (_QWORD *)WdLogNewEntry5_WdEvent(v50, v49, v39, v38);
          v87[3] = -1071774910LL;
          v87[4] = this;
          v87[5] = a2->hSource;
          v87[6] = a2->Flags.Value;
          v87[7] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v87);
          return 3223192386LL;
        }
        v13 = v104;
        goto LABEL_47;
      }
    }
    else
    {
      if ( !v13 || v13 != *((_QWORD *)a5 + 209) )
      {
        v72 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v72 + 24) = 9459LL;
        WdLogEvent5_WdAssertion(v72);
      }
      p_right = &this[1].right;
      *(struct tagRECT *)((char *)this + 24) = *ADAPTER_DISPLAY::GetContentRect(
                                                  *(DXGADAPTER ***)(v13 + 2304),
                                                  a2->VidPnSourceId);
    }
    *(_QWORD *)&this[2].right = 0LL;
    goto LABEL_8;
  }
  this->top |= 3u;
  *(_QWORD *)&this[3].left = a2->hWindow;
  return 3223191558LL;
}
