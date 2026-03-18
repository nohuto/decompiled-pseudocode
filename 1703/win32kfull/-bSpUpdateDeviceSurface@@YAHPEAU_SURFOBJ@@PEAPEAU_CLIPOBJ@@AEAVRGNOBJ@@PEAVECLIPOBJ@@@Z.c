/*
 * XREFs of ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C011511C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall bSpUpdateDeviceSurface(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ **a2,
        struct RGNOBJ *a3,
        struct ECLIPOBJ *a4)
{
  unsigned int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdi
  unsigned int v11; // ecx
  DC **v12; // rdi
  __int64 v14; // r13
  struct RGNOBJ *v15; // r14
  struct REGION *v16; // rax
  __int64 v17; // r10
  HDEV hdev; // rax
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  struct _POINTL v20; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v22[8]; // [rsp+38h] [rbp-28h] BYREF
  struct REGION *v23; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-18h] BYREF

  v5 = 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v10 = ThreadWin32Thread;
  if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 328) || a1->iType != 1 )
    return 1LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v22, ghsemVisRgnUniqueness);
  v11 = *(_DWORD *)(v10 + 336);
  if ( v11 != giVisRgnUniquenessStable )
  {
    if ( giVisRgnUniquenessStable > giVisRgnUniqueness )
    {
      if ( v11 <= giVisRgnUniqueness || v11 >= giVisRgnUniquenessStable )
        goto LABEL_12;
LABEL_11:
      v5 = 0;
      goto LABEL_12;
    }
    if ( v11 < giVisRgnUniquenessStable || v11 > giVisRgnUniqueness )
      goto LABEL_11;
  }
LABEL_12:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v22);
  if ( v5 || !a2 || !*a2 )
    return v5;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v21, ghsemVisRgnPublish);
  v12 = *(DC ***)(v10 + 312);
  if ( !v12 )
  {
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v21);
    return 1LL;
  }
  v14 = (__int64)*a2;
  v15 = (struct RGNOBJ *)((unsigned __int64)&(*a2)[2].rclBounds.top & -(__int64)(*a2 != 0LL));
  v19 = *((_QWORD *)*v12 + 192);
  v16 = DC::prgnVisSnap(*v12);
  v23 = v16;
  if ( v17 && v16 )
  {
    if ( RGNOBJ::bEqual((RGNOBJ *)&v23, (struct RGNOBJ *)&v19) )
    {
LABEL_23:
      v5 = 1;
      goto LABEL_33;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a3 != *(_QWORD *)v15 )
      {
        if ( RGNOBJ::bCopy(a3, (struct RGNOBJ *)&v19) )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
          if ( v24[0] )
          {
            if ( (*(_DWORD *)(*((_QWORD *)*v12 + 6) + 32LL) & 0x20000) != 0 )
            {
              hdev = a1->hdev;
              v20.x = -*((_DWORD *)hdev + 650);
              v20.y = -*((_DWORD *)hdev + 651);
              RGNOBJ::bOffset(a3, &v20);
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)v24, v15, a3, BYTE1(gafjRgnOp))
              && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v24) != 1 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v24, a3);
              XCLIPOBJ::vSetup(a4, *(struct REGION **)a3, (struct ERECTL *)(v14 + 4), 1);
              if ( !ERECTL::bEmpty((struct ECLIPOBJ *)((char *)a4 + 4)) )
              {
                *a2 = (struct _CLIPOBJ *)a4;
                v5 = 1;
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
        }
        goto LABEL_33;
      }
      goto LABEL_23;
    }
  }
LABEL_33:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v21);
  return v5;
}
