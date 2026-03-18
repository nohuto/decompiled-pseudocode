/*
 * XREFs of xxxEndMenu @ 0x1C0214754
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C010FB34 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0209100 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD **v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // ebx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, 0LL, a3, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13, *(_QWORD *)a1);
  if ( *(_QWORD *)v13[0] )
  {
    v8 = (_DWORD **)v13[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    **v8 |= 0x8000u;
    v9 = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( *(_QWORD *)(v5 + 104) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
      xxxMNReleaseCapture(a1);
    if ( gptiCurrent == v9 )
    {
      v10 = *(_DWORD *)(a1 + 8);
      if ( (v10 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v10 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0LL, 0LL);
        }
        else
        {
          v11 = **(_DWORD **)v13[0];
          xxxMNCloseHierarchy(*(_QWORD *)v13[0], a1, v6, v7);
          if ( (v11 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v13[0] + 16LL) )
            xxxDestroyWindow(*(volatile signed __int32 **)(*(_QWORD *)v13[0] + 16LL), v5, v6);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v5, v6, v7);
}
