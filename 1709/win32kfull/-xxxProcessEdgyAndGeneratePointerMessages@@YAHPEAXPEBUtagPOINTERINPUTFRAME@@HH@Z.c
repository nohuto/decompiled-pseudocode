/*
 * XREFs of ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 *     ?DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z @ 0x1C01DFFA4 (-DispatchFrameAndGetNext@PalmRejection@@YAPEAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01A50D0 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A5740 (-ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01B410C (IsTouchpadDevice.c)
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?Enabled@Edgy@@YAHXZ @ 0x1C01D1944 (-Enabled@Edgy@@YAHXZ.c)
 *     ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1C01D1A94 (-ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z.c)
 *     ?ResetCurrentFrame@Edgy@@YAXXZ @ 0x1C01D1B54 (-ResetCurrentFrame@Edgy@@YAXXZ.c)
 */

__int64 __fastcall xxxProcessEdgyAndGeneratePointerMessages(
        __int64 a1,
        const struct tagPOINTERINPUTFRAME *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // eax
  int v5; // edi
  const struct tagPOINTERINPUTFRAME *v6; // rsi
  __int64 v8; // rax
  Edgy *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void **v13; // r8
  const struct tagPOINTERINPUTFRAME *v14; // rdx
  Edgy *v15; // rcx
  struct _LIST_ENTRY *v16; // r8
  PointerFrameList *v18; // rdi
  unsigned int *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  struct tagPOINTERINPUTFRAME *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  PointerFrameList *v28; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( (_DWORD)a3 )
  {
    LOBYTE(a2) = 19;
    v8 = HMValidateHandle(a1, (__int64)a2, a3, a4);
    if ( v8 )
      v4 = *(_DWORD *)(*(_QWORD *)(v8 + 472) + 720LL);
    else
      v4 = 1;
  }
  ContactVisualizationWorker(*((_DWORD *)v6 + 10), *((_DWORD **)v6 + 11), 216LL, v5, v4);
  if ( (unsigned int)Edgy::Enabled(v9) && !IsTouchpadDevice(a1, v10, v11, v12) )
  {
    v28 = 0LL;
    if ( !(unsigned int)Edgy::ProcessInput(v6, &v28, v13) )
      return 1LL;
    v18 = v28;
    if ( v28 )
    {
      if ( *((_DWORD *)v28 + 10) == 1 && (*((_DWORD *)v28 + 18) & 0x10) != 0 )
      {
        v19 = (unsigned int *)*((_QWORD *)v28 + 11);
        v15 = (Edgy *)*v19;
        if ( ((unsigned __int16)v15 & 0x400) != 0 && ((unsigned __int16)v15 & 0x1000) == 0 && (v19[17] & 1) == 0 )
          PointerFrameList::ProcessPointerInfoNodeEnterLeave(v28, v14);
      }
      do
      {
        if ( v18 == v6 )
          break;
        v20 = (_QWORD *)((char *)v18 + 16);
        v21 = *((_QWORD *)v18 + 2);
        if ( *(PointerFrameList **)(v21 + 8) == (PointerFrameList *)((char *)v18 + 16) )
        {
          v22 = (_QWORD *)*((_QWORD *)v18 + 3);
          if ( (_QWORD *)*v22 == v20 )
            continue;
        }
        __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *((_QWORD *)v18 + 3) = (char *)v18 + 16;
        *v20 = v20;
        NextFrame = PointerFrameList::GetNextFrame(v18, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v16);
        UnreferenceFrameInt(v24);
        v18 = NextFrame;
      }
      while ( NextFrame );
    }
    Edgy::ResetCurrentFrame(v15);
  }
  v25 = (_QWORD *)((char *)v6 + 16);
  v26 = *((_QWORD *)v6 + 2);
  if ( *(const struct tagPOINTERINPUTFRAME **)(v26 + 8) != (const struct tagPOINTERINPUTFRAME *)((char *)v6 + 16)
    || (v27 = (_QWORD *)*((_QWORD *)v6 + 3), (_QWORD *)*v27 != v25) )
  {
    __fastfail(3u);
  }
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  *((_QWORD *)v6 + 3) = (char *)v6 + 16;
  *v25 = v25;
  UnreferenceFrameInt(v6);
  return 0LL;
}
