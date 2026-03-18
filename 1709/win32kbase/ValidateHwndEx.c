/*
 * XREFs of ValidateHwndEx @ 0x1C00476F0
 * Callers:
 *     ValidateHwnd @ 0x1C00476D0 (ValidateHwnd.c)
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     UserGetDesktopDC @ 0x1C005C284 (UserGetDesktopDC.c)
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01171A4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01172CC (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01212B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00816F0 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C008A4F8 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall ValidateHwndEx(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  int v5; // r14d
  struct _HANDLEENTRY *v7; // rdi
  __int64 *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // rdx

  v4 = a3;
  v5 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1)
    && ((v7 = (struct _HANDLEENTRY *)((char *)qword_1C018E9B8 + (unsigned int)(unsigned __int16)a1 * dword_1C018E9C0),
         v8 = (__int64 *)((char *)gpKernelHandleTable
                        + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C018E9C0) >> 5)),
         WORD1(a1) == *((_WORD *)v7 + 13))
     || WORD1(a1) == 0xFFFF
     || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
    && *((_BYTE *)v7 + 24) == 1
    && (ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4),
        v10 = *v8,
        v11 = ThreadWin32Thread,
        v10)
    && (v12 = *(_QWORD *)(v10 + 16), (*((_BYTE *)v7 + 25) & 1) == 0)
    && (!v5
     || v12 == ThreadWin32Thread
     || *(_QWORD *)(v10 + 24) == *(_QWORD *)(ThreadWin32Thread + 432)
     || (*(_DWORD *)(ThreadWin32Thread + 464) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0 && GetDesktopView(*(_QWORD *)(v11 + 400), *(_QWORD *)(v10 + 24))) )
  {
    if ( v4 && *(_DWORD *)(*(_QWORD *)(v12 + 400) + 840LL) != 1 )
      v4 = 0;
    if ( !gbValidateHandleForIL
      || !v12
      || (v14 = *(_QWORD *)(*(_QWORD *)(v12 + 400) + 832LL),
          v15 = *(_QWORD *)(*(_QWORD *)(v11 + 400) + 832LL),
          !gbEnforceUIPI)
      || (unsigned int)v15 > (unsigned int)v14
      || (_DWORD)v15 == (_DWORD)v14 && (HIDWORD(v15) == HIDWORD(v14) || HIDWORD(v15) == -1 || HIDWORD(v14) == -1)
      || v4
      && (_DWORD)v15 == (_DWORD)v14
      && (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId, HIDWORD(v15), HIDWORD(v14))
      || (v16 = *(struct tagPROCESSINFO **)(v12 + 400), *(PVOID *)v16 == gpepCSRSS) )
    {
      if ( (*(_DWORD *)(v11 + 464) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 400) + 728LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, v7) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v10;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v11 + 400), v16);
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400LL);
    return 0LL;
  }
}
