/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011C7A4
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012B260 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C011A604 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C011A95C (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C011B10C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C011C9AC (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C011EA50 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011EB94 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C01205C4 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  _OWORD *v6; // rax
  CTouchProcessor *v7; // rcx
  __int64 v8; // rdi
  char *v9; // r15
  __int64 v10; // rax
  void *v11; // rax
  unsigned int i; // ebp
  struct CPointerQFrame *v13; // rax
  unsigned int j; // ebp
  struct CPointerRawData *v15; // rax
  CTouchProcessor *v16; // rcx
  struct CPointerInfoNode *v17; // rdx
  struct CPointerQFrame *v18; // rdx
  struct _ERESOURCE *v19; // rcx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)(this + 25);
  CInpLockGuard::LockExclusive(this + 25);
  v6 = Win32AllocPoolZInit(0x78uLL, 1718645589LL);
  v8 = (__int64)v6;
  if ( !v6 )
  {
LABEL_21:
    v8 = 0LL;
    goto LABEL_22;
  }
  v9 = (char *)(v6 + 7);
  *v6 = *(_OWORD *)a2;
  v6[1] = *((_OWORD *)a2 + 1);
  v6[2] = *((_OWORD *)a2 + 2);
  v6[3] = *((_OWORD *)a2 + 3);
  v6[4] = *((_OWORD *)a2 + 4);
  v6[5] = *((_OWORD *)a2 + 5);
  v6[6] = *((_OWORD *)a2 + 6);
  *((_QWORD *)v6 + 14) = *((_QWORD *)a2 + 14);
  *((_QWORD *)v6 + 2) = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 14) = 0LL;
  *((_QWORD *)v6 + 12) = 0LL;
  *((_QWORD *)v6 + 13) = 0LL;
  *((_QWORD *)v6 + 11) = 0LL;
  v10 = *((unsigned int *)a2 + 12);
  if ( (_DWORD)v10 && (v7 = (CTouchProcessor *)(608 * v10), (unsigned __int64)(608 * v10) <= 0xFFFFFFFF) && (_DWORD)v7 )
    v11 = Win32AllocPoolZInit((unsigned int)v7, 1701868373LL);
  else
    v11 = 0LL;
  *(_QWORD *)(v8 + 96) = v11;
  if ( !v11 )
    goto LABEL_16;
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
    CPointerInfoNode::operator=(*(_QWORD *)(v8 + 96) + 608LL * i, 608LL * i + *((_QWORD *)a2 + 12));
  v13 = CTouchProcessor::AllocPointerQFrameList(v7, *((_DWORD *)a2 + 12));
  *(_QWORD *)(v8 + 104) = v13;
  if ( !v13 )
    goto LABEL_16;
  for ( j = 0; j < *((_DWORD *)a2 + 12); ++j )
    CPointerQFrame::operator=(*(_QWORD *)(v8 + 104) + 240LL * j, 240LL * j + *((_QWORD *)a2 + 13));
  if ( *((_QWORD *)a2 + 11) )
  {
    v15 = CTouchProcessor::CopyRawDataList(v7, a2);
    *(_QWORD *)(v8 + 88) = v15;
    if ( !v15 )
    {
LABEL_16:
      v17 = *(struct CPointerInfoNode **)(v8 + 96);
      if ( v17 )
        CTouchProcessor::FreePointerInfoList(v7, v17, *(_DWORD *)(v8 + 48));
      v18 = *(struct CPointerQFrame **)(v8 + 104);
      if ( v18 )
        CTouchProcessor::FreePointerQFrameList(v7, v18, *(_DWORD *)(v8 + 48));
      Win32FreePool(v8);
      goto LABEL_21;
    }
  }
  v21[0] = v9;
  v21[1] = *(_QWORD *)(HMValidateHandleNoSecure(a3, 19) + 472);
  HMAssignmentLock((__int64)v21);
  *((_DWORD *)a2 + 10) = CTouchProcessor::GetNextFrameId(v16);
LABEL_22:
  v19 = *(struct _ERESOURCE **)v3;
  *((_QWORD *)v3 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v19);
  return (struct CPointerInputFrame *)v8;
}
