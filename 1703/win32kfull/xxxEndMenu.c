/*
 * XREFs of xxxEndMenu @ 0x1C02132D4
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C003BBCC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C020717C (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rcx
  int *v3; // rax
  _QWORD *v4; // rax
  _QWORD **v5; // rdx
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int *v15; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-18h] BYREF
  _QWORD **v17; // [rsp+30h] [rbp-10h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v15, 0LL);
  v2 = *(_QWORD *)a1;
  v3 = v15;
  if ( v15 == *(int **)a1 )
  {
LABEL_11:
    if ( v3 )
    {
      *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
      *v3 |= 0x8000u;
      v8 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) == *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        xxxMNReleaseCapture(a1);
      if ( gptiCurrent == v8 )
      {
        v9 = *(_DWORD *)(a1 + 8);
        if ( (v9 & 0x10) == 0 )
        {
          *(_DWORD *)(a1 + 8) = v9 | 0x10;
          if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
          {
            if ( (**(_DWORD **)a1 & 0x80000) == 0 )
              xxxMNCancel(a1, 0, 0, 0LL);
          }
          else
          {
            v10 = *v15;
            xxxMNCloseHierarchy((__int64)v15, a1);
            if ( (v10 & 8) != 0 )
            {
              v13 = *((_QWORD *)v15 + 2);
              if ( v13 )
                xxxDestroyWindow(v13, v11, v12);
            }
          }
        }
      }
    }
    return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v15);
  }
  if ( v15 )
  {
    v4 = v16;
    v5 = v17;
    if ( (_QWORD **)v16[1] != &v16 || *v17 != &v16 )
      __fastfail(3u);
    *v17 = v16;
    v4[1] = v5;
  }
  v15 = (int *)v2;
  if ( v2 )
  {
    v6 = (_QWORD **)(v2 + 88);
    v7 = *v6;
    if ( (_QWORD **)(*v6)[1] != v6 )
      __fastfail(3u);
    v16 = *v6;
    v17 = v6;
    v7[1] = &v16;
    *v6 = &v16;
    v3 = v15;
    goto LABEL_11;
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v15);
}
