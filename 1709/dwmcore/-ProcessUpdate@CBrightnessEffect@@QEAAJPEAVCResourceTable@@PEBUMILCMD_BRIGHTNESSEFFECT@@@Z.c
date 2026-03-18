/*
 * XREFs of ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x18017A82C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::ProcessUpdate(CBrightnessEffect *this, struct CResourceTable *a2, __m128 *a3)
{
  __m128 v4; // xmm6
  unsigned __int64 v6; // [rsp+30h] [rbp-28h]

  v4 = *a3;
  v6 = a3[1].m128_u64[0];
  (*(void (__fastcall **)(CBrightnessEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 44) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  *((_DWORD *)this + 46) = v6;
  *((_DWORD *)this + 45) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  *((_DWORD *)this + 47) = HIDWORD(v6);
  (*(void (__fastcall **)(CBrightnessEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
