/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0
 * Callers:
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0004B00 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     W32kEtwEnableCallback @ 0x1C0074FA0 (W32kEtwEnableCallback.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0052258 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C00531CC (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084864 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00856D4 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0153C14 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 */

void __fastcall CitEtwEnableCallback(const struct _GUID *a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h]

  if ( (_BYTE)g_CompatImpact && !byte_1C018E851 && a2 == 2 && a3 == 2048 && a1 )
  {
    v6 = (__int128)*a1;
    LODWORD(v6) = 0;
    v3 = (unsigned __int16)WORD2(*(_QWORD *)&a1->Data1);
    WORD2(v6) = 0;
    v4 = v6 - *(_QWORD *)&CitControlGuid.Data1;
    if ( (_QWORD)v6 == *(_QWORD *)&CitControlGuid.Data1 )
      v4 = *((_QWORD *)&v6 + 1) - *(_QWORD *)CitControlGuid.Data4;
    if ( !v4 && qword_1C018E8C8 )
    {
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      switch ( v3 )
      {
        case 1:
          CitpContextFlush(qword_1C018E8C8, v5, 2048LL, 0LL);
          break;
        case 2:
          CitpSetForegroundProcess(qword_1C018E8C8, v5, 0LL, 0LL, 0LL, 0LL);
          CitpContextReinitialize(qword_1C018E8C8, v5);
          break;
        case 5:
          dword_1C018E8D4 = 0;
          CitpTimeUpdate(v5);
          break;
        case 14:
          CitpResetTracking();
          break;
        case 15:
          CitpInteractionSummariesFlush(qword_1C018E8C8);
          break;
        case 11:
          CitpPostUpdateUseInfoLoad(qword_1C018E8C8);
          break;
        case 12:
          CitpPostUpdateUseInfoLog(qword_1C018E8C8, 2);
          break;
      }
    }
  }
}
