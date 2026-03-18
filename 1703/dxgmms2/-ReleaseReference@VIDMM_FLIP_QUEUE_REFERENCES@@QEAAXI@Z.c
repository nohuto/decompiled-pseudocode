/*
 * XREFs of ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001E340
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x1C0096FBC (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAUVID.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(int *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax

  if ( _InterlockedExchangeAdd(P, 0xFFFFFFFF) == 1 )
  {
    if ( P[2] )
    {
      v4 = P[2];
      v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(P, a2, a3);
      v5[7] = 0LL;
      v5[3] = 270LL;
      v5[4] = 42LL;
      v5[5] = P;
      v5[6] = v4;
      WdLogEvent5_WdCriticalError(v5);
    }
    ExFreePoolWithTag(P, 0);
  }
}
