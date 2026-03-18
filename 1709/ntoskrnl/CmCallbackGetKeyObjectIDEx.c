/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14047D9D0
 * Callers:
 *     <none>
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  int started; // ebx
  PPRIVILEGE_SET v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  memset(v14, 0, 0x20uLL);
  v15 = 0LL;
  WORD1(v14[0]) = -1;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !a1 || a5 )
    goto LABEL_20;
  v10 = *(_QWORD *)(a2 + 8);
  if ( a3 )
    *a3 = v10;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_15;
  }
  if ( (v10 & 1) == 0 )
  {
    CmpLockRegistry(v9);
    started = CmpStartKcbStackForTopLayerKcb(v14, v10);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(v14);
      if ( *(_QWORD *)(v10 + 72) && (int)CmpConstructNameWithStatus(v10, &v15) >= 0 )
      {
        started = 0;
        *a4 = v15;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(v14);
    }
    CmpUnlockRegistry(v11);
  }
  else
  {
LABEL_20:
    started = -1073741811;
  }
LABEL_15:
  if ( v14[3] )
    MiDeleteSubsection(v14[3]);
  return (unsigned int)started;
}
