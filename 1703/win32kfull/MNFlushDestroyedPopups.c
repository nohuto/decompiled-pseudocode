/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C01EAD30
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x1C01EAF7C (MNFreePopup.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD **v3; // rcx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD **v7; // rax
  _QWORD **v8; // rcx
  _QWORD *v9; // rax
  _DWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD **v15; // rax
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  _DWORD *v20; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-58h] BYREF
  _QWORD **v22; // [rsp+30h] [rbp-50h]
  _DWORD *v23; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v24; // [rsp+48h] [rbp-38h] BYREF
  _QWORD **v25; // [rsp+50h] [rbp-30h]
  _QWORD v26[4]; // [rsp+60h] [rbp-20h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v20, 0LL);
  SmartObjStackRef<tagPOPUPMENU>::Init(&v23, 0LL);
  if ( v20 != (_DWORD *)a1 )
  {
    if ( v20 )
    {
      v2 = v21;
      v3 = v22;
      if ( (_QWORD **)v21[1] != &v21 || *v22 != &v21 )
        __fastfail(3u);
      *v22 = v21;
      v2[1] = v3;
    }
    v20 = (_DWORD *)a1;
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( *(_QWORD *)(v4 + 8) != a1 + 88 )
        __fastfail(3u);
      v21 = *(_QWORD **)(a1 + 88);
      v22 = (_QWORD **)(a1 + 88);
      *(_QWORD *)(v4 + 8) = &v21;
      *(_QWORD *)(a1 + 88) = &v21;
    }
  }
  while ( 1 )
  {
    v18 = (_DWORD *)*((_QWORD *)v20 + 9);
    if ( !v18 )
      break;
    if ( (*v18 & 0x8000) != 0 )
    {
      v5 = v23;
      if ( v23 != v18 )
      {
        if ( v23 )
        {
          v6 = v24;
          v7 = v25;
          if ( (_QWORD **)v24[1] != &v24 || *v25 != &v24 )
            __fastfail(3u);
          *v25 = v24;
          v6[1] = v7;
        }
        v23 = v18;
        v8 = (_QWORD **)(v18 + 22);
        v9 = *v8;
        if ( (_QWORD **)(*v8)[1] != v8 )
          __fastfail(3u);
        v24 = *v8;
        v25 = v8;
        v9[1] = &v24;
        *v8 = &v24;
        v5 = v23;
      }
      *((_QWORD *)v20 + 9) = *((_QWORD *)v5 + 9);
      SmartObjStackRef<tagPOPUPMENU>::Init(v26, (__int64)v23);
      MNFreePopup(v26);
      v10 = v23;
      if ( (*v23 & 0x40000000) != 0 )
      {
        *v23 &= ~0x20000000u;
      }
      else
      {
        v11 = v23 + 22;
        while ( (_QWORD *)*v11 != v11 )
        {
          v12 = (_QWORD *)*((_QWORD *)v10 + 12);
          v13 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v12 != v11 || (_QWORD *)*v13 != v12 )
            __fastfail(3u);
          *((_QWORD *)v10 + 12) = v13;
          *v13 = v11;
          *(v12 - 1) = 0LL;
        }
        Win32FreePool(v10);
      }
    }
    else if ( v20 != v18 )
    {
      v14 = v21;
      v15 = v22;
      if ( (_QWORD **)v21[1] != &v21 || *v22 != &v21 )
        __fastfail(3u);
      *v22 = v21;
      v14[1] = v15;
      v20 = v18;
      v16 = (_QWORD **)(v18 + 22);
      v17 = *v16;
      if ( (_QWORD **)(*v16)[1] != v16 )
        __fastfail(3u);
      v21 = *v16;
      v22 = v16;
      v17[1] = &v21;
      *v16 = &v21;
    }
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v23);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v20);
}
