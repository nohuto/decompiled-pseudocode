/*
 * XREFs of KiQueryProcessorNode @ 0x14013936C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlpGetLpcbByApicId @ 0x1401EA830 (HvlpGetLpcbByApicId.c)
 *     HvlpGetLpcbByLpIndex @ 0x1401EA860 (HvlpGetLpcbByLpIndex.c)
 *     KiFindFirstAvailableNode @ 0x140204588 (KiFindFirstAvailableNode.c)
 *     KiIsNodeFull @ 0x1402045EC (KiIsNodeFull.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned __int16 v6; // bp
  unsigned int ProcessorNode; // eax
  unsigned int FirstAvailableNode; // r10d
  char v9; // r11
  __int64 LpcbByLpIndex; // rax
  __int64 LpcbByApicId; // rax

  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
  {
    v6 = *a3;
    if ( KiNumaQueryProcessorNode )
    {
      ProcessorNode = KiNumaQueryProcessorNode(a1);
      FirstAvailableNode = ProcessorNode;
      if ( !ProcessorNode )
      {
        if ( *a3 != 0xFFFF )
        {
LABEL_5:
          v9 = 2;
          if ( (*(_BYTE *)(KeNodeBlock[*a3] + 173) & 2) == 0 )
            FirstAvailableNode = -1073741275;
          if ( *a2 == -1 )
          {
            *a2 = -1;
            if ( (HvlpFlags & 2) != 0 )
            {
              LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
              if ( LpcbByLpIndex )
                *a2 = *(_DWORD *)(LpcbByLpIndex + 8);
            }
          }
          if ( ((unsigned __int8)HvlpFlags & (unsigned __int8)v9) == 0 )
            return FirstAvailableNode;
          LpcbByApicId = HvlpGetLpcbByApicId((unsigned int)*a2);
          if ( LpcbByApicId )
          {
            if ( *(_DWORD *)(LpcbByApicId + 48) )
              return FirstAvailableNode;
          }
          return (unsigned int)-1073741275;
        }
        FirstAvailableNode = KiFindFirstAvailableNode(a3);
LABEL_19:
        if ( FirstAvailableNode )
          return FirstAvailableNode;
        goto LABEL_5;
      }
      if ( ProcessorNode != -1073741275 )
        goto LABEL_19;
      if ( v6 == 0xFFFF || (unsigned __int8)KiIsNodeFull(KeNodeBlock[v6]) )
        return FirstAvailableNode;
      *a3 = v6;
    }
    else
    {
      if ( a1 >= KiMaximumGroupSize )
        return (unsigned int)-1073741275;
      *a3 = 0;
    }
    FirstAvailableNode = 0;
    goto LABEL_19;
  }
  _mm_lfence();
  *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 146LL);
  return 0LL;
}
