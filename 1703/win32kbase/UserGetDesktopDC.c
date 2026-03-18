/*
 * XREFs of UserGetDesktopDC @ 0x1C0026B64
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C0089080 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  __int64 DisplayDC; // rax
  __int64 v11; // rbx
  _QWORD *v13; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v6 = *((_QWORD *)gpDispInfo + 4);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 110) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 720LL) + 24LL) & 1 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 51) + 8LL) + 16LL);
    if ( v13 )
      v13 = (_QWORD *)*v13;
    if ( !ValidateHwndEx(v13) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v6, a1, a2);
    goto LABEL_12;
  }
  v9 = *((_QWORD *)gptiCurrent + 51);
  if ( v9 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), 0LL, 2155872259LL);
LABEL_12:
    v11 = DisplayDC;
    goto LABEL_13;
  }
LABEL_16:
  v11 = 0LL;
LABEL_13:
  if ( !v14 )
    UserSessionSwitchLeaveCrit();
  return v11;
}
