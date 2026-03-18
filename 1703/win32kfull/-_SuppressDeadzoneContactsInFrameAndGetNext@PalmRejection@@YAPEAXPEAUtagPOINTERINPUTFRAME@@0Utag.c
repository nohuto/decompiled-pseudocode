/*
 * XREFs of ?_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C01D43EC
 * Callers:
 *     ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C01D4324 (-_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z @ 0x1C01965A0 (-TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01992B0 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall PalmRejection::_SuppressDeadzoneContactsInFrameAndGetNext(
        PalmRejection *this,
        struct tagPOINTERINPUTFRAME *a2,
        struct tagPOINT a3,
        struct tagPOINT a4)
{
  int v4; // r15d
  unsigned int v5; // r14d
  struct tagPOINT v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdx
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  unsigned __int64 v13; // rsi
  _OWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v16; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)a2 + 10) )
  {
    v9 = v16;
    do
    {
      v10 = *((_QWORD *)a2 + 11) + 216LL * v5;
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v10) )
      {
        if ( (*(_DWORD *)(v10 + 68) & 0x10000) != 0
          && (v11 = *(_QWORD *)(v10 + 112),
              v15[0] = *(_OWORD *)(*((_QWORD *)a2 + 13) + 156LL),
              (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMIsPointInPenDeadzone)(v15, v11, a3)) )
        {
          *(_DWORD *)v10 |= 0x1000u;
          v4 = 1;
          v9 = *(struct tagPOINT *)(v10 + 112);
        }
        else
        {
          if ( this )
          {
            ValidNodeInFrame = FindValidNodeInFrame(this, *(_WORD *)(v10 + 60), 0LL);
            if ( ValidNodeInFrame )
            {
              if ( (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
                *(_DWORD *)v10 |= 0x1000u;
            }
          }
          if ( !v4 )
            goto LABEL_14;
        }
        v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)v13 - gPalmRejectLastLoggedTelemTime > 0x493E0 )
        {
          TraceLoggingEdgePalmRejection(v9, a3);
          gPalmRejectLastLoggedTelemTime = v13;
        }
      }
LABEL_14:
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 10) );
  }
  return PointerFrameList::GetNextFrame(
           a2,
           (const struct tagPOINTERINPUTFRAME *)&gFrameListHead,
           *(struct _LIST_ENTRY **)&a3);
}
