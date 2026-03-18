/*
 * XREFs of xxxMNChar @ 0x1C02064C0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     xxxMessageBeep @ 0x1C013EAE0 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C021A60C (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 **v3; // rdi
  __int64 v4; // rbx
  _DWORD *v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // [rsp+28h] [rbp-69h]
  _BYTE v34[4]; // [rsp+2Ch] [rbp-65h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-61h]
  unsigned __int64 v36; // [rsp+38h] [rbp-59h]
  _QWORD v37[3]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v38[2]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v39[2]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v42[3]; // [rsp+98h] [rbp+7h] BYREF
  _QWORD v43[7]; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 **v44; // [rsp+F8h] [rbp+67h]
  char v45; // [rsp+F8h] [rbp+67h]
  unsigned int v47; // [rsp+108h] [rbp+77h]
  int v48; // [rsp+110h] [rbp+7Fh]

  v47 = a3;
  v44 = a1;
  v3 = a1;
  v48 = 0;
  v36 = 0LL;
  v4 = *(_QWORD *)(**a1 + 40);
  v5 = (_DWORD *)**a1;
  if ( (*v5 & 0x8000) == 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)v5);
    v42[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v42;
    v42[1] = v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v10 = *(_QWORD *)(**v3 + 48);
    v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v37[0] = *(_QWORD *)(v11 + 392);
    *(_QWORD *)(v11 + 392) = v37;
    v37[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v12 = xxxMNFindChar(v4, v47, *(unsigned int *)(**v3 + 80), v34);
    v15 = v12;
    if ( v12 != -1 )
    {
      v33 = v12;
      while ( 1 )
      {
        v16 = v15 == -1 || v15 >= *(_DWORD *)(v4 + 68) ? 0LL : *(_QWORD *)(v4 + 96) + 152LL * v15;
        if ( !v16 || (*(_DWORD *)(v16 + 4) & 3) == 0 )
          break;
        v15 = xxxMNFindChar(v4, v47, v15, v34);
        if ( v15 == v33 )
          goto LABEL_15;
      }
      v35 = v15;
      do
      {
        v19 = xxxMNFindChar(v4, v47, v15, v34);
        v15 = v19;
        if ( v19 == -1 || v19 >= *(_DWORD *)(v4 + 68) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)(v4 + 96) + 152LL * v19;
      }
      while ( v20 && (*(_DWORD *)(v20 + 4) & 3) != 0 && v19 != v33 );
      v3 = v44;
      if ( v33 == v19 || v19 == v35 )
        v48 = 1;
      v15 = v35;
      if ( v35 != -1 )
        goto LABEL_32;
    }
    if ( (*(_DWORD *)**v3 & 1) != 0 && v47 == 32 )
    {
      if ( (*(_DWORD *)**v3 & 4) != 0 )
      {
        v15 = 0;
        v48 = 1;
        goto LABEL_32;
      }
      if ( *(_QWORD *)(**v3 + 48) )
      {
LABEL_41:
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v38, **v3, v13, v14);
        if ( (unsigned int)xxxMNSwitchToAlternateMenu(v38, a2) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v39, **v3, v26, v27);
          xxxMNChar(v39, a2, v47);
        }
        goto LABEL_34;
      }
    }
    if ( v15 != -1 )
    {
LABEL_32:
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v40, **v3, v13, v14);
      xxxMNSelectItem(v40, a2, v15);
      if ( v48 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v41, **v3, v21, v22);
        xxxMNKeyDown(v41, a2, 13LL);
      }
      goto LABEL_34;
    }
    if ( (*(_DWORD *)**v3 & 1) != 0 )
    {
      if ( *(_QWORD *)(**v3 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**v3 + 48), (__int64)v37);
        v15 = xxxMNFindChar(*(_QWORD *)(**v3 + 48), v47, 0LL, v34);
        if ( v15 != -1 )
          goto LABEL_41;
      }
    }
    v13 = 0x2000LL;
    v28 = *(_DWORD *)**v3 & 4;
    LODWORD(v29) = (*(_DWORD *)**v3 & 4) != 0 ? 0x2000 : 0;
    v45 = v29;
    if ( (*(_DWORD *)**v3 & 1) == 0 )
    {
      v28 = (unsigned int)-(int)v28;
      LODWORD(v29) = (_DWORD)v28 != 0 ? 8208 : 16;
      v45 = v29;
    }
    if ( *(_QWORD *)(**v3 + 8) )
    {
      v29 = *(_QWORD *)(**v3 + 8);
      v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, 0x2000LL, v14);
      v43[0] = *(_QWORD *)(v30 + 392);
      *(_QWORD *)(v30 + 392) = v43;
      v43[1] = v29;
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
      LOBYTE(v29) = v45;
      v36 = xxxSendMessage(*(_QWORD *)(**v3 + 8));
      ThreadUnlock1(v32, v31);
    }
    v18 = v36 >> 16;
    v17 = WORD1(v36);
    if ( WORD1(v36) )
    {
      if ( WORD1(v36) != 1 )
      {
        v17 = (unsigned int)WORD1(v36) - 2;
        if ( WORD1(v36) == 2 )
        {
          v48 = 1;
        }
        else if ( WORD1(v36) != 3 )
        {
LABEL_54:
          if ( v15 != -1 )
            goto LABEL_32;
LABEL_34:
          ThreadUnlock1(v18, v17);
          ThreadUnlock1(v24, v23);
          a1 = v3;
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, (__int64)v5);
        }
        v15 = (__int16)v36;
        v18 = **v3;
        v17 = *(_QWORD *)(v18 + 40);
        if ( (unsigned int)(unsigned __int16)v36 >= *(_DWORD *)(v17 + 68) )
          goto LABEL_34;
        goto LABEL_54;
      }
    }
    else
    {
      if ( !*(_QWORD *)(**v3 + 8)
        || (v17 = **v3, v18 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1352LL) != *(_QWORD *)(v17 + 8)) )
      {
        xxxMessageBeep(0LL, v17, v13, v14);
      }
      if ( (v29 & 0x10) != 0 )
        goto LABEL_34;
    }
LABEL_15:
    xxxMNCancel(a2, 0, 0LL, 0LL);
    goto LABEL_34;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, (__int64)v5);
}
