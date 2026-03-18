/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C007E878
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C016F0D0 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM *a2)
{
  LARGE_INTEGER v4; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  union _LARGE_INTEGER v7; // r8
  LONGLONG v8; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject((char *)this + 104, Executive, 0, 0, 0LL);
  a2->PresentCount = *((_DWORD *)this + 40);
  a2->PresentRefreshCount = *((_DWORD *)this + 41);
  a2->SyncRefreshCount = *((_DWORD *)this + 42);
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5 = *((unsigned int *)this + 52);
  v6 = *((unsigned int *)this + 53);
  v7 = PerformanceFrequency;
  v8 = v5 * v4.QuadPart / v6 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 35) = v8;
  *((_QWORD *)this + 36) = v7.QuadPart * v6 * (unsigned int)v8 / v5;
  a2->PresentQPCTime.QuadPart = v7.QuadPart * v6 * a2->PresentRefreshCount / v5;
  a2->SyncRefreshCount = *((_DWORD *)this + 70);
  a2->SyncQPCTime.QuadPart = *((_QWORD *)this + 36);
  KeReleaseMutex((PRKMUTEX)((char *)this + 104), 0);
  return 0LL;
}
