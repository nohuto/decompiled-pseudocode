/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0206C98
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsModalMenuStarted @ 0x1C01CE478 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v22[4]; // [rsp+40h] [rbp-20h] BYREF
  char v23; // [rsp+70h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL, a3, a4);
  v9 = 0;
  if ( *(char *)(a1 + 60) >= 0 && *(char *)(a1 + 59) >= 0 && (unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
  {
    v10 = *(_QWORD **)(v6 + 584);
    v11 = v10 ? *v10 : 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v11);
    if ( *(_QWORD *)v20[0] )
    {
      if ( *(_QWORD *)(*(_QWORD *)v20[0] + 8LL) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, *(_QWORD *)v20[0], v7, v8);
        v12 = xxxMNFindWindowFromPoint(v21, &v23, a2);
        if ( ((*(_BYTE *)(a1 + 59) | *(_BYTE *)(a1 + 60)) & 0x80u) == 0 && !v12 )
        {
          v13 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 584LL);
          if ( v13 )
            v14 = *v13;
          else
            v14 = 0LL;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v14);
          if ( *(_QWORD *)v20[0] && *(_QWORD *)(*(_QWORD *)v20[0] + 8LL) )
          {
            v15 = *(_QWORD *)(*(_QWORD *)v20[0] + 8LL);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
            v9 = 1;
            v22[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v22;
            v22[1] = v15;
            _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
            xxxSendMessage(*(_QWORD *)(*(_QWORD *)v20[0] + 8LL));
            ThreadUnlock1(v18, v17);
          }
        }
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v6, v7, v8);
  return v9;
}
