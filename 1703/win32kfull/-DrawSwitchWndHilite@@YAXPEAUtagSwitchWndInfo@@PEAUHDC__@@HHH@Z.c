/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CB3D4 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     RtlInitLargeUnicodeString @ 0x1C004DB0C (RtlInitLargeUnicodeString.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     DrawFrame @ 0x1C0135058 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     TextCopy @ 0x1C0239350 (TextCopy.c)
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 */

void __fastcall DrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v10; // ecx
  int v11; // esi
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rax
  ULONG_PTR v19; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  RECT v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[3]; // [rsp+98h] [rbp-68h] BYREF
  int v29[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v30[16]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v31[256]; // [rsp+D0h] [rbp-30h] BYREF

  DCEx = a2;
  if ( !a2 )
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  v10 = *((_DWORD *)a1 + 29);
  v11 = *((_DWORD *)a1 + 22) + v10 * a4;
  v23[0] = *((_DWORD *)a1 + 21) + v10 * a3;
  v23[1] = v11;
  v23[2] = v23[0] + v10;
  v23[3] = v11 + v10;
  DrawFrame(DCEx, v23, 2, a5 != 0 ? 104 : 120);
  if ( a5 )
  {
    BugCheckParameter3 = 0LL;
    v12 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 5032LL));
    v13 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 5020LL));
    DPIServerInfo = GetDPIServerInfo(v14);
    v16 = GreSelectFontInternal(DCEx, *(_QWORD *)(DPIServerInfo + 8), 1);
    v17 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    v25 = v16;
    v18 = HMValidateHandleNoSecure(*v17, 1);
    v19 = v18;
    if ( v18 )
    {
      if ( *(_DWORD *)(v18 + 232) )
        TextCopy(v18 + 232, v31, 256LL);
      else
        v31[0] = 0;
      v26 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v26, *(HBRUSH *)(gpsi + 5208LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 712LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 440) & 1) != 0 )
      {
        LODWORD(v27[0]) = 20;
        v27[1] = 0LL;
        DrawTextExWorker(DCEx, 34848, (__int64)v27);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v30, (__int64)v31);
        *(RECT *)v29 = v26;
        v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v28;
        ++*(_DWORD *)(v19 + 8);
        v28[1] = v19;
        xxxSendTransformableMessageTimeout(
          v19,
          0x8Cu,
          (unsigned __int64)DCEx,
          (struct _LARGE_STRING *)v29,
          2,
          100,
          (__int64 *)&BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v22, v21);
      }
    }
    GreSelectFontInternal(DCEx, v25, 1);
    GreSetBkColor(DCEx, v13);
    GreSetTextColor(DCEx, v12);
  }
  if ( !a2 )
    _ReleaseDC(DCEx);
}
