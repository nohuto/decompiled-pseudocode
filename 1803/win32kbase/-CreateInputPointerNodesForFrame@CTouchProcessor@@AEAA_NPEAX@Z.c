/*
 * XREFs of ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C010FA38
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0119C5C (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C010F8EC (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 */

char __fastcall CTouchProcessor::CreateInputPointerNodesForFrame(CTouchProcessor *this, _DWORD *a2)
{
  unsigned int v4; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x22u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v4 = 0;
  if ( a2[12] )
  {
    while ( CTouchProcessor::CreateInputPointerNode(
              this,
              (struct tagPOINTEREVENTINT *)(576LL * v4 + *((_QWORD *)a2 + 12) + 224LL)) )
    {
      if ( ++v4 >= a2[12] )
        goto LABEL_6;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x23u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 0;
  }
  else
  {
LABEL_6:
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x24u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 1;
  }
}
