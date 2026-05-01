/*
 * XREFs of ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180037CC4
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180038440 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     CrmGlobalsInitialize @ 0x180037F78 (CrmGlobalsInitialize.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180038014 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800381CC (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003831C (-RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x18003842C (-RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x180061610 (-RmpSystemEnableAsyncInSwap@@YAXXZ.c)
 */

void __fastcall RmpInitializeAllModules(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-50h]

  memset_0(a2, 0, 0x978uLL);
  v4 = *((_OWORD *)a1 + 1);
  *((_OWORD *)a2 + 140) = *(_OWORD *)a1;
  v5 = *((_OWORD *)a1 + 2);
  *((_OWORD *)a2 + 141) = v4;
  v6 = *((_OWORD *)a1 + 3);
  *((_OWORD *)a2 + 142) = v5;
  v7 = *((_OWORD *)a1 + 4);
  *((_OWORD *)a2 + 143) = v6;
  v8 = *((_OWORD *)a1 + 5);
  *((_OWORD *)a2 + 144) = v7;
  v9 = *((_OWORD *)a1 + 6);
  *((_OWORD *)a2 + 145) = v8;
  v10 = *((_OWORD *)a1 + 8);
  *((_OWORD *)a2 + 146) = v9;
  v11 = (*(_BYTE *)a1 & 8) == 0;
  *((_OWORD *)a2 + 147) = *((_OWORD *)a1 + 7);
  v12 = *((_OWORD *)a1 + 9);
  *((_OWORD *)a2 + 148) = v10;
  v13 = *((_OWORD *)a1 + 10);
  *((_OWORD *)a2 + 149) = v12;
  *((_OWORD *)a2 + 150) = v13;
  if ( !v11 )
    RmpSystemEnableAsyncInSwap();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  RmpPageSize = v20;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 16));
  *((_DWORD *)a2 + 494) = 0;
  *((_QWORD *)a2 + 248) = 0LL;
  *((_DWORD *)a2 + 495) = 0;
  *((_DWORD *)a2 + 498) = 0;
  *((_QWORD *)a2 + 250) = 0LL;
  *((_DWORD *)a2 + 499) = 0;
  memset_0((char *)a2 + 704, 0, 0x1C8uLL);
  *((_QWORD *)a2 + 88) = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 728));
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 752));
  *((_DWORD *)a2 + 194) = 0;
  *((_QWORD *)a2 + 98) = 0LL;
  *((_DWORD *)a2 + 195) = 0;
  *((_QWORD *)a2 + 90) = (char *)a2 + 712;
  *((_QWORD *)a2 + 89) = (char *)a2 + 712;
  *((_QWORD *)a2 + 140) = (char *)a2 + 1112;
  *((_QWORD *)a2 + 139) = (char *)a2 + 1112;
  *((_DWORD *)a2 + 284) = -1;
  RmpEnforcerContextInitialize(a1, a2);
  RmpGameModeInitialize(a2, (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1160));
  memset_0((char *)a2 + 336, 0, 0x58uLL);
  *((_QWORD *)a2 + 45) = (char *)a2 + 352;
  *((_QWORD *)a2 + 44) = (char *)a2 + 352;
  RtlInitializeConditionVariable((char *)a2 + 368);
  *((_QWORD *)a2 + 42) = 0LL;
  *((_QWORD *)a2 + 43) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 336);
  *((_DWORD *)a2 + 86) = 0;
  *((_QWORD *)a2 + 49) = 1LL;
  HampManagerInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 1312));
  memset_0((char *)a2 + 424, 0, 0x88uLL);
  v14 = *((_OWORD *)a1 + 2);
  *(_OWORD *)((char *)a2 + 424) = *((_OWORD *)a1 + 1);
  v15 = *((_OWORD *)a1 + 3);
  *(_OWORD *)((char *)a2 + 440) = v14;
  *(_QWORD *)&v14 = *((_QWORD *)a1 + 8);
  *(_OWORD *)((char *)a2 + 456) = v15;
  v16 = *(_OWORD *)((char *)a1 + 72);
  *((_QWORD *)a2 + 59) = v14;
  v17 = *(_OWORD *)((char *)a1 + 88);
  *((_OWORD *)a2 + 30) = v16;
  v18 = *(_OWORD *)((char *)a1 + 104);
  *((_OWORD *)a2 + 31) = v17;
  *((_OWORD *)a2 + 32) = v18;
  *((_DWORD *)a2 + 132) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 133) = *((_DWORD *)a1 + 1);
  *((_BYTE *)a2 + 536) = *((_BYTE *)a1 + 8);
  *((_DWORD *)a2 + 138) = *((_DWORD *)a1 + 31);
  *((_DWORD *)a2 + 137) = *((_DWORD *)a1 + 32);
  *((_DWORD *)a2 + 135) = *((_DWORD *)a1 + 30);
  *((_DWORD *)a2 + 136) = 60;
  memset_0((char *)a2 + 600, 0, 0x58uLL);
  RtlInitializeSRWLock((char *)a2 + 616);
  *((_QWORD *)a2 + 73) = 0LL;
  *((_QWORD *)a2 + 74) = 0LL;
  *((_QWORD *)a2 + 86) = 0LL;
  *((_QWORD *)a2 + 87) = 0LL;
  CrmGlobalsInitialize();
}
