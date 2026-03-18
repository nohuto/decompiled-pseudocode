/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x14027AF04
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  char DpcRequestSummary; // cl
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+3Ch] [rbp-24h]
  char v16; // [rsp+3Dh] [rbp-23h]
  char v17; // [rsp+3Eh] [rbp-22h]
  char v18; // [rsp+3Fh] [rbp-21h]
  __int64 *v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ch] [rbp-14h]

  v14 = *(_DWORD *)(a1 + 1600);
  v16 = a6;
  v13 = a2;
  v15 = a3;
  v17 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  v20 = 16;
  v21 = 0;
  v18 = (a9 != 0 ? 2 : 0) | (4 * (a10 & 3)) | DpcRequestSummary & 1;
  v12 = *(_QWORD *)(a1 + 544);
  v19 = &v13;
  EtwTraceSiloKernelEvent(*(_QWORD *)(v12 + 1728), (__int64)&v19, 1u, 0x20000200u, 0x542u, 0x500A02u);
}
