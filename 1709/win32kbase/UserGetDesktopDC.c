/*
 * XREFs of UserGetDesktopDC @ 0x1C005C284
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0059EE0 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C008E550 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  __int64 v6; // r9
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 DisplayDC; // rax
  __int64 v16; // rbx
  _QWORD *v18; // rcx
  int v19; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  v7 = *(_QWORD *)(gpDispInfo + 32);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 116) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 728LL) + 24LL) & 1 )
  {
    v18 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 54) + 8LL) + 16LL);
    if ( v18 )
      v18 = (_QWORD *)*v18;
    if ( !ValidateHwndEx(v18, 1LL, 0LL, v6) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = (__int64)GreCreateDisplayDC(v7, a1, a2);
    goto LABEL_12;
  }
  v14 = *((_QWORD *)gptiCurrent + 54);
  if ( v14 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), 0LL, 2155872259LL);
LABEL_12:
    v16 = DisplayDC;
    goto LABEL_13;
  }
LABEL_16:
  v16 = 0LL;
LABEL_13:
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v16;
}
