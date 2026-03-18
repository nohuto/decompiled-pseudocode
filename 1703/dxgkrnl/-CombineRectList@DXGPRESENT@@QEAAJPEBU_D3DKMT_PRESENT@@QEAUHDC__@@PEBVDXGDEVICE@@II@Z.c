/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0101D80
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0102280 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000B5F8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0020820 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C0102790 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C019F2FC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C01A0F90 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        const struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        LONG a5,
        LONG a6)
{
  const struct tagRECT *v7; // r12
  RECT *p_SrcRect; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v11; // eax
  RECT *p_DstRect; // r9
  __int64 right; // rcx
  LONG bottom; // eax
  __int64 v15; // rcx
  unsigned int top; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned int i; // edi
  unsigned int v20; // eax
  LONG *v21; // r14
  int v22; // r14d
  LONG v23; // r11d
  int v24; // r15d
  LONG v25; // edi
  int v26; // r10d
  int v27; // r9d
  LONG left; // edx
  int v29; // r8d
  __int64 VidPnSourceId; // rsi
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // r13d
  int v35; // esi
  int v36; // r12d
  unsigned int v37; // edi
  const struct tagRECT *v38; // r10
  LONG *v39; // r9
  LONG v40; // r8d
  LONG v41; // edx
  LONG v42; // ecx
  LONG v43; // eax
  LONG v44; // r8d
  LONG v45; // r10d
  int v46; // edx
  unsigned __int64 v47; // rcx
  __int64 v48; // r9
  unsigned int v49; // r14d
  __int64 v50; // rax
  int v51; // r11d
  __int64 v52; // r9
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdi
  int v58; // eax
  __int64 v59; // r10
  int v60; // ecx
  int *v61; // r10
  int v62; // ecx
  int v63; // eax
  __int64 v64; // rax
  char *v66; // r15
  void *v67; // rcx
  SIZE_T v68; // rax
  PVOID v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  DXGADAPTER **v78; // r13
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rsi
  LONG *v85; // r12
  __int64 v86; // rdi
  const struct tagRECT *ContentRect; // rax
  struct tagRECT *v88; // rdi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  struct tagRECT v90; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v91; // [rsp+40h] [rbp-49h]
  unsigned int v92; // [rsp+44h] [rbp-45h]
  int v93; // [rsp+48h] [rbp-41h]
  int v94; // [rsp+4Ch] [rbp-3Dh]
  int v95; // [rsp+50h] [rbp-39h]
  int v96; // [rsp+54h] [rbp-35h]
  unsigned int v97; // [rsp+58h] [rbp-31h]
  int v98; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v99; // [rsp+60h] [rbp-29h] BYREF
  int v100; // [rsp+64h] [rbp-25h]
  int v101; // [rsp+68h] [rbp-21h]
  __int128 v102; // [rsp+70h] [rbp-19h]
  struct tagRECT v103; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v104; // [rsp+90h] [rbp+7h] BYREF
  char v105; // [rsp+E0h] [rbp+57h]

  v7 = this + 8;
  p_SrcRect = 0LL;
  this[8].top = 0;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  this[8].left = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0
      && !DXGPRESENT::IntersectRect((struct tagRECT *)&this[8], &a2->DstRect, this + 8) )
    {
      goto LABEL_76;
    }
    this[9] = *v7;
  }
  else
  {
    this[9].right = a5;
    this[9].bottom = a6;
    *(_QWORD *)&this[9].left = 0LL;
    v11 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&v11 & 0x40) != 0 )
      p_DstRect = &a2->DstRect;
    else
      p_DstRect = 0LL;
    if ( *(_BYTE *)&v11 < 0 )
      p_SrcRect = &a2->SrcRect;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          (struct tagRECT *)&this[9],
                          (struct tagRECT *)&this[8],
                          p_SrcRect,
                          p_DstRect) )
      goto LABEL_76;
  }
  right = (unsigned int)this[1].right;
  bottom = this[1].bottom;
  v7->left += right;
  this[8].top += bottom;
  this[8].right += right;
  this[8].bottom += bottom;
  if ( !this[7].top )
  {
    v71 = WdLogNewEntry5_WdAssertion(right, a2, 0LL, a4);
    *(_QWORD *)(v71 + 24) = 9126LL;
    WdLogEvent5_WdAssertion(v71);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v72 = WdLogNewEntry5_WdAssertion(right, a2, 0LL, a4);
    *(_QWORD *)(v72 + 24) = 9127LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v15 = 0LL;
  while ( 1 )
  {
    top = this[4].top;
    if ( !top )
      top = 1;
    if ( (unsigned int)v15 >= top )
      break;
    v17 = (unsigned int)v15;
    v15 = (unsigned int)(v15 + 1);
    *(&this[22].left + v17) = 0;
  }
  v18 = (unsigned int)this[7].top * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  if ( v18 > 0xFFFFFFFF )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v15, a2);
    v73[3] = -1073741675LL;
    v73[4] = this;
    v73[5] = (unsigned int)this[7].top;
    v73[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
    WdLogEvent5_WdError(v73);
    return 3221225621LL;
  }
  if ( !(_DWORD)v18 )
  {
LABEL_76:
    this->top &= ~8u;
    return 0LL;
  }
  for ( i = 0; ; ++i )
  {
    v20 = this[4].top;
    if ( !v20 )
      v20 = 1;
    if ( i >= v20 )
    {
      v22 = 0;
      v23 = this[9].top;
      v24 = 0;
      v25 = this[8].top;
      v26 = this[9].bottom - v23;
      v27 = this[8].bottom - v25;
      v101 = 0;
      v98 = 0;
      v92 = 0;
      v91 = 0;
      if ( v27 == v26 && (left = this[9].left, v29 = v7->left, this[8].right - v7->left == this[9].right - left) )
      {
        v105 = 0;
        v22 = v29 - left;
        v24 = v25 - v23;
        v101 = v29 - left;
        v98 = v25 - v23;
      }
      else
      {
        v105 = 1;
        v92 = ((this[8].right - v7->left) << 16) / (this[9].right - this[9].left);
        v91 = (v27 << 16) / v26;
      }
      v102 = 0LL;
      if ( (a2->Flags.Value & 0x10100) != 0x10100 )
        goto LABEL_90;
      VidPnSourceId = a2->VidPnSourceId;
      v31 = *(_QWORD *)(*((_QWORD *)a4 + 225) + 2280LL);
      v32 = *(_QWORD *)(v31 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v32 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v32 + 144));
      v33 = *((_QWORD *)a4 + 5);
      v102 = *(_OWORD *)(3208 * VidPnSourceId + *(_QWORD *)(v31 + 112) + 628);
      if ( (*(unsigned int (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(v33 + 72) + 328LL))(a3, &v99) )
      {
        v34 = v102 - v99;
        v35 = DWORD1(v102) - v100;
        v36 = HIDWORD(v102) - v100;
        v93 = DWORD2(v102) - v99;
      }
      else
      {
LABEL_90:
        v36 = HIDWORD(v102);
        v35 = DWORD1(v102);
        v34 = v102;
        v93 = DWORD2(v102);
      }
      v37 = 0;
      v96 = v34;
      v94 = v35;
      v95 = v36;
      v99 = 0;
      if ( this[7].top )
      {
        v38 = this + 9;
        while ( 1 )
        {
          v39 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v37);
          v40 = *v39;
          if ( *v39 > v38->left )
          {
            v104.left = *v39;
          }
          else
          {
            v40 = v38->left;
            v104.left = v38->left;
          }
          v41 = v39[2];
          if ( v41 < this[9].right )
          {
            v104.right = v39[2];
          }
          else
          {
            v41 = this[9].right;
            v104.right = v41;
          }
          v42 = v39[1];
          if ( v42 > this[9].top )
          {
            v104.top = v39[1];
          }
          else
          {
            v42 = this[9].top;
            v104.top = v42;
          }
          v43 = v39[3];
          if ( v43 >= this[9].bottom )
            v43 = this[9].bottom;
          v104.bottom = v43;
          if ( v43 > v42 && v41 > v40 )
          {
            if ( v105 )
            {
              DXGPRESENT::XformRect(this + 8, v38, &v90, &v104, v92, v91);
              v46 = v90.right;
              v44 = v90.left;
              v47 = (unsigned int)v90.top;
              v45 = v90.bottom;
            }
            else
            {
              v44 = v22 + v40;
              v45 = v43 + v24;
              v46 = v22 + v41;
              v90.left = v44;
              v47 = (unsigned int)(v24 + v42);
              v90.right = v46;
              v90.top = v47;
              v90.bottom = v43 + v24;
            }
            v48 = *(_QWORD *)&this[1].left;
            v49 = 0;
            *(_QWORD *)&v102 = v48;
            v97 = 0;
            if ( *(_DWORD *)(v48 + 8) )
            {
              while ( 1 )
              {
                v50 = v48 + 16 * (v49 + 2LL);
                v51 = *(_DWORD *)v50;
                if ( *(_DWORD *)v50 > v44 )
                {
                  v103.left = *(_DWORD *)v50;
                }
                else
                {
                  v51 = v44;
                  v103.left = v44;
                }
                v52 = *(unsigned int *)(v50 + 8);
                if ( (int)v52 < v46 )
                {
                  v103.right = *(_DWORD *)(v50 + 8);
                }
                else
                {
                  v52 = (unsigned int)v46;
                  v103.right = v46;
                }
                if ( v51 >= (int)v52 )
                  goto LABEL_72;
                v53 = *(unsigned int *)(v50 + 4);
                if ( (int)v53 > (int)v47 )
                {
                  v103.top = *(_DWORD *)(v50 + 4);
                }
                else
                {
                  v53 = (unsigned int)v47;
                  v103.top = v47;
                }
                v54 = *(unsigned int *)(v50 + 12);
                if ( (int)v54 >= v45 )
                  v54 = (unsigned int)v45;
                v103.bottom = v54;
                if ( (int)v53 < (int)v54 )
                  break;
LABEL_71:
                v44 = v90.left;
                v46 = v90.right;
LABEL_72:
                v64 = *(_QWORD *)&this[1].left;
                ++v49;
                v45 = v90.bottom;
                v48 = v102;
                v97 = v49;
                if ( v49 >= *(_DWORD *)(v64 + 8) )
                {
                  v24 = v98;
                  v37 = v99;
                  goto LABEL_74;
                }
              }
              v55 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
              if ( (*(_DWORD *)&v55 & 0x10000) != 0 )
              {
                v56 = (unsigned int)this[22].left;
                v57 = *(_QWORD *)&this[14].left;
                if ( (*(_WORD *)&v55 & 0x100) == 0 )
                {
                  *(struct tagRECT *)(v57 + 16 * v56) = v103;
                  goto LABEL_69;
                }
                v58 = v93;
                v59 = 16LL * (unsigned int)v56;
                v60 = v34;
                v61 = (int *)(v57 + v59);
                if ( v51 > v34 )
                  v60 = v51;
                *v61 = v60;
                if ( (int)v52 < v58 )
                  v58 = v52;
                v61[2] = v58;
                if ( v60 < v58 )
                {
                  v62 = v35;
                  v63 = v36;
                  if ( (int)v53 > v35 )
                    v62 = v53;
                  v61[1] = v62;
                  if ( (int)v54 < v36 )
                    v63 = v54;
                  v61[3] = v63;
                  if ( v62 < v63 )
                  {
LABEL_69:
                    ++this[22].left;
                    this->top &= ~2u;
                  }
                }
              }
              else
              {
                v75 = 0LL;
                if ( !this[4].top )
                  goto LABEL_71;
                do
                {
                  v76 = *((_QWORD *)a4 + 225);
                  if ( !v76 || !*(_QWORD *)(v76 + 2280) )
                  {
                    v77 = WdLogNewEntry5_WdAssertion(v47, v54, v53, v52);
                    *(_QWORD *)(v77 + 24) = 9259LL;
                    WdLogEvent5_WdAssertion(v77);
                  }
                  v78 = *(DXGADAPTER ***)(*((_QWORD *)a4 + 225) + 2280LL);
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v78[2]) )
                  {
                    v83 = WdLogNewEntry5_WdAssertion(v80, v79, v81, v82);
                    *(_QWORD *)(v83 + 24) = 9262LL;
                    WdLogEvent5_WdAssertion(v83);
                  }
                  v84 = *((_QWORD *)&this[14].left + v75);
                  v85 = &this->left + v75;
                  v86 = (unsigned int)v85[88];
                  ContentRect = ADAPTER_DISPLAY::GetContentRect(v78, v75);
                  v88 = (struct tagRECT *)(v84 + 16 * v86);
                  if ( DXGPRESENT::IntersectRect(v88, &v103, ContentRect)
                    && ((a2->Flags.Value & 0x100) == 0 || (_DWORD)v75 == a2->VidPnSourceId) )
                  {
                    v88->top -= *(_DWORD *)(v53 + 4);
                    v88->bottom -= *(_DWORD *)(v53 + 4);
                    v88->left -= *(_DWORD *)v53;
                    v88->right -= *(_DWORD *)v53;
                    CddInterface = ADAPTER_DISPLAY::GetCddInterface(v78, v75);
                    v47 = (unsigned __int64)CddInterface;
                    if ( CddInterface )
                      (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                        *(_QWORD *)CddInterface,
                        v88);
                    ++v85[88];
                    this->top &= ~2u;
                  }
                  v75 = (unsigned int)(v75 + 1);
                }
                while ( (unsigned int)v75 < this[4].top );
                v49 = v97;
                v35 = v94;
                v36 = v95;
                v34 = v96;
              }
              v47 = (unsigned int)v90.top;
              goto LABEL_71;
            }
LABEL_74:
            v38 = this + 9;
          }
          v22 = v101;
          v99 = ++v37;
          if ( v37 >= this[7].top )
            goto LABEL_76;
        }
      }
      goto LABEL_76;
    }
    v21 = &this->left + i;
    if ( v21[40] >= (unsigned int)v18 )
      continue;
    v66 = (char *)this + 8 * i;
    v67 = (void *)*((_QWORD *)v66 + 28);
    if ( v67 )
      ExFreePoolWithTag(v67, 0);
    v68 = 16LL * (unsigned int)v18;
    if ( !is_mul_ok((unsigned int)v18, 0x10uLL) )
      v68 = -1LL;
    v69 = operator new(v68, 0x4B677844u, PagedPool);
    *((_QWORD *)v66 + 28) = v69;
    if ( !v69 )
      break;
    v21[40] = v18;
  }
  *(&this[10].left + i) = 0;
  v74 = WdLogNewEntry5_WdLowResource(v70);
  *(_QWORD *)(v74 + 32) = (unsigned int)v18;
  *(_QWORD *)(v74 + 24) = this;
  WdLogEvent5_WdLowResource(v74);
  return 3221225495LL;
}
