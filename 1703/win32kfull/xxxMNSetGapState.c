/*
 * XREFs of xxxMNSetGapState @ 0x1C0212DEC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01DCB50 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0213060 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0202AA0 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0203E44 (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(__int64 a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD **v15; // rdx
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // [rsp+20h] [rbp-69h] BYREF
  _QWORD *v29; // [rsp+28h] [rbp-61h] BYREF
  _QWORD **v30; // [rsp+30h] [rbp-59h]
  _QWORD v31[3]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v32[4]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v33[4]; // [rsp+80h] [rbp-9h] BYREF
  int v34; // [rsp+A0h] [rbp+17h] BYREF
  int v35; // [rsp+A4h] [rbp+1Bh]
  int v36; // [rsp+A8h] [rbp+1Fh]
  int v37; // [rsp+ACh] [rbp+23h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v28, 0LL);
  if ( (a3 & 3) != 0 )
  {
    v9 = 0LL;
    if ( IsMFMWFPWindow(a1) )
    {
      v10 = safe_cast_fnid_to_PMENUWND(v8);
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v12 )
        {
          v13 = v28;
          if ( v28 != v12 )
          {
            if ( v28 )
            {
              v14 = v29;
              v15 = v30;
              if ( (_QWORD **)v29[1] != &v29 || *v30 != &v29 )
                __fastfail(v11);
              *v30 = v29;
              v14[1] = v15;
            }
            v28 = v12;
            v16 = (_QWORD **)(v12 + 88);
            v17 = *v16;
            if ( (_QWORD **)(*v16)[1] != v16 )
              __fastfail(v11);
            v29 = *v16;
            v30 = v16;
            v17[1] = &v29;
            *v16 = &v29;
            v13 = v28;
          }
          if ( v13 )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(v33, v13);
            v18 = (_DWORD *)MNGetpItem(v33, a2);
            v19 = v18;
            if ( v18 )
            {
              v34 = v18[18];
              v36 = v18[18] + v18[20];
              v35 = v18[19];
              v37 = v18[19] + v18[21];
              SmartObjStackRef<tagPOPUPMENU>::Init(v32, v28);
              if ( (a3 & 1) != 0 )
              {
                v20 = MNGetpItem(v32, a2 - 1);
                if ( a4 )
                {
                  v19[1] |= 0x80000000;
                  if ( !v20 )
                    goto LABEL_30;
                  *(_DWORD *)(v20 + 4) |= 0x40000000u;
                }
                else
                {
                  v19[1] &= ~0x80000000;
                  if ( !v20 )
                    goto LABEL_30;
                  *(_DWORD *)(v20 + 4) &= ~0x40000000u;
                }
                v35 -= *(_DWORD *)(gpsi + 2156LL);
              }
              else
              {
                v21 = MNGetpItem(v32, a2 + 1);
                if ( a4 )
                {
                  v19[1] |= 0x40000000u;
                  if ( !v21 )
                    goto LABEL_30;
                  *(_DWORD *)(v21 + 4) |= 0x80000000;
                }
                else
                {
                  v19[1] &= ~0x40000000u;
                  if ( !v21 )
                    goto LABEL_30;
                  *(_DWORD *)(v21 + 4) &= ~0x80000000;
                }
                v37 += *(_DWORD *)(gpsi + 2156LL);
              }
LABEL_30:
              v22 = *(_QWORD *)(v28 + 40);
              v23 = *(unsigned int *)(v22 + 136);
              if ( (_DWORD)v23 != -1 && (unsigned int)v23 < *(_DWORD *)(v22 + 68) )
                v9 = *(_QWORD *)(v22 + 96) + 152 * v23;
              v24 = *(_DWORD *)(v9 + 76);
              v35 -= v24;
              v37 -= v24;
              v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v31;
              ++*(_DWORD *)(a1 + 8);
              v31[1] = a1;
              xxxInvalidateRect((struct tagWND *)a1, &v34, 1);
              ThreadUnlock1(v26, v25);
            }
          }
        }
      }
    }
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v28);
}
