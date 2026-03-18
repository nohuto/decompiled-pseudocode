/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02050D0
 * Callers:
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  ULONG_PTR v7; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v6 = **a1;
  if ( *(_QWORD *)(v6 + 24) )
  {
    v7 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1, a3, a4);
    v4 = 1;
    v12[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v12;
    v12[1] = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    if ( v7 != *(_QWORD *)(**a1 + 56) )
      xxxSendMessage(v7);
    xxxSendMessage(v7);
    ThreadUnlock1(v10, v9);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v6, a3, a4);
  return v4;
}
