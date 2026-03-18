/*
 * XREFs of ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005C88
 * Callers:
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00058DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 * Callees:
 *     ?IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ @ 0x1C00061A0 (-IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00D3304 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 */

unsigned __int8 __fastcall COREACCESS::AcquireExclusive(__int64 a1, unsigned int a2)
{
  unsigned __int8 result; // al
  struct _KEVENT *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v8[3] = 275LL;
    v8[4] = 4LL;
    v8[5] = a1;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  result = DXGADAPTER::IsWorkerThreadOfExclusiveOwner(*(DXGADAPTER **)(a1 + 16));
  if ( !result )
  {
    if ( !KeReadStateEvent(v5 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v6, &EventBlockThread, v7, 72LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 16) + 48LL), Executive, 0, 0, 0LL);
    }
    LOBYTE(v7) = 1;
    result = DXGADAPTER::AcquireCoreResourceExclusive(*(_QWORD *)(a1 + 16), a2, v7);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}
