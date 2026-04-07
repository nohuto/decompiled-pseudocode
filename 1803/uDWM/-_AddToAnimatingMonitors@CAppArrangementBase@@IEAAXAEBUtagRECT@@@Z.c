/*
 * XREFs of ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x18009D0B8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009EF30 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180084500 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CAppArrangementBase::_AddToAnimatingMonitors(CAppArrangementBase *this, const struct tagRECT *a2)
{
  __int64 v3; // r11
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  HMONITOR v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = MonitorFromRect(a2, 0);
  if ( v7 && !(unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)this + 152, &v7) )
  {
    v4 = *(_DWORD *)(v3 + 24);
    v5 = v4 + 1;
    if ( v4 + 1 >= v4 )
    {
      if ( v5 > *(_DWORD *)(v3 + 20) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8, 1, &v7);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 24)) = v7;
        *(_DWORD *)(v3 + 24) = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4 + 1 < v4 ? 0x80070216 : 0, 0xB5u);
    }
  }
}
