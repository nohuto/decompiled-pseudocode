/*
 * XREFs of xxxMNChar @ 0x1C020497C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     xxxMessageBeep @ 0x1C0137A80 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C0219414 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  _QWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+28h] [rbp-49h]
  _BYTE v25[4]; // [rsp+2Ch] [rbp-45h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-41h]
  unsigned __int64 v27; // [rsp+38h] [rbp-39h]
  _QWORD v28[4]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v29[3]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v30[3]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v31[7]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 *v32; // [rsp+D8h] [rbp+67h]
  int v35; // [rsp+F0h] [rbp+7Fh]

  v32 = a1;
  v35 = 0;
  v3 = a1;
  v27 = 0LL;
  v4 = *(_QWORD *)(*a1 + 40);
  if ( (*(_DWORD *)*a1 & 0x8000) == 0 )
  {
    v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v30;
    v30[1] = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    v5 = *(_QWORD *)(*a1 + 48);
    v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v29;
    v29[1] = v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = xxxMNFindChar(v4, a3, *(unsigned int *)(*a1 + 80), v25);
    v7 = v6;
    if ( v6 != -1 )
    {
      v24 = v6;
      while ( 1 )
      {
        v8 = v7 == -1 || v7 >= *(_DWORD *)(v4 + 68) ? 0LL : *(_QWORD *)(v4 + 96) + 152LL * v7;
        if ( !v8 || (*(_DWORD *)(v8 + 4) & 3) == 0 )
          break;
        v7 = xxxMNFindChar(v4, a3, v7, v25);
        if ( v7 == v24 )
          goto LABEL_15;
      }
      v26 = v7;
      do
      {
        v11 = xxxMNFindChar(v4, a3, v7, v25);
        v7 = v11;
        if ( v11 == -1 || v11 >= *(_DWORD *)(v4 + 68) )
          v12 = 0LL;
        else
          v12 = *(_QWORD *)(v4 + 96) + 152LL * v11;
      }
      while ( v12 && (*(_DWORD *)(v12 + 4) & 3) != 0 && v11 != v24 );
      v3 = v32;
      if ( v24 == v11 || v11 == v26 )
        v35 = 1;
      v7 = v26;
      if ( v26 != -1 )
        goto LABEL_32;
    }
    v13 = (_DWORD *)*v3;
    v14 = *(_DWORD *)*v3;
    if ( (v14 & 1) != 0 && a3 == 32 )
    {
      if ( (v14 & 4) != 0 )
      {
        v7 = 0;
        v35 = 1;
        goto LABEL_32;
      }
      if ( *((_QWORD *)v13 + 6) )
      {
LABEL_41:
        SmartObjStackRef<tagPOPUPMENU>::Init(v28, *v3);
        if ( (unsigned int)xxxMNSwitchToAlternateMenu(v28, a2) )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v28, *v3);
          xxxMNChar(v28, a2, a3);
        }
        goto LABEL_34;
      }
    }
    if ( v7 != -1 )
    {
LABEL_32:
      SmartObjStackRef<tagPOPUPMENU>::Init(v28, *v3);
      xxxMNSelectItem(v28, a2, v7);
      if ( v35 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v28, *v3);
        xxxMNKeyDown(v28, a2, 13LL);
      }
      goto LABEL_34;
    }
    if ( (*(_DWORD *)*v3 & 1) != 0 )
    {
      v18 = *((_QWORD *)v13 + 6);
      if ( v18 )
      {
        ThreadLockExchange(v18, (__int64)v29);
        v7 = xxxMNFindChar(*(_QWORD *)(*v3 + 48), a3, 0LL, v25);
        if ( v7 != -1 )
          goto LABEL_41;
      }
    }
    v19 = (*(_DWORD *)*v3 & 4) << 11;
    if ( (*(_DWORD *)*v3 & 1) == 0 )
      LOWORD(v19) = v19 | 0x10;
    v20 = *(_QWORD *)(*v3 + 8);
    if ( v20 )
    {
      v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v31;
      v31[1] = v20;
      ++*(_DWORD *)(v20 + 8);
      v21 = *(_QWORD **)(*v3 + 40);
      if ( v21 )
        v21 = (_QWORD *)*v21;
      v27 = xxxSendMessage(*(_QWORD *)(*v3 + 8), 288, (unsigned __int16)a3 | ((unsigned __int16)v19 << 16), (int)v21);
      ThreadUnlock1(v23, v22);
    }
    v10 = v27 >> 16;
    if ( WORD1(v27) )
    {
      if ( WORD1(v27) != 1 )
      {
        v9 = (unsigned int)WORD1(v27) - 2;
        if ( WORD1(v27) == 2 )
        {
          v35 = 1;
        }
        else if ( WORD1(v27) != 3 )
        {
LABEL_56:
          if ( v7 != -1 )
            goto LABEL_32;
LABEL_34:
          ThreadUnlock1(v10, v9);
          ThreadUnlock1(v16, v15);
          a1 = v3;
          return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
        }
        v7 = (__int16)v27;
        v10 = *(_QWORD *)(*v3 + 40);
        if ( (unsigned int)(unsigned __int16)v27 >= *(_DWORD *)(v10 + 68) )
          goto LABEL_34;
        goto LABEL_56;
      }
    }
    else
    {
      v9 = *(_QWORD *)(*v3 + 8);
      if ( !v9 || (v10 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1264LL) != v9) )
        xxxMessageBeep(0LL);
      if ( (v19 & 0x10) != 0 )
        goto LABEL_34;
    }
LABEL_15:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_34;
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
