/*
 * XREFs of xxxPrintWindow @ 0x1C01C53F8
 * Callers:
 *     NtUserPrintWindow @ 0x1C01EA340 (NtUserPrintWindow.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     GetRedirectionFlags @ 0x1C008DA7C (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025073C (GreSpDwmSyncCaptureSurfaceBits.c)
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
  HWND *v11; // rbx
  __int128 v12; // xmm0
  __m128i v13; // xmm0
  int v14; // eax
  unsigned int v15; // esi
  HDC DCEx; // rbx
  __int128 v18; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp+7h] BYREF
  __int32 v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  int v22; // [rsp+88h] [rbp+17h] BYREF
  int v23; // [rsp+8Ch] [rbp+1Bh]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]
  int v28; // [rsp+F0h] [rbp+7Fh]

  v28 = 0;
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
    && (StyleWindow = GetStyleWindow((__int64)a1, 2568), (v11 = (HWND *)StyleWindow) != 0LL) )
  {
    if ( (struct tagWND *)StyleWindow != a1 )
    {
      if ( v4 )
        v12 = *((_OWORD *)a1 + 9);
      else
        v12 = *((_OWORD *)a1 + 8);
      v18 = v12;
      v13 = *(__m128i *)(StyleWindow + 128);
      v14 = _mm_cvtsi128_si32(v13);
      HIDWORD(v18) -= v13.m128i_i32[1];
      DWORD1(v18) -= v13.m128i_i32[1];
      LODWORD(v18) = v18 - v14;
      DWORD2(v18) -= v14;
      v20 = v13.m128i_i32[2] - v14;
      v21 = v13.m128i_i32[3] - v13.m128i_i32[1];
      v19 = 0LL;
      v15 = IntersectRect(&v22, (int *)&v19, (int *)&v18);
      if ( !v15 )
        return v15;
      v5 = v22;
      v6 = v24 - v22;
      v7 = v23;
      v8 = v25 - v23;
    }
    if ( gdwInAtomicOperation )
    {
      v10 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
    v15 = GreSpDwmSyncCaptureSurfaceBits(*v11, a3, a2, v5, v7, v6, v8);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      if ( (int)SetRedirectedWindow(a1, 8) < 0 )
        return (*((unsigned __int8 *)a1 + 66) >> 5) & 1;
      *((_DWORD *)a1 + 76) |= 4u;
      v28 = 1;
    }
    v15 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v6, v8, DCEx, v5, v7, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v28 && (*((_DWORD *)a1 + 76) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1);
      *((_DWORD *)a1 + 76) &= ~4u;
    }
  }
  return v15;
}
