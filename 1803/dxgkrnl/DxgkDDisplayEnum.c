/*
 * XREFs of DxgkDDisplayEnum @ 0x1C01102E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C011059C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAA@XZ @ 0x1C01105FC (--1-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C0110620 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01106A8 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 */

__int64 __fastcall DxgkDDisplayEnum(__m128i *a1)
{
  ULONG64 v2; // rax
  unsigned int v3; // ebx
  char *v4; // r15
  unsigned int v5; // esi
  char *v6; // r14
  void *v7; // rcx
  PVOID v8; // rax
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 *v12; // rbx
  size_t v13; // r8
  const void *v14; // rdx
  const void *v15; // rdx
  char *v16; // rcx
  __int64 v18; // rax
  __m128i v19; // [rsp+20h] [rbp-6E8h]
  __m128i v20; // [rsp+30h] [rbp-6D8h]
  void *Src[2]; // [rsp+40h] [rbp-6C8h] BYREF
  void *v22[2]; // [rsp+50h] [rbp-6B8h]
  _QWORD v23[71]; // [rsp+60h] [rbp-6A8h] BYREF
  int v24; // [rsp+298h] [rbp-470h]
  PVOID v25[133]; // [rsp+2A0h] [rbp-468h] BYREF
  int v26; // [rsp+6CCh] [rbp-3Ch]

  v2 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v19 = *(__m128i *)v2;
  v20 = *(__m128i *)(v2 + 16);
  v3 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v2, 4));
  v4 = (char *)_mm_srli_si128(*(__m128i *)v2, 8).m128i_u64[0];
  ProbeForWrite(v4, 560LL * v3, 4u);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v6 = (char *)_mm_srli_si128(v20, 8).m128i_u64[0];
  ProbeForWrite(v6, 1060LL * v5, 4u);
  v7 = 0LL;
  v23[0] = 0LL;
  v24 = 0;
  v8 = 0LL;
  v25[0] = 0LL;
  v26 = 0;
  if ( v3 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(v23, v3);
    v7 = (void *)v23[0];
    v8 = v25[0];
  }
  if ( v5 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(v25, v5);
    v7 = (void *)v23[0];
    v8 = v25[0];
  }
  if ( v3 && !v7 || v5 && !v8 )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = v3;
    *(_QWORD *)(v18 + 32) = v5;
    WdLogEvent5_WdError(v18);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v25);
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::~PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>(v23);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)v19.m128i_i64[0];
    v22[0] = (void *)v20.m128i_i64[0];
    Src[1] = v7;
    v22[1] = v8;
    v9 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v10 = LODWORD(Src[0]);
    v19.m128i_i32[0] = (__int32)Src[0];
    v11 = LODWORD(v22[0]);
    v20.m128i_i32[0] = (__int32)v22[0];
    v12 = (unsigned __int64 *)MmUserProbeAddress;
    if ( (unsigned __int64)&a1[2] > MmUserProbeAddress || &a1[2] <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v12 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *a1 = v19;
    a1[1] = v20;
    if ( v9 >= 0 )
    {
      if ( v4 )
      {
        v13 = 560 * v10;
        v14 = Src[1];
        if ( (unsigned __int64)&v4[v13] > *v12 || &v4[v13] <= v4 )
        {
          *(_BYTE *)*v12 = 0;
          v12 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v4, v14, v13);
      }
      if ( v6 )
      {
        v15 = v22[1];
        v16 = &v6[1060 * v11];
        if ( (unsigned __int64)v16 > *v12 || v16 <= v6 )
          *(_BYTE *)*v12 = 0;
        memmove(v6, v15, 1060 * v11);
      }
    }
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v25);
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::~PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>(v23);
    return (unsigned int)v9;
  }
}
