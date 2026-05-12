/*
 * XREFs of RaUnitUnresponsiveAttributeMgmt @ 0x1C003BF80
 * Callers:
 *     RaUnitAttributeManagement @ 0x1C0039E6C (RaUnitAttributeManagement.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C003A0A8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003B010 (RaUnitSetUnresponsiveAttribute.c)
 */

__int64 __fastcall RaUnitUnresponsiveAttributeMgmt(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // rax
  PDEVICE_OBJECT v4; // r10
  unsigned __int16 v5; // dx

  v2 = -1073741811;
  if ( *(_DWORD *)(a1 + 652) || *(_DWORD *)(a1 + 660) || *(_DWORD *)(a1 + 656) || (*(_BYTE *)(a1 + 154) & 1) != 0 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v5 = 56;
    goto LABEL_20;
  }
  v3 = *(_BYTE **)(a1 + 96);
  if ( v3 && (*v3 & 0x1F) != 0 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v5 = 57;
LABEL_20:
    WPP_SF_q((__int64)v4->AttachedDevice, v5, (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids, a1);
    return (unsigned int)-1073741637;
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
