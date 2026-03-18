/*
 * XREFs of xxxPrintWindow @ 0x1C01C2478
 * Callers:
 *     NtUserPrintWindow @ 0x1C01DE220 (NtUserPrintWindow.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GetRedirectionFlags @ 0x1C009E94C (GetRedirectionFlags.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C024ECC8 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, unsigned int a3)
{
  int v4; // esi
  int v5; // r12d
  int v6; // r14d
  int v7; // r13d
  int v8; // r15d
  __int64 StyleWindow; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  HWND *v13; // rbx
  __int128 v14; // xmm0
  __m128i v15; // xmm0
  int v16; // eax
  unsigned int v17; // esi
  HDC DCEx; // rbx
  __int128 v20; // [rsp+68h] [rbp-9h] BYREF
  __int64 v21; // [rsp+78h] [rbp+7h] BYREF
  __int32 v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+84h] [rbp+13h]
  int v24; // [rsp+88h] [rbp+17h] BYREF
  int v25; // [rsp+8Ch] [rbp+1Bh]
  int v26; // [rsp+90h] [rbp+1Fh]
  int v27; // [rsp+94h] [rbp+23h]
  int v30; // [rsp+F0h] [rbp+7Fh]

  v30 = 0;
  v4 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v5 = *((_DWORD *)a1 + 36) - *((_DWORD *)a1 + 32);
    v6 = *((_DWORD *)a1 + 38) - *((_DWORD *)a1 + 36);
    v7 = *((_DWORD *)a1 + 37) - *((_DWORD *)a1 + 33);
    v8 = *((_DWORD *)a1 + 39) - *((_DWORD *)a1 + 37);
  }
  else
  {
    v5 = 0;
    v6 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
    v7 = 0;
    v8 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
  }
  if ( (a3 & 2) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (StyleWindow = GetStyleWindow((__int64)a1, 2568), (v13 = (HWND *)StyleWindow) != 0LL) )
  {
    if ( (struct tagWND *)StyleWindow != a1 )
    {
      if ( v4 )
        v14 = *((_OWORD *)a1 + 9);
      else
        v14 = *((_OWORD *)a1 + 8);
      v20 = v14;
      v15 = *(__m128i *)(StyleWindow + 128);
      v16 = _mm_cvtsi128_si32(v15);
      HIDWORD(v20) -= v15.m128i_i32[1];
      DWORD1(v20) -= v15.m128i_i32[1];
      LODWORD(v20) = v20 - v16;
      DWORD2(v20) -= v16;
      v22 = v15.m128i_i32[2] - v16;
      v23 = v15.m128i_i32[3] - v15.m128i_i32[1];
      v21 = 0LL;
      v17 = IntersectRect(&v24, (int *)&v21, (int *)&v20);
      if ( !v17 )
        return v17;
      v5 = v24;
      v6 = v26 - v24;
      v7 = v25;
      v8 = v27 - v25;
    }
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, v11, v12);
    v17 = GreSpDwmSyncCaptureSurfaceBits(*v13, a3, a2, v5, v7, v6, v8);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      if ( (int)SetRedirectedWindow(a1, 8) < 0 )
        return (*((unsigned __int8 *)a1 + 66) >> 5) & 1;
      *((_DWORD *)a1 + 76) |= 4u;
      v30 = 1;
    }
    v17 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v6, v8, DCEx, v5, v7, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v30 && (*((_DWORD *)a1 + 76) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1);
      *((_DWORD *)a1 + 76) &= ~4u;
    }
  }
  return v17;
}
