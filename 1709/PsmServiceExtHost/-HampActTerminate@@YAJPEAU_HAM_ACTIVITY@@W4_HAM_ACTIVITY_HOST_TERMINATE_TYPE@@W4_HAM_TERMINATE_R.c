/*
 * XREFs of ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18004800C
 * Callers:
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180042C30 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978 (-HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_H.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180045038 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180045490 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 */

__int64 __fastcall HampActTerminate(__int64 a1, unsigned int a2, char a3)
{
  int v6; // ebp
  struct _HAM_DEPENDENCY_GROUP *v7; // rsi
  unsigned int v8; // ebx
  int v9; // eax

  v6 = 0;
  v7 = 0LL;
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 72), 0);
  if ( *(_BYTE *)(a1 + 500) == 4 )
  {
    v8 = -1073741275;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 496);
    if ( (v9 & 8) != 0 )
    {
      if ( (v9 & 0x10) != 0 )
      {
        v8 = -1073741558;
      }
      else
      {
        HampHostQueueTerminate(*(_QWORD *)(a1 + 72), a2, a3);
        v7 = *(struct _HAM_DEPENDENCY_GROUP **)(*(_QWORD *)(a1 + 72) + 640LL);
        HampDepGroupAcquireLockExclusive(v7);
        v6 = HampDepGroupTryEnterStateChange(v7, (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + 600LL));
        HampDepGroupReleaseLockExclusive(v7);
        v8 = 0;
      }
    }
    else
    {
      v8 = -1073741436;
    }
  }
  HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 72));
  if ( v6 )
    HampDepGroupRunStateChangeWorker(v7);
  return v8;
}
