/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0102280
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0020820 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00E6BEC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0101D80 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C016B3C8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0171D7C (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C019DD14 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
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
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  LONG *p_right; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // esi
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  __int64 v40; // r14
  __int64 v41; // rcx
  int v42; // r12d
  int v43; // r15d
  int v44; // r13d
  __int64 CurrentProcess; // rax
  __int64 v46; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rsi
  void *v61; // rcx
  SIZE_T v62; // rdx
  PVOID PoolWithTag; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // r14d
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 *ThreadProperty; // rax
  __int64 v78; // rax
  unsigned int v79; // ebx
  signed int v80; // edx
  __int64 v81; // rsi
  unsigned int *v82; // r8
  int v83; // eax
  int v84; // eax
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  const struct tagRECT *ContentRect; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  LONG top; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v93; // ecx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  char v99; // [rsp+30h] [rbp-88h]
  __int64 v100; // [rsp+38h] [rbp-80h]
  int v101; // [rsp+40h] [rbp-78h]
  int v102; // [rsp+44h] [rbp-74h]
  int v103; // [rsp+48h] [rbp-70h]
  int v104; // [rsp+4Ch] [rbp-6Ch]
  int v105; // [rsp+58h] [rbp-60h]
  int v106; // [rsp+5Ch] [rbp-5Ch] BYREF
  int v107; // [rsp+60h] [rbp-58h] BYREF
  __int64 v108; // [rsp+68h] [rbp-50h]
  __int64 v109; // [rsp+70h] [rbp-48h]

  v9 = a5;
  v109 = 0LL;
  v12 = *((_QWORD *)a5 + 225);
  v100 = v12;
  v13 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 72LL);
  v108 = v13;
  if ( !(*(unsigned int (**)(void))(v13 + 208))() )
  {
    this->top |= 3u;
    *(_QWORD *)&this[3].left = a2->hWindow;
    v70 = WdLogNewEntry5_WdEvent(v14);
    *(_QWORD *)(v70 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v70);
    return 3223191559LL;
  }
  v105 = (*(__int64 (__fastcall **)(int *))(v13 + 224))(&v106);
  v17 = (*(__int64 (__fastcall **)(int *))(v13 + 312))(&v107);
  if ( !v105 || (v12 = 0LL, v100 = 0LL, v106) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v12 )
    {
      this->top |= 3u;
      *(_QWORD *)&this[3].left = a2->hWindow;
      v71 = WdLogNewEntry5_WdEvent(v16);
      *(_QWORD *)(v71 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v71);
      return 3223191559LL;
    }
    this->top &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      p_right = &this[1].right;
      if ( !(*(unsigned int (__fastcall **)(HDC, LONG *))(v13 + 72))(a3, &this[1].right) )
      {
        v73 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        *(_QWORD *)(v73 + 24) = this;
        *(_QWORD *)(v73 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v73);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, LONG *))(v13 + 328))(a3, &this[2].right) )
      {
LABEL_8:
        if ( *p_right >= this[2].left || this[1].bottom >= this[2].top )
        {
          this->top |= 3u;
          v98 = (_QWORD *)WdLogNewEntry5_WdEvent(v26);
          v98[3] = -1071775738LL;
          v98[4] = this;
          v98[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v98);
          return 3223191558LL;
        }
        if ( !*((_BYTE *)a5 + 1821) )
          this[4].left = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 408LL) + 8LL)
                                                           + 440LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 416LL));
        if ( (!v12 || !v17 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v12 + 2280), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v105 || !v17 || v107 )
          {
            this->top |= 0x10u;
            *(_QWORD *)&this[3].left = a2->hWindow;
            v74 = WdLogNewEntry5_WdEvent(v26);
            *(_QWORD *)(v74 + 24) = a5;
            WdLogEvent5_WdEvent(v74);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( !v12 )
        {
LABEL_48:
          if ( (a2->Flags.Value & 0x10000) == 0 )
          {
            if ( !a2->hWindow )
            {
LABEL_131:
              if ( (a2->Flags.Value & 0x100) != 0 )
              {
                ContentRect = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v12 + 2280), a2->VidPnSourceId);
                v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v13 + 80))(
                        (unsigned int)ContentRect->left,
                        (unsigned int)ContentRect->top,
                        (unsigned int)ContentRect->right,
                        (unsigned int)ContentRect->bottom);
                goto LABEL_54;
              }
