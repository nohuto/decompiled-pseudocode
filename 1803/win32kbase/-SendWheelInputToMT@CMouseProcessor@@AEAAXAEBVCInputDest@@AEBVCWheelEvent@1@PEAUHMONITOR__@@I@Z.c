/*
 * XREFs of ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@PEAUHMONITOR__@@I@Z @ 0x1C0135DAC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C0141310 (ApiSetResetLastSeenFrameId.c)
 */

void __fastcall CMouseProcessor::SendWheelInputToMT(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CWheelEvent *a3,
        HMONITOR a4,
        unsigned int a5)
{
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  struct A0xad387374::CFrameIdGenerator *v12; // rbx
  int v13; // edi
  __int64 v14; // rax
  CInpLockGuard *v15; // [rsp+28h] [rbp-E0h] BYREF
  int v16; // [rsp+30h] [rbp-D8h]
  _QWORD v17[31]; // [rsp+38h] [rbp-D0h] BYREF

  memset(v17, 0, sizeof(v17));
  v8 = *(_OWORD *)((char *)a2 + 24);
  v9 = *(_QWORD *)a3;
  v10 = *(_OWORD *)((char *)a2 + 40);
  LODWORD(v17[0]) = 0;
  *(_OWORD *)&v17[21] = v8;
  v11 = *(_OWORD *)((char *)a2 + 56);
  v12 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  v17[1] = *(_QWORD *)(v9 + 72);
  LODWORD(v17[2]) = 1;
  LODWORD(v17[27]) = a5;
  *(_OWORD *)&v17[23] = v10;
  v17[28] = a4;
  *(_OWORD *)&v17[25] = v11;
  v17[3] = 0x100000004LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v15,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
  v13 = (*(_DWORD *)v12)++;
  if ( v13 == -1 )
  {
    *(_DWORD *)v12 = 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v16 )
    CInpLockGuard::UnLock((PERESOURCE *)v15);
  LODWORD(v17[4]) = v13;
  HIDWORD(v17[11]) = 1;
  LODWORD(v17[11]) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v17[13] = KeQueryPerformanceCounter(0LL).QuadPart;
  v14 = *(_QWORD *)a3;
  HIDWORD(v17[4]) = *((_DWORD *)a3 + 3) != 0 ? 0x100000 : 0x80000;
  InputExtensibilityCallout::CoreMsgSendMessage((unsigned int)*(__int16 *)(v14 + 18), 5);
}
