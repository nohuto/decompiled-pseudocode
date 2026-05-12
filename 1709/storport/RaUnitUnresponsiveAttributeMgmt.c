/*
 * XREFs of RaUnitUnresponsiveAttributeMgmt @ 0x1C003D888
 * Callers:
 *     RaUnitAttributeManagement @ 0x1C003BBBC (RaUnitAttributeManagement.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C003BDF8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003CD54 (RaUnitSetUnresponsiveAttribute.c)
 */

__int64 __fastcall RaUnitUnresponsiveAttributeMgmt(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // rax
  char v4; // al
  PDEVICE_OBJECT v5; // r10
  unsigned __int16 v6; // dx

  v2 = -1073741811;
  if ( *(_DWORD *)(a1 + 684) || *(_DWORD *)(a1 + 692) || *(_DWORD *)(a1 + 688) || (*(_BYTE *)(a1 + 154) & 1) != 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v6 = 54;
    goto LABEL_21;
  }
  v3 = *(_BYTE **)(a1 + 96);
  if ( v3 )
  {
    v4 = *v3 & 0x1F;
    if ( v4 )
    {
      if ( v4 != 20 )
      {
        v5 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          return (unsigned int)-1073741637;
        }
        v6 = 55;
LABEL_21:
        WPP_SF_q((__int64)v5->AttachedDevice, v6, (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids, a1);
        return (unsigned int)-1073741637;
      }
    }
  }
  if ( a2 == 1 )
  {
    return (unsigned int)RaUnitSetUnresponsiveAttribute(a1);
  }
  else
  {
    if ( a2 )
      return v2;
    return (unsigned int)RaUnitClearUnresponsiveAttribute(a1);
  }
}
