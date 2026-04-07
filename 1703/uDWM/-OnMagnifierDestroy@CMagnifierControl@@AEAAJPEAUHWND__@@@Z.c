/*
 * XREFs of ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18007E090
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18007DB20 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18007E25C (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierDestroy(CMagnifierControl *this, __int64 a2)
{
  unsigned int v2; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rsi
  CBaseObject **Element; // rax
  CMagnifierControl::MagnifierTableElement *v5; // rdi
  CBaseObject *v6; // rcx

  v2 = 0;
  if ( (dword_1800C470C & 1) == 0 )
  {
    dword_1800C4600 = -2147023728;
    dword_1800C470C |= 1u;
  }
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 64);
  Element = (CBaseObject **)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
                              (struct _RTL_GENERIC_TABLE *)((char *)this + 64),
                              a2);
  v5 = (CMagnifierControl::MagnifierTableElement *)Element;
  if ( Element )
  {
    v6 = Element[1];
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *((_QWORD *)v5 + 1) = 0LL;
    }
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(v3, v5);
  }
  else
  {
    v2 = -2147023728;
    MilInstrumentationCheckHR(0x14u, &dword_1800C4600, 1LL, -2147023728, 0x226u);
  }
  return v2;
}
