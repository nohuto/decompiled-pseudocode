/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1406ED4C0
 * Callers:
 *     EtwpRegTraceCallback @ 0x1407AC510 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpConstructAndCacheName @ 0x14057FA5C (CmpConstructAndCacheName.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v8; // rdi
  NTSTATUS started; // ebx
  const UNICODE_STRING *v11; // [rsp+20h] [rbp-78h] BYREF
  PPRIVILEGE_SET v12[4]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v13[48]; // [rsp+48h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  WORD1(v12[0]) = -1;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !Cookie )
    goto LABEL_16;
  v8 = *((_QWORD *)Object + 1);
  if ( ObjectID )
    *ObjectID = v8;
  if ( !ObjectName )
  {
    started = 0;
    goto LABEL_17;
  }
  if ( (v8 & 1) == 0 )
  {
    CmpAttachToRegistryProcess((__int64)v13);
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)v12, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)v12);
      if ( *(_QWORD *)(v8 + 72) && (int)CmpConstructAndCacheName(v8, &v11) >= 0 )
      {
        started = 0;
        *ObjectName = v11;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)v12);
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((__int64)v13, 0LL);
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( v12[3] )
    CmSiFreeMemory(v12[3]);
  return started;
}
