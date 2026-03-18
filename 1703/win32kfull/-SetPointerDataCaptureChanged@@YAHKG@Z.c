/*
 * XREFs of ?SetPointerDataCaptureChanged@@YAHKG@Z @ 0x1C01C74C8
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01BB90C (_DelegateCapturePointers.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C8968 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01991B4 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall SetPointerDataCaptureChanged(unsigned int a1, unsigned __int16 a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *FrameById; // rax
  __int16 v4; // r10
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  struct tagPOINTERINPUTFRAME *v6; // rcx
  int v7; // r8d

  if ( (gdwMitConfig & 4) != 0 )
  {
    return (unsigned int)CTouchProcessor::SetPointerInfoNodeFlagFromEdition(gpTouchProcessor, a1, a2, 0x200000u);
  }
  else
  {
    FrameById = FindFrameById(a1);
    v2 = 0;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
      NodeInFrame = FindNodeInFrame((const struct tagPOINTERINPUTFRAME *)FrameById, v4, 0LL);
      if ( NodeInFrame )
      {
        *((_DWORD *)NodeInFrame + 17) |= 0x200000u;
        v2 = v7 + 1;
      }
      UnreferenceFrameInt(v6);
    }
  }
  return v2;
}
