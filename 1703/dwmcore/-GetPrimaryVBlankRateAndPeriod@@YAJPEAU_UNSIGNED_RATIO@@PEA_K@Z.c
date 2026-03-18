/*
 * XREFs of ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B6A88
 * Callers:
 *     ?Initialize@CRateInfo@@QEAAJXZ @ 0x1800B8370 (-Initialize@CRateInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPrimaryVBlankRateAndPeriod(struct _UNSIGNED_RATIO *a1, unsigned __int64 *a2)
{
  UINT32 *v3; // rdi
  int CurrentDisplaySet; // eax
  unsigned int v6; // ebx
  int PrimaryDisplay; // eax
  unsigned __int64 v8; // rdx
  CDisplaySet *v10; // [rsp+60h] [rbp+18h] BYREF
  struct CDisplay *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)a1, &v10);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x89u);
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
      a1->uiNumerator = *((_DWORD *)v11 + 66);
      a1->uiDenominator = v3[67];
LABEL_5:
      v8 = 10000000 * (unsigned __int64)a1->uiDenominator % a1->uiNumerator;
      *a2 = 10000000 * (unsigned __int64)a1->uiDenominator / a1->uiNumerator;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x97u);
    v3 = (UINT32 *)v11;
  }
LABEL_6:
  if ( v10 )
    CDisplaySet::Release(v10);
  if ( v3 )
    (*(void (__fastcall **)(UINT32 *, unsigned __int64))(*(_QWORD *)v3 + 8LL))(v3, v8);
  return v6;
}
