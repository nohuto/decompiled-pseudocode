/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x1C0032690
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C00062AC (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C006B548 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C009E4E4 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitCommandToHwQueue(__int64 a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // r15
  struct VIDSCH_SUBMIT_DATA2 *v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 result; // rax
  __int64 HwQueuePacket; // rbx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  VIDMM_PROCESS *v13; // r12
  UINT v14; // r13d
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // eax
  char v23; // cl
  unsigned int v24; // r15d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  void *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-35h] BYREF
  __int64 v35; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-21h] BYREF
  int v38; // [rsp+60h] [rbp-19h]
  __int64 v39; // [rsp+68h] [rbp-11h]
  _DXGKARG_SETROOTPAGETABLE v40; // [rsp+70h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2;
  v39 = a1;
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 188) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 184), 0, 0) )
  {
    v32 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v32 + 24) = v5;
    *(_QWORD *)(v32 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v32);
    return 3223192064LL;
  }
  else
  {
    v35 = *(_QWORD *)a2;
    if ( (v35 & 0x20) == 0
      || (result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v5, (struct _VIDSCH_SUBMIT_FLAGS *)&v35),
          (int)result >= 0) )
    {
      LOBYTE(a2) = 1;
      HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
      *(_DWORD *)HwQueuePacket = 1953189969;
      v10 = (v35 & 0x40000) == 0;
      *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(HwQueuePacket + 52) = 2;
      *(_DWORD *)(HwQueuePacket + 64) = 0;
      if ( v10 )
      {
        if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)(HwQueuePacket + 48) = 0;
          v11 = *(_QWORD *)(v5 + 40);
          v36 = 0LL;
          v34 = 0;
          v37 = 0LL;
          v12 = *(_QWORD *)(v11 + 8);
          v33 = 0;
          v13 = *(VIDMM_PROCESS **)(v12 + 72);
          if ( v13 )
            v13 = (VIDMM_PROCESS *)*((_QWORD *)v13 + 1);
          if ( v13 )
          {
            VIDMM_PROCESS::GetPageDirectoryData(
              v13,
              *(_DWORD *)(*(_QWORD *)(v7 + 16) + 200LL),
              *(unsigned __int16 *)(v6 + 6),
              &v36,
              &v33,
              &v34,
              &v37);
            if ( *(_QWORD *)(v2 + 160) != v36 )
            {
              v14 = v33;
              if ( v33 )
              {
                *(_QWORD *)(v2 + 160) = v36;
                memset(&v40, 0, sizeof(v40));
                v15 = *(_QWORD *)(v7 + 8);
                v40.hContext = *(HANDLE *)(v2 + 40);
                v40.Address.SegmentId = v34;
                v40.Address.SegmentOffset = v37;
                v40.NumEntries = v14;
                ((void (__fastcall *)(__int64, _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[48])(v15, &v40);
                *(_QWORD *)(v2 + 168) = v40.Address.SegmentOffset;
                VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
                  *(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 8) + 552LL),
                  v13,
                  &v40,
                  (void *)v2);
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(HwQueuePacket + 48) = 3;
          v18 = *((unsigned int *)v3 + 29);
          if ( (_DWORD)v18 != -1 )
          {
            v19 = *((_DWORD *)v3 + 124);
            v20 = ((unsigned __int16)v19 | (unsigned __int16)(v19 >> 10)) & 0x3FF;
            if ( (((unsigned __int16)v19 | (unsigned __int16)(v19 >> 10)) & 0x3FF) != 0 )
            {
              v21 = *(_QWORD *)(v7 + 8 * v18 + 3032);
              do
              {
                v10 = !_BitScanForward((unsigned int *)&v22, v20);
                v23 = -1;
                v38 = v22;
                if ( !v10 )
                  v23 = v22;
                v24 = v23;
                v25 = 216LL * (unsigned int)v23;
                v26 = *(int *)(v25 + v21 + 140);
                if ( (int)v26 <= -1 )
                {
                  v27 = 0LL;
                }
                else
                {
                  v25 = 136 * v26;
                  v27 = *(unsigned int *)(136 * v26 + *(_QWORD *)(v7 + 3160) + 112);
                }
                if ( (_DWORD)v27 == 2 )
                {
                  v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v20, v27);
                  v28[5] = v24;
                  v28[3] = 281LL;
                  v28[4] = 0x100000LL;
                  v28[6] = *((unsigned int *)v3 + 29);
                  v28[7] = v7;
                  WdLogEvent5_WdCriticalError(v28);
                  __debugbreak();
                }
                v20 = ~(1 << v24) & (unsigned int)v20;
              }
              while ( (_DWORD)v20 );
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(HwQueuePacket + 48) = 7;
      }
      *(_QWORD *)(HwQueuePacket + 96) = v39;
      *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
      v16 = v35;
      *(_QWORD *)(HwQueuePacket + 72) = v35;
      *(_QWORD *)(HwQueuePacket + 144) = *((_QWORD *)v3 + 12);
      *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v3 + 13);
      *(_DWORD *)(HwQueuePacket + 160) = *((_DWORD *)v3 + 29);
      if ( (v16 & 4) != 0 )
      {
        *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 2192) >> 4)) & 4;
        if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) == 0 && (v16 & 0xC00) != 0x400 )
        {
          v17 = *((unsigned int *)v3 + 29);
          *((_QWORD *)v3 + 16) = ++*(_QWORD *)(v5 + 8 * v17 + 232);
        }
      }
      else if ( (v16 & 0x20) != 0 )
      {
        *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 2192) >> 5)) & 4;
      }
      else
      {
        *(_DWORD *)(HwQueuePacket + 64) |= 4u;
      }
      memmove((void *)(HwQueuePacket + 272), v3, *((unsigned int *)v3 + 121));
      if ( *((_QWORD *)v3 + 3) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 296) + 4LL));
      v29 = *(void **)(HwQueuePacket + 360);
      if ( v29 )
        ObfReferenceObject(v29);
      v30 = *(_QWORD *)(HwQueuePacket + 280);
      if ( v30 && (*(_DWORD *)(HwQueuePacket + 272) & 0x8000000) != 0 && !*(_QWORD *)(HwQueuePacket + 312) )
        *(_QWORD *)(HwQueuePacket + 312) = *(_QWORD *)(v30 + 96);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
      v31 = *((unsigned int *)v3 + 29);
      if ( (unsigned int)v31 < *(_DWORD *)(v7 + 40) && (*(_BYTE *)v3 & 5) == 5 )
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v31 + 3032) + 61280LL), 2, 1);
      return 0LL;
    }
  }
  return result;
}
