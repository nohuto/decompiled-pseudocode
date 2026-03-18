/*
 * XREFs of ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124264
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C012472C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessInputWithoutHitTest(
        CTouchProcessor *this,
        void *a2,
        struct CPointerInputFrame *a3,
        int a4,
        int a5)
{
  __int64 *v5; // rsi
  __int64 v8; // rbx
  int v9; // ecx
  __int64 i; // rax
  __int64 **v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  const struct CPointerInputFrame *v14; // rax
  unsigned int v15; // r8d
  const struct CPointerInputFrame *v16; // rdi
  PDEVICE_OBJECT v17; // rcx
  unsigned __int16 v18; // r9
  _DWORD *v19; // rcx
  struct _ERESOURCE *v20; // rcx

  v5 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x12u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = *((_DWORD *)a3 + 10);
  for ( i = *((_QWORD *)a3 + 11); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)i = v9;
  v11 = (__int64 **)(v5 + 35);
  v12 = v5[35];
  v13 = (__int64 *)((char *)a3 + 8);
  if ( *(__int64 **)(v12 + 8) != v5 + 35 )
    __fastfail(3u);
  *v13 = v12;
  *((_QWORD *)a3 + 2) = v11;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = v13;
  v14 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v5, v13, a3, 0);
  v16 = v14;
  if ( v14 )
  {
    if ( *((_DWORD *)v14 + 12) == 1 && (*((_DWORD *)v14 + 20) & 0x10) != 0 )
    {
      v19 = (_DWORD *)*((_QWORD *)v14 + 12);
      if ( (*v19 & 0x400) != 0 && (v19[65] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave((CTouchProcessor *)v5, v14, v15);
    }
    CTouchProcessor::GenerateMessagesCore((PERESOURCE *)v5, a4, a5, 0, v16);
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v5, v16);
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 21;
      goto LABEL_18;
    }
  }
  else
  {
    WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0x13u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v17 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v18 = 20;
LABEL_18:
      WPP_RECORDER_SF_(
        (__int64)v17->DeviceExtension,
        5u,
        0xBu,
        v18,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  v20 = *(struct _ERESOURCE **)v8;
  *(_QWORD *)(v8 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v20);
}
