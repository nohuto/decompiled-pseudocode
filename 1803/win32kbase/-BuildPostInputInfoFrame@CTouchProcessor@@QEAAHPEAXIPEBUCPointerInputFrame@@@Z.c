/*
 * XREFs of ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C010D78C
 * Callers:
 *     BuildPostInputInfoFrame @ 0x1C011F5D0 (BuildPostInputInfoFrame.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C010D910 (-CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::BuildPostInputInfoFrame(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  size_t v11; // r15
  unsigned int PointerInfoSize; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rbx
  CInpLockGuard *v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v18,
    (CTouchProcessor *)((char *)this + 72));
  i = 0;
  if ( a3 < CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  if ( a3 >= CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
  {
    v11 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 12) + 232LL));
      v11 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    }
    *a2 = 0;
    v15 = 0LL;
    for ( i = 1; (unsigned int)v15 < *((_DWORD *)a4 + 12); v15 = (unsigned int)(v15 + 1) )
    {
      v16 = *((_QWORD *)a4 + 12) + 576 * v15;
      memmove(&a2[36 * *a2 + 2], (const void *)(v16 + 232), v11);
      ++*a2;
      if ( *(_DWORD *)(v16 + 376) )
        a2[1] = 1;
    }
  }
  if ( !v19 )
    CInpLockGuard::UnLock((PERESOURCE *)v18);
  return i;
}
