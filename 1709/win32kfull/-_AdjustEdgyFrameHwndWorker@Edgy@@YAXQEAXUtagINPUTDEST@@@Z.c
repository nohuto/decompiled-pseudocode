/*
 * XREFs of ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01D1BD4
 * Callers:
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01D1CC8 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01A4C18 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01A50D0 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A5CC0 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall Edgy::_AdjustEdgyFrameHwndWorker(PointerFrameList *a1, __int64 a2)
{
  PointerFrameList *v2; // rbx
  __int64 v3; // rsi
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagINPUTPOINTERNODE *v5; // rdi
  const struct tagPOINTERINFONODE *v6; // rdi
  const struct tagPOINTERINPUTFRAME *result; // rax
  struct _LIST_ENTRY *v8; // r8
  __int64 v9; // rcx
  const struct tagPOINT *v10; // [rsp+28h] [rbp-40h]
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  v2 = a1;
  v3 = *(_QWORD *)(a2 + 80);
  NodeById = FindNodeById(*(_WORD *)(*((_QWORD *)a1 + 11) + 60LL), 0, 0);
  v5 = NodeById;
  if ( NodeById )
  {
    v11[1] = v3;
    v11[0] = (char *)NodeById + 48;
    HMAssignmentLock(v11);
    *((_DWORD *)v5 + 38) = *((_DWORD *)v5 + 38) & 0xFFFFFF8F | 0x10;
  }
  do
  {
    v6 = (const struct tagPOINTERINFONODE *)*((_QWORD *)v2 + 11);
    result = (const struct tagPOINTERINPUTFRAME *)IsPointerInfoNodeValid(v6);
    if ( (_DWORD)result )
    {
      LODWORD(v10) = 0;
      PointerFrameList::SetPointerInfoNodeTarget(v2, 0LL, (struct tagWND *)v3, (struct tagWND *)1, 0LL, v10, 1, 0, 0);
      v9 = *((_QWORD *)v2 + 12);
      if ( *(_QWORD *)(v9 + 8) == -1LL )
        EndQFrameNodeDeferment(
          (struct tagPOINTERQFRAME *)v9,
          v6,
          (struct _LIST_ENTRY **)v2,
          *(_QWORD *)(*(_QWORD *)(v3 + 16) + 408LL));
      result = PointerFrameList::GetNextFrame(v2, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v8);
      v2 = result;
    }
  }
  while ( v2 );
  return result;
}
