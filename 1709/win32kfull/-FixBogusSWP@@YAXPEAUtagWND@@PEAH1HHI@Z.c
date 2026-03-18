/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01AACAC
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0066F70 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01AAE10 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, int a4, int a5, char a6)
{
  struct tagMONITOR *v10; // r15
  int v11; // ebx
  _OWORD *MonitorRect; // rax
  int *v13; // r8
  __m128i v14; // xmm0
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+24h] [rbp-34h]
  int v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+2Ch] [rbp-2Ch]
  _OWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  v10 = _MonitorFromWindowInternal(a1[15], 2, 0);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo() + 88) )
  {
    if ( (a6 & 1) != 0 )
    {
      a4 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
      v11 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
    }
    else
    {
      v11 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v11) )
    {
      MonitorRect = GetMonitorRect(v22, (__int64)v10);
      v13 = (int *)((char *)a1[15] + 128);
      v22[0] = *MonitorRect;
      IntersectRect(&v18, (int *)v22, v13);
      v22[0] = *GetMonitorWorkRect(v22, (__int64)v10);
      v14 = (__m128i)v22[0];
      *a2 = v18 + (v20 - v18 - a4) / 2;
      v15 = _mm_srli_si128(v14, 8).m128i_u64[0];
      *a3 = v19 + (v21 - v19 - v11) / 2;
      if ( a4 + *a2 > (int)v15 )
        *a2 = v15 - a4;
      if ( v11 + *a3 > SHIDWORD(v15) )
        *a3 = HIDWORD(v15) - v11;
      v16 = *(_QWORD *)&v22[0];
      if ( *a2 < SLODWORD(v22[0]) )
        *a2 = v22[0];
      v17 = HIDWORD(v16);
      if ( *a3 < (int)v17 )
        *a3 = v17;
    }
  }
}
