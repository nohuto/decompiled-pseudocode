/*
 * XREFs of GreHintDCWnd @ 0x1C002A080
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00FAEE0 (UpdateRedirectedDCE.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C0144678 (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024C000 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreHintDCWnd(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rbx
  _DWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128 v16; // xmm0
  int v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF

  v18[0] = 0LL;
  v18[1] = 0LL;
  XDCOBJ::vAltLock((XDCOBJ *)v18, a1, a3);
  v8 = v18[0];
  if ( !v18[0] )
    return 0LL;
  v9 = *(_DWORD **)(v18[0] + 512LL);
  *(_QWORD *)(v18[0] + 480LL) = a2;
  if ( v9 && (v9[29] & 0x800) != 0 )
  {
    DC::vSetDpiScaling(v8, _mm_unpacklo_ps((__m128)(unsigned int)v9[149], (__m128)(unsigned int)v9[150]).m128_u64[0]);
  }
  else if ( a2
         && (unsigned int)UserIsGDIScalingApplicable(a2)
         && (unsigned int)UserGetHwndDpi(*(_QWORD *)(v8 + 480), &v17)
         && (_WORD)v17 != 96 )
  {
    v16 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
    v16.m128_f32[0] = v16.m128_f32[0] / 96.0;
    DC::vSetDpiScaling(v8, _mm_unpacklo_ps(v16, v16).m128_u64[0]);
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 536);
    if ( (v10 & 1) != 0 )
    {
      *(_QWORD *)(v8 + 540) = 0LL;
      *(_QWORD *)(v8 + 548) = 0LL;
      *(_DWORD *)(v8 + 36) |= 0x10u;
      *(_DWORD *)(v8 + 536) = v10 & 0xFFFFFFF8 | 4;
    }
  }
  *(_QWORD *)(v8 + 488) = a3;
  if ( a3 && (v14 = ValidateHwnd(a3)) != 0 && (v15 = *(_QWORD *)(v14 + 16)) != 0 )
    v11 = **(_QWORD **)(v15 + 400);
  else
    v11 = 0LL;
  *(_QWORD *)(v8 + 496) = v11;
  *(_DWORD *)(v8 + 504) = a4;
  *(_DWORD *)(v8 + 508) = a5;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v18);
  v17 = 0;
  v12 = *(_QWORD *)v18[0];
  HmgDecrementShareReferenceCountEx(v18[0], &v17);
  if ( v17 )
    bDeleteDCInternalEx(v12, 0LL);
  return 1LL;
}
