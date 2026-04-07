/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023C30
 * Callers:
 *     ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180024220 (-ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020750 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x180026260 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(__int32 **this)
{
  unsigned __int64 v1; // r12
  volatile signed __int32 *v2; // rbx
  unsigned int v3; // esi
  void *v5; // r15
  __int32 *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rsi
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *, size_t); // rax
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rdi
  int v12; // eax
  int v13; // ebp
  SIZE_T v14; // rdx
  LPVOID (__fastcall *v15)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v16; // rax
  unsigned int v17; // r15d
  int v18; // edx
  unsigned int v19; // ebp
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  RECT *v25; // rdx
  char v26; // al
  int v27; // eax
  const struct CAtlasedImage *v28; // rdx
  bool (__fastcall *v29)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *); // rax
  bool v30; // al
  int v31; // eax
  __int64 (__fastcall *v32)(CVisual *__hidden, struct CResource *); // rax
  void (__fastcall *v33)(WPF::ProcessHeapImpl *, void *); // rax
  int v35; // [rsp+30h] [rbp-68h]
  _DWORD *v36; // [rsp+38h] [rbp-60h]
  RECT *lprc2; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v38; // [rsp+48h] [rbp-50h]
  __m128i si128; // [rsp+50h] [rbp-48h] BYREF

  v1 = *((unsigned int *)this + 66);
  v2 = 0LL;
  v3 = 0;
  v5 = 0LL;
  v38 = 0LL;
  if ( !(_DWORD)v1 )
  {
LABEL_35:
    v32 = (__int64 (__fastcall *)(CVisual *__hidden, struct CResource *))*((_QWORD *)*this + 5);
    if ( v32 == CVisual::SetContent )
      CVisual::SetContent((CVisual *)this, (struct CResource *)v2);
    else
      v32((CVisual *)this, (struct CResource *)v2);
    goto LABEL_37;
  }
  v6 = this[34];
  v7 = 0LL;
  lprc2 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v6 )
  {
    si128.m128i_i32[0] = *v6;
    si128.m128i_i32[1] = v6[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 30) - v6[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 31) - v6[3];
    lprc2 = (RECT *)&si128;
  }
  v38 = 0LL;
  v8 = *((_QWORD *)this[2] + 2);
  v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = (volatile signed __int32 *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v10 = (volatile signed __int32 *)v9(WPF::g_pProcessHeap, 32LL);
  v11 = v10;
  if ( !v10 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
    v3 = -2147024882;
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xBEu);
    goto LABEL_37;
  }
  *((_DWORD *)v10 + 2) = 1;
  *((_QWORD *)v10 + 2) = v8;
  *(_QWORD *)v10 = &CResource::`vftable';
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v8 + 96LL))(v8, 2LL, (_DWORD *)v10 + 6);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x44u);
  }
  else if ( !*((_DWORD *)v11 + 6) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
    v13 = -2147024882;
    goto LABEL_56;
  }
  if ( v13 >= 0 )
  {
    v2 = v11;
    v38 = v11;
    goto LABEL_11;
  }
LABEL_56:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x29u);
  CBaseObject::Release((CBaseObject *)v11);
LABEL_11:
  v3 = v13;
  if ( v13 < 0 )
  {
    v5 = 0LL;
    goto LABEL_64;
  }
  v14 = 4 * v1;
  if ( !is_mul_ok(v1, 4uLL) )
    v14 = -1LL;
  v15 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v15 == WPF::ProcessHeapImpl::Alloc )
    v16 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v14);
  else
    v16 = v15(WPF::g_pProcessHeap, v14);
  v5 = v16;
  v36 = v16;
  if ( !v16 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC0u);
    goto LABEL_37;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v35 = 0;
  v20 = 0LL;
  do
  {
    v21 = *(_QWORD *)&this[30][v20];
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
    v25 = lprc2;
    v26 = *(_BYTE *)(v21 + 128);
    if ( lprc2 )
    {
      if ( !v26 )
        goto LABEL_49;
      if ( !EqualRect((const RECT *)(v21 + 112), lprc2) )
      {
        v25 = lprc2;
LABEL_49:
        if ( v25 )
        {
          *(_BYTE *)(v21 + 128) = 1;
          *(RECT *)(v21 + 112) = *v25;
        }
        else
        {
          *(_BYTE *)(v21 + 128) = 0;
        }
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v21, 1, 0x2000u);
      }
    }
    else if ( v26 )
    {
      goto LABEL_49;
    }
    v27 = CAtlasedImage::Validate(*(CAtlasedImage **)&this[30][v20]);
    v3 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xD1u);
      goto LABEL_61;
    }
    v28 = *(const struct CAtlasedImage **)&this[30][v20];
    v29 = (bool (__fastcall *)(CTopLevelAtlasedRectsVisual *, const struct CAtlasedImage *))*((_QWORD *)*this + 23);
    if ( v29 == CTopLevelAtlasedRectsVisual::ShouldDrawAtlasImage )
      v30 = (unsigned int)(*((_DWORD *)v28 + 33) - 9) > 8;
    else
      v30 = v29((CTopLevelAtlasedRectsVisual *)this, v28);
    if ( v30 )
    {
      v36[v35] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&this[30][v20] + 88LL) + 24LL);
      v18 = ++v35;
    }
    else
    {
      v18 = v35;
    }
LABEL_30:
    ++v19;
    v20 += 2LL;
  }
  while ( v19 < (unsigned int)v1 );
  if ( v7 )
    v17 = *(_DWORD *)(v7 + 24);
  v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _DWORD *, int))(**((_QWORD **)v2 + 2) + 1104LL))(
          *((_QWORD *)v2 + 2),
          *((unsigned int *)v2 + 6),
          v17,
          v36,
          v18);
  v3 = v31;
  if ( v31 >= 0 )
  {
    v5 = v36;
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xDEu);
LABEL_61:
  v5 = v36;
LABEL_37:
  v33 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v33 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
  else
    v33(WPF::g_pProcessHeap, v5);
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v38)(v38, 1LL);
  return v3;
}
