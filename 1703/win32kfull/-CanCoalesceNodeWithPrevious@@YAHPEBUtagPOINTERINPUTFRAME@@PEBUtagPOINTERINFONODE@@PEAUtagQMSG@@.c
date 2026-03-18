/*
 * XREFs of ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C0198218
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C0198548 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199B78 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 * Callees:
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01992B0 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C0199550 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C019974C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 */

__int64 __fastcall CanCoalesceNodeWithPrevious(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINFONODE *a2,
        struct tagQMSG *a3,
        struct tagPOINTERQFRAME *a4,
        enum tagPOINTERCOALESCE *a5)
{
  int v5; // eax
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  struct tagPOINTERINFONODE *v11; // rbx
  __int64 v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  struct tagQ *v16; // rbp
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( (v5 & 8) != 0 || (v5 & 0x10) != 0 || (v5 & 0x40) != 0 || (v5 & 0x20) != 0 )
      goto LABEL_37;
    ValidNodeInFrame = FindValidNodeInFrame(a1, *((_WORD *)a2 + 30), 0LL);
    v11 = ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a5 = 3;
      return 0LL;
    }
    v12 = *((_QWORD *)a1 + 12) + 40LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a4 + 4) )
      *((_QWORD *)a4 + 4) = v12;
    v13 = *(_DWORD *)(v12 + 20);
    if ( (v13 & 1) == 0 )
    {
      *(_DWORD *)a5 = 12;
      return 0LL;
    }
    if ( (v13 & 8) != 0 )
    {
      *(_DWORD *)a5 = 11;
      return 0LL;
    }
    v14 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x800000) != 0
      || (v14 & 0x8000000) != 0
      || v14 < 0
      || (*((_DWORD *)a2 + 1) & 8) != 0
      || (v15 = *(_DWORD *)v11, (*(_DWORD *)v11 & 0x800000) != 0)
      || (v15 & 0x8000000) != 0
      || v15 < 0
      || (*((_DWORD *)v11 + 1) & 8) != 0 )
    {
LABEL_37:
      *(_DWORD *)a5 = 16;
      return 0LL;
    }
    if ( (v15 & 0x100000) == 0 || (v15 & 0x400000) != 0 )
    {
      if ( *((_DWORD *)v11 + 17) == *((_DWORD *)a2 + 17) )
      {
        if ( *((_DWORD *)v11 + 31) == 100 )
        {
          *(_DWORD *)a5 = 6;
        }
        else
        {
          v16 = *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(gpKernelHandleTable
                                                        + 16LL * (unsigned __int16)*((_DWORD *)a2 + 20))
                                            + 16LL)
                                + 384LL);
          if ( GetNodeQueue(v11, &v18) == v16 && v16 == *(struct tagQ **)(v12 + 8) && *((_QWORD *)a4 + 4) == v12 )
          {
            if ( (unsigned int)IsPointerQueuedMessageCoalescable(
                                 v16,
                                 a3,
                                 *((_DWORD *)a1 + 8),
                                 *((_DWORD *)a2 + 16),
                                 *((_QWORD *)v11 + 2),
                                 *((_DWORD *)a2 + 14)) )
              return 1LL;
            *(_DWORD *)a5 = 7;
          }
          else
          {
            *(_DWORD *)a5 = 4;
          }
        }
      }
      else
      {
        *(_DWORD *)a5 = 5;
      }
    }
    else
    {
      *(_DWORD *)a5 = 21;
    }
  }
  else
  {
    *(_DWORD *)a5 = 2;
  }
  return 0LL;
}
