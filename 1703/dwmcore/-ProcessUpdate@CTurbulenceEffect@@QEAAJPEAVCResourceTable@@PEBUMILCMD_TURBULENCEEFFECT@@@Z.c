/*
 * XREFs of ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z @ 0x180129AD8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTurbulenceEffect::ProcessUpdate(
        CTurbulenceEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_TURBULENCEEFFECT *a3)
{
  __m128d v4; // xmm6
  __m128d v5; // xmm7
  __m128i v6; // xmm8

  v4 = *(__m128d *)a3;
  v5 = (__m128d)*((_OWORD *)a3 + 1);
  v6 = *((__m128i *)a3 + 2);
  (*(void (__fastcall **)(CTurbulenceEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_QWORD *)this + 27) = *(_QWORD *)&v5.m128d_f64[0];
  *((_DWORD *)this + 58) = _mm_cvtsi128_si32(v6);
  *((_DWORD *)this + 59) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  *((_DWORD *)this + 60) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  *((_QWORD *)this + 26) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_QWORD *)this + 28) = *(_OWORD *)&_mm_unpackhi_pd(v5, v5);
  *((_DWORD *)this + 61) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12));
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
