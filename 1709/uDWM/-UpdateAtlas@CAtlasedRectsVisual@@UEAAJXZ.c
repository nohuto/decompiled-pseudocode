/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023880
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023E80 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180018780 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020510 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020DE0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  void *v1; // rbp
  unsigned int v2; // edi
  unsigned __int64 v4; // r12
  volatile signed __int32 *v5; // rbx
  __int32 *v6; // rcx
  __int64 v7; // r15
  const RECT *p_si128; // r13
  __int64 v9; // rdi
  void *(__fastcall *v10)(WPF::ProcessHeapImpl *, size_t); // rax
  volatile signed __int32 *v11; // rax
  int v12; // eax
  int v13; // ebp
  SIZE_T v14; // rdx
  LPVOID (__fastcall *v15)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v16; // rax
  unsigned int v17; // r14d
  int v18; // edx
  unsigned int v19; // ebp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  const struct CAtlasedImage *v26; // rdx
  bool (__fastcall *v27)(CTopLevelAtlasedRectsVisual *__hidden, const struct CAtlasedImage *); // rax
  bool v28; // al
  int v29; // eax
  __int64 (__fastcall *v30)(CVisual *, struct CResource *); // rax
  void (__fastcall *v31)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v33; // [rsp+30h] [rbp-58h]
  void *v34; // [rsp+38h] [rbp-50h]
  volatile signed __int32 *v35; // [rsp+40h] [rbp-48h]
  __m128i si128; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0LL;
  v2 = 0;
  v4 = *((unsigned int *)this + 66);
  v5 = 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_34;
  v6 = (__int32 *)*((_QWORD *)this + 34);
  v7 = 0LL;
  p_si128 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v6 )
  {
    p_si128 = (const RECT *)&si128;
    si128.m128i_i32[0] = *v6;
    si128.m128i_i32[1] = v6[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 30) - v6[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 31) - v6[3];
  }
  v35 = 0LL;
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v10 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v10 == WPF::ProcessHeapImpl::AllocClear )
    v11 = (volatile signed __int32 *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v11 = (volatile signed __int32 *)v10(WPF::g_pProcessHeap, 32LL);
  v5 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
    v2 = -2147024882;
    v5 = 0LL;
    goto LABEL_59;
  }
  *((_DWORD *)v11 + 2) = 1;
  *((_QWORD *)v11 + 2) = v9;
  *(_QWORD *)v11 = &CResource::`vftable';
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v9 + 96LL))(v9, 2LL, (_DWORD *)v11 + 6);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x44u);
  }
  else if ( !*((_DWORD *)v5 + 6) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
    v13 = -2147024882;
    goto LABEL_53;
  }
  if ( v13 >= 0 )
  {
    v35 = v5;
    goto LABEL_11;
  }
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x29u);
  CBaseObject::Release((CBaseObject *)v5);
  v5 = 0LL;
LABEL_11:
  v2 = v13;
  if ( v13 < 0 )
  {
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x103u);
    v1 = 0LL;
    goto LABEL_36;
  }
  v14 = 4 * v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v14 = -1LL;
  v15 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v15 == WPF::ProcessHeapImpl::Alloc )
    v16 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v14);
  else
    v16 = v15(WPF::g_pProcessHeap, v14);
  v1 = v16;
  v34 = v16;
  if ( !v16 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x105u);
    goto LABEL_36;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v33 = 0;
  v20 = 0LL;
  do
  {
    v21 = *(_QWORD *)(v20 + *((_QWORD *)this + 30));
    v22 = *(_QWORD *)(v21 + 72);
    if ( v22 )
      v23 = *(_QWORD *)(v22 + 16);
    else
      v23 = 0LL;
    v24 = v23;
    if ( v7 )
      v24 = v7;
    v7 = v24;
    if ( !v23 )
      goto LABEL_30;
    if ( p_si128 )
    {
      if ( *(_BYTE *)(v21 + 128) && EqualRect((const RECT *)(v21 + 112), p_si128) )
        goto LABEL_25;
      *(_BYTE *)(v21 + 128) = 1;
      *(RECT *)(v21 + 112) = *p_si128;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(v21 + 128) )
    {
      *(_BYTE *)(v21 + 128) = 0;
LABEL_48:
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v21, 1, 0x2000u);
    }
LABEL_25:
    v25 = CAtlasedImage::Validate(*(CAtlasedImage **)(v20 + *((_QWORD *)this + 30)));
    v2 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x116u);
      v5 = v35;
      v1 = v34;
      goto LABEL_36;
    }
    v26 = *(const struct CAtlasedImage **)(v20 + *((_QWORD *)this + 30));
    v27 = *(bool (__fastcall **)(CTopLevelAtlasedRectsVisual *__hidden, const struct CAtlasedImage *))(*(_QWORD *)this + 184LL);
    if ( v27 == CTopLevelAtlasedRectsVisual::ShouldDrawAtlasImage )
      v28 = (unsigned int)(*((_DWORD *)v26 + 33) - 9) > 8;
    else
      v28 = v27(this, v26);
    if ( v28 )
    {
      *((_DWORD *)v34 + v33) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + *((_QWORD *)this + 30)) + 88LL) + 24LL);
      v18 = ++v33;
    }
    else
    {
      v18 = v33;
    }
LABEL_30:
    ++v19;
    v20 += 8LL;
  }
  while ( v19 < (unsigned int)v4 );
  v5 = v35;
  if ( v7 )
    v17 = *(_DWORD *)(v7 + 24);
  v1 = v34;
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, int))(**((_QWORD **)v35 + 2) + 1088LL))(
          *((_QWORD *)v35 + 2),
          *((unsigned int *)v35 + 6),
          v17,
          v34,
          v18);
  v2 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x123u);
  }
  else
  {
LABEL_34:
    v30 = *(__int64 (__fastcall **)(CVisual *, struct CResource *))(*(_QWORD *)this + 40LL);
    if ( v30 == CVisual::SetContent )
      CVisual::SetContent(this, (struct CResource *)v5);
    else
      v30(this, (struct CResource *)v5);
  }
LABEL_36:
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v5)(v5, 1LL);
  v31 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v31 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
  else
    v31(WPF::g_pProcessHeap, v1);
  return v2;
}
