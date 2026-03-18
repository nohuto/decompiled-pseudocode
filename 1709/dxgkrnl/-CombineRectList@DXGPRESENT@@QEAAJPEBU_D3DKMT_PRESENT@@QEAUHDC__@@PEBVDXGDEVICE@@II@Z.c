/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C00FC650
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00FCB10 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00077B8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000F5F4 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00F2794 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00FD014 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C01B7FF0 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int top; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned int i; // edi
  unsigned int v14; // eax
  LONG *v15; // r15
  LONG bottom; // r10d
  LONG v17; // r9d
  int v18; // edi
  LONG v19; // r8d
  int v20; // r11d
  int v21; // r9d
  LONG v22; // edx
  int v23; // r10d
  LONG left; // r11d
  LONG v25; // edi
  __int64 VidPnSourceId; // rsi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  LONG v31; // r13d
  LONG v32; // r15d
  int v33; // edx
  LONG v34; // r12d
  unsigned __int16 v35; // ax
  unsigned int v36; // esi
  const struct tagRECT *v37; // r10
  LONG *v38; // r9
  LONG v39; // r8d
  LONG right; // edx
  LONG v41; // ecx
  LONG v42; // eax
  LONG v43; // r8d
  LONG v44; // r10d
  LONG v45; // edx
  LONG v46; // edi
  __int64 v47; // rax
  unsigned int v48; // r14d
  __int64 v49; // r9
  unsigned __int64 bottom_low; // rcx
  LONG *v51; // rax
  LONG v52; // r11d
  LONG v53; // r9d
  LONG v54; // r8d
  LONG v55; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  __int64 v57; // rcx
  __int64 v58; // rdi
  int v59; // eax
  __int64 v60; // r10
  LONG v61; // ecx
  LONG *v62; // r10
  LONG v63; // ecx
  LONG v64; // eax
  __int64 v65; // rax
  void *v67; // rcx
  SIZE_T v68; // rax
  PVOID v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __m128i v75; // xmm1
  __int64 v76; // r15
  const struct _D3DKMT_PRESENT *v77; // r14
  const struct DXGDEVICE *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  DXGADAPTER **v81; // r13
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rsi
  LONG *v85; // r12
  __int64 v86; // rdi
  const struct tagRECT *ContentRect; // rax
  struct tagRECT *v88; // rdi
  _DWORD *v89; // r8
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v91; // [rsp+30h] [rbp-99h]
  struct tagRECT v92; // [rsp+38h] [rbp-91h] BYREF
  LONG v93; // [rsp+48h] [rbp-81h]
  int v94; // [rsp+4Ch] [rbp-7Dh]
  int v95; // [rsp+50h] [rbp-79h]
  int v96; // [rsp+54h] [rbp-75h]
  LONG v97; // [rsp+58h] [rbp-71h]
  LONG v98; // [rsp+5Ch] [rbp-6Dh]
  __int128 v99; // [rsp+60h] [rbp-69h]
  unsigned int v100; // [rsp+70h] [rbp-59h]
  unsigned int v101; // [rsp+74h] [rbp-55h]
  unsigned int v102; // [rsp+78h] [rbp-51h]
  unsigned int v103; // [rsp+80h] [rbp-49h] BYREF
  int v104; // [rsp+84h] [rbp-45h]
  struct tagRECT v105; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v106; // [rsp+98h] [rbp-31h] BYREF
  const struct _D3DKMT_PRESENT *v107; // [rsp+A8h] [rbp-21h]
  const struct DXGDEVICE *v108; // [rsp+B0h] [rbp-19h]
  _DWORD v109[4]; // [rsp+B8h] [rbp-11h] BYREF

  v108 = a4;
  v107 = a2;
  if ( !(unsigned int)DXGPRESENT::ComputeSrcDstRects((DXGPRESENT *)this, a2, a5, a6) )
    goto LABEL_73;
  if ( !this[7].top )
  {
    v71 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v71 + 24) = 9905LL;
    WdLogEvent5_WdAssertion(v71);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v72 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v72 + 24) = 9906LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v9 = 0LL;
  while ( 1 )
  {
    top = this[4].top;
    if ( !top )
      top = 1;
    if ( (unsigned int)v9 >= top )
      break;
    v11 = (unsigned int)v9;
    v9 = (unsigned int)(v9 + 1);
    *(&this[22].left + v11) = 0;
  }
  v12 = (unsigned int)this[7].top * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  if ( v12 > 0xFFFFFFFF )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v73[3] = -1073741675LL;
    v73[4] = this;
    v73[5] = (unsigned int)this[7].top;
    v73[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
    WdLogEvent5_WdError(v73);
    return 3221225621LL;
  }
  if ( !(_DWORD)v12 )
    goto LABEL_73;
  for ( i = 0; ; ++i )
  {
    v14 = this[4].top;
    if ( !v14 )
      v14 = 1;
    if ( i >= v14 )
    {
      bottom = this[9].bottom;
      v17 = this[8].bottom;
      v18 = 0;
      v19 = this[8].top;
      v20 = 0;
      v94 = 0;
      v21 = v17 - v19;
      v95 = 0;
      v101 = 0;
      v100 = 0;
      v22 = this[9].top;
      v23 = bottom - v22;
      if ( v21 == v23 )
      {
        left = this[9].left;
        v25 = this[8].left;
        if ( this[8].right - v25 == this[9].right - left )
        {
          v18 = v25 - left;
          v91 = 0;
          v94 = v18;
          v20 = v19 - v22;
          v95 = v19 - v22;
          goto LABEL_22;
        }
        v18 = v94;
        v20 = v94;
      }
      v91 = 1;
      v101 = ((this[8].right - this[8].left) << 16) / (this[9].right - this[9].left);
      v100 = (v21 << 16) / v23;
LABEL_22:
      v99 = 0LL;
      if ( (v107->Flags.Value & 0x10100) == 0x10100 )
      {
        VidPnSourceId = v107->VidPnSourceId;
        v27 = *(_QWORD *)(*((_QWORD *)v108 + 209) + 2304LL);
        v28 = *(_QWORD *)(v27 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v28 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v28 + 144));
        v29 = *((_QWORD *)v108 + 5);
        v99 = *(_OWORD *)(3760 * VidPnSourceId + *(_QWORD *)(v27 + 112) + 628);
        v30 = (*(__int64 (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(v29 + 96) + 328LL))(a3, &v103);
        v31 = v99;
        v32 = DWORD1(v99);
        v33 = DWORD2(v99);
        v34 = HIDWORD(v99);
        if ( v30 )
        {
          v32 = DWORD1(v99) - v104;
          v31 = v99 - v103;
          v33 = DWORD2(v99) - v103;
          v34 = HIDWORD(v99) - v104;
        }
        v35 = this[26].bottom;
        v18 = v94;
        v20 = v95;
        v98 = v31;
        v93 = v32;
        v96 = v33;
        v97 = v34;
        if ( v35 <= 1u )
        {
LABEL_28:
          v36 = 0;
          v103 = 0;
          if ( this[7].top )
          {
            v37 = this + 9;
            do
            {
              v38 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v36);
              v39 = *v38;
              if ( *v38 > v37->left )
              {
                v106.left = *v38;
              }
              else
              {
                v39 = v37->left;
                v106.left = v37->left;
              }
              right = v38[2];
              if ( right < this[9].right )
              {
                v106.right = v38[2];
              }
              else
              {
                right = this[9].right;
                v106.right = right;
              }
              v41 = v38[1];
              if ( v41 > this[9].top )
              {
                v106.top = v38[1];
              }
              else
              {
                v41 = this[9].top;
                v106.top = v41;
              }
              v42 = v38[3];
              if ( v42 >= this[9].bottom )
                v42 = this[9].bottom;
              v106.bottom = v42;
              if ( v42 > v41 && right > v39 )
              {
                if ( v91 )
                {
                  DXGPRESENT::XformRect(this + 8, v37, &v92, &v106, v101, v100);
                  v43 = v92.left;
                  v45 = v92.right;
                  v44 = v92.top;
                  v46 = v92.bottom;
                }
                else
                {
                  v43 = v18 + v39;
                  v44 = v41 + v20;
                  v45 = v18 + right;
                  v92.left = v43;
                  v46 = v42 + v20;
                  v92.right = v45;
                  v92.bottom = v42 + v20;
                  v92.top = v41 + v20;
                }
                v47 = *(_QWORD *)&this[1].left;
                v48 = 0;
                v102 = 0;
                v49 = v47 + 32;
                *(_QWORD *)&v99 = v47 + 32;
                if ( *(_DWORD *)(v47 + 8) )
                {
                  while ( 1 )
                  {
                    bottom_low = LOWORD(this[26].bottom);
                    if ( (unsigned __int16)bottom_low > 1u )
                    {
                      bottom_low = (unsigned __int16)bottom_low;
                      v75 = *(__m128i *)(v49 + 16LL * v48);
                      v109[0] = (unsigned __int16)bottom_low * _mm_cvtsi128_si32(v75);
                      v109[1] = (unsigned __int16)bottom_low * v75.m128i_i32[1];
                      v109[2] = (unsigned __int16)bottom_low * v75.m128i_i32[2];
                      v109[3] = (unsigned __int16)bottom_low * v75.m128i_i32[3];
                      v51 = v109;
                    }
                    else
                    {
                      v51 = (LONG *)(v49 + 16LL * v48);
                    }
                    v52 = *v51;
                    if ( *v51 > v43 )
                    {
                      v105.left = *v51;
                    }
                    else
                    {
                      v52 = v43;
                      v105.left = v43;
                    }
                    v53 = v51[2];
                    if ( v53 < v45 )
                    {
                      v105.right = v51[2];
                    }
                    else
                    {
                      v53 = v45;
                      v105.right = v45;
                    }
                    if ( v52 >= v53 )
                      goto LABEL_69;
                    v54 = v51[1];
                    if ( v54 > v44 )
                    {
                      v105.top = v51[1];
                    }
                    else
                    {
                      v54 = v44;
                      v105.top = v44;
                    }
                    v55 = v51[3];
                    if ( v55 >= v46 )
                      v55 = v46;
                    v105.bottom = v55;
                    if ( v54 < v55 )
                    {
                      Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v107->Flags.Value;
                      if ( (*(_DWORD *)&Value & 0x10000) == 0 )
                      {
                        v76 = 0LL;
                        if ( this[4].top )
                        {
                          v77 = v107;
                          do
                          {
                            v78 = v108;
                            v79 = *((_QWORD *)v108 + 209);
                            if ( !v79 || !*(_QWORD *)(v79 + 2304) )
                            {
                              v80 = WdLogNewEntry5_WdAssertion(bottom_low);
                              *(_QWORD *)(v80 + 24) = 10064LL;
                              WdLogEvent5_WdAssertion(v80);
                            }
                            v81 = *(DXGADAPTER ***)(*((_QWORD *)v78 + 209) + 2304LL);
                            if ( !DXGADAPTER::IsCoreResourceSharedOwner(v81[2]) )
                            {
                              v83 = WdLogNewEntry5_WdAssertion(v82);
                              *(_QWORD *)(v83 + 24) = 10067LL;
                              WdLogEvent5_WdAssertion(v83);
                            }
                            v84 = *((_QWORD *)&this[14].left + v76);
                            v85 = &this->left + v76;
                            v86 = (unsigned int)v85[88];
                            ContentRect = ADAPTER_DISPLAY::GetContentRect(v81, v76);
                            v88 = (struct tagRECT *)(v84 + 16 * v86);
                            if ( DXGPRESENT::IntersectRect(v88, &v105, ContentRect) )
                            {
                              bottom_low = v77->Flags.Value;
                              if ( (bottom_low & 0x100) == 0 || (_DWORD)v76 == v77->VidPnSourceId )
                              {
                                v88->top -= v89[1];
                                v88->bottom -= v89[1];
                                v88->left -= *v89;
                                v88->right -= *v89;
                                CddInterface = ADAPTER_DISPLAY::GetCddInterface(v81, v76);
                                bottom_low = (unsigned __int64)CddInterface;
                                if ( CddInterface )
                                  (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                                    *(_QWORD *)CddInterface,
                                    v88);
                                ++v85[88];
                                this->top &= ~2u;
                              }
                            }
                            v76 = (unsigned int)(v76 + 1);
                          }
                          while ( (unsigned int)v76 < this[4].top );
                          v48 = v102;
                          v46 = v92.bottom;
                          v34 = v97;
                          v31 = v98;
                        }
                        v32 = v93;
                        goto LABEL_68;
                      }
                      v57 = (unsigned int)this[22].left;
                      v58 = *(_QWORD *)&this[14].left;
                      if ( (*(_WORD *)&Value & 0x100) != 0 )
                      {
                        v59 = v96;
                        v60 = 16LL * (unsigned int)v57;
                        v61 = v31;
                        v62 = (LONG *)(v58 + v60);
                        if ( v52 > v31 )
                          v61 = v52;
                        *v62 = v61;
                        if ( v53 < v59 )
                          v59 = v53;
                        v62[2] = v59;
                        if ( v61 >= v59 )
                          goto LABEL_95;
                        v63 = v32;
                        v64 = v34;
                        if ( v54 > v32 )
                          v63 = v54;
                        v62[1] = v63;
                        if ( v55 < v34 )
                          v64 = v55;
                        v62[3] = v64;
                        if ( v63 >= v64 )
                        {
LABEL_95:
                          v46 = v92.bottom;
                          goto LABEL_68;
                        }
                      }
                      else
                      {
                        *(struct tagRECT *)(v58 + 16 * v57) = v105;
                      }
                      ++this[22].left;
                      this->top &= ~2u;
                      v46 = v92.bottom;
                    }
LABEL_68:
                    v45 = v92.right;
                    v43 = v92.left;
LABEL_69:
                    v65 = *(_QWORD *)&this[1].left;
                    ++v48;
                    v44 = v92.top;
                    v49 = v99;
                    v102 = v48;
                    if ( v48 >= *(_DWORD *)(v65 + 8) )
                    {
                      v36 = v103;
                      break;
                    }
                  }
                }
                v37 = this + 9;
              }
              v18 = v94;
              ++v36;
              v20 = v95;
              v103 = v36;
            }
            while ( v36 < this[7].top );
          }
LABEL_73:
          this->top &= 0xFFFFFEF7;
          return 0LL;
        }
        v31 *= v35;
        v32 *= v35;
        v34 *= v35;
        v96 = v35 * v33;
      }
      else
      {
        v34 = HIDWORD(v99);
        v32 = DWORD1(v99);
        v31 = v99;
        v96 = DWORD2(v99);
      }
      v98 = v31;
      v93 = v32;
      v97 = v34;
      goto LABEL_28;
    }
    v15 = &this->left + i;
    if ( v15[40] >= (unsigned int)v12 )
      continue;
    v67 = (void *)*((_QWORD *)&this[14].left + i);
    if ( v67 )
      ExFreePoolWithTag(v67, 0);
    v68 = 16LL * (unsigned int)v12;
    if ( !is_mul_ok((unsigned int)v12, 0x10uLL) )
      v68 = -1LL;
    v69 = operator new(v68, 0x4B677844u, PagedPool);
    *((_QWORD *)&this[14].left + i) = v69;
    if ( !v69 )
      break;
    v15[40] = v12;
  }
  *(&this[10].left + i) = 0;
  v74 = WdLogNewEntry5_WdLowResource(v70);
  *(_QWORD *)(v74 + 24) = this;
  *(_QWORD *)(v74 + 32) = (unsigned int)v12;
  WdLogEvent5_WdLowResource(v74);
  return 3221225495LL;
}