LABEL_50:
              v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v13 + 80))(0LL, 0LL, 0LL, 0LL);
              if ( !v54 )
                goto LABEL_158;
              if ( (a2->Flags.Value & 0x10000) != 0 )
                v55 = 5LL;
              else
                v55 = 4LL;
              if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v13 + 88))(a3, v54, v55) == -1 )
              {
                (*(void (__fastcall **)(__int64))(v13 + 128))(v54);
                v91 = (_QWORD *)WdLogNewEntry5_WdLowResource(v90);
                v91[3] = this;
                v91[4] = a2->hWindow;
                v91[5] = a3;
                v91[6] = a4;
                v91[7] = a2->Flags.Value;
                WdLogEvent5_WdLowResource(v91);
                return 3221225495LL;
              }
LABEL_54:
              if ( v54 )
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
                                             * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v13 + 136))(
                                                 v12,
                                                 a4,
                                                 a2->hWindow,
                                                 v54))) & 0x10;
                  }
                }
                if ( (a2->Flags.Value & 0x100) != 0
                  && (this->top & 0x10) != 0
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v12 + 2280), v9, a2->VidPnSourceId)
                  && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v12 + 2280), a2->VidPnSourceId)
                     + 2) == 41 )
                {
                  if ( (v93 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                        (*(_BYTE *)&v93 & 1) != 0)
                    && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                    || (*(_BYTE *)&v93 & 2) != 0 && !a2->hWindow )
                  {
                    this->top &= ~0x10u;
                  }
                }
                if ( (this->top & 0x10) != 0 )
                  goto LABEL_71;
                v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v13 + 112))(v54, 0LL, 0LL);
                v60 = v57;
                if ( !v57 )
                {
                  v94 = WdLogNewEntry5_WdError(v59, v58);
                  *(_QWORD *)(v94 + 24) = this;
                  *(_QWORD *)(v94 + 32) = v54;
                  WdLogEvent5_WdError(v94);
LABEL_154:
                  (*(void (__fastcall **)(__int64))(v13 + 128))(v54);
                  return 3221225495LL;
                }
                v61 = *(void **)&this[1].left;
                if ( v61 )
                  ExFreePoolWithTag(v61, 0);
                v62 = v60;
                if ( (_DWORD)v60 )
                {
                  if ( v60 > 0x7FFFFFFF )
                  {
                    PoolWithTag = 0LL;
                    goto LABEL_66;
                  }
                }
                else
                {
                  v62 = 1LL;
                }
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, v62, 0x4B677844u);
LABEL_66:
                *(_QWORD *)&this[1].left = PoolWithTag;
                if ( PoolWithTag )
                {
                  v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v13 + 112))(v54, (unsigned int)v60);
                  if ( v68 > (unsigned int)v60 )
                  {
                    v96 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
                    *(_QWORD *)(v96 + 24) = 9018LL;
                    WdLogEvent5_WdAssertion(v96);
                  }
                  this->top |= 2u;
                  if ( v68 <= 0x20 )
                  {
                    if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects((DXGPRESENT *)this, a2, a6, a7) )
                      (*(void (__fastcall **)(HDC, struct tagRECT *))(v13 + 248))(a3, this + 8);
                  }
                  else
                  {
                    LODWORD(v109) = DXGPRESENT::CombineRectList(this, a2, a3, v9, a6, a7);
                  }
LABEL_71:
                  (*(void (__fastcall **)(__int64))(v13 + 128))(v54);
                  *(_QWORD *)&this[3].left = a2->hWindow;
                  return (unsigned int)v109;
                }
                v95 = WdLogNewEntry5_WdLowResource(v61);
                *(_QWORD *)(v95 + 24) = this;
                *(_QWORD *)(v95 + 32) = v60;
                WdLogEvent5_WdLowResource(v95);
                goto LABEL_154;
              }
