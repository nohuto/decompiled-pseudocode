/*
 * XREFs of ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800BFFC4
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPrimaryVBlankRateAndPeriod(struct _UNSIGNED_RATIO *a1, LONGLONG *a2)
{
  UINT32 *v3; // rdi
  signed int CurrentDisplaySet; // eax
  unsigned int v6; // ebx
  signed int PrimaryDisplay; // eax
  LONGLONG v8; // rdx
  CDisplaySet *v10; // [rsp+60h] [rbp+18h] BYREF
  struct CDisplay *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)a1, &v10);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0x89u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v10, &v11);
    v3 = (UINT32 *)v11;
    v6 = PrimaryDisplay;
    if ( PrimaryDisplay == -2003292412 )
    {
      a1->uiNumerator = 60;
      v6 = 0;
      a1->uiDenominator = 1;
      goto LABEL_5;
    }
    if ( PrimaryDisplay >= 0 )
    {
      a1->uiNumerator = *((_DWORD *)v11 + 67);
      a1->uiDenominator = v3[68];
LABEL_5:
      v8 = g_qpcFrequency.QuadPart * a1->uiDenominator % a1->uiNumerator;
      *a2 = g_qpcFrequency.QuadPart * a1->uiDenominator / a1->uiNumerator;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PrimaryDisplay, 0x97u);
    v3 = (UINT32 *)v11;
  }
LABEL_6:
  if ( v10 )
    CDisplaySet::Release(v10);
  if ( v3 )
    (*(void (__fastcall **)(UINT32 *, LONGLONG))(*(_QWORD *)v3 + 8LL))(v3, v8);
  return v6;
}
