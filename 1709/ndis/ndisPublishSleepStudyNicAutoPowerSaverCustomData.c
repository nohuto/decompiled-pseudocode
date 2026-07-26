/*
 * XREFs of ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C00F3B08
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00F3C54 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C004207C (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00F3510 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverCustomData(
        __int64 a1,
        char a2,
        const struct _GUID *a3,
        unsigned __int64 a4,
        ULONGLONG a5,
        ULONGLONG a6,
        unsigned int a7,
        ULONGLONG a8)
{
  ULONGLONG v8; // rdi
  ULONGLONG v12; // r14
  unsigned __int64 v13; // rbx

  v8 = 0LL;
  v12 = 0LL;
  v13 = (*(_QWORD *)(*(_QWORD *)(a1 + 4488) + 840LL) + 5000LL) / 0x2710uLL;
  if ( a4 )
    v12 = ComputeRoundedAverage(100 * a6, a4);
  if ( v13 )
    v8 = ComputeRoundedAverage(100 * a6, v13);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Count", a7);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Time in CS (ms)", a4);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Time (ms)", a6);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: % of CS in Idle Dx", v12);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Nic Active + NonResiliency Time (ms)", v13);
  ndisPublishSleepStudyCustomData(
    a2,
    a3,
    L"Nic Auto Power Saver: % of (Nic Active + NonResiliency) Time in Idle Dx",
    v8);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Last Resume Latency (ms)", a5);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Avg Resume Latency (ms)", a8);
}
