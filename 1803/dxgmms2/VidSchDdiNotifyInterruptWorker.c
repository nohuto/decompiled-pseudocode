/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000C520
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000C420 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0033C70 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C00030C4 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C980 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000D410 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E144 (VidSchiProcessIsrPreemptedPacket.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C002253C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C002888C (LogPageFaultInformation.c)
 *     McTemplateK0qq @ 0x1C002A344 (McTemplateK0qq.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002B6AC (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x1C003330C (VidSchiProcessIsrGpuEngineTimeout.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C0033374 (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x1C00333DC (VidSchiProcessIsrSchedulingLogFull.c)
 */

int __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r15
  _QWORD *v42; // rax
  int v43; // eax
  _QWORD *v44; // rax
  int v45; // eax
  unsigned int v46; // eax
  union _SLIST_HEADER *v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // ebp
  PSLIST_ENTRY v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  PSLIST_ENTRY v53; // rbx
  const EVENT_DESCRIPTOR *v54; // rdx
  const GUID *v55; // r8
  __int64 v56; // rax
  unsigned int v58; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v3) = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 528);
  v7 = a1;
  if ( *(_DWORD *)a2 <= 0xAu )
  {
    a1 = 1160LL;
    if ( _bittest((const int *)&a1, v3) )
    {
      if ( (*(_DWORD *)(v5 + 36) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v5 + 64) > 1u )
        {
          v13 = *(unsigned int *)(a2 + 72);
          if ( (v13 & 1) != 0 )
          {
            if ( (_DWORD)v3 == 7 )
              v24 = *(unsigned int *)(a2 + 12);
            else
              v24 = (_DWORD)v3 == 10 ? *(unsigned int *)(a2 + 12) : *(unsigned int *)(a2 + 24);
            if ( !(_DWORD)v24 )
            {
              v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, a2, v24);
              v25[3] = 281LL;
              v25[4] = 6LL;
              v25[5] = v5;
              v25[6] = 0LL;
              v25[7] = 0LL;
              WdLogEvent5_WdCriticalError(v25);
              JUMPOUT(0x1C001D98ALL);
            }
          }
        }
        v14 = MEMORY[0xFFFFF78000000320];
        v15 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v5, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2);
        if ( v15 == -1 || v15 >= *(_DWORD *)(v5 + 40) )
        {
          v3 = *(unsigned int *)(v5 + 5824);
          *(_QWORD *)(v5 + 8 * v3 + 5832) = v14;
          v26 = 10 * v3;
          *(_OWORD *)(v5 + 8 * v26 + 5864) = *(_OWORD *)a2;
          *(_OWORD *)(v5 + 8 * v26 + 5880) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v5 + 8 * v26 + 5896) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v5 + 8 * v26 + 5912) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(v5 + 8 * v26 + 5928) = *(_OWORD *)(a2 + 64);
          LODWORD(v3) = ((unsigned __int8)*(_DWORD *)(v5 + 5824) + 1) & 3;
          *(_DWORD *)(v5 + 5824) = v3;
        }
        else
        {
          _mm_lfence();
          v16 = *(_QWORD *)(v5 + 8LL * v15 + 3032);
          v3 = *(unsigned int *)(v16 + 28132);
          *(_QWORD *)(v16 + 8 * v3 + 28136) = v14;
          v17 = 10 * v3;
          *(_OWORD *)(v16 + 8 * v17 + 28168) = *(_OWORD *)a2;
          *(_OWORD *)(v16 + 8 * v17 + 28184) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v16 + 8 * v17 + 28200) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v16 + 8 * v17 + 28216) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(v16 + 8 * v17 + 28232) = *(_OWORD *)(a2 + 64);
          LODWORD(v3) = ((unsigned __int8)*(_DWORD *)(v16 + 28132) + 1) & 3;
          *(_DWORD *)(v16 + 28132) = v3;
        }
        return v3;
      }
    }
  }
  switch ( (_DWORD)v3 )
  {
    case 1:
      LODWORD(v3) = *(_DWORD *)(v5 + 36);
      if ( (v3 & 1) != 0 )
      {
        v8 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v5 + 68);
        if ( !(_DWORD)a3 || (v3 = *(_QWORD *)(v5 + 432), a1 = (unsigned int)v8, !_bittest64(&v3, (unsigned int)v8)) )
        {
          v9 = *(_QWORD *)(v5 + 8 * v8 + 440);
          LODWORD(v3) = *(_DWORD *)(v9 + 16);
          if ( (_DWORD)v3 != 1 )
          {
            if ( (_DWORD)a3 && *(_DWORD *)(v9 + 16) == 2 )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
              v27[3] = 281LL;
              v27[4] = 16LL;
              v27[5] = v5;
              v27[6] = *(unsigned __int16 *)(v9 + 4);
              v27[7] = 0LL;
              WdLogEvent5_WdCriticalError(v27);
              JUMPOUT(0x1C001DA23LL);
            }
            v10 = *(unsigned int *)(a2 + 8);
            v11 = *(unsigned int *)(v9 + 64);
            v12 = *(_QWORD *)(v9 + 24);
            v58 = v10;
            if ( (_DWORD)v10 == (_DWORD)v11 || (_DWORD)v10 == *(_DWORD *)(v9 + 72) )
              goto LABEL_16;
            LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 152), 0, 0);
            if ( (unsigned int)v3 < (unsigned int)v11 )
            {
              if ( (unsigned int)v10 <= (unsigned int)v3 || (unsigned int)v10 >= (unsigned int)v11 )
                goto LABEL_16;
            }
            else if ( (unsigned int)v10 <= (unsigned int)v3 && (unsigned int)v10 >= (unsigned int)v11 )
            {
LABEL_16:
              LODWORD(v3) = VidSchiProcessIsrCompletedPacket(v9, (unsigned int)v10, a3, a2);
              return v3;
            }
            if ( !*(_BYTE *)(v12 + 53) )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
              v28[3] = 281LL;
              v28[4] = 1LL;
              v28[5] = v10;
              v28[6] = v11;
              v28[7] = *(_QWORD *)(v12 + 16);
              WdLogEvent5_WdCriticalError(v28);
              JUMPOUT(0x1C001DA7FLL);
            }
            *(_DWORD *)(v9 + 2000) = 1;
            *(_BYTE *)(v9 + 1993) = 1;
          }
        }
      }
      return v3;
    case 0xB:
      LODWORD(v3) = *(_DWORD *)(v5 + 36);
      if ( (v3 & 1) != 0 )
      {
        v29 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v5 + 68);
        if ( !(_DWORD)a3 || (v3 = *(_QWORD *)(v5 + 432), a1 = (unsigned int)v29, !_bittest64(&v3, (unsigned int)v29)) )
        {
          v30 = *(_QWORD *)(v5 + 8 * v29 + 440);
          LODWORD(v3) = *(_DWORD *)(v30 + 16);
          if ( (_DWORD)v3 != 1 )
          {
            if ( (_DWORD)a3 && *(_DWORD *)(v30 + 16) == 2 )
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v29, a3);
              v31[3] = 281LL;
              v31[4] = 16LL;
              v31[5] = v5;
              v31[6] = *(unsigned __int16 *)(v30 + 4);
              v31[7] = 0LL;
              WdLogEvent5_WdCriticalError(v31);
              JUMPOUT(0x1C001DB01LL);
            }
            LODWORD(v3) = VidSchiProcessIsrMonitoredFenceSignaled(*(_QWORD *)(v5 + 8 * v29 + 440));
          }
        }
      }
      return v3;
    case 2:
      LODWORD(v3) = *(_DWORD *)(v5 + 36);
      if ( (v3 & 1) == 0 )
        return v3;
      v18 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v5 + 68);
      if ( (_DWORD)a3 )
      {
        v3 = *(_QWORD *)(v5 + 432);
        a1 = (unsigned int)v18;
        if ( _bittest64(&v3, (unsigned int)v18) )
          return v3;
      }
      v19 = *(_QWORD *)(v5 + 8 * v18 + 440);
      LODWORD(v3) = *(_DWORD *)(v19 + 16);
      if ( (_DWORD)v3 == 1 )
        return v3;
      if ( (_DWORD)a3 && *(_DWORD *)(v19 + 16) == 2 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v18, a3);
        v32[3] = 281LL;
        v32[4] = 16LL;
        v32[5] = v5;
        v32[6] = *(unsigned __int16 *)(v19 + 4);
        v32[7] = 0LL;
        WdLogEvent5_WdCriticalError(v32);
        JUMPOUT(0x1C001DB42LL);
      }
      v20 = *(unsigned int *)(a2 + 8);
      v21 = *(_QWORD *)(v19 + 24);
      v22 = *(unsigned int *)(v19 + 112);
      LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 160), 0, 0);
      if ( (unsigned int)v3 < (unsigned int)v22 )
      {
        if ( (unsigned int)v20 <= (unsigned int)v3 || (unsigned int)v20 >= (unsigned int)v22 )
        {
LABEL_40:
          LODWORD(v3) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v19, *(_DWORD *)(a2 + 12), 0LL, &v58);
          if ( (_DWORD)v3 )
          {
            do
            {
              v23 = VidSchiProcessIsrCompletedPacket(v19, v58, v4, a2);
              LODWORD(v3) = VidSchiProcessIsrPreemptedPacket(v19, *(unsigned int *)(a2 + 8), v4, a2);
            }
            while ( v23 );
          }
          return v3;
        }
      }
      else if ( (unsigned int)v20 <= (unsigned int)v3 && (unsigned int)v20 >= (unsigned int)v22 )
      {
        goto LABEL_40;
      }
      if ( !*(_BYTE *)(v21 + 53) )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v18, a3);
        v33[3] = 281LL;
        v33[4] = 1LL;
        v33[5] = v20;
        v33[6] = v22;
        v33[7] = *(_QWORD *)(v21 + 16);
        WdLogEvent5_WdCriticalError(v33);
        JUMPOUT(0x1C001DB9ELL);
      }
      *(_DWORD *)(v19 + 2000) = 1;
      *(_BYTE *)(v19 + 1993) = 1;
      return v3;
    case 4:
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
      v34[3] = 281LL;
      v34[4] = 13LL;
      v34[5] = *(unsigned int *)(a2 + 16);
      v34[6] = *(unsigned int *)(a2 + 20);
      v34[7] = *(unsigned int *)(a2 + 8);
      WdLogEvent5_WdCriticalError(v34);
      JUMPOUT(0x1C001DBD3LL);
    case 9:
      LODWORD(v3) = *(_DWORD *)(v5 + 36);
      if ( (v3 & 4) != 0 )
      {
        v35 = *(unsigned int *)(a2 + 32);
        if ( (v35 & 0x10) != 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, a2, a3);
          v36[3] = 281LL;
          v36[4] = 12LL;
          v36[5] = *(int *)(a2 + 32);
          v36[6] = *(unsigned int *)(a2 + 8);
          v36[7] = *(_QWORD *)(a2 + 40);
          WdLogEvent5_WdCriticalError(v36);
          JUMPOUT(0x1C001DC1DLL);
        }
        if ( (v35 & 0xC) == 0xC )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, a2, a3);
          v37[3] = 281LL;
          v37[4] = 13LL;
          v37[5] = *(int *)(a2 + 32);
          v37[6] = *(_QWORD *)(a2 + 64);
          v37[7] = *(_QWORD *)(a2 + 40);
          WdLogEvent5_WdCriticalError(v37);
          JUMPOUT(0x1C001DC5ELL);
        }
        if ( (unsigned int)v35 >= 0x40 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, a2, a3);
          v38[3] = 281LL;
          v38[4] = 13LL;
          v38[5] = *(int *)(a2 + 32);
          v38[6] = *(_QWORD *)(a2 + 64);
          v38[7] = *(_QWORD *)(a2 + 40);
          WdLogEvent5_WdCriticalError(v38);
          JUMPOUT(0x1C001DC9BLL);
        }
        v39 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v5 + 68);
        if ( (_DWORD)a3 && (v40 = *(_QWORD *)(v5 + 432), v35 = (unsigned int)v39, _bittest64(&v40, (unsigned int)v39)) )
        {
          LODWORD(v3) = LogPageFaultInformation(1LL, v7, a2);
        }
        else
        {
          v41 = *(_QWORD *)(v5 + 8 * v39 + 440);
          if ( *(_DWORD *)(v41 + 16) == 1 )
          {
            LODWORD(v3) = LogPageFaultInformation(2LL, v7, a2);
          }
          else
          {
            if ( (_DWORD)a3 && *(_DWORD *)(v41 + 16) == 2 )
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v39, a3);
              v42[3] = 281LL;
              v42[4] = 16LL;
              v42[5] = v5;
              v42[6] = *(unsigned __int16 *)(v41 + 4);
              v42[7] = 0LL;
              WdLogEvent5_WdCriticalError(v42);
              JUMPOUT(0x1C001DD37LL);
            }
            v43 = *(_DWORD *)(a2 + 32);
            if ( (v43 & 2) != 0 )
            {
              if ( (v43 & 0xC) == 0 )
              {
                v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v39, a3);
                v44[3] = 281LL;
                v44[4] = 13LL;
                v44[5] = *(int *)(a2 + 32);
                v44[6] = *(_QWORD *)(a2 + 64);
                v44[7] = *(_QWORD *)(a2 + 40);
                WdLogEvent5_WdCriticalError(v44);
                JUMPOUT(0x1C001DD7ALL);
              }
              if ( (v43 & 4) != 0 )
              {
                LODWORD(v3) = LogPageFaultInformation(3LL, v7, a2);
                *(_DWORD *)(v41 + 2000) = 1;
              }
              else
              {
                LODWORD(v3) = LogPageFaultInformation(4LL, v7, a2);
                *(_DWORD *)(v41 + 1996) = 1;
              }
            }
            else
            {
              LODWORD(v3) = VidSchiVerifyDriverReportedFenceId(
                              (struct _VIDSCH_NODE *)v41,
                              *(_DWORD *)(a2 + 8),
                              0LL,
                              &v58);
              if ( (_DWORD)v3 )
              {
                VidSchiProcessIsrCompletedPacket(v41, v58, v4, a2);
                VidSchiProcessIsrFaultedPacket(v41, v58, v4, a2);
                v45 = *(_DWORD *)(a2 + 32);
                if ( (v45 & 4) != 0 )
                {
                  LODWORD(v3) = LogPageFaultInformation(3LL, v7, a2);
                }
                else if ( (v45 & 8) != 0 )
                {
                  LODWORD(v3) = LogPageFaultInformation(4LL, v7, a2);
                }
                else
                {
                  LODWORD(v3) = LogPageFaultInformation(5LL, v7, a2);
                }
              }
            }
          }
        }
      }
      break;
    case 0xF:
      LODWORD(v3) = *(_DWORD *)(v5 + 36);
      if ( (v3 & 1) != 0 )
        LODWORD(v3) = VidSchiProcessIsrSchedulingLogFull(*(_QWORD *)(v5
                                                                   + 8LL
                                                                   * (*(_DWORD *)(a2 + 8)
                                                                    + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v5 + 68))
                                                                   + 440));
      break;
    case 0x10:
      LODWORD(v3) = *(_DWORD *)(v5 + 36);
      if ( (v3 & 1) != 0 )
        LODWORD(v3) = VidSchiProcessIsrGpuEngineTimeout(*(_QWORD *)(v5
                                                                  + 8LL
                                                                  * (*(_DWORD *)(a2 + 8)
                                                                   + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v5 + 68))
                                                                  + 440));
      break;
    case 0xE:
      v46 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
              *(ADAPTER_DISPLAY **)(*(_QWORD *)(v5 + 16) + 2456LL),
              *(_DWORD *)(a2 + 8));
      v49 = v46;
      if ( v46 == -1
        || (v47 = *(union _SLIST_HEADER **)(v5 + 8LL * v46 + 3032), (unsigned __int8)*(_DWORD *)(a2 + 12) >= 8u) )
      {
        v56 = WdLogNewEntry5_WdAssertion(v48, v47);
      }
      else
      {
        v50 = ExpInterlockedPopEntrySList(v47 + 3832);
        v53 = v50;
        if ( v50 )
        {
          HIDWORD(v50[2].Next) = *(_DWORD *)(a2 + 12);
          LODWORD(v50[2].Next) = v49;
          LODWORD(v50->Next) = 14;
          LODWORD(v3) = (unsigned int)ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1952), v50 + 1);
          if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
            LODWORD(v3) = McTemplateK0qq(
                            (PMCGEN_TRACE_CONTEXT)(unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
                            v54,
                            v55,
                            (const unsigned int)v53[2].Next,
                            HIDWORD(v53[2].Next));
          return v3;
        }
        v56 = WdLogNewEntry5_WdAssertion(v52, v51);
        *(_QWORD *)(v56 + 24) = *(unsigned int *)(a2 + 8);
        *(_QWORD *)(v56 + 32) = *(unsigned int *)(a2 + 12);
      }
      LODWORD(v3) = WdLogEvent5_WdAssertion(v56);
      return v3;
    default:
      return v3;
  }
  return v3;
}
