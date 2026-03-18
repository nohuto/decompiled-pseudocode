/*
 * XREFs of xxxMNSetTop @ 0x1C02078C0
 * Callers:
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     ThreadLockExchange @ 0x1C00CCF68 (ThreadLockExchange.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     xxxInvalidateRect @ 0x1C0202AA0 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 *a1, int a2)
{
  unsigned int v2; // edi
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // rdx
  struct tagWND *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v21; // r8
  _QWORD v22[3]; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v24[4]; // [rsp+78h] [rbp+37h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *(_QWORD *)(*a1 + 40);
  if ( !v4 )
    goto LABEL_32;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(v4 + 140) )
      v2 = *(_DWORD *)(v4 + 140);
  }
  else
  {
    v2 = 0;
  }
  v5 = *(unsigned int *)(v4 + 136);
  if ( v2 == (_DWORD)v5 )
    goto LABEL_32;
  if ( (_DWORD)v5 == -1 || (unsigned int)v5 >= *(_DWORD *)(v4 + 68) )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(v4 + 96) + 152 * v5;
  if ( v2 == -1 || v2 >= *(_DWORD *)(v4 + 68) )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(v4 + 96) + 152LL * v2;
  if ( !v6 || !v7 )
  {
LABEL_31:
    a1 = v3;
LABEL_32:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
    return 0LL;
  }
  v8 = *(_DWORD *)(v6 + 76) - *(_DWORD *)(v7 + 76);
  v9 = *(_DWORD *)(v4 + 144);
  if ( (v9 & 3) == 2 )
  {
    v10 = *(_QWORD *)(v4 + 128) == 0LL;
    *(_DWORD *)(v4 + 144) = v9 & 0xFFFFFFFC | 1;
    if ( !v10 )
      goto LABEL_24;
    SmartObjStackRef<tagPOPUPMENU>::Init(v24, *v3);
    v11 = 4294967293LL;
    goto LABEL_23;
  }
  if ( (v9 & 3) == 3 )
  {
    v10 = *(_QWORD *)(v4 + 128) == 0LL;
    *(_DWORD *)(v4 + 144) = v9 & 0xFFFFFFFC | 1;
    if ( v10 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v24, *v3);
      v11 = 4294967292LL;
LABEL_23:
      MNDrawArrow(0LL, v24, v11);
    }
  }
LABEL_24:
  v12 = *(_QWORD *)(*v3 + 16);
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  v22[1] = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = v4;
  ++*(_DWORD *)(v4 + 8);
  v13 = *(struct tagWND **)(*v3 + 16);
  if ( (signed int)abs32(v8) <= *(_DWORD *)(v4 + 76) )
    xxxScrollWindowEx(v13, 0, v8, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v13, 0LL, 1);
  v16 = ThreadUnlock1(v15, v14);
  v19 = v16;
  if ( !v16 )
  {
    ThreadUnlock1(v18, v17);
    goto LABEL_31;
  }
  *(_DWORD *)(v16 + 136) = v2;
  if ( !v2 )
  {
    v10 = *(_QWORD *)(v16 + 128) == 0LL;
    *(_DWORD *)(v16 + 144) = *(_DWORD *)(v16 + 144) & 0xFFFFFFFC | 2;
    if ( !v10 )
      goto LABEL_41;
    SmartObjStackRef<tagPOPUPMENU>::Init(v24, *v3);
    v21 = 4294967293LL;
    goto LABEL_39;
  }
  if ( v2 == *(_DWORD *)(v16 + 140) )
  {
    *(_DWORD *)(v16 + 144) |= 3u;
    if ( !*(_QWORD *)(v16 + 128) )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v24, *v3);
      v21 = 4294967292LL;
LABEL_39:
      MNDrawArrow(0LL, v24, v21);
    }
  }
  if ( *(_QWORD *)(v19 + 128) )
  {
LABEL_41:
    v18 = *(_QWORD *)(*v3 + 16);
    if ( v18 )
    {
      ThreadLockExchange(v18, (__int64)v22);
      SmartObjStackRef<tagPOPUPMENU>::Init(v24, *v3);
      xxxMNDrawFullNC(*(struct tagWND **)(*v3 + 16), 0LL, v24);
    }
  }
  ThreadUnlock1(v18, v17);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v3);
  return 1LL;
}
