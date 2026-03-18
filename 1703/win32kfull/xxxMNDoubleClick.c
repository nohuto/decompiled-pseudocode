/*
 * XREFs of xxxMNDoubleClick @ 0x1C0205230
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNIspItemValid @ 0x1C0203E8C (MNIspItemValid.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C0239A38 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // r14
  unsigned int v6; // esi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rdi
  int MenuDefaultItem; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21[4]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v24[12]; // [rsp+88h] [rbp+7h] BYREF

  v4 = a3;
  memset(v24, 0, sizeof(v24));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage((__int64)v24, 0LL, 0, 0, 2u, 0) && (v24[2] == 514 || v24[2] == 162) )
    xxxInternalGetMessage((__int64)v24, 0LL, v24[2], v24[2], 1u, 0);
  v7 = *a2;
  v8 = *(_QWORD *)(*a2 + 40);
  if ( !v8 || (unsigned int)v4 >= *(_DWORD *)(v8 + 68) )
  {
    SmartObjStackRef<tagPOPUPMENU>::Init(v21, *a2);
    xxxMNDoScroll(v21, *(_DWORD *)(v7 + 80), 0);
LABEL_21:
    v6 = 0;
    goto LABEL_22;
  }
  v9 = *(_QWORD *)(v8 + 96) + 152 * v4;
  if ( (*(_DWORD *)(v9 + 4) & 3) != 0 )
    goto LABEL_21;
  while ( *(_QWORD *)(v9 + 16) )
  {
    v8 = *(_QWORD *)(v9 + 16);
    MenuDefaultItem = GetMenuDefaultItem(v8, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_21;
    v9 = *(_QWORD *)(v8 + 96) + 152LL * MenuDefaultItem;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v7 + 64) + 8LL);
  if ( v11 && (*(_BYTE *)(v11 + 61) & 2) == 0 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    v22[1] = v11;
    ++*(_DWORD *)(v11 + 8);
    v12 = *(_QWORD *)(*a2 + 16);
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    ++*(_DWORD *)(v8 + 8);
    v13 = *a2;
    v21[1] = v8;
    xxxSendMenuSelect(*(_QWORD *)(*(_QWORD *)(v13 + 64) + 8LL), *(_QWORD *)(v13 + 16), v8, v4, a1);
    v8 = ThreadUnlock1(v15, v14);
    ThreadUnlock1(v17, v16);
    ThreadUnlock1(v19, v18);
  }
  if ( !v8 || !MNIspItemValid(v8, v9) )
    goto LABEL_21;
  SmartObjStackRef<tagPOPUPMENU>::Init(v21, *a2);
  xxxMNDismissWithNotify(a1, v21, v9, v4, 0LL);
LABEL_22:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a2);
  return v6;
}
