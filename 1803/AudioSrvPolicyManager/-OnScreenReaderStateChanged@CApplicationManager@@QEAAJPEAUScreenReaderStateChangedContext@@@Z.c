/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18001E620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sddd @ 0x180019F24 (WPP_SF_Sddd.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180026A78 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     pow @ 0x180035AE4 (pow.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct ScreenReaderStateChangedContext *a2)
{
  const wchar_t *v4; // r9
  int v5; // ecx
  int v6; // eax
  float v7; // xmm3_4
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+80h] [rbp+8h] BYREF
  float v16; // [rsp+88h] [rbp+10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v15 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = L"Disabled";
    if ( *((_DWORD *)a2 + 2) )
      v4 = L"Enabled";
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *(unsigned int *)(*(_QWORD *)a2 + 216LL),
      *(unsigned int *)(*(_QWORD *)a2 + 220LL),
      v4,
      *(_DWORD *)(*(_QWORD *)a2 + 220LL),
      *(_DWORD *)(*(_QWORD *)a2 + 216LL),
      *((_DWORD *)a2 + 3));
  }
  v5 = 0;
  if ( *((int *)a2 + 3) <= 0 )
    v5 = *((_DWORD *)a2 + 3);
  v6 = -24;
  if ( v5 > -24 )
    v6 = v5;
  *((_DWORD *)a2 + 3) = v6;
  v16 = (float)v6;
  if ( COERCE_INT((float)v6) == -8388608 )
    v7 = 0.0;
  else
    v7 = pow(10.0, (float)v6 / 20.0);
  v8 = TsSessionIdScreenReaderStateChanged(
         *(_DWORD *)(*(_QWORD *)a2 + 220LL),
         *(_DWORD *)(*(_QWORD *)a2 + 216LL),
         *((_DWORD *)a2 + 2),
         v7,
         &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v8);
    }
    AudPolicyLogError("CApplicationManager::OnScreenReaderStateChanged", 2896, v9);
  }
  else
  {
    v10 = *((_DWORD *)a2 + 2) == 0;
    v11 = *(_DWORD *)(*(_QWORD *)a2 + 536LL);
    *(_DWORD *)(*(_QWORD *)a2 + 536LL) = v10;
    if ( v15 || v11 != v10 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)(*(_QWORD *)a2 + 220LL), 3u);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
