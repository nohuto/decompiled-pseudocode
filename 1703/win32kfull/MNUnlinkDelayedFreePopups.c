/*
 * XREFs of MNUnlinkDelayedFreePopups @ 0x1C01EB090
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall MNUnlinkDelayedFreePopups(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD **v6; // rax
  _QWORD **v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD **v11; // rax
  _QWORD **v12; // rdx
  _QWORD *v13; // rax
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-38h] BYREF
  _QWORD **v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-18h] BYREF
  _QWORD **v20; // [rsp+50h] [rbp-10h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v18, 0LL);
  SmartObjStackRef<tagPOPUPMENU>::Init(&v15, a1);
  v2 = v15;
  if ( v15 )
  {
    v3 = v18;
    do
    {
      v4 = *(_QWORD *)(v2 + 72);
      if ( v3 != v4 )
      {
        if ( v3 )
        {
          v5 = v19;
          v6 = v20;
          if ( (_QWORD **)v19[1] != &v19 || *v20 != &v19 )
            __fastfail(3u);
          *v20 = v19;
          v5[1] = v6;
          v2 = v15;
        }
        v18 = v4;
        if ( v4 )
        {
          v7 = (_QWORD **)(v4 + 88);
          v8 = *v7;
          if ( (_QWORD **)(*v7)[1] != v7 )
            __fastfail(3u);
          v19 = *v7;
          v20 = v7;
          v8[1] = &v19;
          *v7 = &v19;
          v2 = v15;
        }
      }
      *(_DWORD *)v2 &= ~0x10000u;
      v9 = v15;
      if ( v15 != a1 )
      {
        *(_DWORD *)v15 &= ~0x20000000u;
        v9 = v15;
      }
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v15 + 64) = 0LL;
      v3 = v18;
      v2 = v15;
      if ( v15 != v18 )
      {
        if ( v15 )
        {
          v10 = v16;
          v11 = v17;
          if ( (_QWORD **)v16[1] != &v16 || *v17 != &v16 )
            __fastfail(3u);
          *v17 = v16;
          v10[1] = v11;
        }
        v15 = v3;
        if ( !v3 )
          break;
        v12 = (_QWORD **)(v3 + 88);
        v13 = *v12;
        if ( (_QWORD **)(*v12)[1] != v12 )
          __fastfail(3u);
        v16 = *v12;
        v17 = v12;
        v13[1] = &v16;
        *v12 = &v16;
        v3 = v18;
        v2 = v15;
      }
    }
    while ( v2 );
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v15);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v18);
}
