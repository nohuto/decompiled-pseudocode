/*
 * XREFs of ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C010F8EC
 * Callers:
 *     ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C010FA38 (-CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C010FB2C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

char __fastcall CTouchProcessor::CreateInputPointerNode(CTouchProcessor *this, struct tagPOINTEREVENTINT *a2)
{
  unsigned __int16 v2; // bp
  unsigned int v3; // r14d
  char v4; // si
  unsigned int v5; // r15d
  struct CInputPointerNode *NodeById; // rax

  v2 = *(_WORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xEEu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  NodeById = CTouchProcessor::FindNodeById(this, v2, 1, 1);
  if ( NodeById || (NodeById = CTouchProcessor::CreateNode(this, v2, v3, v5), v4 = 1, NodeById) )
  {
    *((_DWORD *)a2 + 3) = *((unsigned __int16 *)NodeById + 16);
    if ( v4 )
      *((_DWORD *)a2 + 5) |= 1u;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xF1u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 1;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xEFu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0xF0u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    return 0;
  }
}
