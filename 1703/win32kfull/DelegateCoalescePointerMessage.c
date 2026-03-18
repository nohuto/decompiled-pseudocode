/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01C9AC4
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0131B18 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01BAD90 (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C0198FFC (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C0199EA8 (-SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edx
  __int64 v7; // r11
  struct _LIST_ENTRY *FrameById; // rax
  int v9; // r9d
  int v10; // r10d
  __int64 v11; // r11
  struct _LIST_ENTRY *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  const struct tagPOINTERINPUTFRAME *v15; // rdx
  struct tagPOINTERINPUTFRAME *v16; // rcx
  unsigned int v17; // edi

  if ( __CFSHR__(*(_DWORD *)(a3 + 100), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 100), 6) )
      goto LABEL_3;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 100), 6) )
  {
    goto LABEL_3;
  }
  if ( !a2 )
    return 0LL;
LABEL_3:
  v6 = *(_DWORD *)(a3 + 24);
  if ( v6 == 595 )
    return 0LL;
  if ( (gdwMitConfig & 4) == 0 )
  {
    v7 = *(_QWORD *)(a3 + 40);
    if ( !v7 )
      return 0LL;
    FrameById = FindFrameById(*(_DWORD *)(v7 + 28));
    v12 = FrameById;
    if ( !FrameById )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
    v13 = *(unsigned int *)(v11 + 32);
    v14 = (__int64)v12[5].Blink + 216 * v13;
    if ( v10 )
    {
      if ( !v9 )
        goto LABEL_9;
    }
    else if ( v9 )
    {
      goto LABEL_9;
    }
    if ( !a2 )
    {
      v16 = (struct tagPOINTERINPUTFRAME *)v12;
LABEL_19:
      UnreferenceFrameInt(v16);
      return 0LL;
    }
LABEL_9:
    PointerFrameList::SetPointerInfoNodeDelegateAction(
      (PointerFrameList *)v12,
      (const struct tagPOINTERINPUTFRAME *)(unsigned int)v13,
      *(_DWORD *)(a3 + 24),
      a2,
      v9);
    v15 = (const struct tagPOINTERINPUTFRAME *)*(unsigned int *)(v14 + 8);
    v16 = (struct tagPOINTERINPUTFRAME *)v12;
    if ( (*((_DWORD *)&v12[6].Flink[1].Flink + 10 * (_QWORD)v15 + 1) & 4) == 0 )
    {
      v17 = PointerFrameList::DelegateCoalesceQFrame((PointerFrameList *)v12, v15);
      if ( !v17 )
        EtwTracePointerNoCoalesce(
          *(unsigned __int16 *)(v14 + 48),
          *(unsigned __int16 *)(v14 + 60),
          *((unsigned int *)&v12[6].Flink[1].Blink + 10 * *(unsigned int *)(v14 + 8) + 1),
          1LL);
      UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v12);
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v17 = CTouchProcessor::DelegateCoalescePointerMessage(
          gpTouchProcessor,
          *(_QWORD *)(a3 + 40),
          a2,
          -__CFSHR__(*(_DWORD *)(a3 + 100), 6),
          -__CFSHR__(*(_DWORD *)(a3 + 100), 7),
          v6);
LABEL_21:
  if ( a2 )
  {
    if ( v17 )
      DelQEntry(*(_QWORD *)(a1 + 384), a3, 1);
  }
  return v17;
}
