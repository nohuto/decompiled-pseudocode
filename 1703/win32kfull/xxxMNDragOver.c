/*
 * XREFs of xxxMNDragOver @ 0x1C0212C20
 * Callers:
 *     NtUserMNDragOver @ 0x1C01DCBE0 (NtUserMNDragOver.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C0203CAC (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 MenuStateWindow; // rax
  __int64 *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD **v18; // rdx
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rax
  int v24; // eax
  _QWORD v26[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  _QWORD *v28; // [rsp+50h] [rbp-20h] BYREF
  _QWORD **v29; // [rsp+58h] [rbp-18h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v27, 0LL);
  v4 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    if ( (v6 & 0x400) != 0 )
    {
      v7 = *(_QWORD **)(gptiCurrent + 528LL);
      *(_DWORD *)(v5 + 8) = v6 | 0x8000;
      MenuStateWindow = GetMenuStateWindow(v7);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v5 + 40);
        v10 = *v9;
        v26[0] = *(_QWORD *)(v10 + 368);
        *(_QWORD *)(v10 + 368) = v26;
        v26[1] = MenuStateWindow;
        ++*(_DWORD *)(MenuStateWindow + 8);
        xxxCallHandleMenuMessages(v5, MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v12, v11);
        if ( IsMFMWFPWindow(*(_QWORD *)(v5 + 80)) )
        {
          v14 = safe_cast_fnid_to_PMENUWND(v13);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( v15 )
            {
              v16 = v27;
              if ( v27 != v15 )
              {
                if ( v27 )
                {
                  v17 = v28;
                  v18 = v29;
                  if ( (_QWORD **)v28[1] != &v28 || *v29 != &v28 )
                    __fastfail(3u);
                  *v29 = v28;
                  v17[1] = v18;
                }
                v27 = v15;
                v19 = (_QWORD **)(v15 + 88);
                v20 = *v19;
                if ( (_QWORD **)(*v19)[1] != v19 )
                  __fastfail(3u);
                v28 = *v19;
                v29 = v19;
                v20[1] = &v28;
                *v19 = &v28;
                v16 = v27;
              }
              v21 = *(__int64 **)(v16 + 40);
              if ( v21 )
                v22 = *v21;
              else
                v22 = 0LL;
              *(_QWORD *)(a2 + 8) = v22;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 88);
              v23 = *(__int64 **)(v16 + 8);
              if ( v23 )
                v4 = *v23;
              *(_QWORD *)(a2 + 24) = v4;
              v24 = *(_DWORD *)(v5 + 92);
              *(_DWORD *)a2 = v24;
              if ( (v24 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v4) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
      }
    }
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v27);
  return (unsigned int)v4;
}
