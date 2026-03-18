/*
 * XREFs of DxgkDDisplayEnum @ 0x1C01C4CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C01C3590 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C01C3610 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01C3AE8 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 */

__int64 __fastcall DxgkDDisplayEnum(__m128i *a1)
{
  ULONG64 v2; // rax
  unsigned int v3; // ebx
  char *v4; // r15
  unsigned int v5; // esi
  char *v6; // r14
  PVOID v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 *v14; // rbx
  size_t v15; // r8
  const void *v16; // rdx
  const void *v17; // rdx
  char *v18; // rcx
  __m128i v19; // [rsp+20h] [rbp-6D8h]
  __m128i v20; // [rsp+30h] [rbp-6C8h]
  void *Src[2]; // [rsp+40h] [rbp-6B8h] BYREF
  void *v22[2]; // [rsp+50h] [rbp-6A8h]
  PVOID v23[68]; // [rsp+60h] [rbp-698h] BYREF
  int v24; // [rsp+284h] [rbp-474h]
  PVOID v25[133]; // [rsp+290h] [rbp-468h] BYREF
  int v26; // [rsp+6B8h] [rbp-40h]

  v2 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v19 = *(__m128i *)v2;
  v20 = *(__m128i *)(v2 + 16);
  v3 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v2, 4));
  v4 = (char *)_mm_srli_si128(*(__m128i *)v2, 8).m128i_u64[0];
  ProbeForWrite(v4, 540LL * v3, 4u);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v6 = (char *)_mm_srli_si128(v20, 8).m128i_u64[0];
  ProbeForWrite(v6, 1056LL * v5, 4u);
  v7 = 0LL;
  v23[0] = 0LL;
  v24 = 0;
  v8 = 0LL;
  v25[0] = 0LL;
  v26 = 0;
  if ( v3 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(v23, v3);
    v7 = v23[0];
    v8 = v25[0];
  }
  if ( v5 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(v25, v5);
    v7 = v23[0];
    v8 = v25[0];
  }
  if ( (!v3 || v7) && (!v5 || v8) )
  {
    Src[0] = (void *)v19.m128i_i64[0];
    v22[0] = (void *)v20.m128i_i64[0];
    Src[1] = v7;
    v22[1] = v8;
    v11 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v12 = LODWORD(Src[0]);
    v19.m128i_i32[0] = (__int32)Src[0];
    v13 = LODWORD(v22[0]);
    v20.m128i_i32[0] = (__int32)v22[0];
    v14 = (unsigned __int64 *)MmUserProbeAddress;
    if ( (unsigned __int64)&a1[2] > MmUserProbeAddress || &a1[2] <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v14 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *a1 = v19;
    a1[1] = v20;
    if ( v11 >= 0 )
    {
      if ( v4 )
      {
        v15 = 540 * v12;
        v16 = Src[1];
        if ( (unsigned __int64)&v4[v15] > *v14 || &v4[v15] <= v4 )
        {
          *(_BYTE *)*v14 = 0;
          v14 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v4, v16, v15);
      }
      if ( v6 )
      {
        v17 = v22[1];
        v18 = &v6[1056 * v13];
        if ( (unsigned __int64)v18 > *v14 || v18 <= v6 )
          *(_BYTE *)*v14 = 0;
        memmove(v6, v17, 1056 * v13);
      }
    }
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v25);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v23);
    return (unsigned int)v11;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v3;
    *(_QWORD *)(v9 + 32) = v5;
    WdLogEvent5_WdError(v9);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v25);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v23);
    return 3221225495LL;
  }
}
