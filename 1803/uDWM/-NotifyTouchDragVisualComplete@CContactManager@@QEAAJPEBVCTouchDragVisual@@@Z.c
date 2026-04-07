/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x18008A2E4
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180090338 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003D3A8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008D36C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 */

__int64 __fastcall CContactManager::NotifyTouchDragVisualComplete(
        CContactManager *this,
        const struct CTouchDragVisual *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // al
  CDirectTouchVisual **v11; // r8
  unsigned __int64 v12; // rbp
  int Touch; // eax
  CContactManager *v14; // rcx
  __int64 v15; // r9
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 7);
    while ( 1 )
    {
      v7 = v4;
      if ( *(const struct CTouchDragVisual **)(112LL * v4 + v6 + 88) == a2 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 20) )
        goto LABEL_18;
    }
    if ( (v4 & 0x80000000) == 0 )
    {
      v8 = 112LL * v4;
      *(_BYTE *)(v8 + v6 + 104) = 1;
      *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(v8 + *((_QWORD *)this + 7) + 8);
      v9 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(112 * v7 + v9 + 96) && !*(_QWORD *)(v8 + v9 + 64) )
      {
        v10 = *((_BYTE *)this + 324);
        if ( v10 || *(_DWORD *)(v8 + v9 + 40) )
        {
          v11 = (CDirectTouchVisual **)(v8 + v9 + 48);
          if ( !*v11 )
          {
            v12 = *((_QWORD *)a2 + 36);
            Touch = CreateTouchVisual<CDirectTouchVisual>(
                      *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                      v12,
                      v11);
            v5 = Touch;
            if ( Touch < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x482u);
              goto LABEL_18;
            }
            CContactManager::AddToTouchNode(v14, v12, *(struct CVisual ***)(v8 + *((_QWORD *)this + 7) + 48));
            v10 = *((_BYTE *)this + 324);
            v9 = *((_QWORD *)this + 7);
          }
          v15 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
          if ( !v10 )
            v15 = *(unsigned int *)(v8 + v9 + 40);
          CDirectTouchVisual::StartDown(*(_QWORD *)(v8 + v9 + 48), v8 + v9 + 8, v8 + v9 + 24, v15);
        }
      }
    }
  }
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v5;
}
