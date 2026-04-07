/*
 * XREFs of ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800949D8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096C30 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180092F44 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

void __fastcall CAppArrangementBase::_AddToAnimatingMonitors(CAppArrangementBase *this, const struct tagRECT *a2)
{
  __int64 v3; // r11
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // eax
  HMONITOR v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = MonitorFromRect(a2, 0);
  if ( v8 && !(unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)this + 152, &v8) )
  {
    v4 = *(unsigned int *)(v3 + 24);
    v5 = (unsigned int)v8;
    v6 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v5 = v4 + 1;
    if ( v6 >= (unsigned int)v4 )
    {
      if ( v5 > *(_DWORD *)(v3 + 20) )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8u, 1, &v8);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v8;
        *(_DWORD *)(v3 + 24) = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6 < (unsigned int)v4 ? 0x80070216 : 0, 0xB5u);
    }
  }
}
