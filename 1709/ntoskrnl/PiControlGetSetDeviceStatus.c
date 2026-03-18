/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x140526EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400DF360 (PiControlFreeUserModeCallersBuffer.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x1400FFD98 (PnpDeleteDeviceActionRequest.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PnpCancelDeviceActionRequest @ 0x1401FFA48 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1401FFAA0 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140525AE4 (PiControlMakeUserModeCallersCopy.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14052747C (PiControlGetUserFlagsFromDeviceNode.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, void **a2, unsigned int a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 v5; // rsi
  volatile signed __int32 *v6; // rdi
  SIZE_T v8; // r13
  void *v10; // r12
  __int64 result; // rax
  _QWORD *v12; // r15
  int v13; // ecx
  BOOL v14; // r14d
  int v15; // ebx
  int v16; // ecx
  NTSTATUS v17; // eax
  PVOID PoolWithTag; // rax
  __int64 v19; // r9
  int v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  _WORD v23[4]; // [rsp+48h] [rbp-28h] BYREF
  void *v24; // [rsp+50h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF

  v4 = *(_WORD *)a2;
  v5 = 0LL;
  LODWORD(v26) = 0;
  v6 = 0LL;
  v8 = a3;
  v22 = 0LL;
  v23[1] = v4;
  v23[0] = v4;
  v10 = 0LL;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v24, a2[1], v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)v23, 0x53706E50u);
    PiControlFreeUserModeCallersBuffer(a4, v24);
    if ( v12 )
      v5 = *(_QWORD *)(v12[39] + 40LL);
    PpDevNodeUnlockTree(0LL);
    if ( !v5 )
    {
      v15 = -1073741810;
LABEL_12:
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x53706E50u);
      if ( v15 < 0 )
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0x55706E50u);
      }
      return (unsigned int)v15;
    }
    if ( v5 == IopRootDeviceNode && *((_DWORD *)a2 + 4) )
    {
      v15 = -1073741790;
      goto LABEL_12;
    }
    v13 = *((_DWORD *)a2 + 4);
    v14 = (*((_DWORD *)a2 + 7) & 1) == 0;
    if ( !v13 )
    {
      PiControlGetUserFlagsFromDeviceNode(v5, (char *)a2 + 20);
      *((_DWORD *)a2 + 6) = *(_DWORD *)(v5 + 404);
      *((_DWORD *)a2 + 8) = *(_DWORD *)(v5 + 408);
      v15 = 0;
      goto LABEL_10;
    }
    v16 = v13 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        v15 = -1073741808;
        goto LABEL_12;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v15 = PnpRequestDeviceAction(v12, 1, 0, 0LL, (__int64)&Event, (__int64)&v26, &v22);
      if ( v15 >= 0 )
      {
        v17 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
        v6 = (volatile signed __int32 *)v22;
        v15 = v17;
        if ( v17 != 257 )
          goto LABEL_26;
        if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue((volatile signed __int32 *)v22) )
          goto LABEL_31;
        goto LABEL_43;
      }
    }
    else
    {
      if ( (*((_DWORD *)a2 + 7) & 1) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x55706E50u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v15 = -1073741670;
          goto LABEL_12;
        }
        memmove(PoolWithTag, a2, v8);
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
      }
      v19 = (__int64)v10;
      if ( v14 )
        v19 = (__int64)a2;
      v20 = PnpRequestDeviceAction(
              v12,
              15,
              0,
              v19,
              (unsigned __int64)&Event & -(__int64)v14,
              (unsigned __int64)&v26 & -(__int64)v14,
              (_QWORD *)((unsigned __int64)&v22 & -(__int64)v14));
      v15 = v20;
      if ( v14 && v20 >= 0 )
      {
        v21 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
        v6 = (volatile signed __int32 *)v22;
        v15 = v21;
        if ( v21 != 257 )
          goto LABEL_26;
        if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue((volatile signed __int32 *)v22) )
        {
LABEL_31:
          v15 = -1073741536;
LABEL_10:
          if ( v6 )
            PnpDeleteDeviceActionRequest(v6);
          goto LABEL_12;
        }
LABEL_43:
        PnpCancelDeviceActionRequest((__int64)v6);
        v15 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_26:
        if ( !v15 )
          v15 = v26;
        goto LABEL_10;
      }
    }
    v6 = (volatile signed __int32 *)v22;
    goto LABEL_10;
  }
  return result;
}
