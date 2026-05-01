/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019884
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800191D4 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall HampHostInitialize(char a1, struct _RM_PSM_HOST_INFO *a2, struct _RM_HAM_ACTIVITY_HOST *a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1

  memset_0(a3, 0, 0x2F0uLL);
  RtlInitializeSRWLock(a3);
  *((_DWORD *)a3 + 2) = 0;
  *((_QWORD *)a3 + 74) = (char *)a3 + 584;
  *((_QWORD *)a3 + 73) = (char *)a3 + 584;
  RtlInitializeConditionVariable((char *)a3 + 16);
  RtlInitializeConditionVariable((char *)a3 + 632);
  *((_QWORD *)a3 + 81) = 0LL;
  *((_QWORD *)a3 + 82) = 0LL;
  *((_QWORD *)a3 + 83) = 0LL;
  *((_QWORD *)a3 + 83) = -1LL;
  *((_DWORD *)a3 + 177) &= ~1u;
  *((_DWORD *)a3 + 177) |= a1 & 1;
  if ( a2 )
  {
    v6 = 4LL;
    v7 = (_OWORD *)((char *)a3 + 24);
    do
    {
      *v7 = *(_OWORD *)a2;
      v7[1] = *((_OWORD *)a2 + 1);
      v7[2] = *((_OWORD *)a2 + 2);
      v7[3] = *((_OWORD *)a2 + 3);
      v7[4] = *((_OWORD *)a2 + 4);
      v7[5] = *((_OWORD *)a2 + 5);
      v7[6] = *((_OWORD *)a2 + 6);
      v7 += 8;
      v8 = *((_OWORD *)a2 + 7);
      a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
      *(v7 - 1) = v8;
      --v6;
    }
    while ( v6 );
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  }
}
