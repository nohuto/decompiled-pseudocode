/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0107C60
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0108110 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0019BCC (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0027E54 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01085B4 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C01B1DA8 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C01B4CA0 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int top; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned int i; // edi
  unsigned int v15; // eax
  LONG bottom; // r9d
  int v17; // esi
  LONG v18; // r10d
  int v19; // r14d
  LONG left; // r11d
  int v21; // r8d
  LONG v22; // edx
  int v23; // r9d
  LONG v24; // edi
  char v25; // r15
  UINT v26; // ecx
  __int64 VidPnSourceId; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // edx
  LONG v32; // r13d
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  unsigned __int16 v35; // ax
  unsigned int v36; // r11d
  const struct tagRECT *v37; // r10
  LONG *v38; // r9
  LONG v39; // r8d
  LONG right; // edx
  LONG v41; // ecx
  LONG v42; // eax
  LONG v43; // r8d
  LONG v44; // edi
  LONG v45; // r15d
  LONG v46; // r12d
  __int64 v47; // rax
  unsigned int v48; // r14d
  __int64 v49; // rcx
  unsigned __int16 v50; // dx
  __m128i *v51; // rcx
  LONG v52; // r10d
  __int32 v53; // r9d
  LONG v54; // r8d
  LONG v55; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edi
  struct tagRECT *v57; // r11
  LONG v58; // ecx
  LONG v59; // eax
  LONG v60; // eax
  LONG v61; // ecx
  __int64 v62; // rax
  SIZE_T v64; // rax
  PVOID v65; // rax
  LONG *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm1
  __int64 v72; // r15
  const struct _D3DKMT_PRESENT *v73; // r14
  const struct DXGDEVICE *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  DXGADAPTER **v77; // r13
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rsi
  LONG *v81; // r12
  __int64 v82; // rdi
  const struct tagRECT *ContentRect; // rax
  struct tagRECT *v84; // rdi
  _DWORD *v85; // r8
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v87; // [rsp+30h] [rbp-99h]
  struct tagRECT v88; // [rsp+38h] [rbp-91h] BYREF
  int v89; // [rsp+48h] [rbp-81h]
  unsigned __int64 v90; // [rsp+4Ch] [rbp-7Dh]
  LONG v91; // [rsp+54h] [rbp-75h]
  int v92; // [rsp+58h] [rbp-71h]
  int v93; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v94; // [rsp+60h] [rbp-69h]
  __int128 v95; // [rsp+68h] [rbp-61h]
  unsigned int v96; // [rsp+78h] [rbp-51h]
  unsigned int v97; // [rsp+7Ch] [rbp-4Dh]
  unsigned int v98; // [rsp+80h] [rbp-49h] BYREF
  int v99; // [rsp+84h] [rbp-45h]
  struct tagRECT v100; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v101; // [rsp+98h] [rbp-31h] BYREF
  const struct DXGDEVICE *v102; // [rsp+A8h] [rbp-21h]
  const struct _D3DKMT_PRESENT *v103; // [rsp+B0h] [rbp-19h]
  _DWORD v104[4]; // [rsp+B8h] [rbp-11h] BYREF

  v102 = a4;
  v103 = a2;
  if ( !(unsigned int)DXGPRESENT::ComputeSrcDstRects((DXGPRESENT *)this, a2, a5, a6) )
    goto LABEL_76;
  if ( !this[7].top )
  {
    v67 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v67 + 24) = 10059LL;
    WdLogEvent5_WdAssertion(v67);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v68 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v68 + 24) = 10060LL;
    WdLogEvent5_WdAssertion(v68);
  }
  v10 = 0LL;
  while ( 1 )
  {
    top = this[4].top;
    if ( !top )
      top = 1;
    if ( (unsigned int)v10 >= top )
      break;
    v12 = (unsigned int)v10;
    v10 = (unsigned int)(v10 + 1);
    *(&this[22].left + v12) = 0;
  }
  v13 = (unsigned int)this[7].top * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  if ( v13 > 0xFFFFFFFF )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v69[3] = -1073741675LL;
    v69[4] = this;
    v69[5] = (unsigned int)this[7].top;
    v69[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
    WdLogEvent5_WdError(v69);
    return 3221225621LL;
  }
  if ( !(_DWORD)v13 )
    goto LABEL_76;
  for ( i = 0; ; ++i )
  {
    v15 = this[4].top;
    if ( !v15 )
      v15 = 1;
    if ( i >= v15 )
    {
      bottom = this[9].bottom;
      v17 = 0;
      v18 = this[8].top;
      v19 = 0;
      left = this[8].left;
      v21 = this[8].bottom - v18;
      v92 = 0;
      v93 = 0;
      v97 = 0;
      v96 = 0;
      v22 = this[9].top;
      v23 = bottom - v22;
      if ( v21 == v23 && (v24 = this[9].left, this[8].right - left == this[9].right - v24) )
      {
        v25 = 0;
      }
      else
      {
        v24 = this[9].left;
        v25 = 1;
      }
      v87 = v25;
      if ( v25 )
      {
        v97 = ((this[8].right - left) << 16) / (this[9].right - v24);
        v96 = (v21 << 16) / v23;
      }
      else
      {
        v17 = left - v24;
        v19 = v18 - v22;
        v92 = left - v24;
        v93 = v18 - v22;
      }
      v26 = a2->Flags.Value & 0x10100;
      v95 = 0LL;
      if ( v26 == 65792 )
      {
        VidPnSourceId = a2->VidPnSourceId;
        v28 = *(_QWORD *)(*((_QWORD *)v102 + 211) + 2456LL);
        v29 = *(_QWORD *)(v28 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 144));
        v95 = *(_OWORD *)(3760 * VidPnSourceId + *(_QWORD *)(v28 + 112) + 628);
        v30 = (*(__int64 (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(*((_QWORD *)v102 + 5) + 104LL) + 320LL))(
                a3,
                &v98);
        v31 = v95;
        v32 = DWORD1(v95);
        v33 = DWORD2(v95);
        v34 = HIDWORD(v95);
        if ( v30 )
        {
          v32 = DWORD1(v95) - v99;
          v31 = v95 - v98;
          v33 = DWORD2(v95) - v98;
          v34 = HIDWORD(v95) - v99;
        }
        v35 = this[26].bottom;
        v17 = v92;
        v89 = v31;
        v91 = v32;
        v90 = __PAIR64__(v34, v33);
        if ( v35 <= 1u )
        {
LABEL_30:
          v36 = 0;
          v94 = 0;
          if ( this[7].top )
          {
            v37 = this + 9;
            do
            {
              v38 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v36);
              v39 = *v38;
              if ( *v38 > v37->left )
              {
                v101.left = *v38;
              }
              else
              {
                v39 = v37->left;
                v101.left = v37->left;
              }
              right = v38[2];
              if ( right < this[9].right )
              {
                v101.right = v38[2];
              }
              else
              {
                right = this[9].right;
                v101.right = right;
              }
              v41 = v38[1];
              if ( v41 > this[9].top )
              {
                v101.top = v38[1];
              }
              else
              {
                v41 = this[9].top;
                v101.top = v41;
              }
              v42 = v38[3];
              if ( v42 >= this[9].bottom )
                v42 = this[9].bottom;
              v101.bottom = v42;
              if ( v42 > v41 && right > v39 )
              {
                if ( v25 )
                {
                  DXGPRESENT::XformRect(this + 8, v37, &v88, &v101, v97, v96);
                  v36 = v94;
                  v37 = this + 9;
                  v43 = v88.left;
                  v44 = v88.right;
                  v45 = v88.top;
                  v46 = v88.bottom;
                }
                else
                {
                  v43 = v17 + v39;
                  v44 = right + v17;
                  v45 = v41 + v19;
                  v88.left = v43;
                  v46 = v42 + v19;
                  v88.right = right + v17;
                  v88.top = v41 + v19;
                  v88.bottom = v42 + v19;
                }
                v47 = *(_QWORD *)&this[1].left;
                v48 = 0;
                v98 = 0;
                v49 = v47 + 32;
                *(_QWORD *)&v95 = v47 + 32;
                if ( *(_DWORD *)(v47 + 8) )
                {
                  while ( 1 )
                  {
                    v50 = this[26].bottom;
                    v51 = (__m128i *)(16LL * v48 + v49);
                    if ( v50 > 1u )
                    {
                      v71 = *v51;
                      v52 = v50 * _mm_cvtsi128_si32(*v51);
                      v104[1] = v50 * HIDWORD(v51->m128i_i64[0]);
                      v104[0] = v52;
                      v104[2] = v50 * v71.m128i_i32[2];
                      v51 = (__m128i *)v104;
                      v104[3] = v50 * v71.m128i_i32[3];
                    }
                    else
                    {
                      v52 = v51->m128i_i32[0];
                    }
                    if ( v52 > v43 )
                    {
                      v100.left = v52;
                    }
                    else
                    {
                      v52 = v43;
                      v100.left = v43;
                    }
                    v53 = v51->m128i_i32[2];
                    if ( v53 < v44 )
                    {
                      v100.right = v51->m128i_i32[2];
                    }
                    else
                    {
                      v53 = v44;
                      v100.right = v44;
                    }
                    if ( v52 >= v53 )
                      goto LABEL_72;
                    v54 = v51->m128i_i32[1];
                    if ( v54 > v45 )
                    {
                      v100.top = v51->m128i_i32[1];
                    }
                    else
                    {
                      v54 = v45;
                      v100.top = v45;
                    }
                    v55 = v51->m128i_i32[3];
                    if ( v55 >= v46 )
                      v55 = v46;
                    v100.bottom = v55;
                    if ( v54 < v55 )
                      break;
LABEL_71:
                    v43 = v88.left;
LABEL_72:
                    v62 = *(_QWORD *)&this[1].left;
                    ++v48;
                    v49 = v95;
                    v98 = v48;
                    if ( v48 >= *(_DWORD *)(v62 + 8) )
                    {
                      v17 = v92;
                      v37 = this + 9;
                      v36 = v94;
                      goto LABEL_74;
                    }
                  }
                  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v103->Flags.Value;
                  if ( (*(_DWORD *)&Value & 0x10000) != 0 )
                  {
                    v57 = (struct tagRECT *)(*(_QWORD *)&this[14].left + 16LL * (unsigned int)this[22].left);
                    if ( (*(_WORD *)&Value & 0x100) == 0 )
                    {
                      *v57 = v100;
                      goto LABEL_69;
                    }
                    v58 = v89;
                    v59 = v90;
                    if ( v52 > v89 )
                      v58 = v52;
                    v57->left = v58;
                    if ( v53 < v59 )
                      v59 = v53;
                    v57->right = v59;
                    if ( v58 < v59 )
                    {
                      v60 = HIDWORD(v90);
                      v61 = v32;
                      if ( v54 > v32 )
                        v61 = v54;
                      v57->top = v61;
                      if ( v55 < v60 )
                        v60 = v55;
                      v57->bottom = v60;
                      if ( v61 < v60 )
                      {
LABEL_69:
                        ++this[22].left;
                        this->top &= ~2u;
                      }
                    }
                  }
                  else
                  {
                    v72 = 0LL;
                    if ( this[4].top )
                    {
                      v73 = v103;
                      do
                      {
                        v74 = v102;
                        v75 = *((_QWORD *)v102 + 211);
                        if ( !v75 || !*(_QWORD *)(v75 + 2456) )
                        {
                          v76 = WdLogNewEntry5_WdAssertion(v51);
                          *(_QWORD *)(v76 + 24) = 10218LL;
                          WdLogEvent5_WdAssertion(v76);
                          v75 = *((_QWORD *)v74 + 211);
                        }
                        v77 = *(DXGADAPTER ***)(v75 + 2456);
                        if ( !DXGADAPTER::IsCoreResourceSharedOwner(v77[2]) )
                        {
                          v79 = WdLogNewEntry5_WdAssertion(v78);
                          *(_QWORD *)(v79 + 24) = 10221LL;
                          WdLogEvent5_WdAssertion(v79);
                        }
                        v80 = *((_QWORD *)&this[14].left + v72);
                        v81 = &this->left + v72;
                        v82 = (unsigned int)v81[88];
                        ContentRect = ADAPTER_DISPLAY::GetContentRect(v77, v72);
                        v84 = (struct tagRECT *)(v80 + 16 * v82);
                        if ( DXGPRESENT::IntersectRect(v84, &v100, ContentRect)
                          && ((v73->Flags.Value & 0x100) == 0 || (_DWORD)v72 == v73->VidPnSourceId) )
                        {
                          v84->top -= v85[1];
                          v84->bottom -= v85[1];
                          v84->left -= *v85;
                          v84->right -= *v85;
                          CddInterface = ADAPTER_DISPLAY::GetCddInterface(v77, v72);
                          v51 = (__m128i *)CddInterface;
                          if ( CddInterface )
                            (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                              *(_QWORD *)CddInterface,
                              v84);
                          ++v81[88];
                          this->top &= ~2u;
                        }
                        v72 = (unsigned int)(v72 + 1);
                      }
                      while ( (unsigned int)v72 < this[4].top );
                      v48 = v98;
                      v46 = v88.bottom;
                      v32 = v91;
                    }
                    v45 = v88.top;
                  }
                  v44 = v88.right;
                  goto LABEL_71;
                }
LABEL_74:
                v25 = v87;
                v19 = v93;
              }
              v94 = ++v36;
            }
            while ( v36 < this[7].top );
          }
LABEL_76:
          this->top &= 0xFFFFFEF7;
          return 0LL;
        }
        v32 *= v35;
        v89 = v35 * v31;
        LODWORD(v90) = v35 * v33;
        HIDWORD(v90) = v35 * v34;
      }
      else
      {
        v32 = DWORD1(v95);
        v89 = v95;
        v90 = *((_QWORD *)&v95 + 1);
      }
      v91 = v32;
      goto LABEL_30;
    }
    if ( *(&this[10].left + i) >= (unsigned int)v13 )
      continue;
    operator delete[](*((void **)&this[14].left + i));
    v64 = 16LL * (unsigned int)v13;
    if ( !is_mul_ok((unsigned int)v13, 0x10uLL) )
      v64 = -1LL;
    v65 = operator new[](v64, 0x4B677844u, PagedPool);
    *((_QWORD *)&this[14].left + i) = v65;
    v66 = &this->left + i;
    if ( !v65 )
      break;
    v66[40] = v13;
  }
  v66[40] = 0;
  v70 = WdLogNewEntry5_WdLowResource(v66);
  *(_QWORD *)(v70 + 24) = this;
  *(_QWORD *)(v70 + 32) = (unsigned int)v13;
  WdLogEvent5_WdLowResource(v70);
  return 3221225495LL;
}
