/*
 * XREFs of ?NdisPDReportECIteration@@YAXPEAUPD_EC_HANDLE__@@E@Z @ 0x1C00769C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z @ 0x1C0077288 (-ndisPDUpdateQDepthCounter@@YAXPEAUNDIS_PD_EC@@@Z.c)
 */

void __fastcall NdisPDReportECIteration(ULONG_PTR *a1, char a2)
{
  struct _KTHREAD *v4; // r9
  ULONG CurrentProcessorNumber; // eax
  ULONG64 v6; // rax
  unsigned __int64 v7; // rdx
  ULONG64 v8; // rcx
  unsigned __int64 CycleTimeStamp; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 34) )
    ndisPDUpdateQDepthCounter((struct NDIS_PD_EC *)a1);
  if ( *((_DWORD *)a1 + 9) )
  {
    v4 = (struct _KTHREAD *)a1[3];
    if ( v4 != KeGetCurrentThread() )
      ndisBugCheckEx(0x23uLL, 1uLL, a1[2], (ULONG_PTR)v4);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    ++*((_DWORD *)a1 + 15);
    *((_DWORD *)a1 + 14) = CurrentProcessorNumber;
    if ( a2 )
      ++*((_DWORD *)a1 + 16);
    v6 = KeQueryTotalCycleTimeThread(KeGetCurrentThread(), &CycleTimeStamp);
    v7 = CycleTimeStamp - a1[10];
    a1[10] = CycleTimeStamp;
    v8 = v6 - a1[11];
    a1[11] = v6;
    if ( v7 > v8 )
      a1[14] += v7 - v8;
    if ( a2 )
      a1[13] += v8;
    else
      a1[12] += v8;
  }
}
