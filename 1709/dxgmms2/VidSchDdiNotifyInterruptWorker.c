/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000C020
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000BF70 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C002C4B0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C470 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000C900 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000CF34 (VidSchiProcessIsrPreemptedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000D11C (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0020018 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C0025C54 (LogPageFaultInformation.c)
 *     McTemplateK0qq @ 0x1C0027694 (McTemplateK0qq.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C00287C4 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C002DAFC (VidSchiProcessIsrMonitoredFenceSignaled.c)
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
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r15
  _QWORD *v38; // rax
  int v39; // eax
  _QWORD *v40; // rax
  int v41; // eax
  unsigned int v42; // eax
  union _SLIST_HEADER *v43; // rdx
  __int64 v44; // rcx
  unsigned int v45; // ebp
  PSLIST_ENTRY v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PSLIST_ENTRY v49; // rbx
  const EVENT_DESCRIPTOR *v50; // rdx
  const GUID *v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v55; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v3) = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 512);
  v7 = a1;
  if ( *(_DWORD *)a2 <= 0xAu && (a1 = 1160LL, _bittest((const int *)&a1, v3)) && (*(_DWORD *)(v5 + 36) & 0x10) != 0 )
  {
    if ( *(_DWORD *)(v5 + 60) > 1u )
    {
      v13 = *(unsigned int *)(a2 + 72);
      if ( (v13 & 1) != 0 )
      {
        if ( (_DWORD)v3 == 7 )
          v22 = *(unsigned int *)(a2 + 12);
        else
          v22 = (_DWORD)v3 == 10 ? *(unsigned int *)(a2 + 12) : *(unsigned int *)(a2 + 24);
        if ( !(_DWORD)v22 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, a2, v22);
          v23[3] = 281LL;
          v23[4] = 6LL;
          v23[5] = v5;
          v23[6] = 0LL;
          v23[7] = 0LL;
          WdLogEvent5_WdCriticalError(v23);
          JUMPOUT(0x1C001CBD8LL);
        }
      }
    }
    v14 = MEMORY[0xFFFFF78000000320];
    v15 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v5, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2);
    if ( v15 == -1 || v15 >= *(_DWORD *)(v5 + 40) )
    {
      v3 = *(unsigned int *)(v5 + 5632);
      *(_QWORD *)(v5 + 8 * v3 + 5640) = v14;
      v21 = 10 * v3;
      *(_OWORD *)(v5 + 8 * v21 + 5672) = *(_OWORD *)a2;
      *(_OWORD *)(v5 + 8 * v21 + 5688) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v5 + 8 * v21 + 5704) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v5 + 8 * v21 + 5720) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v5 + 8 * v21 + 5736) = *(_OWORD *)(a2 + 64);
      LODWORD(v3) = ((unsigned __int8)*(_DWORD *)(v5 + 5632) + 1) & 3;
      *(_DWORD *)(v5 + 5632) = v3;
    }
    else
    {
      _mm_lfence();
      v16 = *(_QWORD *)(v5 + 8LL * v15 + 3008);
      v3 = *(unsigned int *)(v16 + 23652);
      *(_QWORD *)(v16 + 8 * v3 + 23656) = v14;
      v17 = 10 * v3;
      *(_OWORD *)(v16 + 8 * v17 + 23688) = *(_OWORD *)a2;
      *(_OWORD *)(v16 + 8 * v17 + 23704) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v16 + 8 * v17 + 23720) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v16 + 8 * v17 + 23736) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v16 + 8 * v17 + 23752) = *(_OWORD *)(a2 + 64);
      LODWORD(v3) = ((unsigned __int8)*(_DWORD *)(v16 + 23652) + 1) & 3;
      *(_DWORD *)(v16 + 23652) = v3;
    }
  }
  else
  {
    if ( (_DWORD)v3 != 1 )
    {
      switch ( (_DWORD)v3 )
      {
        case 0xB:
          LODWORD(v3) = *(_DWORD *)(v5 + 36);
          if ( (v3 & 1) != 0 )
          {
            v26 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v5 + 64);
            if ( !(_DWORD)a3
              || (v3 = *(_QWORD *)(v5 + 416), a1 = (unsigned int)v26, !_bittest64(&v3, (unsigned int)v26)) )
            {
              v27 = *(_QWORD *)(v5 + 8 * v26 + 424);
              LODWORD(v3) = *(_DWORD *)(v27 + 16);
              if ( (_DWORD)v3 != 1 )
              {
                if ( (_DWORD)a3 && *(_DWORD *)(v27 + 16) == 2 )
                {
                  v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v26, a3);
                  v28[3] = 281LL;
                  v28[4] = 16LL;
                  v28[5] = v5;
                  v28[6] = *(unsigned __int16 *)(v27 + 4);
                  v28[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v28);
                  JUMPOUT(0x1C001CCE9LL);
                }
                LODWORD(v3) = VidSchiProcessIsrMonitoredFenceSignaled(*(_QWORD *)(v5 + 8 * v26 + 424));
              }
            }
          }
          break;
        case 2:
          LODWORD(v3) = *(_DWORD *)(v5 + 36);
          if ( (v3 & 1) != 0 )
          {
            v18 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v5 + 64);
            if ( !(_DWORD)a3
              || (v3 = *(_QWORD *)(v5 + 416), a1 = (unsigned int)v18, !_bittest64(&v3, (unsigned int)v18)) )
            {
              v19 = *(_QWORD *)(v5 + 8 * v18 + 424);
              LODWORD(v3) = *(_DWORD *)(v19 + 16);
              if ( (_DWORD)v3 != 1 )
              {
                if ( (_DWORD)a3 && *(_DWORD *)(v19 + 16) == 2 )
                {
                  v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v18, a3);
                  v29[3] = 281LL;
                  v29[4] = 16LL;
                  v29[5] = v5;
                  v29[6] = *(unsigned __int16 *)(v19 + 4);
                  v29[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v29);
                  JUMPOUT(0x1C001CD2ALL);
                }
                LODWORD(v3) = VidSchiVerifyDriverReportedFenceId(
                                (struct _VIDSCH_NODE *)v19,
                                *(_DWORD *)(a2 + 8),
                                1,
                                0LL);
                if ( (_DWORD)v3 )
                {
                  LODWORD(v3) = VidSchiVerifyDriverReportedFenceId(
                                  (struct _VIDSCH_NODE *)v19,
                                  *(_DWORD *)(a2 + 12),
                                  0,
                                  &v55);
                  if ( (_DWORD)v3 )
                  {
                    do
                    {
                      v20 = VidSchiProcessIsrCompletedPacket(v19, v55, v4, a2);
                      LODWORD(v3) = VidSchiProcessIsrPreemptedPacket(v19, *(unsigned int *)(a2 + 8), v4, a2);
                    }
                    while ( v20 );
                  }
                }
              }
            }
          }
          break;
        case 4:
          v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
          v30[3] = 281LL;
          v30[4] = 13LL;
          v30[5] = *(unsigned int *)(a2 + 16);
          v30[6] = *(unsigned int *)(a2 + 20);
          v30[7] = *(unsigned int *)(a2 + 8);
          WdLogEvent5_WdCriticalError(v30);
          JUMPOUT(0x1C001CD5FLL);
        case 9:
          LODWORD(v3) = *(_DWORD *)(v5 + 36);
          if ( (v3 & 4) != 0 )
          {
            v31 = *(unsigned int *)(a2 + 32);
            if ( (v31 & 0x10) != 0 )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, a2, a3);
              v32[3] = 281LL;
              v32[4] = 12LL;
              v32[5] = *(int *)(a2 + 32);
              v32[6] = *(unsigned int *)(a2 + 8);
              v32[7] = *(_QWORD *)(a2 + 40);
              WdLogEvent5_WdCriticalError(v32);
              JUMPOUT(0x1C001CDA9LL);
            }
            if ( (v31 & 0xC) == 0xC )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, a2, a3);
              v33[3] = 281LL;
              v33[4] = 13LL;
              v33[5] = *(int *)(a2 + 32);
              v33[6] = *(_QWORD *)(a2 + 64);
              v33[7] = *(_QWORD *)(a2 + 40);
              WdLogEvent5_WdCriticalError(v33);
              JUMPOUT(0x1C001CDEALL);
            }
            if ( (unsigned int)v31 >= 0x40 )
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, a2, a3);
              v34[3] = 281LL;
              v34[4] = 13LL;
              v34[5] = *(int *)(a2 + 32);
              v34[6] = *(_QWORD *)(a2 + 64);
              v34[7] = *(_QWORD *)(a2 + 40);
              WdLogEvent5_WdCriticalError(v34);
              JUMPOUT(0x1C001CE27LL);
            }
            v35 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v5 + 64);
            if ( (_DWORD)a3
              && (v36 = *(_QWORD *)(v5 + 416), v31 = (unsigned int)v35, _bittest64(&v36, (unsigned int)v35)) )
            {
              LODWORD(v3) = LogPageFaultInformation(1LL, v7, a2);
            }
            else
            {
              v37 = *(_QWORD *)(v5 + 8 * v35 + 424);
              if ( *(_DWORD *)(v37 + 16) == 1 )
              {
                LODWORD(v3) = LogPageFaultInformation(2LL, v7, a2);
              }
              else
              {
                if ( (_DWORD)a3 && *(_DWORD *)(v37 + 16) == 2 )
                {
                  v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v35, a3);
                  v38[3] = 281LL;
                  v38[4] = 16LL;
                  v38[5] = v5;
                  v38[6] = *(unsigned __int16 *)(v37 + 4);
                  v38[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v38);
                  JUMPOUT(0x1C001CEC3LL);
                }
                v39 = *(_DWORD *)(a2 + 32);
                if ( (v39 & 2) != 0 )
                {
                  if ( (v39 & 0xC) == 0 )
                  {
                    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v35, a3);
                    v40[3] = 281LL;
                    v40[4] = 13LL;
                    v40[5] = *(int *)(a2 + 32);
                    v40[6] = *(_QWORD *)(a2 + 64);
                    v40[7] = *(_QWORD *)(a2 + 40);
                    WdLogEvent5_WdCriticalError(v40);
                    JUMPOUT(0x1C001CF06LL);
                  }
                  if ( (v39 & 4) != 0 )
                  {
                    LODWORD(v3) = LogPageFaultInformation(3LL, v7, a2);
                    *(_DWORD *)(v37 + 1968) = 1;
                  }
                  else
                  {
                    LODWORD(v3) = LogPageFaultInformation(4LL, v7, a2);
                    *(_DWORD *)(v37 + 1964) = 1;
                  }
                }
                else
                {
                  LODWORD(v3) = VidSchiVerifyDriverReportedFenceId(
                                  (struct _VIDSCH_NODE *)v37,
                                  *(_DWORD *)(a2 + 8),
                                  0,
                                  &v55);
                  if ( (_DWORD)v3 )
                  {
                    VidSchiProcessIsrCompletedPacket(v37, v55, v4, a2);
                    VidSchiProcessIsrFaultedPacket(v37, v55, v4, a2);
                    v41 = *(_DWORD *)(a2 + 32);
                    if ( (v41 & 4) != 0 )
                    {
                      LODWORD(v3) = LogPageFaultInformation(3LL, v7, a2);
                    }
                    else if ( (v41 & 8) != 0 )
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
        case 0xE:
          v42 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                  *(ADAPTER_DISPLAY **)(*(_QWORD *)(v5 + 16) + 2304LL),
                  *(_DWORD *)(a2 + 8));
          v45 = v42;
          if ( v42 == -1
            || (v43 = *(union _SLIST_HEADER **)(v5 + 8LL * v42 + 3008), (unsigned __int8)*(_DWORD *)(a2 + 12) >= 8u) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v44, v43);
            LODWORD(v3) = WdLogEvent5_WdAssertion(v52);
          }
          else
          {
            v46 = ExpInterlockedPopEntrySList(v43 + 3552);
            v49 = v46;
            if ( v46 )
            {
              HIDWORD(v46[2].Next) = *(_DWORD *)(a2 + 12);
              LODWORD(v46[2].Next) = v45;
              LODWORD(v46->Next) = 14;
              LODWORD(v3) = (unsigned int)ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 1936), v46 + 1);
              if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
                LODWORD(v3) = McTemplateK0qq(
                                (PMCGEN_TRACE_CONTEXT)(unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
                                v50,
                                v51,
                                (const unsigned int)v49[2].Next,
                                HIDWORD(v49[2].Next));
            }
            else
            {
              v53 = WdLogNewEntry5_WdAssertion(v48, v47);
              *(_QWORD *)(v53 + 24) = *(unsigned int *)(a2 + 8);
              *(_QWORD *)(v53 + 32) = *(unsigned int *)(a2 + 12);
              LODWORD(v3) = WdLogEvent5_WdAssertion(v53);
            }
          }
          break;
      }
      return v3;
    }
    LODWORD(v3) = *(_DWORD *)(v5 + 36);
    if ( (v3 & 1) == 0 )
      return v3;
    v8 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v5 + 64);
    if ( (_DWORD)a3 )
    {
      v3 = *(_QWORD *)(v5 + 416);
      a1 = (unsigned int)v8;
      if ( _bittest64(&v3, (unsigned int)v8) )
        return v3;
    }
    v9 = *(_QWORD *)(v5 + 8 * v8 + 424);
    LODWORD(v3) = *(_DWORD *)(v9 + 16);
    if ( (_DWORD)v3 == 1 )
      return v3;
    if ( (_DWORD)a3 && *(_DWORD *)(v9 + 16) == 2 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
      v24[3] = 281LL;
      v24[4] = 16LL;
      v24[5] = v5;
      v24[6] = *(unsigned __int16 *)(v9 + 4);
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
      JUMPOUT(0x1C001CC0BLL);
    }
    v10 = *(unsigned int *)(a2 + 8);
    v11 = *(unsigned int *)(v9 + 64);
    v12 = *(_QWORD *)(v9 + 24);
    v55 = v10;
    if ( (_DWORD)v10 == (_DWORD)v11 || (_DWORD)v10 == *(_DWORD *)(v9 + 72) )
    {
LABEL_22:
      LODWORD(v3) = VidSchiProcessIsrCompletedPacket(v9, (unsigned int)v10, a3, a2);
      return v3;
    }
    LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 152), 0, 0);
    if ( (unsigned int)v3 < (unsigned int)v11 )
    {
      if ( (unsigned int)v10 <= (unsigned int)v3 || (unsigned int)v10 >= (unsigned int)v11 )
        goto LABEL_22;
    }
    else if ( (unsigned int)v10 <= (unsigned int)v3 && (unsigned int)v10 >= (unsigned int)v11 )
    {
      goto LABEL_22;
    }
    if ( !*(_BYTE *)(v12 + 53) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
      v25[3] = 281LL;
      v25[4] = 1LL;
      v25[5] = v10;
      v25[6] = v11;
      v25[7] = *(_QWORD *)(v12 + 16);
      WdLogEvent5_WdCriticalError(v25);
      JUMPOUT(0x1C001CC67LL);
    }
    *(_DWORD *)(v9 + 1968) = 1;
    *(_BYTE *)(v9 + 1961) = 1;
  }
  return v3;
}
