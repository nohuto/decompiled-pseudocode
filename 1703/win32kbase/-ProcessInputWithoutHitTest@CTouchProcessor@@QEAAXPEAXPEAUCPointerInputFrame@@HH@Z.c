/*
 * XREFs of ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124C0C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0125158 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ProcessInputWithoutHitTest(
        CTouchProcessor *this,
        void *a2,
        struct CPointerInputFrame *a3,
        int a4,
        int a5)
{
  _QWORD *v5; // rsi
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  __int64 i; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  const struct CPointerInputFrame *v15; // rax
  int v16; // edx
  unsigned int v17; // r8d
  const struct CPointerInputFrame *v18; // rdi
  int v19; // edx
  PDEVICE_OBJECT v20; // rcx
  int v21; // r9d
  _DWORD *v22; // rcx
  struct _ERESOURCE *v23; // rcx

  v5 = *(_QWORD **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      11,
      18,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v10 = *((_DWORD *)a3 + 10);
  for ( i = *((_QWORD *)a3 + 11); i; i = *(_QWORD *)(i + 24) )
    *(_DWORD *)i = v10;
  v12 = v5 + 32;
  v13 = v5[32];
  v14 = (_QWORD *)((char *)a3 + 8);
  if ( *(_QWORD **)(v13 + 8) != v5 + 32 )
    __fastfail(3u);
  *v14 = v13;
  *((_QWORD *)a3 + 2) = v12;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = v14;
  v15 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)v5, v14, a3, 0);
  v18 = v15;
  if ( v15 )
  {
    if ( *((_DWORD *)v15 + 12) == 1 && (*((_DWORD *)v15 + 20) & 0x10) != 0 )
    {
      v22 = (_DWORD *)*((_QWORD *)v15 + 12);
      if ( (*v22 & 0x400) != 0 && (v22[65] & 1) == 0 )
        CTouchProcessor::ProcessPointerInfoNodeEnterLeave((CTouchProcessor *)v5, v15, v17);
    }
    CTouchProcessor::GenerateMessagesCore((CTouchProcessor *)v5, a4, a5, 0, v18);
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v5, v18);
    v20 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v21 = 21;
      goto LABEL_18;
    }
  }
  else
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(v5[1], v16, 11, 19, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v20 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v21 = 20;
LABEL_18:
      LOBYTE(v19) = 5;
      WPP_RECORDER_SF_(v20->DeviceExtension, v19, 11, v21, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  v23 = *(struct _ERESOURCE **)v8;
  *(_QWORD *)(v8 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v23);
}
