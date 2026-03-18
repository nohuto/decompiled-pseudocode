/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CF790 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     RtlInitLargeUnicodeString @ 0x1C0093D64 (RtlInitLargeUnicodeString.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     DrawFrame @ 0x1C0139C54 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     TextCopy @ 0x1C023B16C (TextCopy.c)
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 */

void __fastcall DrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v10; // ecx
  int v11; // esi
  int v12; // esi
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 DPIServerInfo; // rax
  __int64 v20; // rax
  unsigned __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  RECT v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  _QWORD v43[3]; // [rsp+98h] [rbp-68h] BYREF
  RECT v44; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v45[16]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v46[256]; // [rsp+D0h] [rbp-30h] BYREF

  DCEx = a2;
  if ( !a2 )
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  v10 = *((_DWORD *)a1 + 29);
  v11 = *((_DWORD *)a1 + 22) + v10 * a4;
  v37[0] = *((_DWORD *)a1 + 21) + v10 * a3;
  v37[1] = v11;
  v37[2] = v37[0] + v10;
  v37[3] = v11 + v10;
  DrawFrame(DCEx, v37, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    BugCheckParameter3 = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4624LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4612LL));
    DPIServerInfo = GetDPIServerInfo(v16, v15, v17, v18);
    v20 = GreSelectFont((__int64)DCEx, *(_QWORD *)(DPIServerInfo + 8));
    v21 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LOBYTE(v22) = 1;
    v39 = v20;
    v25 = HMValidateHandleNoSecure(*v21, v22, v23, v24);
    v26 = v25;
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 232) )
        v12 = TextCopy(v25 + 232, v46, 256LL);
      else
        v46[0] = 0;
      v40 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v40, *(HBRUSH *)(gpsi + 4800LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29);
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 720LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 464) & 1) != 0 )
      {
        v41 = 20;
        v42 = 0LL;
        DrawTextExWorker(DCEx, v46, v12, &v40, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v41);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v45, (__int64)v46);
        v44 = v40;
        v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33);
        v43[0] = *(_QWORD *)(v34 + 392);
        *(_QWORD *)(v34 + 392) = v43;
        v43[1] = v26;
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        xxxSendTransformableMessageTimeout(
          (__int64 *)v26,
          140LL,
          (unsigned __int64)DCEx,
          (struct _LARGE_STRING *)&v44,
          2,
          100,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
        ThreadUnlock1(v36, v35);
      }
    }
    GreSelectFont((__int64)DCEx, v39);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( !a2 )
    _ReleaseDC(DCEx);
}
