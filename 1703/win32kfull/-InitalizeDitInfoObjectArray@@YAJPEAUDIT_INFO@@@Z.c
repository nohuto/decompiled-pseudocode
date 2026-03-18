/*
 * XREFs of ?InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z @ 0x1C019C9C8
 * Callers:
 *     UserActivateDwmInputProcessing @ 0x1C01A0F20 (UserActivateDwmInputProcessing.c)
 * Callees:
 *     InitDitIocpSupport @ 0x1C01A02EC (InitDitIocpSupport.c)
 */

__int64 __fastcall InitalizeDitInfoObjectArray(struct DIT_INFO *a1)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 result; // rax

  *((_QWORD *)a1 + 4) = Win32AllocPoolNonPaged(32LL, 2037609301LL);
  v2 = Win32AllocPoolNonPaged(192LL, 2001433429LL);
  v3 = *((_QWORD *)a1 + 4) == 0LL;
  *((_QWORD *)a1 + 5) = v2;
  if ( v3 || !v2 )
    return 3221225495LL;
  *((_QWORD *)a1 + 9) = (char *)a1 + 64;
  *((_QWORD *)a1 + 8) = (char *)a1 + 64;
  v4 = *((unsigned int *)a1 + 14);
  ghDITResetEvent = *(_QWORD *)a1;
  ghDITMmcssEvent = *((_QWORD *)a1 + 1);
  ghDITInputApcDoneEvent = (HANDLE)*((_QWORD *)a1 + 2);
  result = InitDitIocpSupport(v4);
  if ( (int)result >= 0 )
  {
    **((_QWORD **)a1 + 4) = ghDITResetEvent;
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) = ghDITMmcssEvent;
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL) = ghDITInputApcDoneEvent;
    *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = ghDITEvent;
    *((_DWORD *)a1 + 12) = 4;
  }
  return result;
}
