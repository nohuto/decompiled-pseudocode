/*
 * XREFs of ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18008D068
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18008A5E8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18008C180 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DB50 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCContactStationaryVisual@@@Z @ 0x1800889AC (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCContactStationar.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008D9B8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 */

__int64 __fastcall CContactManager::StartStationaryAnimationWithDelay(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // rax
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // ebx
  CContactManager *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-30h]
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v22; // [rsp+40h] [rbp-10h] BYREF

  v7 = *a4;
  v22 = 0LL;
  *(_QWORD *)((char *)&v21 + 4) = v7;
  LODWORD(v21) = a2;
  v11 = CreateTouchVisual<CContactStationaryVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          a6,
          &v22);
  v13 = v11;
  if ( v11 < 0 )
  {
    v19 = 2081;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v19);
    goto LABEL_16;
  }
  if ( (int)CContactManager::AddToTouchNode(v12, a6, (struct CVisual **)v22) < 0 )
  {
    if ( v22 )
    {
      CBaseObject::Release(v22);
      v22 = 0LL;
    }
  }
  else
  {
    v11 = CContactStationaryVisual::Start(v22, a3, a4, a5, a7);
    v13 = v11;
    if ( v11 < 0 )
    {
      v19 = 2084;
      goto LABEL_3;
    }
    v15 = *(unsigned int *)(a1 + 144);
    v16 = v15 + 1;
    if ( (int)v15 + 1 >= (unsigned int)v15 )
    {
      if ( v16 > *(_DWORD *)(a1 + 140) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 24, 1, &v21);
        if ( v11 < 0 )
        {
          v19 = 192;
          goto LABEL_3;
        }
      }
      else
      {
        v14 = (CContactManager *)(3 * v15);
        v17 = *(_QWORD *)(a1 + 120);
        *(_OWORD *)(v17 + 8LL * (_QWORD)v14) = v21;
        *(_QWORD *)(v17 + 8LL * (_QWORD)v14 + 16) = v22;
        *(_DWORD *)(a1 + 144) = v16;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, (int)v15 + 1 < (unsigned int)v15 ? 0x80070216 : 0, 0xB5u);
    }
  }
LABEL_16:
  if ( v13 < 0 )
  {
    if ( v22 )
    {
      CContactManager::RemoveFromTouchNode(v14, a6, v22);
      if ( v22 )
        CBaseObject::Release(v22);
    }
  }
  return (unsigned int)v13;
}
