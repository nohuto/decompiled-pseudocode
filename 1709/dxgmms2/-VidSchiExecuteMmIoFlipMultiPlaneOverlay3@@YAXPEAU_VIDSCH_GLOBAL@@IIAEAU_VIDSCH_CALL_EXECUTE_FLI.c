/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0024934
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C00140F0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C002474C (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0024E4C (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0027C28 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0029EDC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
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
  __int64 v9; // rsi
  char *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r12
  int v22; // edx
  _QWORD *v23; // rax
  void *v24; // rcx
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v26; // [rsp+41h] [rbp-BFh]
  int v27; // [rsp+44h] [rbp-BCh]
  __int128 v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  _QWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[80]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = a2;
  v27 = a3;
  v10 = (char *)a6 + 1232 * a7;
  memset(v33, 0, sizeof(v33));
  v31[0] = 0LL;
  v31[1] = 0LL;
  memset(v32, 0, 0x28uLL);
  v26 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    (_DWORD)a1,
    (_DWORD)v10 + 56,
    v9,
    (_DWORD)a4,
    v26,
    (__int64)v33,
    (__int64)v31,
    (__int64)v32);
  if ( !*((_DWORD *)a4 + 5) )
  {
    *((_DWORD *)a4 + 530) = 0;
    v13 = WdLogNewEntry5_WdEvent(v12, v11);
    *(_QWORD *)(v13 + 24) = v9;
    *(_QWORD *)(v13 + 32) = (**((_DWORD **)v10 + 152) >> 10) & 0x3FF;
    WdLogEvent5_WdEvent(v13);
LABEL_3:
    VidSchiComputeFlipEntryStatusAfterFlip(v14, a4, a5);
    if ( *(_DWORD *)a5 == 11 )
    {
      v15 = *((_QWORD *)a1 + v9 + 376);
      *((_QWORD *)a4 + 266) = *(_QWORD *)(v15 + 23560);
      *((_DWORD *)a4 + 531) = *(_DWORD *)(v15 + 23552);
    }
    VidSchiLogMmIoFlipMultiPlaneOverlay3(a1, v10 + 56, a4, *(unsigned int *)a5);
    return;
  }
  v16 = *((unsigned int *)a1 + 8);
  v17 = *((_QWORD *)a1 + 3);
  v25 = 0;
  v18 = DpSynchronizeExecution(v17, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, a4, v16, &v25);
  v21 = v18;
  if ( v18 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v19, v20);
    v23[3] = 281LL;
    v23[4] = 11LL;
    v23[5] = v21;
    v23[6] = a4;
    v23[7] = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdCriticalError(v23);
    VidMmFreeDeferredDmaBufferMapping(v24);
    JUMPOUT(0x1C0024B89LL);
  }
  if ( *((_DWORD *)a4 + 530) != -1073741267 || (*((_DWORD *)a4 + 4) & 1) == 0 )
    goto LABEL_3;
  *(_QWORD *)&v28 = a1;
  v29 = v27;
  v30 = v26;
  *((_QWORD *)&v28 + 1) = __PAIR64__(v9, a7);
  VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v28, 5);
  if ( (*((_DWORD *)v10 + 294) & 0x10) != 0 )
    v22 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
  else
    v22 = (1 << *((_DWORD *)a1 + 32)) - 1;
  *(_DWORD *)(*((_QWORD *)a1 + v9 + 376) + 2956LL) |= v22;
}
