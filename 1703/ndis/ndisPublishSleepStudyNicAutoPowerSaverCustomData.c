/*
 * XREFs of ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C00EA558
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00EA690 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00E9F64 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverCustomData(
        __int64 a1,
        char a2,
        const struct _GUID *a3,
        ULONGLONG a4,
        ULONGLONG a5,
        unsigned int a6,
        ULONGLONG a7)
{
  __int64 v7; // r10
  ULONGLONG v8; // rdi
  ULONGLONG v12; // r14
  ULONGLONG v13; // rbx

  v7 = *(_QWORD *)(a1 + 4488);
  v8 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(v7 + 824) / 0x2710uLL;
  if ( a4 )
    v12 = (100 * a5 + (a4 >> 1)) / a4;
  if ( v13 )
    v8 = (100 * a5 + *(_QWORD *)(v7 + 824) / 0x4E20uLL) / (*(_QWORD *)(v7 + 824) / 0x2710uLL);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Count", a6);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Time in CS (ms)", a4);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Time (ms)", a5);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: % of CS in Idle Dx", v12);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Nic Active + NonResiliency Time (ms)", v13);
  ndisPublishSleepStudyCustomData(
    a2,
    a3,
    L"Nic Auto Power Saver: % of (Nic Active + NonResiliency) Time in Idle Dx",
    v8);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Avg Resume Latency (ms)", a7);
}
