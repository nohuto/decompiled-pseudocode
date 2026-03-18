/*
 * XREFs of ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x180129BE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::ProcessUpdate(
        CLinearTransferEffect *this,
        struct CResourceTable *a2,
        __m128 *a3)
{
  __int32 v4; // ebx
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  __m128 v7; // xmm8
  unsigned __int64 v9; // [rsp+50h] [rbp-48h]

  v4 = a3[3].m128_i32[2];
  v5 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v9 = a3[3].m128_u64[0];
  (*(void (__fastcall **)(CLinearTransferEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 52) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  *((_DWORD *)this + 55) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  *((_DWORD *)this + 59) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  *((_DWORD *)this + 60) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v7, 8));
  *((_DWORD *)this + 58) = v7.m128_i32[0];
  *((_DWORD *)this + 54) = _mm_cvtsi128_si32((__m128i)v6);
  *((_DWORD *)this + 62) = v9;
  *((_DWORD *)this + 53) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  *((_DWORD *)this + 56) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  *((_DWORD *)this + 61) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  *((_DWORD *)this + 57) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 12));
  *((_DWORD *)this + 63) = HIDWORD(v9);
  *((_DWORD *)this + 64) = v4;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
