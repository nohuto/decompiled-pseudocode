/*
 * XREFs of ?_MonitorEnumCallback@CVirtualDesktopSwitch@@AEAAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@@Z @ 0x180096028
 * Callers:
 *     ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18009A580 (-s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

_BOOL8 __fastcall CVirtualDesktopSwitch::_MonitorEnumCallback(
        CVirtualDesktopSwitch *this,
        HMONITOR a2,
        HDC a3,
        struct tagRECT *a4)
{
  unsigned int v4; // edx
  char *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // eax

  v4 = (unsigned int)a3;
  v5 = (char *)this + 152;
  v6 = *((unsigned int *)v5 + 6);
  v7 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v4 = v6 + 1;
  v8 = v7 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v7 >= (unsigned int)v6 )
  {
    if ( v4 > *((_DWORD *)v5 + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 0x10u, 1, a4);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(struct tagRECT *)(*(_QWORD *)v5 + 16 * v6) = *a4;
      *((_DWORD *)v5 + 6) = v4;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
  }
  return v8 >= 0;
}
