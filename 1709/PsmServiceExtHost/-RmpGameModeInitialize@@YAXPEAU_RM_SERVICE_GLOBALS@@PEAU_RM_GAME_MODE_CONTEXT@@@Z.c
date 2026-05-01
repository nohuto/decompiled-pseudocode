/*
 * XREFs of ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180024634
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800242F0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x180024728 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpGameModeInitialize(struct _RM_SERVICE_GLOBALS *a1, struct _RM_GAME_MODE_CONTEXT *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h]

  memset_0(a2, 0, 0x98uLL);
  *(_QWORD *)a2 = a1;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 72);
  v4 = (_QWORD *)((char *)a2 + 88);
  v5 = 2LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  *((_QWORD *)a2 + 4) = (char *)a2 + 24;
  *((_QWORD *)a2 + 3) = (char *)a2 + 24;
  v6 = 16LL;
  v7 = 0LL;
  if ( (int)D3DKMTGetYieldPercentage(&v6) < 0
    || (*((_DWORD *)a2 + 12) = HIDWORD(v7),
        *((_DWORD *)a2 + 15) = v7,
        v6 = 16LL,
        v7 = 0LL,
        (int)D3DKMTGetMemoryBudgetTarget(&v6) < 0) )
  {
    *((_BYTE *)a2 + 149) |= 1u;
  }
  else
  {
    *(_QWORD *)((char *)a2 + 52) = v7;
  }
  RmpSystemPublishGlobalGameModeState(0);
}
