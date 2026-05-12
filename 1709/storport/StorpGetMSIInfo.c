/*
 * XREFs of StorpGetMSIInfo @ 0x1C001C920
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 */

__int64 __fastcall StorpGetMSIInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  unsigned __int8 *v6; // r8
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rdx

  v3 = 0;
  if ( !a1 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 57LL;
LABEL_13:
    WPP_SF_(v8->AttachedDevice, v9, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
    return (unsigned int)-1056964602;
  }
  if ( !a3 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 58LL;
    goto LABEL_13;
  }
  v5 = *(_QWORD *)(a1 - 16);
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 4449LL) )
    return (unsigned int)-1056964601;
  v6 = *(unsigned __int8 **)(*(_QWORD *)v5 + 4432LL);
  if ( a2 < *((_DWORD *)v6 + 1) )
  {
    *(_DWORD *)a3 = a2;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)&v6[48 * a2 + 32];
    *(_QWORD *)(a3 + 8) = *(_QWORD *)&v6[48 * a2 + 8];
    *(_DWORD *)(a3 + 16) = *(_DWORD *)&v6[48 * a2 + 36];
    *(_DWORD *)(a3 + 20) = *v6;
    *(_DWORD *)(a3 + 24) = *(_DWORD *)&v6[48 * a2 + 44];
    return v3;
  }
  return (unsigned int)-1056964602;
}
