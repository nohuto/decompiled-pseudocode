/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180003130
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int128 *a5,
        __int64 a6)
{
  __int64 (__fastcall *v10)(__int64, __int128 *, __int64); // rax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

  *a5 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 184LL);
  v18 = *a4;
  v11 = v10(a1, &v18, a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x190u);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *, __int128 *, __int64))(*(_QWORD *)a1 + 176LL))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x198u);
    }
    else
    {
      if ( *(float *)a3 > *(float *)a6 )
        *(_DWORD *)a6 = *(_DWORD *)a3;
      v14 = *(float *)(a3 + 4);
      if ( v14 > *(float *)(a6 + 4) )
        *(float *)(a6 + 4) = v14;
      v15 = *(float *)(a3 + 8);
      if ( *(float *)(a6 + 8) > v15 )
        *(float *)(a6 + 8) = v15;
      v16 = *(float *)(a3 + 12);
      if ( *(float *)(a6 + 12) > v16 )
        *(float *)(a6 + 12) = v16;
      if ( *(float *)(a6 + 8) <= *(float *)a6 || *(float *)(a6 + 12) <= *(float *)(a6 + 4) )
      {
        *(_DWORD *)(a6 + 12) = 0;
        *(_DWORD *)(a6 + 8) = 0;
        *(_DWORD *)(a6 + 4) = 0;
        *(_DWORD *)a6 = 0;
      }
    }
  }
  if ( v12 < 0 )
  {
    v12 = 0;
    *a5 = *a4;
    *(_OWORD *)a6 = *(_OWORD *)a3;
  }
  return (unsigned int)v12;
}
