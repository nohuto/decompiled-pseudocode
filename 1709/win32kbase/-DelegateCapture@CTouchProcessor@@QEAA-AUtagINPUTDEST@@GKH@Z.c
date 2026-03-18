/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C011BF00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C011C064 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011D248 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
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
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  char *v19; // rcx
  char *v20; // rax
  char *v21; // r8
  PERESOURCE *v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-91h] BYREF
  int v25; // [rsp+30h] [rbp-89h]
  _OWORD v26[13]; // [rsp+38h] [rbp-81h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v24,
    (struct CInpLockGuard *)(a1 + 224));
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v19 = (char *)NodeById + 288;
  v20 = (char *)*((_QWORD *)NodeById + 36);
  if ( v20 == v19 )
    goto LABEL_2;
  do
  {
    v21 = v20;
    if ( *((_DWORD *)v20 + 6) == a4 )
      break;
    v20 = *(char **)v20;
  }
  while ( v20 != v19 );
  if ( v20 == v19 )
  {
LABEL_2:
    memset(v26, 0, 0xC8uLL);
    LOBYTE(v26[12]) = 0;
    v10 = v26[1];
    *a2 = v26[0];
    v11 = v26[2];
    a2[1] = v10;
    v12 = v26[3];
    a2[2] = v11;
    v13 = v26[4];
    a2[3] = v12;
    v14 = v26[5];
    a2[4] = v13;
    v15 = v26[6];
    a2[5] = v14;
    a2[6] = v15;
    a2[7] = v26[7];
    v16 = v26[9];
    a2[8] = v26[8];
    v17 = v26[10];
    a2[9] = v16;
    v18 = v26[11];
    a2[10] = v17;
    a2[11] = v18;
    CInputDest::SetEmpty((CInputDest *)v26);
  }
  else
  {
    CTouchProcessor::DelegateCaptureInt(a1, a2, v21, a5);
  }
  if ( !v25 )
  {
    v22 = (PERESOURCE *)v24;
    *(_QWORD *)(v24 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v22);
  }
  return a2;
}
