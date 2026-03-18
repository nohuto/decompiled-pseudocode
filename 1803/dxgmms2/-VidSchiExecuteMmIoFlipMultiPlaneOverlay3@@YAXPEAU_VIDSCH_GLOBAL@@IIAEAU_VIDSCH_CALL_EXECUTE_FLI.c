/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0027464
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0027284 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0027964 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C002A924 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C002CDEC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
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
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r12
  _QWORD *v21; // rax
  int v22; // edx
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v24; // [rsp+41h] [rbp-BFh]
  int v25; // [rsp+44h] [rbp-BCh]
  __int128 v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v31[80]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = a2;
  v25 = a3;
  v10 = (char *)a6 + 1280 * a7;
  memset(v31, 0, sizeof(v31));
  v29[0] = 0LL;
  v29[1] = 0LL;
  memset(v30, 0, 0x28uLL);
  v24 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (_DWORD)a1,
    (_DWORD)v10 + 56,
    v9,
    (_DWORD)a4,
    v24,
    (__int64)v31,
    (__int64)v29,
    (__int64)v30);
  if ( !*((_DWORD *)a4 + 5) )
  {
    *((_DWORD *)a4 + 530) = 0;
    v12 = WdLogNewEntry5_WdEvent(0LL, v11);
    *(_QWORD *)(v12 + 24) = v9;
    *(_QWORD *)(v12 + 32) = (**((_DWORD **)v10 + 152) >> 10) & 0x3FF;
LABEL_5:
    WdLogEvent5_WdEvent(v12);
LABEL_6:
    VidSchiComputeFlipEntryStatusAfterFlip(v13, a4, a5);
    v14 = *(unsigned int *)a5;
    if ( (_DWORD)v14 == 11 )
    {
      v15 = *((_QWORD *)a1 + v9 + 379);
      *((_QWORD *)a4 + 266) = *(_QWORD *)(v15 + 28040);
      *((_DWORD *)a4 + 531) = *(_DWORD *)(v15 + 28032);
      v14 = *(unsigned int *)a5;
    }
    VidSchiLogMmIoFlipMultiPlaneOverlay3(a1, v10 + 56, a4, v14);
    return;
  }
  if ( (*((_DWORD *)v10 + 294) & 0x800) != 0 )
  {
    *((_DWORD *)a4 + 530) = 0;
    v12 = WdLogNewEntry5_WdEvent(0LL, v11);
    goto LABEL_5;
  }
  v16 = *((unsigned int *)a1 + 8);
  v23 = 0;
  v17 = DpSynchronizeExecution(*((_QWORD *)a1 + 3), VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, a4, v16, &v23);
  v20 = v17;
  if ( v17 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v18, v19);
    v21[3] = 281LL;
    v21[4] = 11LL;
    v21[5] = v20;
    v21[6] = a4;
    v21[7] = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdCriticalError(v21);
    __debugbreak();
  }
  if ( *((_DWORD *)a4 + 530) != -1073741267 || (*((_DWORD *)a4 + 4) & 1) == 0 )
    goto LABEL_6;
  *(_QWORD *)&v26 = a1;
  v27 = v25;
  v28 = v24;
  *((_QWORD *)&v26 + 1) = __PAIR64__(v9, a7);
  VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v26, 5);
  if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 )
    v22 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
  else
    v22 = (1 << *((_DWORD *)a1 + 33)) - 1;
  *(_DWORD *)(*((_QWORD *)a1 + v9 + 379) + 2316LL) |= v22;
}
