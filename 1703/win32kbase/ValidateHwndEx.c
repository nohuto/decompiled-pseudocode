/*
 * XREFs of ValidateHwndEx @ 0x1C0071600
 * Callers:
 *     UserGetDesktopDC @ 0x1C0026B64 (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     ValidateHwnd @ 0x1C00715E0 (ValidateHwnd.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01182FC (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C011842C (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00718B8 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0071970 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall ValidateHwndEx(void *a1, int a2, int a3)
{
  char *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagPROCESSINFO *v15; // rdx

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_30;
  v6 = (char *)qword_1C0189E38 + (unsigned int)(unsigned __int16)a1 * dword_1C0189E40;
  v7 = (__int64 *)((char *)gpKernelHandleTable
                 + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0189E40) >> 5));
  if ( WORD1(a1) != *((_WORD *)v6 + 13) && WORD1(a1) != 0xFFFF && (WORD1(a1) || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_30;
  if ( v6[24] != 1 )
    goto LABEL_30;
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  v10 = *v7;
  if ( v10
    && (v11 = *(_QWORD *)(v10 + 16), (v6[25] & 1) == 0)
    && (!a2
     || v11 == v8
     || *(_QWORD *)(v10 + 24) == *(_QWORD *)(v8 + 408)
     || (*(_DWORD *)(v8 + 440) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0 && GetDesktopView(*(_QWORD *)(v8 + 376), *(_QWORD *)(v10 + 24))) )
  {
    if ( a3 && *(_DWORD *)(*(_QWORD *)(v11 + 376) + 832LL) != 1 )
      a3 = 0;
    if ( !gbValidateHandleForIL
      || !v11
      || (v13 = *(_QWORD *)(*(_QWORD *)(v11 + 376) + 824LL),
          v14 = *(_QWORD *)(*(_QWORD *)(v8 + 376) + 824LL),
          !gbEnforceUIPI)
      || (unsigned int)v14 > (unsigned int)v13
      || (_DWORD)v14 == (_DWORD)v13 && (HIDWORD(v14) == HIDWORD(v13) || HIDWORD(v14) == -1 || HIDWORD(v13) == -1)
      || a3
      && (_DWORD)v14 == (_DWORD)v13
      && (unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId, HIDWORD(v14), HIDWORD(v13))
      || (v15 = *(struct tagPROCESSINFO **)(v11 + 376), *(PVOID *)v15 == gpepCSRSS) )
    {
      if ( (*(_DWORD *)(v8 + 440) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 376) + 720LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v6) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v10;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v8 + 376), v15);
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
LABEL_30:
    UserSetLastError(1400LL);
    return 0LL;
  }
}
