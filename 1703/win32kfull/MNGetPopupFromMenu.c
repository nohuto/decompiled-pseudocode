/*
 * XREFs of MNGetPopupFromMenu @ 0x1C00424E4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0043870 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0203A74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0217528 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 */

__int64 __fastcall MNGetPopupFromMenu(__int64 a1, __int64 **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 *v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD **v13; // rdx
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD **v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-18h] BYREF
  _QWORD **v22; // [rsp+30h] [rbp-10h]
  __int64 v23; // [rsp+38h] [rbp-8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v23 = 0LL;
  v22 = &v21;
  v21 = &v21;
  v20 = 0LL;
  v23 = *(_QWORD *)(v4 + 1344);
  *(_QWORD *)(v4 + 1344) = &v23;
  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 )
  {
    v9 = *(__int64 **)(*(_QWORD *)(v7 + 16) + 528LL);
    if ( v9 )
    {
      if ( (v9[1] & 4) != 0 )
      {
        if ( a2 )
          *a2 = v9;
        v10 = *v9;
        v11 = v20;
        if ( v20 == *v9 )
        {
          do
          {
LABEL_28:
            if ( !v11 )
              goto LABEL_4;
            if ( *(_QWORD *)(v11 + 40) == a1 )
            {
              if ( (*(_DWORD *)v11 & 1) == 0 )
              {
                MNAnimate(v9, 0LL);
                v3 = v20;
              }
              goto LABEL_4;
            }
            if ( !*(_QWORD *)(v11 + 24) )
              goto LABEL_4;
            v16 = safe_cast_fnid_to_PMENUWND();
            if ( !v16 )
              goto LABEL_4;
            v17 = *(_QWORD *)(v16 + 8);
          }
          while ( v11 == v17 );
          v18 = v21;
          v19 = v22;
          if ( (_QWORD **)v21[1] != &v21 || *v22 != &v21 )
            __fastfail(3u);
          *v22 = v21;
          v18[1] = v19;
          v20 = v17;
          if ( v17 )
          {
            v14 = (_QWORD **)(v17 + 88);
            v15 = *v14;
            if ( (_QWORD **)(*v14)[1] != v14 )
              __fastfail(3u);
LABEL_27:
            v21 = v15;
            v22 = v14;
            v15[1] = &v21;
            *v14 = &v21;
            v11 = v20;
            goto LABEL_28;
          }
        }
        else
        {
          if ( v20 )
          {
            v12 = v21;
            v13 = v22;
            if ( (_QWORD **)v21[1] != &v21 || *v22 != &v21 )
              __fastfail(3u);
            *v22 = v21;
            v12[1] = v13;
          }
          v20 = v10;
          if ( v10 )
          {
            v14 = (_QWORD **)(v10 + 88);
            v15 = *v14;
            if ( (_QWORD **)(*v14)[1] != v14 )
              __fastfail(3u);
            goto LABEL_27;
          }
        }
      }
    }
  }
LABEL_4:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v20);
  return v3;
}
