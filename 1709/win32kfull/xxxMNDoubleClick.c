/*
 * XREFs of xxxMNDoubleClick @ 0x1C0206E14
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNIspItemValid @ 0x1C0205948 (MNIspItemValid.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C023B0B0 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 **a2, int a3)
{
  __int64 v4; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rsi
  int MenuDefaultItem; // eax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  _QWORD v34[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 *v35[2]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v36[3]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v37[3]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v38[3]; // [rsp+88h] [rbp-19h] BYREF
  int v39[12]; // [rsp+A0h] [rbp-1h] BYREF

  v4 = a3;
  memset(v39, 0, sizeof(v39));
  v9 = 1;
  if ( (unsigned int)xxxInternalGetMessage((int)v39, 0, 0, 0, 2, 0) )
  {
    v7 = (unsigned int)v39[2];
    if ( v39[2] == 514 || v39[2] == 162 )
      xxxInternalGetMessage((int)v39, 0, v39[2], v39[2], 1, 0);
  }
  v10 = *(_QWORD *)(**a2 + 40);
  if ( !v10 || (unsigned int)v4 >= *(_DWORD *)(v10 + 68) )
  {
    v32 = **a2;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, v32, v7, v8);
    xxxMNDoScroll(v35, *(unsigned int *)(v32 + 80), 0LL);
LABEL_21:
    v9 = 0;
    goto LABEL_22;
  }
  v11 = *(_QWORD *)(v10 + 96) + 152 * v4;
  if ( (*(_DWORD *)(v11 + 4) & 3) != 0 )
    goto LABEL_21;
  while ( *(_QWORD *)(v11 + 16) )
  {
    v10 = *(_QWORD *)(v11 + 16);
    MenuDefaultItem = GetMenuDefaultItem(v10, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_21;
    v11 = *(_QWORD *)(v10 + 96) + 152LL * MenuDefaultItem;
  }
  if ( *(_QWORD *)(*(_QWORD *)(**a2 + 64) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a2 + 64) + 8LL) + 61LL) & 2) == 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(**a2 + 64) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
    v36[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v36;
    v36[1] = v13;
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v15 = *(_QWORD *)(**a2 + 16);
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
    v37[0] = *(_QWORD *)(v19 + 392);
    *(_QWORD *)(v19 + 392) = v37;
    v37[1] = v15;
    if ( v15 )
      _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
    v38[0] = *(_QWORD *)(v23 + 392);
    *(_QWORD *)(v23 + 392) = v38;
    v38[1] = v10;
    _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
    xxxSendMenuSelect(*(_QWORD *)(*(_QWORD *)(**a2 + 64) + 8LL), *(_QWORD *)(**a2 + 16), v10, v4, a1);
    v10 = ThreadUnlock1(v25, v24);
    ThreadUnlock1(v27, v26);
    ThreadUnlock1(v29, v28);
  }
  if ( !v10 || !MNIspItemValid(v10, v11) )
    goto LABEL_21;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, **a2, v30, v31);
  xxxMNDismissWithNotify(a1, v34, v11, v4, 0LL);
LABEL_22:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)a2);
  return v9;
}
