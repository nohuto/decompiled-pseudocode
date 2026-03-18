/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0205008
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     IsModalMenuStarted @ 0x1C01CA040 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD **v10; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD **v18; // rdx
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v25[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v28; // [rsp+48h] [rbp-38h]
  _QWORD v29[5]; // [rsp+58h] [rbp-28h] BYREF
  char v30; // [rsp+90h] [rbp+10h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v26, 0LL);
  v4 = 0;
  if ( *(char *)(a1 + 60) < 0 || *(char *)(a1 + 59) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_37;
  v6 = *(__int64 **)(v5 + 528);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  v8 = v26;
  if ( v26 != v7 )
  {
    if ( v26 )
    {
      v9 = v27;
      v10 = v28;
      if ( (_QWORD **)v27[1] != &v27 || *v28 != &v27 )
        __fastfail(3u);
      *v28 = v27;
      v9[1] = v10;
    }
    v26 = v7;
    if ( !v7 )
      goto LABEL_37;
    v11 = (_QWORD **)(v7 + 88);
    v12 = *v11;
    if ( (_QWORD **)(*v11)[1] != v11 )
      __fastfail(3u);
    v27 = *v11;
    v28 = v11;
    v12[1] = &v27;
    *v11 = &v27;
    v8 = v26;
  }
  if ( !v8 )
    goto LABEL_37;
  if ( !*(_QWORD *)(v8 + 8) )
    goto LABEL_37;
  SmartObjStackRef<tagPOPUPMENU>::Init(v29, v8);
  v13 = xxxMNFindWindowFromPoint(v29, &v30, a2);
  if ( ((*(_BYTE *)(a1 + 59) | *(_BYTE *)(a1 + 60)) & 0x80u) != 0 || v13 )
    goto LABEL_37;
  v14 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 528LL);
  if ( v14 )
    v15 = *v14;
  else
    v15 = 0LL;
  v16 = v26;
  if ( v26 == v15 )
    goto LABEL_34;
  if ( v26 )
  {
    v17 = v27;
    v18 = v28;
    if ( (_QWORD **)v27[1] != &v27 || *v28 != &v27 )
      __fastfail(3u);
    *v28 = v27;
    v17[1] = v18;
  }
  v26 = v15;
  if ( v15 )
  {
    v19 = (_QWORD **)(v15 + 88);
    v20 = *v19;
    if ( (_QWORD **)(*v19)[1] != v19 )
      __fastfail(3u);
    v27 = *v19;
    v28 = v19;
    v20[1] = &v27;
    *v19 = &v27;
    v16 = v26;
LABEL_34:
    if ( v16 )
    {
      v21 = *(_QWORD *)(v16 + 8);
      if ( v21 )
      {
        v4 = 1;
        v25[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v25;
        v25[1] = v21;
        ++*(_DWORD *)(v21 + 8);
        xxxSendMessage(*(_QWORD *)(v26 + 8), 31, 0, 0);
        ThreadUnlock1(v23, v22);
      }
    }
  }
LABEL_37:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v26);
  return v4;
}
