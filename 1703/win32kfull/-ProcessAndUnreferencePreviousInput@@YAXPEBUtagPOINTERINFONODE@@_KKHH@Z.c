/*
 * XREFs of ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01C72CC
 * Callers:
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01C5760 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01C5C3C (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall ProcessAndUnreferencePreviousInput(
        const struct tagPOINTERINFONODE *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  int v9; // esi
  struct _LIST_ENTRY *FrameById; // rax
  _DWORD *v11; // rdx
  HWND v12; // rdx
  int v13; // r9d

  if ( (*((_DWORD *)a1 + 17) & 1) == 0 )
  {
    if ( a2 )
    {
      v9 = 0;
      FrameById = FindFrameById(*(_DWORD *)(a2 + 28));
      if ( FrameById )
      {
        _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
        v11 = (_DWORD *)FrameById[5].Blink + 54 * *(unsigned int *)(a2 + 32);
        if ( (*v11 & 0x80u) == 0 )
        {
          v9 = 1;
          *v11 |= 0x80u;
        }
        UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)FrameById);
        if ( v9 )
        {
          v13 = *(_DWORD *)a1;
          if ( (*(_DWORD *)a1 & 0x1000) == 0 )
          {
            if ( (v13 & 8) != 0 )
              GenerateWindowLeaveMessage(a2, v12, a3, (unsigned int)-__CFSHR__(v13, 7), a4, a5);
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              GenerateCaptureLostMessage(a2, v12, a3, a4, a5);
          }
          UnreferenceMsgData(a2, 1LL, 0LL);
        }
      }
    }
  }
}
