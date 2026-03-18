/*
 * XREFs of xxxMNCancel @ 0x1C0204628
 * Callers:
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMNButtonUp @ 0x1C020451C (xxxMNButtonUp.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C02132D4 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     xxxPlayEventSound @ 0x1C01044C0 (xxxPlayEventSound.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C020717C (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, struct _LARGE_STRING *a4)
{
  unsigned __int64 v5; // r13
  _DWORD *v7; // rax
  unsigned int v8; // edx
  char v9; // cl
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // rdx
  ULONG_PTR v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  __int64 *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v26; // [rsp+50h] [rbp-59h]
  __int16 v27; // [rsp+54h] [rbp-55h]
  __int64 v28[4]; // [rsp+58h] [rbp-51h] BYREF
  _QWORD v29[3]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD v30[3]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v31[11]; // [rsp+A8h] [rbp-1h] BYREF
  int v32; // [rsp+110h] [rbp+67h]

  v5 = a3;
  SmartObjStackRef<tagPOPUPMENU>::Init(v28, *(_QWORD *)a1);
  v7 = (_DWORD *)v28[0];
  v8 = *(_DWORD *)v28[0];
  v9 = *(_DWORD *)v28[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  *v7 |= 0x8000u;
  v32 = v9 & 1;
  v10 = (v8 >> 3) & 1;
  v11 = (v8 >> 2) & 1;
  v27 = v8;
  v26 = v8 & 0x800;
  if ( gptiCurrent == *(_QWORD *)(a1 + 32) && (*(_DWORD *)v28[0] & 0x80000) == 0 )
  {
    *(_DWORD *)v28[0] |= 0x80000u;
    v12 = *(_QWORD *)(v28[0] + 16);
    v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v29;
    v29[1] = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    xxxMNCloseHierarchy(v28[0], a1);
    SmartObjStackRef<tagPOPUPMENU>::Init(v31, v28[0]);
    xxxMNSelectItem(v31, a1, 0xFFFFFFFFLL);
    *(_DWORD *)(a1 + 8) &= ~1u;
    v13 = *(_QWORD *)(v28[0] + 8);
    v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v30;
    v30[1] = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    xxxMNReleaseCapture(a1);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v16 = *(__int64 **)(gpqForeground + 80LL);
          if ( v16 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
              xxxWindowEvent(0x80000005, v16, 0, 1, 33);
          }
        }
      }
      xxxWindowEvent(7u, *(__int64 **)(v28[0] + 16), -4, 0, 0);
      v15 = *(_QWORD *)(v28[0] + 16);
      if ( v15 )
        xxxDestroyWindow(v15, v14, v17);
    }
    if ( v13 )
    {
      v18 = -1;
      xxxSendMenuSelect(v13, 0, -1, -1, a1);
      if ( !v10 && (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
      {
        if ( gpqForeground )
        {
          v19 = *(__int64 **)(gpqForeground + 80LL);
          if ( v19 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
              xxxWindowEvent(0x80000005, v19, 0, 1, 33);
          }
        }
      }
      if ( !v11 )
        v18 = v32 != 0 ? 0xFFFFFFFD : 0;
      xxxWindowEvent(5u, (__int64 *)v13, v18, 0, 0);
      if ( !v26 )
      {
        if ( !v10 || (v22 = 1, v11) )
          v22 = 0;
        xxxSendMessage(v13, 530, v22, 0);
      }
      if ( a2 )
      {
        xxxPlayEventSound(6LL, v14, v20, v21);
        *(_DWORD *)(a1 + 24) = v5;
        if ( (v27 & 0x100) == 0 )
        {
          if ( v11 || !v10 || (*(_BYTE *)(v13 + 61) & 1) != 0 )
          {
            PostTransformableMessage(v13, a2, v5, a4, 1);
          }
          else if ( a2 >= 0x111 && (a2 <= 0x112 || a2 == 294) )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v13, a2, v5, a4, 0, 0, 0LL, 1, 1);
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
    }
    ThreadUnlock1(v15, v14);
    ThreadUnlock1(v24, v23);
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v28);
}
