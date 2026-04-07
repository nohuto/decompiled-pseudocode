/*
 * XREFs of ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012174
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800043CC (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800419B0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800945A0 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180094988 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x18009C928 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009ED48 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationEngine::RegisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  unsigned int v3; // ebx
  char v4; // r8
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF
  struct IAnimationListener *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *((_BYTE *)this + 120) == 0 ? 0x800401F0 : 0;
  if ( !*((_BYTE *)this + 120) )
  {
    v14 = 542;
LABEL_21:
    v13 = v3;
    goto LABEL_22;
  }
  v4 = 0;
  v5 = -1;
  v6 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    v7 = *((_QWORD *)this + 9);
    while ( *(struct IAnimationListener **)(v7 + 8 * v6) != v16 )
    {
      if ( v5 < 0 && !*(_QWORD *)(v7 + 8 * v6) )
        v5 = v6;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 24) )
        goto LABEL_9;
    }
    v4 = 1;
  }
LABEL_9:
  if ( v4 )
    goto LABEL_12;
  if ( v5 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * (unsigned int)v5) = v16;
    goto LABEL_12;
  }
  v9 = *((unsigned int *)this + 24);
  v10 = (unsigned int)v15;
  v11 = v9 + 1;
  if ( (int)v9 + 1 >= (unsigned int)v9 )
    v10 = v9 + 1;
  v3 = v11 < (unsigned int)v9 ? 0x80070216 : 0;
  if ( v11 < (unsigned int)v9 )
  {
    v14 = 181;
    goto LABEL_21;
  }
  if ( v10 <= *((_DWORD *)this + 23) )
  {
    *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v9) = v16;
    *((_DWORD *)this + 24) = v10;
    goto LABEL_12;
  }
  v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 72, 8LL, 1LL, &v16);
  v3 = v12;
  if ( v12 < 0 )
  {
    v14 = 192;
    v13 = v12;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v3;
}
