/*
 * XREFs of xxxMNSetTop @ 0x1C02098F8
 * Callers:
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNInvertItem @ 0x1C0216F74 (xxxMNInvertItem.c)
 * Callees:
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C01242F4 (ThreadLockExchange.c)
 *     xxxInvalidateRect @ 0x1C02045B4 (xxxInvalidateRect.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 */

__int64 __fastcall xxxMNSetTop(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 **v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r15d
  int v11; // eax
  bool v12; // zf
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  struct tagWND *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD v38[3]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-1h] BYREF
  _QWORD v42[2]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v43; // [rsp+A0h] [rbp+1Fh] BYREF
  _QWORD v44[3]; // [rsp+B0h] [rbp+2Fh] BYREF

  v4 = a2;
  v5 = a1;
  v6 = **a1;
  v7 = *(_QWORD *)(v6 + 40);
  if ( !v7 )
    goto LABEL_32;
  if ( (int)a2 >= 0 )
  {
    if ( (int)a2 > *(_DWORD *)(v7 + 140) )
      v4 = *(_DWORD *)(v7 + 140);
  }
  else
  {
    v4 = 0;
  }
  v8 = *(unsigned int *)(v7 + 136);
  if ( v4 == (_DWORD)v8 )
    goto LABEL_32;
  if ( (_DWORD)v8 == -1 || (unsigned int)v8 >= *(_DWORD *)(v7 + 68) )
    a2 = 0LL;
  else
    a2 = *(_QWORD *)(v7 + 96) + 152 * v8;
  if ( v4 == -1 || v4 >= *(_DWORD *)(v7 + 68) )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(v7 + 96) + 152LL * v4;
  if ( !a2 || !v9 )
  {
LABEL_31:
    a1 = v5;
LABEL_32:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, v6, a4);
    return 0LL;
  }
  v10 = *(_DWORD *)(a2 + 76) - *(_DWORD *)(v9 + 76);
  v11 = *(_DWORD *)(v7 + 144);
  if ( (v11 & 3) == 2 )
  {
    v12 = *(_QWORD *)(v7 + 128) == 0LL;
    *(_DWORD *)(v7 + 144) = v11 & 0xFFFFFFFC | 1;
    if ( !v12 )
      goto LABEL_24;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v39, **v5, v6, a4);
    v13 = 4294967293LL;
    v14 = v39;
    goto LABEL_23;
  }
  if ( (v11 & 3) == 3 )
  {
    v12 = *(_QWORD *)(v7 + 128) == 0LL;
    *(_DWORD *)(v7 + 144) = v11 & 0xFFFFFFFC | 1;
    if ( v12 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v40, **v5, v6, a4);
      v13 = 4294967292LL;
      v14 = v40;
LABEL_23:
      MNDrawArrow(0LL, v14, v13);
    }
  }
LABEL_24:
  v15 = *(_QWORD *)(**v5 + 16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v6, a4);
  v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v38;
  v38[1] = v15;
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
  v44[0] = *(_QWORD *)(v20 + 392);
  *(_QWORD *)(v20 + 392) = v44;
  v44[1] = v7;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v21 = *(struct tagWND **)(**v5 + 16);
  if ( (signed int)abs32(v10) <= *(_DWORD *)(v7 + 76) )
    xxxScrollWindowEx(v21, 0, v10, 0LL, 0LL, 0LL, 0LL, 6);
  else
    xxxInvalidateRect(v21, 0LL, 1);
  v24 = ThreadUnlock1(v23, v22);
  v29 = v24;
  if ( !v24 )
  {
    ThreadUnlock1(v26, v25);
    goto LABEL_31;
  }
  *(_DWORD *)(v24 + 136) = v4;
  if ( !v4 )
  {
    v12 = *(_QWORD *)(v24 + 128) == 0LL;
    *(_DWORD *)(v24 + 144) = *(_DWORD *)(v24 + 144) & 0xFFFFFFFC | 2;
    if ( !v12 )
      goto LABEL_41;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v41, **v5, v27, v28);
    v31 = 4294967293LL;
    v32 = v41;
    goto LABEL_39;
  }
  if ( v4 == *(_DWORD *)(v24 + 140) )
  {
    *(_DWORD *)(v24 + 144) |= 3u;
    if ( !*(_QWORD *)(v24 + 128) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v42, **v5, v27, v28);
      v31 = 4294967292LL;
      v32 = v42;
LABEL_39:
      MNDrawArrow(0LL, v32, v31);
    }
  }
  if ( *(_QWORD *)(v29 + 128) )
  {
LABEL_41:
    v26 = **v5;
    if ( *(_QWORD *)(v26 + 16) )
    {
      ThreadLockExchange(*(_QWORD *)(**v5 + 16), (__int64)v38);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v43, **v5, v33, v34);
      xxxMNDrawFullNC(*(struct tagWND **)(**v5 + 16));
    }
  }
  ThreadUnlock1(v26, v25);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v35, v36, v37);
  return 1LL;
}
