/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014A780
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00149DC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D2F68 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C014A750 (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C014AC0C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __m128i *v16; // rdx
  size_t v17; // r8
  void *v18; // rcx
  int v19; // eax
  __int64 v20; // r15
  char *v21; // rax
  char *v22; // r12
  int v23; // eax
  _QWORD *v24; // r11
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // xmm0_8
  int v32; // eax
  unsigned __int64 v33; // rdx
  _DWORD *v34; // rcx
  unsigned __int64 v36; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-48h] BYREF
  __int64 v38; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v39[4]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD Src[4]; // [rsp+48h] [rbp-28h] BYREF
  __m128i v41; // [rsp+58h] [rbp-18h] BYREF

  v6 = 0;
  if ( !a3 )
  {
    if ( a5 == 8 )
    {
      v33 = (unsigned int)(a4->m128i_i32[0] - 1);
      if ( a4->m128i_i32[0] && v33 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v34 = *(_DWORD **)(v33 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      }
      else
      {
        v34 = 0LL;
      }
      if ( v34 )
      {
        Src[0] = v34[6];
        Src[1] = a4->m128i_i32[1];
        Src[2] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 16LL))(v34);
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 40),
               1LL,
               0x6D6C4344u);
        if ( v6 >= 0 )
        {
          v16 = (__m128i *)Src;
          v17 = *((_QWORD *)this + 9);
          v18 = (void *)(*((_QWORD *)this + 5) + v17 * (*((_QWORD *)this + 8) - 1LL));
          goto LABEL_54;
        }
      }
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741811;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    if ( a5 == 12 )
    {
      v29 = (unsigned int)(a4->m128i_i32[0] - 1);
      if ( a4->m128i_i32[0] && v29 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v30 = *(_QWORD *)(v29 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      }
      else
      {
        v30 = 0LL;
      }
      if ( v30 )
      {
        v31 = a4->m128i_i64[0];
        v39[2] = a4->m128i_i32[2];
        v32 = *(_DWORD *)(v30 + 24);
        v39[1] = HIDWORD(v31);
        v39[0] = v32;
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 88),
               1LL,
               0x6D6C4344u);
        if ( v6 >= 0 )
        {
          v16 = (__m128i *)v39;
          v17 = *((_QWORD *)this + 15);
          v18 = (void *)(*((_QWORD *)this + 11) + v17 * (*((_QWORD *)this + 14) - 1LL));
          goto LABEL_54;
        }
      }
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 <= 4 )
      return (unsigned int)-1073741811;
    v36 = 0LL;
    v22 = &a4->m128i_i8[4];
    v23 = StringCchLengthW(&a4->m128i_u16[2], a5 - 4, &v36);
    v25 = ++v36;
    if ( v23 < 0 || a5 != 2 * v25 + 4 )
      return (unsigned int)-1073741811;
    v26 = (unsigned int)(a4->m128i_i32[0] - 1);
    if ( a4->m128i_i32[0] && v26 < v24[10] )
    {
      _mm_lfence();
      v25 = v36;
      v27 = *(_QWORD *)(v26 * v24[11] + v24[7]);
    }
    else
    {
      v27 = 0LL;
    }
    if ( !v27 )
      return (unsigned int)v6;
    v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
           (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 184),
           1LL,
           0x6D6C4344u);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v28 = Win32AllocPoolWithQuota(2 * v25 + 16, 0x6D6C4344u);
    v38 = v28;
    if ( v28 )
    {
      *(_DWORD *)v28 = *(_DWORD *)(v27 + 24);
      *(_QWORD *)(v28 + 8) = v25;
      if ( (int)StringCchCopyW((char *)(v28 + 16), v25, v22) >= 0 )
      {
        v16 = (__m128i *)&v38;
        v17 = *((_QWORD *)this + 27);
        v18 = (void *)(*((_QWORD *)this + 23) + v17 * (*((_QWORD *)this + 26) - 1LL));
        goto LABEL_54;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741801;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !a5 )
    {
      if ( !a4 )
      {
        DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
        goto LABEL_20;
      }
      return (unsigned int)-1073741811;
    }
    if ( !a4 )
      return (unsigned int)-1073741811;
    v37 = 0LL;
    v19 = StringCchLengthW((const unsigned __int16 *)a4, a5, &v37);
    v20 = v37 + 1;
    if ( v19 < 0 || a5 != 2 * v20 )
      return (unsigned int)-1073741811;
    DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
    v21 = (char *)Win32AllocPoolWithQuota(a5, 0x6D6C4344u);
    *((_QWORD *)this + 29) = v21;
    if ( v21 )
    {
      if ( (int)StringCchCopyW(v21, v20, a4->m128i_i8) >= 0 )
      {
LABEL_20:
        *a6 = 1;
        *((_BYTE *)this + 240) |= 1u;
        return (unsigned int)v6;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741801;
  }
  if ( v12 != 2 || a5 != 16 )
    return (unsigned int)-1073741811;
  v13 = _mm_cvtsi128_si32(*a4);
  v41 = *a4;
  v14 = (unsigned int)(v13 - 1);
  if ( v13 && v14 < *((_QWORD *)a2 + 10) )
  {
    _mm_lfence();
    v15 = *(_QWORD *)(v14 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
    return (unsigned int)-1073741811;
  v41.m128i_i32[0] = *(_DWORD *)(v15 + 24);
  v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
         (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 136),
         1LL,
         0x6D6C4344u);
  if ( v6 >= 0 )
  {
    v16 = &v41;
    v17 = *((_QWORD *)this + 21);
    v18 = (void *)(*((_QWORD *)this + 17) + v17 * (*((_QWORD *)this + 20) - 1LL));
LABEL_54:
    memmove(v18, v16, v17);
    *a6 = 1;
  }
  return (unsigned int)v6;
}
