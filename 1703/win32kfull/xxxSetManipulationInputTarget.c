/*
 * XREFs of xxxSetManipulationInputTarget @ 0x1C019B290
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0008530 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     EditionInternalSetManipulationInputTarget @ 0x1C019AB50 (EditionInternalSetManipulationInputTarget.c)
 *     EditionSetManipulationInputTarget @ 0x1C01D6740 (EditionSetManipulationInputTarget.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01992B0 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C0199A80 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199B78 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199CC4 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z @ 0x1C019A20C (-SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C019A274 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C019A2D0 (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     GetInputDelegate @ 0x1C01BCA10 (GetInputDelegate.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01C72CC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C01CD5E0 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01E9F5C (-FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01EA408 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

__int64 __fastcall xxxSetManipulationInputTarget(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagWND *a5,
        int a6)
{
  unsigned int v6; // r15d
  struct _LIST_ENTRY *FrameById; // rax
  unsigned __int64 v8; // r10
  struct _LIST_ENTRY *v9; // rbx
  int v10; // edi
  struct _EX_PUSH_LOCK **v11; // rax
  void *v12; // r8
  const struct tagINPUT_TRANSFORM *v13; // r9
  struct _EX_PUSH_LOCK **v14; // r14
  __int64 v15; // rbp
  struct _LIST_ENTRY *PreviousFrameByDeviceInt; // rax
  const struct tagPOINTERINPUTFRAME *v17; // rsi
  int v18; // r13d
  int v19; // r11d
  struct tagPOINTERQFRAME *v20; // r12
  unsigned int v21; // r8d
  __int64 v22; // rdi
  const struct tagPOINTERINFONODE *v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int16 v27; // r13
  unsigned __int64 v28; // rbp
  struct tagPOINTERINFONODE *ValidNodeInFrame; // r15
  __int64 v30; // roff
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagPOINTERQFRAME *v32; // rcx
  bool v33; // zf
  int PointerInputMessagesCore; // eax
  unsigned int v35; // edi
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // r8d
  unsigned int v41; // [rsp+30h] [rbp-78h]
  int v42; // [rsp+34h] [rbp-74h]
  int v43; // [rsp+38h] [rbp-70h]
  int v44; // [rsp+3Ch] [rbp-6Ch]
  unsigned int i; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  struct tagPOINTERQFRAME *v47; // [rsp+50h] [rbp-58h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h]
  __int64 v49; // [rsp+60h] [rbp-48h]

  v6 = 0;
  i = 0;
  FrameById = FindFrameById(a1);
  v9 = FrameById;
  if ( FrameById )
  {
    _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
    v44 = -__CFSHR__(HIDWORD(FrameById[6].Blink[16].Flink), 6);
    v10 = -__CFSHR__(HIDWORD(FrameById[6].Blink[16].Flink), 7);
    v43 = v10;
    v11 = (struct _EX_PUSH_LOCK **)HMValidateHandleNoSecure(v8, 1);
    v14 = v11;
    if ( v11 )
      v15 = *((_QWORD *)v11[2] + 48);
    else
      v15 = 0LL;
    v46 = v15;
    if ( v11 && !a6 )
    {
      if ( a5 && !v11[44] )
        InputTransform::SetCompositionInput((InputTransform *)v11, a5, v12);
      InputTransform::OnInput(v14, (struct tagWND *)v9[5].Blink[8].Blink, 0LL, v13);
    }
    PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(&v9->Flink);
    v17 = (const struct tagPOINTERINPUTFRAME *)PreviousFrameByDeviceInt;
    if ( PreviousFrameByDeviceInt )
      _InterlockedIncrement((volatile signed __int32 *)&PreviousFrameByDeviceInt[2].Flink + 1);
    v18 = 0;
    v47 = SetupQFrame((struct tagPOINTERINPUTFRAME *)v9, -1LL, 0);
    v20 = 0LL;
    v42 = 0;
    v41 = 0;
    if ( LODWORD(v9[2].Blink) > v21 )
    {
      v49 = v19;
      do
      {
        v22 = (__int64)v9[5].Blink + 216 * v6;
        v48 = 216LL * v6;
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v22) )
        {
          if ( (unsigned int)IsManipulationThreadNode(v23) )
          {
            v24 = *(_DWORD *)(v22 + 4);
            if ( (v24 & 0x200) == 0 )
            {
              v25 = 0LL;
              if ( a3 )
              {
                while ( *(_DWORD *)(a4 + 4 * v25) != *(unsigned __int16 *)(v22 + 60) )
                {
                  v25 = (unsigned int)(v25 + 1);
                  if ( (unsigned int)v25 >= a3 )
                    goto LABEL_49;
                }
                if ( (v24 & 0x80u) == 0 )
                {
                  v26 = HMValidateHandleNoSecure(*(_QWORD *)(v22 + 80), 1);
                  v14 = (struct _EX_PUSH_LOCK **)v26;
                  if ( v26 )
                    v15 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 384LL);
                  else
                    v15 = 0LL;
                  v46 = v15;
                }
                if ( v15 )
                {
                  if ( !v20 )
                    v20 = SetupNewQFrame((struct tagPOINTERINPUTFRAME *)v9, &v47, v15, v17 != 0LL);
                  *(_DWORD *)(v22 + 4) |= 0x200u;
                  v18 = 1;
                  v32 = v47;
                  v42 = 1;
                  if ( v47 )
                  {
                    *(_DWORD *)(v22 + 8) = *(_DWORD *)v20;
                    ++*((_DWORD *)v20 + 4);
                    --*((_DWORD *)v32 + 4);
                  }
                  v33 = v49 == 0;
                  *(_QWORD *)(v22 + 80) = *v14;
                  if ( !v33 )
                    *(_DWORD *)(v22 + 68) |= 0x400000u;
                  if ( GetInputDelegate(v14, 4096LL) )
                    *(_DWORD *)v22 |= 0x100000u;
                  ProcessQFrameNode(v20, v17, (struct tagPOINTERINFONODE *)v22);
                  *((_DWORD *)v20 + 5) |= 0x10u;
                }
                else
                {
                  v27 = *(_WORD *)(v22 + 60);
                  v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v17 )
                  {
                    ValidNodeInFrame = FindValidNodeInFrame(v17, v27, 0LL);
                    if ( ValidNodeInFrame )
                    {
                      *(_QWORD *)(v22 + 80) = 0LL;
                      *(_DWORD *)(v22 + 4) |= 0x200u;
                      ProcessWindowEnterLeave(v17, (struct tagPOINTERINFONODE *)v22);
                      if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                        ProcessAndUnreferencePreviousInput(
                          (const struct tagPOINTERINFONODE *)v22,
                          *((_QWORD *)ValidNodeInFrame + 2),
                          v28,
                          v44,
                          v43);
                    }
                    v6 = v41;
                  }
                  if ( (*(_DWORD *)(v22 + 68) & 0x40000) != 0 )
                    ProcessLostCaptureList(v27, 1, (const struct tagPOINTERINPUTFRAME *)v9, v6, v28);
                  v30 = (__int64)v9[5].Blink + v48;
                  *(_DWORD *)v30 |= 0x2000u;
                  *(_QWORD *)(v30 + 16) = 0LL;
                  ++HIDWORD(v9[2].Blink);
                  NodeById = FindNodeById(v27, 0, 0);
                  if ( NodeById
                    && *((_DWORD *)NodeById + 9) == 3
                    && *((struct tagINPUTPOINTERNODE **)NodeById + 14) == (struct tagINPUTPOINTERNODE *)((char *)NodeById + 112) )
                  {
                    FreeNode(NodeById);
                  }
                  v15 = v46;
                  v18 = v42;
                }
              }
            }
          }
        }
LABEL_49:
        v41 = ++v6;
      }
      while ( v6 < LODWORD(v9[2].Blink) );
      if ( v18 )
        TryCoalesceQFrame((struct tagPOINTERINPUTFRAME *)v9, v17, v20);
      v10 = v43;
    }
    if ( v17 )
      UnreferenceFrameInt(v17);
    if ( v18 )
    {
      PointerInputMessagesCore = xxxGeneratePointerInputMessagesCore(
                                   v44,
                                   v10,
                                   1,
                                   (const struct tagPOINTERINPUTFRAME *)v9);
      v35 = 0;
      for ( i = PointerInputMessagesCore; v35 < LODWORD(v9[2].Blink); ++v35 )
      {
        v36 = (__int64)v9[5].Blink + 216 * v35;
        v37 = *(_DWORD *)(v36 + 4);
        if ( (v37 & 0x200) != 0 && (v37 & 0x400) == 0 )
        {
          v38 = *(_QWORD *)(v36 + 16);
          *(_DWORD *)(v36 + 4) = v37 | 0x400;
          if ( v38 )
          {
            v39 = *(_DWORD *)(v36 + 68);
            if ( (v39 & 4) != 0 )
              PointerList::SetPointerCapture(
                v38,
                v14,
                2 - (unsigned int)((v39 & 0x10000) != 0),
                1LL,
                -__CFSHR__(*(_DWORD *)v36, 21));
          }
        }
      }
    }
    UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v9);
    return i;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