LABEL_158:
              v97 = (_QWORD *)WdLogNewEntry5_WdLowResource(v53);
              v97[3] = this;
              v97[4] = a2->hWindow;
              v97[5] = a3;
              v97[6] = a4;
              v97[7] = a2->Flags.Value;
              WdLogEvent5_WdLowResource(v97);
              return 3221225495LL;
            }
            if ( (*(unsigned int (__fastcall **)(HDC))(v13 + 56))(a3)
              && (!v12 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v12 + 2280), v9)) )
            {
              this->top |= 0x10u;
              *(_QWORD *)&this[3].left = a2->hWindow;
              return 0LL;
            }
          }
          if ( a2->hWindow )
            goto LABEL_50;
          goto LABEL_131;
        }
        v29 = *(_QWORD *)(v12 + 2280);
        v30 = 0;
        if ( *(_DWORD *)(v29 + 80) )
        {
          do
          {
            v31 = *(_QWORD *)(v29 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 160)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 144)) )
            {
              v75 = WdLogNewEntry5_WdAssertion(v31, v25, v27, v28);
              *(_QWORD *)(v75 + 24) = 4858LL;
              WdLogEvent5_WdAssertion(v75);
            }
            if ( v30 >= *(_DWORD *)(v29 + 80) )
            {
              v76 = WdLogNewEntry5_WdAssertion(v31, v25, v27, v28);
              *(_QWORD *)(v76 + 24) = 4859LL;
              WdLogEvent5_WdAssertion(v76);
            }
            v25 = *(unsigned int *)(v29 + 80);
            if ( v30 < (unsigned int)v25
              && a5 == *(const struct DXGDEVICE **)(3208LL * v30 + *(_QWORD *)(v29 + 112) + 688) )
            {
              goto LABEL_48;
            }
          }
          while ( ++v30 < (unsigned int)v25 );
        }
        v32 = *(_QWORD *)(v12 + 2280);
        v33 = *(_QWORD *)(v32 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v33 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v33 + 144));
        v34 = *(_DWORD *)(v32 + 80);
        v35 = 0;
        v36 = 0;
        if ( v34 )
        {
          v37 = *(_QWORD *)(v32 + 112);
          while ( 1 )
          {
            v38 = 3208LL * v36;
            if ( *(_QWORD *)(v38 + v37 + 688) )
            {
              if ( *(_DWORD *)(v38 + v37 + 696) == 1 )
                break;
            }
            if ( ++v36 >= v34 )
              goto LABEL_90;
          }
          v99 = 1;
        }
        else
        {
LABEL_90:
          v99 = 0;
        }
        v39 = this[2].right + *p_right;
        v40 = *(_QWORD *)(v12 + 2280);
        v101 = v39;
        v103 = this[2].right + this[2].left;
        v102 = this[2].bottom + this[1].bottom;
        v104 = this[2].bottom + this[2].top;
        v41 = *(_QWORD *)(v40 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v41 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v41 + 144));
        v42 = v101;
        v43 = v103;
        if ( v101 != v103 )
        {
          v44 = v102;
          if ( v102 != v104 )
          {
            CurrentProcess = PsGetCurrentProcess(v41);
            ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v46);
            v48 = ProcessDxgProcess;
            if ( ProcessDxgProcess )
            {
              if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
              {
                ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                v43 = v103;
                v44 = v102;
                v42 = v101;
                if ( ThreadProperty )
                  v48 = *ThreadProperty;
              }
            }
            if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v48 + 72) + 224LL))(0LL) )
            {
              v41 = *(unsigned int *)(v40 + 80);
              if ( (_DWORD)v41 )
              {
                while ( 1 )
                {
                  v52 = 3208LL * v35;
                  if ( *(_DWORD *)(v52 + *(_QWORD *)(v40 + 112) + 696) == 1 )
                  {
                    if ( v35 >= (unsigned int)v41 )
                    {
                      v78 = WdLogNewEntry5_WdAssertion(v41, v49, v50, v51);
                      *(_QWORD *)(v78 + 24) = 4896LL;
                      WdLogEvent5_WdAssertion(v78);
                    }
                    if ( *(_BYTE *)(v52 + *(_QWORD *)(v40 + 112) + 720) )
                      break;
                  }
                  v41 = *(unsigned int *)(v40 + 80);
                  if ( ++v35 >= (unsigned int)v41 )
                    goto LABEL_94;
                }
              }
              else
              {
LABEL_94:
                v79 = 0;
                if ( *(_DWORD *)(v40 + 80) )
                {
                  v80 = v104;
                  while ( 1 )
                  {
                    v81 = 3208LL * v79;
                    v82 = (unsigned int *)(v81 + *(_QWORD *)(v40 + 112));
                    v41 = v82[157];
                    v83 = v82[159];
                    if ( v42 > (int)v41 )
                      v41 = (unsigned int)v42;
                    if ( v43 < v83 )
                      v83 = v43;
                    if ( (int)v41 < v83 )
                    {
                      v41 = v82[158];
                      v84 = v82[160];
                      if ( v44 > (int)v41 )
                        v41 = (unsigned int)v44;
                      if ( v80 < v84 )
                        v84 = v80;
                      if ( (int)v41 < v84 )
                      {
                        if ( !v82[174] )
                        {
                          if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v40, v79, (__int64)v82, v51) )
                            goto LABEL_43;
                          v80 = v104;
                        }
                        v85 = *(_QWORD *)(v40 + 112);
                        if ( v42 >= *(_DWORD *)(v81 + v85 + 628)
                          && v43 <= *(_DWORD *)(v81 + v85 + 636)
                          && v44 >= *(_DWORD *)(v81 + v85 + 632)
                          && v80 <= *(_DWORD *)(v81 + v85 + 640) )
                        {
                          break;
                        }
                      }
                    }
                    if ( ++v79 >= *(_DWORD *)(v40 + 80) )
                      goto LABEL_120;
                  }
                  v9 = a5;
                  v12 = v100;
                  if ( (*((_DWORD *)a5 + 82) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v100 + 2280)))
                    && !DXGDEVICE::AllowLegacyPresent(a5, v80) )
                  {
                    this->top |= 3u;
                    *(_QWORD *)&this[3].left = a2->hWindow;
                    v86 = (_QWORD *)WdLogNewEntry5_WdEvent(v41);
                    v86[3] = -1071775738LL;
                    v86[4] = this;
                    v86[5] = a2->hSource;
                    v86[6] = a2->Flags.Value;
                    v86[7] = a2->VidPnSourceId;
                    WdLogEvent5_WdEvent(v86);
                    if ( !*((_DWORD *)a5 + 82) && v99 )
                      this->top |= 0x80u;
                    return 3223191558LL;
                  }
                  goto LABEL_45;
                }
