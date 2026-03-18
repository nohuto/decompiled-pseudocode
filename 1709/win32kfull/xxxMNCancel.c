/*
 * XREFs of xxxMNCancel @ 0x1C0206110
 * Callers:
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMNButtonUp @ 0x1C0205FA4 (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0214754 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     xxxPlayEventSound @ 0x1C010EDC0 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0209100 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, __int64 a3, struct _LARGE_STRING *a4)
{
  unsigned __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  ULONG_PTR v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // r14d
  volatile signed __int32 *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v31; // [rsp+54h] [rbp-35h]
  _QWORD v32[2]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v35[10]; // [rsp+90h] [rbp+7h] BYREF

  v5 = (unsigned int)a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v32, *(_QWORD *)a1, a3, (__int64)a4);
  v31 = **(_DWORD **)v32[0];
  v10 = (v31 >> 3) & 1;
  v11 = (v31 >> 2) & 1;
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  **(_DWORD **)v32[0] |= 0x8000u;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) )
  {
    v7 = 0x80000LL;
    if ( (**(_DWORD **)v32[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v32[0] |= 0x80000u;
      v12 = *(_QWORD *)(*(_QWORD *)v32[0] + 16LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 0x80000LL, v8, v9);
      v34[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v34;
      v34[1] = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      xxxMNCloseHierarchy(*(_QWORD *)v32[0], a1);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, *(_QWORD *)v32[0], v14, v15);
      xxxMNSelectItem(v33, a1, 0xFFFFFFFFLL);
      v16 = v32[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v17 = *(_QWORD *)(*(_QWORD *)v16 + 8LL);
      v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
      v35[0] = *(_QWORD *)(v21 + 392);
      *(_QWORD *)(v21 + 392) = v35;
      v35[1] = v17;
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      xxxMNReleaseCapture(a1);
      if ( v10 )
      {
        if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v24 = *(volatile signed __int32 **)(gpqForeground + 112LL);
            if ( v24 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
                xxxWindowEvent(0x80000005, v24, 0LL, 1LL, 33);
            }
          }
        }
        xxxWindowEvent(7u, *(volatile signed __int32 **)(*(_QWORD *)v32[0] + 16LL), 4294967292LL, 0LL, 0);
        v23 = *(_QWORD *)v32[0];
        if ( *(_QWORD *)(*(_QWORD *)v32[0] + 16LL) )
          xxxDestroyWindow(*(volatile signed __int32 **)(*(_QWORD *)v32[0] + 16LL), v22, v25);
      }
      if ( v17 )
      {
        v26 = -1;
        xxxSendMenuSelect(v17, 0, -1, -1, a1);
        if ( !v10 && (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        {
          if ( gpqForeground )
          {
            v27 = *(volatile signed __int32 **)(gpqForeground + 112LL);
            if ( v27 )
            {
              if ( gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
                xxxWindowEvent(0x80000005, v27, 0LL, 1LL, 33);
            }
          }
        }
        if ( !v11 )
          v26 = (v31 & 1) != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, (volatile signed __int32 *)v17, v26, 0LL, 0);
        if ( (v31 & 0x800) == 0 )
          xxxSendMessage(v17);
        if ( a2 )
        {
          xxxPlayEventSound(6LL, v22);
          *(_DWORD *)(a1 + 24) = v5;
          if ( (v31 & 0x100) == 0 )
          {
            if ( v11 || !v10 || (*(_BYTE *)(v17 + 61) & 1) != 0 )
            {
              PostTransformableMessage(v17, a2, v5, a4, 1);
            }
            else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout((__int64 *)v17, a2, v5, a4, 0, 0, 0LL, 1u, 1);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
      }
      ThreadUnlock1(v23, v22);
      ThreadUnlock1(v29, v28);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v32, v7, v8, v9);
}
