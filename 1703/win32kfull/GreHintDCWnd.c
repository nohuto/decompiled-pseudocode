/*
 * XREFs of GreHintDCWnd @ 0x1C0071B30
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024A6F4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreHintDCWnd(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128 v16; // xmm0
  unsigned __int16 v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a2;
  v6 = 0LL;
  LOBYTE(a2) = 1;
  v18[1] = 0LL;
  v9 = HmgShareLock(a1, a2);
  v18[0] = v9;
  v10 = v9;
  if ( !v9 )
    return 0LL;
  *(_QWORD *)(v9 + 480) = v5;
  v11 = *(_QWORD *)(v9 + 512);
  if ( v11 && (*(_DWORD *)(v11 + 116) & 0x800) != 0 )
  {
    DC::vSetDpiScaling(v10, *(_QWORD *)(v11 + 596));
  }
  else if ( v5
         && (unsigned int)UserIsGDIScalingApplicable(v5)
         && (unsigned int)UserGetHwndDpi(*(_QWORD *)(v10 + 480), &v17)
         && v17 != 96 )
  {
    v16 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v17));
    v16.m128_f32[0] = v16.m128_f32[0] / 96.0;
    DC::vSetDpiScaling(v10, _mm_unpacklo_ps(v16, v16).m128_u64[0]);
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 536);
    if ( (v12 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 548) = 0LL;
      *(_DWORD *)(v10 + 36) |= 0x10u;
      *(_QWORD *)(v10 + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(v10 + 536) = v12 & 0xFFFFFFF8 | 4;
    }
  }
  *(_QWORD *)(v10 + 488) = a3;
  if ( a3 )
  {
    v14 = ValidateHwnd(a3);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 16);
      if ( v15 )
        v6 = **(_QWORD **)(v15 + 376);
    }
  }
  *(_QWORD *)(v10 + 496) = v6;
  *(_DWORD *)(v10 + 504) = a4;
  *(_DWORD *)(v10 + 508) = a5;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v18);
  DEC_SHARE_REF_CNT(v18[0]);
  return 1LL;
}
