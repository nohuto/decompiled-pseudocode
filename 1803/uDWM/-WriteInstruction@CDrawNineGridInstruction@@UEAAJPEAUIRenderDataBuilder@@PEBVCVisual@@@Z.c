/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180030C90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        CDrawNineGridInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  unsigned int v4; // r14d
  int v5; // r11d
  int v6; // r10d
  int v8; // r9d
  int v9; // ecx
  int v10; // r9d
  int v11; // ebx
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 *i; // rdi
  __int64 v17; // r10
  __int64 v19; // rdx
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // r8d
  __m128i v23; // xmm0
  int v24; // eax
  __int64 (__fastcall *v25)(struct IRenderDataBuilder *, __int128 *, _QWORD); // rax
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-58h]
  _DWORD v29[4]; // [rsp+50h] [rbp-48h]

  v4 = 0;
  v5 = -*((_DWORD *)this + 8);
  v6 = -*((_DWORD *)this + 10);
  v8 = *((_DWORD *)a3 + 31) + *((_DWORD *)this + 11);
  v9 = *((_DWORD *)a3 + 30) + *((_DWORD *)this + 9) + *((_DWORD *)this + 8);
  if ( v9 < 0 )
    v9 = 0;
  v10 = v8 - v6;
  if ( v10 < 0 )
    v10 = 0;
  v27 = *((_OWORD *)this + 1);
  v11 = v27;
  if ( (int)v27 + DWORD1(v27) > v9 )
  {
    v12 = v9 * (int)v27 / ((int)v27 + DWORD1(v27));
    v11 = v12;
  }
  else
  {
    v12 = v9 - DWORD1(v27);
  }
  v13 = DWORD2(v27);
  if ( HIDWORD(v27) + DWORD2(v27) > v10 )
  {
    v14 = DWORD2(v27) * v10 / (HIDWORD(v27) + DWORD2(v27));
    v13 = v14;
  }
  else
  {
    v14 = v10 - HIDWORD(v27);
  }
  v29[0] = v6;
  v29[2] = v6 + v14;
  v28[1] = v5 + v11;
  v29[3] = v6 + v10;
  v28[0] = v5;
  v29[1] = v6 + v13;
  v28[3] = v5 + v9;
  v15 = 0;
  v28[2] = v5 + v12;
  for ( i = (__int64 *)((char *)this + 48); ; ++i )
  {
    v17 = *i;
    if ( *i )
    {
      v19 = v15 / 3;
      v20 = v29[v19];
      v21 = v15 % 3;
      v22 = v28[v21];
      v23 = _mm_cvtsi32_si128(v28[(unsigned int)(v21 + 1)] - v22);
      v24 = v29[(unsigned int)(v19 + 1)];
      *((float *)&v27 + 1) = (float)v20;
      *(float *)&v27 = (float)v22;
      *((float *)&v27 + 2) = _mm_cvtepi32_ps(v23).m128_f32[0] + (float)v22;
      *(float *)v23.m128i_i32 = (float)(v24 - v20);
      v25 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, __int128 *, _QWORD))(*(_QWORD *)a2 + 56LL);
      *((float *)&v27 + 3) = *(float *)v23.m128i_i32 + (float)v20;
      v26 = v25(a2, &v27, *(unsigned int *)(v17 + 24));
      v4 = v26;
      if ( v26 < 0 )
        break;
    }
    if ( ++v15 >= 9 )
      return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x11Fu);
  return v4;
}
