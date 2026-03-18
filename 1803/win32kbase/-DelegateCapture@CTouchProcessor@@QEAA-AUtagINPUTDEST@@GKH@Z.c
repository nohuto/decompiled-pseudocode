/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0110020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0110198 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  char *v19; // rcx
  char *v20; // rax
  __int64 v21; // rdx
  char *v22; // r15
  char *v23; // rdi
  CInpLockGuard *v25; // [rsp+28h] [rbp-91h] BYREF
  int v26; // [rsp+30h] [rbp-89h]
  _OWORD v27[12]; // [rsp+38h] [rbp-81h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v25,
    (struct CInpLockGuard *)(a1 + 72));
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v19 = (char *)NodeById + 272;
  v20 = (char *)*((_QWORD *)NodeById + 34);
  if ( v20 == v19 )
    goto LABEL_2;
  do
  {
    v21 = *((unsigned int *)v20 + 6);
    v22 = v20;
    v23 = v20;
    if ( (_DWORD)v21 == a4 )
      break;
    v20 = *(char **)v20;
  }
  while ( v20 != v19 );
  if ( v20 == v19 )
  {
LABEL_2:
    memset(v27, 0, 0xB8uLL);
    LOBYTE(v27[11]) = 0;
    v10 = v27[1];
    *a2 = v27[0];
    v11 = v27[2];
    a2[1] = v10;
    v12 = v27[3];
    a2[2] = v11;
    v13 = v27[4];
    a2[3] = v12;
    v14 = v27[5];
    a2[4] = v13;
    v15 = v27[6];
    a2[5] = v14;
    v16 = v27[8];
    a2[6] = v15;
    a2[7] = v27[7];
    v17 = v27[9];
    a2[8] = v16;
    v18 = v27[10];
    a2[9] = v17;
    a2[10] = v18;
    CInputDest::SetEmpty((CInputDest *)v27);
  }
  else
  {
    if ( *((_WORD *)v23 + 10) != a3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v21);
      v21 = *((unsigned int *)v22 + 6);
    }
    if ( (_DWORD)v21 != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v21);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v23, a5);
  }
  if ( !v26 )
    CInpLockGuard::UnLock((PERESOURCE *)v25);
  return a2;
}
