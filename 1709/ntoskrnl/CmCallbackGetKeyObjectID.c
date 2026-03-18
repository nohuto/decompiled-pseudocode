/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x140689100
 * Callers:
 *     EtwpRegTraceCallback @ 0x14074A050 (EtwpRegTraceCallback.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpConstructAndCacheName @ 0x140598A9C (CmpConstructAndCacheName.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  unsigned __int64 v8; // rdi
  NTSTATUS started; // ebx
  PPRIVILEGE_SET v11[5]; // [rsp+20h] [rbp-28h] BYREF
  const UNICODE_STRING *v12; // [rsp+58h] [rbp+10h] BYREF

  memset(v11, 0, 0x20uLL);
  WORD1(v11[0]) = -1;
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
    CmpLockRegistry();
    started = CmpStartKcbStackForTopLayerKcb((__int64)v11, v8);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared((__int64)v11);
      if ( *(_QWORD *)(v8 + 72) && (int)CmpConstructAndCacheName(v8, &v12) >= 0 )
      {
        started = 0;
        *ObjectName = v12;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack((__int64)v11);
    }
    CmpUnlockRegistry();
  }
  else
  {
LABEL_16:
    started = -1073741811;
  }
LABEL_17:
  if ( v11[3] )
    MiDeleteSubsection(v11[3]);
  return started;
}