LABEL_120:
                if ( (a2->Flags.Value & 0x100) == 0 && a9 )
                {
                  v87 = (_QWORD *)WdLogNewEntry5_WdEvent(v41);
                  v87[3] = 261LL;
                  v87[4] = this;
                  v87[5] = a2->hSource;
                  v87[6] = a2->Flags.Value;
                  v87[7] = a2->VidPnSourceId;
                  WdLogEvent5_WdEvent(v87);
                  return 261LL;
                }
              }
            }
          }
LABEL_43:
          v9 = a5;
        }
        v12 = v100;
LABEL_45:
        if ( v99 && (a2->Flags.Value & 0x10000) == 0 && !v105 )
        {
          v88 = (_QWORD *)WdLogNewEntry5_WdEvent(v41);
          v88[3] = -1071774910LL;
          v88[4] = this;
          v88[5] = a2->hSource;
          v88[6] = a2->Flags.Value;
          v88[7] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v88);
          return 3223192386LL;
        }
        v13 = v108;
        goto LABEL_48;
      }
    }
    else
    {
      if ( !v12 || v12 != *((_QWORD *)a5 + 225) )
      {
        v72 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
        *(_QWORD *)(v72 + 24) = 8690LL;
        WdLogEvent5_WdAssertion(v72);
      }
      p_right = &this[1].right;
      *(struct tagRECT *)((char *)this + 24) = *ADAPTER_DISPLAY::GetContentRect(
                                                  *(DXGADAPTER ***)(v12 + 2280),
                                                  a2->VidPnSourceId);
    }
    *(_QWORD *)&this[2].right = 0LL;
    goto LABEL_8;
  }
  this->top |= 3u;
  *(_QWORD *)&this[3].left = a2->hWindow;
  return 3223191558LL;
}
