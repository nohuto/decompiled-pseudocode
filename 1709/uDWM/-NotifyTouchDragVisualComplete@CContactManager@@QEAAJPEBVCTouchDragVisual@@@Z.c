/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180081394
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180087268 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003964C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008427C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 */

__int64 __fastcall CContactManager::NotifyTouchDragVisualComplete(
        CContactManager *this,
        const struct CTouchDragVisual *a2)
{
  int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  CDirectTouchVisual **v9; // r8
  unsigned __int64 v10; // rbp
  int Touch; // eax
  CContactManager *v12; // rcx
  __int64 v13; // r9
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 7);
    while ( *(const struct CTouchDragVisual **)(112LL * (unsigned int)v4 + v6 + 88) != a2 )
    {
      if ( (unsigned int)++v4 >= *((_DWORD *)this + 20) )
        goto LABEL_19;
    }
    if ( v4 >= 0 )
    {
      v7 = 112LL * (unsigned int)v4;
      *(_BYTE *)(v7 + v6 + 104) = 1;
      *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 8);
      v8 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v7 + v8 + 96)
        && !*(_QWORD *)(v7 + v8 + 64)
        && (*((_BYTE *)this + 324) || *(_DWORD *)(v7 + v8 + 40)) )
      {
        v9 = (CDirectTouchVisual **)(v7 + v8 + 48);
        if ( !*v9 )
        {
          v10 = *((_QWORD *)a2 + 36);
          Touch = CreateTouchVisual<CDirectTouchVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v10,
                    v9);
          v5 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x482u);
            goto LABEL_19;
          }
          CContactManager::AddToTouchNode(v12, v10, *(struct CVisual ***)(v7 + *((_QWORD *)this + 7) + 48));
        }
        if ( *((_BYTE *)this + 324) )
          v13 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
        else
          v13 = *(unsigned int *)(v7 + *((_QWORD *)this + 7) + 40);
        CDirectTouchVisual::StartDown(
          *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 48),
          v7 + *((_QWORD *)this + 7) + 8LL,
          v7 + *((_QWORD *)this + 7) + 24LL,
          v13);
      }
    }
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v5;
}
