/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011B604
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012A90C (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C01193D4 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C0119730 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0119EE8 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C011B810 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C011D8F0 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011DA38 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C011F440 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  char *v6; // rax
  CTouchProcessor *v7; // rcx
  __int64 v8; // rdi
  __int64 *v9; // r15
  __int64 v10; // rax
  void *v11; // rax
  unsigned int i; // ebp
  struct CPointerQFrame *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int j; // ebp
  struct CPointerRawData *v18; // rax
  CTouchProcessor *v19; // rcx
  struct CPointerInfoNode *v20; // rdx
  struct CPointerQFrame *v21; // rdx
  struct _ERESOURCE *v22; // rcx
  __int64 *v24[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)(this + 28);
  CInpLockGuard::LockExclusive(this + 28);
  v6 = (char *)Win32AllocPoolZInit(0x78uLL, 1718645589LL);
  v8 = (__int64)v6;
  if ( !v6 )
  {
LABEL_21:
    v8 = 0LL;
    goto LABEL_22;
  }
  v9 = (__int64 *)(v6 + 112);
  *(_OWORD *)v6 = *(_OWORD *)a2;
  *((_OWORD *)v6 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v6 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v6 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v6 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v6 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v6 + 6) = *((_OWORD *)a2 + 6);
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
    v18 = CTouchProcessor::CopyRawDataList(v7, a2);
    *(_QWORD *)(v8 + 88) = v18;
    if ( !v18 )
    {
LABEL_16:
      v20 = *(struct CPointerInfoNode **)(v8 + 96);
      if ( v20 )
        CTouchProcessor::FreePointerInfoList(v7, v20, *(_DWORD *)(v8 + 48));
      v21 = *(struct CPointerQFrame **)(v8 + 104);
      if ( v21 )
        CTouchProcessor::FreePointerQFrameList(v7, v21, *(_DWORD *)(v8 + 48));
      Win32FreePool(v8);
      goto LABEL_21;
    }
  }
  LOBYTE(v14) = 19;
  v24[0] = v9;
  v24[1] = *(__int64 **)(HMValidateHandleNoSecure(a3, v14, v15, v16) + 472);
  HMAssignmentLock(v24);
  *((_DWORD *)a2 + 10) = CTouchProcessor::GetNextFrameId(v19);
LABEL_22:
  v22 = *(struct _ERESOURCE **)v3;
  *((_QWORD *)v3 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v22);
  return (struct CPointerInputFrame *)v8;
}
