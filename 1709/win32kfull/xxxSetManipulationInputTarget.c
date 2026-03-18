/*
 * XREFs of xxxSetManipulationInputTarget @ 0x1C01A6F54
 * Callers:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00F8798 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     EditionInternalSetManipulationInputTarget @ 0x1C01A6780 (EditionInternalSetManipulationInputTarget.c)
 * Callees:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0006E18 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetInputDelegate @ 0x1C009ECC8 (GetInputDelegate.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01A4E28 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01A5648 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A579C (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A58E8 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z @ 0x1C01A5E38 (-SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C01A5EA0 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01A5EFC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01CBF18 (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F5EF4 (-FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F6320 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

__int64 __fastcall xxxSetManipulationInputTarget(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagWND *a5,
        int a6)
{
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  struct _LIST_ENTRY *v11; // rbx
  int Flink_high; // eax
  struct _EX_PUSH_LOCK **v13; // rax
  void *v14; // r8
  const struct tagINPUT_TRANSFORM *v15; // r9
  struct _EX_PUSH_LOCK **v16; // r14
  __int64 v17; // r13
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v19; // rsi
  int v20; // ebp
  unsigned int v21; // r15d
  struct tagPOINTERQFRAME *v22; // r12
  __int64 v23; // rdi
  const struct tagPOINTERINFONODE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r13
  unsigned __int64 v30; // rbp
  struct tagPOINTERINFONODE *ValidNodeInFrame; // r15
  __int64 v32; // roff
  struct tagINPUTPOINTERNODE *NodeById; // rax
  struct tagPOINTERQFRAME *v34; // rdx
  unsigned int i; // edi
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // r8d
  unsigned int v41; // [rsp+30h] [rbp-68h]
  int v42; // [rsp+34h] [rbp-64h]
  int v43; // [rsp+38h] [rbp-60h]
  int v44; // [rsp+3Ch] [rbp-5Ch]
  int v45; // [rsp+40h] [rbp-58h]
  __int64 v46; // [rsp+48h] [rbp-50h]
  struct tagPOINTERQFRAME *v47; // [rsp+50h] [rbp-48h] BYREF
  __int64 v48; // [rsp+58h] [rbp-40h]

  FrameById = FindFrameById(a1);
  v11 = FrameById;
  if ( FrameById )
  {
    _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
    LOBYTE(v7) = 1;
    Flink_high = HIDWORD(FrameById[6].Blink[17].Flink);
    v45 = -__CFSHR__(Flink_high, 6);
    v44 = -__CFSHR__(Flink_high, 7);
    v13 = (struct _EX_PUSH_LOCK **)HMValidateHandleNoSecure(v10, v7, v8, v9);
    v16 = v13;
    if ( v13 )
      v17 = *((_QWORD *)v13[2] + 51);
    else
      v17 = 0LL;
    v43 = 0;
    v46 = v17;
    if ( v13 && !a6 )
    {
      if ( a5 && !v13[44] )
        InputTransform::SetCompositionInput((InputTransform *)v13, a5, v14);
      v43 = InputTransform::OnInput(v16, (struct tagWND *)v11[5].Blink[8].Blink, 0LL, v15);
    }
    Flink = v11->Flink;
    if ( v11->Flink == &gFrameListHead )
      goto LABEL_17;
    do
    {
      v19 = Flink;
      if ( Flink[3].Blink == v11[3].Blink )
        break;
      Flink = Flink->Flink;
    }
    while ( Flink != &gFrameListHead );
    if ( Flink == &gFrameListHead || HIDWORD(v19[2].Blink) == LODWORD(v19[2].Blink) )
LABEL_17:
      v19 = 0LL;
    else
      _InterlockedIncrement((volatile signed __int32 *)&v19[2].Flink + 1);
    v20 = 0;
    v47 = SetupQFrame((struct tagPOINTERINPUTFRAME *)v11, -1LL, 0);
    v21 = 0;
    v42 = 0;
    v22 = 0LL;
    v41 = 0;
    if ( LODWORD(v11[2].Blink) )
    {
      do
      {
        v23 = (__int64)v11[5].Blink + 216 * v21;
        v48 = 216LL * v21;
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v23) )
        {
          if ( (unsigned int)IsManipulationThreadNode(v24) )
          {
            v25 = *(unsigned int *)(v23 + 4);
            if ( (v25 & 0x200) == 0 )
            {
              v26 = 0LL;
              if ( a3 )
              {
                v27 = *(unsigned __int16 *)(v23 + 60);
                while ( *(_DWORD *)(a4 + 4 * v26) != (_DWORD)v27 )
                {
                  v26 = (unsigned int)(v26 + 1);
                  if ( (unsigned int)v26 >= a3 )
                    goto LABEL_54;
                }
                if ( (v25 & 0x80u) == 0LL )
                {
                  LOBYTE(v25) = 1;
                  v28 = HMValidateHandleNoSecure(*(_QWORD *)(v23 + 80), v25, v27, a3);
                  v16 = (struct _EX_PUSH_LOCK **)v28;
                  if ( v28 )
                    v17 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 408LL);
                  else
                    v17 = 0LL;
                  v46 = v17;
                }
                if ( v17 )
                {
                  if ( !v22 )
                    v22 = SetupNewQFrame((struct tagPOINTERINPUTFRAME *)v11, &v47, v17, v19 != 0LL);
                  *(_DWORD *)(v23 + 4) |= 0x200u;
                  v20 = 1;
                  v34 = v47;
                  v42 = 1;
                  if ( v47 )
                  {
                    *(_DWORD *)(v23 + 8) = *(_DWORD *)v22;
                    ++*((_DWORD *)v22 + 4);
                    --*((_DWORD *)v34 + 4);
                  }
                  *(_QWORD *)(v23 + 80) = *v16;
                  if ( v43 )
                    *(_DWORD *)(v23 + 68) |= 0x400000u;
                  if ( GetInputDelegate((__int64)v16, 4096) )
                    *(_DWORD *)v23 |= 0x100000u;
                  ProcessQFrameNode(v22, (const struct tagPOINTERINPUTFRAME *)v19, (struct tagPOINTERINFONODE *)v23);
                  *((_DWORD *)v22 + 5) |= 0x10u;
                }
                else
                {
                  v29 = *(unsigned __int16 *)(v23 + 60);
                  v30 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v19 )
                  {
                    ValidNodeInFrame = FindValidNodeInFrame((const struct tagPOINTERINPUTFRAME *)v19, v29, 0LL);
                    if ( ValidNodeInFrame )
                    {
                      *(_QWORD *)(v23 + 80) = 0LL;
                      *(_DWORD *)(v23 + 4) |= 0x200u;
                      ProcessWindowEnterLeave(
                        (const struct tagPOINTERINPUTFRAME *)v19,
                        (struct tagPOINTERINFONODE *)v23);
                      if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                        ProcessAndUnreferencePreviousInput(
                          (const struct tagPOINTERINFONODE *)v23,
                          *((_QWORD *)ValidNodeInFrame + 2),
                          v30,
                          v45,
                          v44);
                    }
                    v21 = v41;
                  }
                  if ( (*(_DWORD *)(v23 + 68) & 0x40000) != 0 )
                    ProcessLostCaptureList(v29, 1, (const struct tagPOINTERINPUTFRAME *)v11, v21, v30);
                  v32 = (__int64)v11[5].Blink + v48;
                  *(_DWORD *)v32 |= 0x2000u;
                  *(_QWORD *)(v32 + 16) = 0LL;
                  ++HIDWORD(v11[2].Blink);
                  NodeById = FindNodeById(v29, 0, 0);
                  if ( NodeById
                    && *((_DWORD *)NodeById + 9) == 3
                    && *((struct tagINPUTPOINTERNODE **)NodeById + 14) == (struct tagINPUTPOINTERNODE *)((char *)NodeById + 112) )
                  {
                    FreeNode(NodeById);
                  }
                  v20 = v42;
                  v17 = v46;
                }
              }
            }
          }
        }
LABEL_54:
        v41 = ++v21;
      }
      while ( v21 < LODWORD(v11[2].Blink) );
      if ( v20 )
        TryCoalesceQFrame((struct tagPOINTERINPUTFRAME *)v11, (const struct tagPOINTERINPUTFRAME *)v19, v22);
    }
    if ( v19 )
      UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v19);
    if ( v20 )
    {
      for ( i = 0; i < LODWORD(v11[2].Blink); ++i )
      {
        v36 = (__int64)v11[5].Blink + 216 * i;
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
                v16,
                2 - (unsigned int)((v39 & 0x10000) != 0),
                1LL,
                -__CFSHR__(*(_DWORD *)v36, 21));
          }
        }
      }
    }
    UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v11);
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  return 0LL;
}
