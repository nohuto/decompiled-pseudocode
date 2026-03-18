/*
 * XREFs of ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 *     ?DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z @ 0x1C01D3BF4 (-DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0199534 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199CC4 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01B0D1C (IsTouchpadDevice.c)
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?Enabled@Edgy@@YAHXZ @ 0x1C01CD7AC (-Enabled@Edgy@@YAHXZ.c)
 *     ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1C01CD8FC (-ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z.c)
 *     ?ResetCurrentFrame@Edgy@@YAXXZ @ 0x1C01CD9BC (-ResetCurrentFrame@Edgy@@YAXXZ.c)
 */

__int64 __fastcall xxxProcessEdgyAndGeneratePointerMessages(
        __int64 a1,
        const struct tagPOINTERINPUTFRAME *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v9; // rax
  Edgy *v10; // rcx
  void **v11; // r8
  Edgy *v12; // rcx
  PointerFrameList *v14; // rdi
  struct _LIST_ENTRY *PreviousFrameByDeviceInt; // rax
  struct tagPOINTERINPUTFRAME *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  struct _LIST_ENTRY *v20; // r8
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  struct tagPOINTERINPUTFRAME *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned int PointerInputMessagesCore; // ebx
  PointerFrameList *v27; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  if ( a3 )
  {
    v9 = HMValidateHandle(a1, 19);
    if ( v9 )
      v4 = *(_DWORD *)(*(_QWORD *)(v9 + 472) + 872LL);
    else
      v4 = 1;
  }
  ContactVisualizationWorker(*((_DWORD *)a2 + 10), *((_DWORD **)a2 + 11), 216LL, a3, v4);
  if ( (unsigned int)Edgy::Enabled(v10) && !IsTouchpadDevice(a1) )
  {
    v27 = 0LL;
    if ( !(unsigned int)Edgy::ProcessInput(a2, &v27, v11) )
      return 1LL;
    v14 = v27;
    if ( v27 )
    {
      if ( *((_DWORD *)v27 + 10) == 1 && (*((_DWORD *)v27 + 18) & 0x10) != 0 )
      {
        v12 = (Edgy *)*((_QWORD *)v27 + 11);
        if ( (*(_DWORD *)v12 & 0x400) != 0 && (*(_DWORD *)v12 & 0x1000) == 0 && (*((_DWORD *)v12 + 17) & 1) == 0 )
        {
          PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt((struct _LIST_ENTRY **)v27);
          v16 = (struct tagPOINTERINPUTFRAME *)PreviousFrameByDeviceInt;
          if ( PreviousFrameByDeviceInt )
          {
            _InterlockedIncrement((volatile signed __int32 *)&PreviousFrameByDeviceInt[2].Flink + 1);
            ProcessWindowEnterLeave(
              (const struct tagPOINTERINPUTFRAME *)PreviousFrameByDeviceInt,
              *((struct tagPOINTERINFONODE **)v14 + 11));
            UnreferenceFrameInt(v16);
          }
        }
      }
      do
      {
        if ( v14 == a2 )
          break;
        v17 = (_QWORD *)((char *)v14 + 16);
        v18 = *((_QWORD *)v14 + 2);
        v19 = (_QWORD *)*((_QWORD *)v14 + 3);
        if ( *(PointerFrameList **)(v18 + 8) != (PointerFrameList *)((char *)v14 + 16) || (_QWORD *)*v19 != v17 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *((_QWORD *)v14 + 3) = (char *)v14 + 16;
        *v17 = v17;
        xxxGeneratePointerInputMessagesCore(a3, a4, 0, v14);
        NextFrame = PointerFrameList::GetNextFrame(v14, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v20);
        UnreferenceFrameInt(v22);
        v14 = NextFrame;
      }
      while ( NextFrame );
    }
    Edgy::ResetCurrentFrame(v12);
  }
  v23 = (_QWORD *)((char *)a2 + 16);
  v24 = *((_QWORD *)a2 + 2);
  v25 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( *(const struct tagPOINTERINPUTFRAME **)(v24 + 8) != (const struct tagPOINTERINPUTFRAME *)((char *)a2 + 16)
    || (_QWORD *)*v25 != v23 )
  {
    __fastfail(3u);
  }
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *((_QWORD *)a2 + 3) = (char *)a2 + 16;
  *v23 = v23;
  PointerInputMessagesCore = xxxGeneratePointerInputMessagesCore(a3, a4, 0, a2);
  UnreferenceFrameInt(a2);
  return PointerInputMessagesCore;
}
