/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1404A53D0
 * Callers:
 *     <none>
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
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int started; // ebx
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  PPRIVILEGE_SET v15[4]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v16[48]; // [rsp+48h] [rbp-50h] BYREF

  memset(v15, 0, sizeof(v15));
  v14 = 0LL;
  WORD1(v15[0]) = -1;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    goto LABEL_20;
  v9 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v9;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_15;
  }
  if ( (v9 & 1) == 0 )
  {
    CmpAttachToRegistryProcess(v16);
    CmpLockRegistry(v10);
    started = CmpStartKcbStackForTopLayerKcb(v15, v9);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(v15);
      if ( *(_QWORD *)(v9 + 72) && (int)CmpConstructNameWithStatus(v9, &v14) >= 0 )
      {
        started = 0;
        *a4 = v14;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(v15);
    }
    CmpUnlockRegistry(v11);
    KiUnstackDetachProcess((__int64)v16, 0LL);
  }
  else
  {
LABEL_20:
    started = -1073741811;
  }
LABEL_15:
  if ( v15[3] )
    CmSiFreeMemory(v15[3]);
  return (unsigned int)started;
}
