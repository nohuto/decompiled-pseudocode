/*
 * XREFs of ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0203244
 * Callers:
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     MNFreePopup @ 0x1C01EAF7C (MNFreePopup.c)
 */

void __fastcall xxxMNDestroyHandler(struct tagMENUWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD **v5; // rdx
  _QWORD **v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-9h] BYREF
  __int64 v22; // [rsp+38h] [rbp-1h]
  __int64 v23; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD *v24; // [rsp+50h] [rbp+17h] BYREF
  _QWORD **v25; // [rsp+58h] [rbp+1Fh]
  __int64 v26[5]; // [rsp+68h] [rbp+2Fh] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v23, 0LL);
  v2 = *((_QWORD *)a1 + 1);
  v3 = v23;
  if ( v23 == v2 )
  {
LABEL_11:
    if ( v3 )
    {
      v8 = *(_QWORD *)(v3 + 24);
      if ( v8 )
      {
        if ( *(_QWORD *)(v3 + 16) )
          v8 = *(_QWORD *)(v3 + 16);
        v21 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v21;
        v22 = v8;
        ++*(_DWORD *)(v8 + 8);
        xxxSendMessage(v8, 484, 0, 0);
        ThreadUnlock1(v10, v9);
        v3 = v23;
      }
      v11 = *(_QWORD *)(v3 + 40);
      if ( v11 )
      {
        v12 = *(unsigned int *)(v3 + 80);
        if ( *(int *)(v3 + 80) >= 0 && (unsigned int)v12 < *(_DWORD *)(v11 + 68) )
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 96) + 152 * v12 + 4) &= ~0x80u;
          v3 = v23;
        }
      }
      if ( (*(_DWORD *)v3 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(v3 + 16), 65534LL, 0, 1, 0LL);
        v3 = v23;
      }
      if ( (*(_DWORD *)v3 & 0x4000) != 0 )
      {
        FindTimer(*(_QWORD *)(v3 + 16), 0xFFFFLL, 0, 1, 0LL);
        v3 = v23;
      }
      if ( (*(_DWORD *)v3 & 0x200000) != 0 )
      {
        v13 = *(_QWORD *)(v3 + 8);
        if ( v13 )
        {
          v21 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v21;
          v22 = v13;
          ++*(_DWORD *)(v13 + 8);
          v14 = *(__int64 **)(v23 + 40);
          if ( v14 )
            v15 = *v14;
          else
            LODWORD(v15) = 0;
          xxxSendMessage(*(_QWORD *)(v23 + 8), 293, v15, (*(_BYTE *)v23 & 4) << 11 << 16);
          ThreadUnlock1(v17, v16);
          v3 = v23;
        }
      }
      *(_DWORD *)v3 |= 0x8000u;
      v18 = v23;
      v19 = *(_QWORD *)(v23 + 16);
      if ( v19 )
      {
        v20 = safe_cast_fnid_to_PMENUWND(v19);
        if ( v20 )
        {
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = v23;
          v18 = v23;
        }
      }
      if ( (*(_DWORD *)v18 & 0x10000) != 0 )
      {
        **(_DWORD **)(v18 + 64) |= 0x20000u;
      }
      else
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v26, v18);
        MNFreePopup(v26);
      }
    }
    goto LABEL_36;
  }
  if ( v23 )
  {
    v4 = v24;
    v5 = v25;
    if ( (_QWORD **)v24[1] != &v24 || *v25 != &v24 )
      __fastfail(3u);
    *v25 = v24;
    v4[1] = v5;
  }
  v23 = v2;
  if ( v2 )
  {
    v6 = (_QWORD **)(v2 + 88);
    v7 = *v6;
    if ( (_QWORD **)(*v6)[1] != v6 )
      __fastfail(3u);
    v24 = *v6;
    v25 = v6;
    v7[1] = &v24;
    *v6 = &v24;
    v3 = v23;
    goto LABEL_11;
  }
LABEL_36:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v23);
}
