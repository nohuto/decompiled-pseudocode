/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14043F980
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  int started; // ebx
  _WORD v13[20]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  memset(v13, 0, 0x20uLL);
  v14 = 0LL;
  v13[1] = -1;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    return (unsigned int)-1073741811;
  v10 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v10;
  if ( !a4 )
    return 0;
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  CmpLockRegistry(v9);
  started = CmpStartKcbStackForTopLayerKcb(v13, v10);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared(v13);
    if ( *(_QWORD *)(v10 + 72) && (int)CmpConstructNameWithStatus(v10, &v14) >= 0 )
    {
      started = 0;
      *a4 = v14;
    }
    else
    {
      started = -1073741670;
    }
    CmpUnlockKcbStack(v13);
  }
  CmpUnlockRegistry();
  return (unsigned int)started;
}
