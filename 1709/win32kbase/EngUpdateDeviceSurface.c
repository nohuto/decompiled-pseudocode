/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C0063D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046400 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0046980 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053114 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0055844 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0055D30 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00646A0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C00646D8 (--1SEMOBJSHARED@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v8; // eax
  DC **v9; // rdi
  CLIPOBJ *v10; // r12
  DC *v11; // r14
  struct RGNOBJ *v12; // r15
  DC *v13; // rcx
  struct REGION *v14; // rax
  __int64 v15; // r10
  REGION *v16; // rcx
  struct REGION *v17; // rax
  DC *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  HDEV hdev; // rax
  struct REGION *v25; // rdx
  __int64 v26; // rdi
  struct _POINTL v27; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v29[8]; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v30; // [rsp+38h] [rbp-28h] BYREF
  __int16 *v31; // [rsp+40h] [rbp-20h] BYREF
  int v32; // [rsp+48h] [rbp-18h]
  REGION *v33; // [rsp+50h] [rbp-10h] BYREF
  int v34; // [rsp+58h] [rbp-8h]
  struct REGION *v35; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v29, (HSEMAPHORE)ghsemVisRgnUniqueness);
  v8 = *(_DWORD *)(v6 + 336);
  if ( v8 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable <= giVisRgnUniqueness )
    {
      if ( v8 >= giVisRgnUniquenessStable && v8 <= giVisRgnUniqueness )
        goto LABEL_9;
LABEL_11:
      v3 = 0;
      goto LABEL_9;
    }
    if ( v8 > giVisRgnUniqueness && v8 < giVisRgnUniquenessStable )
      goto LABEL_11;
  }
LABEL_9:
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)v29);
  if ( v3 || !ppco || !*ppco )
    return v3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v28, ghsemVisRgnPublish);
  v9 = *(DC ***)(v6 + 312);
  if ( !v9 )
  {
    SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)v28);
    return 1;
  }
  v10 = *ppco;
  v11 = *v9;
  v12 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
  v13 = *v9;
  v36 = *((_QWORD *)*v9 + 192);
  v14 = DC::prgnVisSnap(v13);
  v30 = v14;
  if ( v15 && v14 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v30, (struct RGNOBJ *)&v36) )
      goto LABEL_39;
    if ( !*((_QWORD *)v11 + 197) )
    {
      v34 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0xD8u);
      v16 = v33;
      if ( v33 )
        *((_QWORD *)*v9 + 197) = v33;
      if ( v34 == 1 )
        REGION::vDeleteREGION(v16);
    }
    v17 = (struct REGION *)*((_QWORD *)*v9 + 197);
    v35 = v17;
    if ( !v17 )
      goto LABEL_38;
    if ( v17 == *(struct REGION **)v12 )
    {
LABEL_39:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v35, (struct RGNOBJ *)&v36) )
    {
      v18 = *v9;
      v32 = 0;
      *((_QWORD *)v18 + 197) = v35;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31, v19, v20, v21);
      if ( v31 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v9 + 6) + 32LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v27.x = -*((_DWORD *)hdev + 650);
          v27.y = -*((_DWORD *)hdev + 651);
          RGNOBJ::bOffset((int **)&v35, &v27);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v31, v12, (struct RGNOBJ *)&v35, byte_1C018E255)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v31) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v35);
          v25 = v35;
          *((_QWORD *)*v9 + 197) = v35;
          v26 = (__int64)*v9 + 2352;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v25, (struct ERECTL *)&v10->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v26 + 4)) )
          {
            *ppco = (CLIPOBJ *)v26;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v31, v22, v23);
    }
  }
LABEL_38:
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)v28);
  return v3;
}
