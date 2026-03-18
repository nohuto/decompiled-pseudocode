/*
 * XREFs of ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x18019CFF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x18019D688 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetCommonParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_NATURALANIMATION_SETCOMMONPARAMETERS *a3)
{
  __m128 v3; // xmm2
  float v4; // xmm0_4
  int v5; // eax
  __m128 v6; // rt1
  float v8; // [rsp+38h] [rbp+10h]

  *((_DWORD *)this + 90) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 91) = *((_DWORD *)a3 + 3);
  v4 = *((float *)a3 + 2) * 1000.0;
  if ( COERCE_UNSIGNED_INT(fabs(v4)) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)v4 - v4;
    v6.m128_f32[0] = FLOAT_N0_5;
    v5 = (int)v4 - _mm_cmple_ss(v3, v6).m128_u32[0];
  }
  else
  {
    v8 = v4 + 6291456.25;
    v5 = (int)(LODWORD(v8) << 10) >> 11;
  }
  *((_DWORD *)this + 92) = v5;
  if ( !*((_DWORD *)a3 + 7) )
    CNaturalAnimation::SetStartTimeIfNecessary(this, *(_QWORD *)((char *)a3 + 20));
  return 0LL;
}
