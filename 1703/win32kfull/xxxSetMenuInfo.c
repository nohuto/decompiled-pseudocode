/*
 * XREFs of xxxSetMenuInfo @ 0x1C0043870
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0043870 (xxxSetMenuInfo.c)
 *     xxxLoadSysMenu @ 0x1C00C31F4 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuInfo @ 0x1C0135280 (NtUserThunkedMenuInfo.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0043870 (xxxSetMenuInfo.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 a1, __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  _QWORD *v16; // rcx
  _QWORD **v17; // rdx
  _QWORD **v18; // rax
  _QWORD *v19; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v23; // [rsp+48h] [rbp-38h]
  _QWORD v24[5]; // [rsp+58h] [rbp-28h] BYREF
  int v25; // [rsp+A8h] [rbp+28h]
  int v26; // [rsp+B0h] [rbp+30h]
  int v27; // [rsp+B8h] [rbp+38h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v21, 0LL);
  v27 = 0;
  v4 = 0;
  v25 = 0;
  v26 = 1;
  v5 = 1;
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 56) ^= (*(_DWORD *)(a1 + 56) ^ *(_DWORD *)(a2 + 8)) & 0xFC000000;
    v4 = 1;
    v25 = 1;
  }
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v4 = 1;
    v25 = 1;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 12);
  }
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v15 = (*(_BYTE *)(a1 + 144) & 3) == 0;
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 16);
    if ( !v15 )
      v5 = 5;
    v27 = 1;
    v26 = v5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 32);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v6 = *(_DWORD *)(a1 + 68);
    v7 = 0;
    if ( v6 )
      v8 = *(_QWORD *)(a1 + 96);
    else
      v8 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( !v8 )
          break;
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
        {
          v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v20;
          v20[1] = v9;
          ++*(_DWORD *)(v9 + 8);
          xxxSetMenuInfo(*(_QWORD *)(v8 + 16), a2);
          ThreadUnlock1(v14, v13);
        }
        if ( ++v7 == -1 || v7 >= *(_DWORD *)(a1 + 68) )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)(a1 + 96) + 152LL * v7;
      }
      while ( v7 < *(_DWORD *)(a1 + 68) );
      v4 = v25;
    }
    v5 = v26;
  }
  if ( v4 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  else if ( !v27 )
  {
    goto LABEL_28;
  }
  v10 = MNGetPopupFromMenu(a1, 0LL);
  v11 = v21;
  if ( v21 == v10 )
    goto LABEL_26;
  if ( v21 )
  {
    v16 = v22;
    v17 = v23;
    if ( (_QWORD **)v22[1] != &v22 || *v23 != &v22 )
      __fastfail(3u);
    *v23 = v22;
    v16[1] = v17;
  }
  v21 = v10;
  if ( v10 )
  {
    v18 = (_QWORD **)(v10 + 88);
    v19 = *v18;
    if ( (_QWORD **)(*v18)[1] != v18 )
      __fastfail(3u);
    v22 = *v18;
    v23 = v18;
    v19[1] = &v22;
    *v18 = &v22;
    v11 = v21;
LABEL_26:
    if ( v11 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v24, v11);
      xxxMNUpdateShownMenu(v24, 0LL, v5);
    }
  }
LABEL_28:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v21);
  return 1LL;
}
