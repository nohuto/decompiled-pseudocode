/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021270
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021890 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180023DD0 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BFA0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(__int32 **this)
{
  unsigned int v2; // r13d
  int v3; // edi
  unsigned __int64 v4; // r15
  volatile signed __int32 *v5; // rbx
  _DWORD *v6; // r14
  __int32 *v7; // rcx
  const RECT *p_si128; // r12
  __int64 v9; // rdi
  void *(*v10)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  volatile signed __int32 *v11; // rax
  int v12; // eax
  int v13; // ebp
  unsigned __int64 v14; // rdx
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v16; // rax
  void *v17; // r8
  int v18; // edx
  unsigned int v19; // ebp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  int v25; // eax
  const struct CAtlasedImage *v26; // rdx
  bool (__fastcall *v27)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *); // rax
  int v28; // eax
  __int64 (__fastcall *v29)(CVisual *__hidden, struct CResource *); // rax
  void (__fastcall *v30)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  CVisual *v32; // rcx
  void (__fastcall *v33)(CVisual *__hidden, unsigned int); // rax
  int v34; // [rsp+30h] [rbp-58h]
  _DWORD *v35; // [rsp+38h] [rbp-50h]
  volatile signed __int32 *v36; // [rsp+40h] [rbp-48h]
  __m128i si128; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = *((unsigned int *)this + 66);
  v5 = 0LL;
  v6 = 0LL;
  if ( !(_DWORD)v4 )
  {
LABEL_34:
    v29 = (__int64 (__fastcall *)(CVisual *__hidden, struct CResource *))*((_QWORD *)*this + 5);
    if ( v29 == CVisual::SetContent )
      CVisual::SetContent((CVisual *)this, (struct CResource *)v5);
    else
      v29((CVisual *)this, (struct CResource *)v5);
    goto LABEL_36;
  }
  v7 = this[34];
  p_si128 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v7 )
  {
    p_si128 = (const RECT *)&si128;
    si128.m128i_i32[0] = *v7;
    si128.m128i_i32[1] = v7[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 30) - v7[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 31) - v7[3];
  }
  v36 = 0LL;
  v9 = *((_QWORD *)this[2] + 2);
  v10 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v10 == WPF::ProcessHeapImpl::AllocClear )
    v11 = (volatile signed __int32 *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v11 = (volatile signed __int32 *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v10)(
                                       WPF::g_pProcessHeap,
                                       32LL);
  v5 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    v3 = -2147024882;
    v5 = 0LL;
    goto LABEL_63;
  }
  *((_DWORD *)v11 + 2) = 1;
  *((_QWORD *)v11 + 2) = v9;
  *(_QWORD *)v11 = &CResource::`vftable';
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v9 + 96LL))(v9, 2LL, (_DWORD *)v11 + 6);
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x44u);
  }
  else if ( !*((_DWORD *)v5 + 6) )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
    v13 = -2147024882;
    goto LABEL_56;
  }
  v13 = v3;
  if ( v3 >= 0 )
  {
    v36 = v5;
    goto LABEL_11;
  }
LABEL_56:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x29u);
  CBaseObject::Release((CBaseObject *)v5);
  v5 = 0LL;
LABEL_11:
  if ( v3 < 0 )
  {
LABEL_63:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x103u);
    v6 = 0LL;
    goto LABEL_36;
  }
  v14 = 4 * v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v14 = -1LL;
  v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v15 == WPF::ProcessHeapImpl::Alloc )
    v16 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v14);
  else
    v16 = v15(WPF::g_pProcessHeap, v14);
  v17 = v16;
  v35 = v16;
  if ( !v16 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x105u);
    v6 = 0LL;
    goto LABEL_36;
  }
  v18 = 0;
  v19 = 0;
  v34 = 0;
  v20 = 0LL;
  do
  {
    v21 = *(_QWORD *)&this[30][v20];
    v22 = *(_QWORD *)(v21 + 72);
    if ( v22 )
      v23 = *(_DWORD **)(v22 + 16);
    else
      v23 = 0LL;
    v24 = v23;
    if ( v6 )
      v24 = v6;
    v6 = v24;
    if ( !v23 )
      goto LABEL_29;
    if ( p_si128 )
    {
      if ( *(_BYTE *)(v21 + 128) && EqualRect((const RECT *)(v21 + 112), p_si128) )
        goto LABEL_25;
      *(_BYTE *)(v21 + 128) = 1;
      *(RECT *)(v21 + 112) = *p_si128;
LABEL_48:
      *(_DWORD *)(v21 + 96) |= 1u;
      v32 = *(CVisual **)(v21 + 80);
      if ( v32 )
      {
        v33 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v32 + 24LL);
        if ( v33 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v32, 0x2000u);
        else
          ((void (__fastcall *)(CVisual *, __int64, void *, void (__fastcall *)(CVisual *__hidden, unsigned int)))v33)(
            v32,
            0x2000LL,
            v17,
            CVisual::SetDirtyFlags);
      }
      goto LABEL_25;
    }
    if ( *(_BYTE *)(v21 + 128) )
    {
      *(_BYTE *)(v21 + 128) = 0;
      goto LABEL_48;
    }
LABEL_25:
    v25 = CAtlasedImage::Validate(*(CAtlasedImage **)&this[30][v20]);
    v3 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x116u);
      v5 = v36;
      v6 = v35;
      goto LABEL_36;
    }
    v26 = *(const struct CAtlasedImage **)&this[30][v20];
    v27 = (bool (__fastcall *)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *))*((_QWORD *)*this + 23);
    if ( v27 == CTopLevelAtlasedRectsVisual::ShouldDrawAtlasImage )
    {
      if ( (unsigned int)(*((_DWORD *)v26 + 33) - 9) > 8 )
        goto LABEL_28;
    }
    else if ( v27((CTopLevelAtlasedRectsVisual *)this, v26) )
    {
LABEL_28:
      v17 = v35;
      v35[v34] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&this[30][v20] + 88LL) + 24LL);
      v18 = ++v34;
      goto LABEL_29;
    }
    v17 = v35;
    v18 = v34;
LABEL_29:
    ++v19;
    v20 += 2LL;
  }
  while ( v19 < (unsigned int)v4 );
  v5 = v36;
  if ( v6 )
    v2 = v6[6];
  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, int))(**((_QWORD **)v36 + 2) + 1088LL))(
          *((_QWORD *)v36 + 2),
          *((unsigned int *)v36 + 6),
          v2,
          v17,
          v18);
  v3 = v28;
  if ( v28 >= 0 )
  {
    v6 = v35;
    goto LABEL_34;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x123u);
  v6 = v35;
LABEL_36:
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v5)(v5, 1LL);
  v30 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v30 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    v30(WPF::g_pProcessHeap, v6);
  return (unsigned int)v3;
}
