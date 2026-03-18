/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C00224E8
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0022300 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C00229B0 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0025B84 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0027B6C (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 */

void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        int a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        struct VIDSCH_FLIP_QUEUE *a6,
        unsigned int a7)
{
  __int64 v9; // r14
  unsigned __int8 v10; // r13
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // r10
  _BYTE v20[4]; // [rsp+40h] [rbp-B1h] BYREF
  int v21; // [rsp+44h] [rbp-ADh]
  __int128 v22; // [rsp+48h] [rbp-A9h] BYREF
  int v23; // [rsp+58h] [rbp-99h]
  int v24; // [rsp+5Ch] [rbp-95h]
  char *v25; // [rsp+60h] [rbp-91h]
  _QWORD v26[2]; // [rsp+68h] [rbp-89h] BYREF
  _BYTE v27[40]; // [rsp+78h] [rbp-79h] BYREF
  _BYTE v28[64]; // [rsp+A0h] [rbp-51h] BYREF

  v9 = a2;
  v21 = a3;
  v25 = (char *)a6 + 1224 * a7 + 56;
  memset(v28, 0, sizeof(v28));
  v26[0] = 0LL;
  v26[1] = 0LL;
  memset(v27, 0, sizeof(v27));
  v10 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (_DWORD)a1,
    1224 * a7 + (_DWORD)a6 + 56,
    v9,
    (_DWORD)a4,
    v10,
    (__int64)v28,
    (__int64)v26,
    (__int64)v27);
  v11 = *((unsigned int *)a1 + 8);
  v12 = *((_QWORD *)a1 + 3);
  v20[0] = 0;
  v13 = DpSynchronizeExecution(v12, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, a4, v11, v20);
  v17 = v13;
  if ( v13 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
    v18[3] = 281LL;
    v18[4] = 11LL;
    v18[5] = v17;
    v18[6] = a4;
    v18[7] = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdCriticalError(v18);
    __debugbreak();
  }
  if ( *((_DWORD *)a4 + 530) == -1073741267 && (*((_DWORD *)a4 + 4) & 1) != 0 )
  {
    *(_QWORD *)&v22 = a1;
    v23 = v21;
    *((_QWORD *)&v22 + 1) = __PAIR64__(v9, a7);
    v24 = v10;
    VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v22, 5);
  }
  else
  {
    VidSchiComputeFlipEntryStatusAfterFlip(v15, a4, a5);
    if ( *(_DWORD *)a5 == 11 )
    {
      v19 = *((_QWORD *)a1 + v9 + 374);
      *((_QWORD *)a4 + 266) = *(_QWORD *)(v19 + 18808);
      *((_DWORD *)a4 + 531) = *(_DWORD *)(v19 + 18800);
    }
    VidSchiLogMmIoFlipMultiPlaneOverlay3(a1, v25, a4, *(unsigned int *)a5);
  }
}
