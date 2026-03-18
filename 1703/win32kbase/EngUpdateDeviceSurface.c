/*
 * XREFs of EngUpdateDeviceSurface @ 0x1C00EFAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C000D1F8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C000D230 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C003A614 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C003C270 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C003C314 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D400 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003D940 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0040EB8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0041050 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5210 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  unsigned int v7; // eax
  DC **v8; // rdi
  CLIPOBJ *v10; // r12
  DC *v11; // r14
  struct RGNOBJ *v12; // r15
  DC *v13; // rcx
  struct REGION *v14; // rax
  __int64 v15; // r10
  struct REGION *v16; // rax
  HDEV hdev; // rax
  struct REGION *v18; // rdx
  __int64 v19; // rdi
  struct _POINTL v20; // [rsp+20h] [rbp-40h] BYREF
  PERESOURCE v21; // [rsp+28h] [rbp-38h] BYREF
  PERESOURCE v22; // [rsp+30h] [rbp-30h] BYREF
  struct REGION *v23; // [rsp+38h] [rbp-28h] BYREF
  __int16 *v24[2]; // [rsp+40h] [rbp-20h] BYREF
  REGION *v25[2]; // [rsp+50h] [rbp-10h] BYREF
  struct REGION *v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || pso->iType != 1 )
    return 1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v22, (HSEMAPHORE)ghsemVisRgnUniqueness);
  v7 = *(_DWORD *)(v6 + 336);
  if ( v7 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v7 <= giVisRgnUniqueness || v7 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v7 < giVisRgnUniquenessStable || v7 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SEMOBJSHARED::~SEMOBJSHARED(&v22);
  if ( v3 || !ppco || !*ppco )
    return v3;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v21, ghsemVisRgnPublish);
  v8 = *(DC ***)(v6 + 312);
  if ( !v8 )
  {
    SEMOBJSHARED::~SEMOBJSHARED(&v21);
    return 1;
  }
  v10 = *ppco;
  v11 = *v8;
  v12 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
  v13 = *v8;
  v27 = *((_QWORD *)*v8 + 192);
  v14 = DC::prgnVisSnap(v13);
  v23 = v14;
  if ( v15 && v14 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v23, (struct RGNOBJ *)&v27) )
      goto LABEL_27;
    if ( !*((_QWORD *)v11 + 197) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25);
      if ( v25[0] )
        *((REGION **)*v8 + 197) = v25[0];
      RGNMEMOBJ::~RGNMEMOBJ(v25);
    }
    v16 = (struct REGION *)*((_QWORD *)*v8 + 197);
    v26 = v16;
    if ( !v16 )
      goto LABEL_37;
    if ( v16 == *(struct REGION **)v12 )
    {
LABEL_27:
      v3 = 1;
    }
    else if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v26, (struct RGNOBJ *)&v27) )
    {
      *((_QWORD *)*v8 + 197) = v26;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
      if ( v24[0] )
      {
        if ( (*(_DWORD *)(*((_QWORD *)*v8 + 6) + 32LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v20.x = -*((_DWORD *)hdev + 650);
          v20.y = -*((_DWORD *)hdev + 651);
          RGNOBJ::bOffset((int **)&v26, &v20);
        }
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)v24, v12, (struct RGNOBJ *)&v26, byte_1C01896D5)
          && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v24) != 1 )
        {
          RGNOBJ::vSwap((RGNOBJ *)v24, (struct RGNOBJ *)&v26);
          v18 = v26;
          *((_QWORD *)*v8 + 197) = v26;
          v19 = (__int64)*v8 + 2352;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v19, v18, (struct ERECTL *)&v10->rclBounds, 1);
          if ( !ERECTL::bEmpty((ERECTL *)(v19 + 4)) )
          {
            *ppco = (CLIPOBJ *)v19;
            v3 = 1;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v24);
    }
  }
LABEL_37:
  SEMOBJSHARED::~SEMOBJSHARED(&v21);
  return v3;
}
