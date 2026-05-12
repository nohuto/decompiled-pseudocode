/*
 * XREFs of StorpGetMSIInfo @ 0x1C0032B60
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 */

__int64 __fastcall StorpGetMSIInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  __int64 v7; // rax
  unsigned __int8 *v8; // r8

  v3 = 0;
  if ( !a1 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 57;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 58;
LABEL_6:
    WPP_SF_((__int64)v5->AttachedDevice, v6, (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
    return (unsigned int)-1056964602;
  }
  v7 = *(_QWORD *)(a1 - 16);
  if ( !*(_BYTE *)(*(_QWORD *)v7 + 4449LL) )
    return (unsigned int)-1056964601;
  v8 = *(unsigned __int8 **)(*(_QWORD *)v7 + 4432LL);
  if ( a2 < *((_DWORD *)v8 + 1) )
  {
    *(_DWORD *)a3 = a2;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)&v8[48 * a2 + 32];
    *(_QWORD *)(a3 + 8) = *(_QWORD *)&v8[48 * a2 + 8];
    *(_DWORD *)(a3 + 16) = *(_DWORD *)&v8[48 * a2 + 36];
    *(_DWORD *)(a3 + 20) = *v8;
    *(_DWORD *)(a3 + 24) = *(_DWORD *)&v8[48 * a2 + 44];
    return v3;
  }
  return (unsigned int)-1056964602;
}
