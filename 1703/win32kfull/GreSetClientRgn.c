/*
 * XREFs of GreSetClientRgn @ 0x1C0268540
 * Callers:
 *     InvalidateGDIWindows @ 0x1C01C2B80 (InvalidateGDIWindows.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C02677DC (-bValid@EWNDOBJ@@QEAAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0267BE0 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0267E00 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  struct REGION **v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  LONG v15; // edx
  BOOL v16; // edi
  __int128 v17; // xmm6
  struct REGION *v18; // rdx
  signed __int32 v19; // ecx
  struct REGION *v20; // r8
  signed __int32 v21; // ecx
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v24[3]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v27[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v28; // [rsp+78h] [rbp-21h] BYREF
  __int64 v29; // [rsp+80h] [rbp-19h] BYREF
  __int128 v30; // [rsp+90h] [rbp-9h] BYREF
  __int128 v31; // [rsp+A0h] [rbp+7h] BYREF
  struct _POINTL v32; // [rsp+100h] [rbp+67h] BYREF
  __int64 v33; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+118h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(v6, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, a2, 0);
      if ( v24[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (struct REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v34 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v23 = __PAIR64__(v10, v9);
        *((_QWORD *)&v23 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2568) )
            {
              v15 = -*(_DWORD *)(v14 + 2604);
              v32.x = -*(_DWORD *)(v14 + 2600);
              v32.y = v15;
              if ( v32.x || v15 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v24, &v32);
                v9 += v32.x;
                v11 += v32.x;
                v10 += v32.y;
                v12 += v32.y;
                *(_QWORD *)&v23 = __PAIR64__(v10, v9);
                *((_QWORD *)&v23 + 1) = __PAIR64__(v12, v11);
              }
            }
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v25);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v26);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v26);
          if ( v25[0] )
          {
            if ( v26[0] )
            {
              RGNOBJ::vSet((RGNOBJ *)v26, (struct _RECTL *)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)v25, (struct RGNOBJ *)v24);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v24, (struct RGNOBJ *)v25, (struct RGNOBJ *)v26, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)v25, (struct RGNOBJ *)v24, (struct RGNOBJ *)v26, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v24, (struct RGNOBJ *)v25);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v26);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v34, (struct RGNOBJ *)v24)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v24);
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v27);
          v16 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v27[0] )
            v16 = RGNOBJ::bCopy((RGNOBJ *)v27, (struct RGNOBJ *)v24) != 0;
          v29 = ghsemWndobj;
          GreAcquireSemaphore(ghsemWndobj);
          v28 = *((_QWORD *)a1 + 25);
          GreAcquireSemaphore(v28);
          if ( v16 )
          {
            v33 = *((_QWORD *)a1 + 24);
            if ( v33 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v27, (struct RGNOBJ *)&v33);
              *((_QWORD *)a1 + 24) = v33;
            }
          }
          v17 = v23;
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23, 0, 1);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v23);
            if ( (_QWORD)v23 && RGNOBJ::iCombine((RGNOBJ *)&v23, (struct RGNOBJ *)v24, (struct RGNOBJ *)&v34, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)&v23);
              v18 = *v8;
              v19 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
              v30 = v17;
              *((_DWORD *)v18 + 7) = v19 + 1;
              EWNDOBJ::vSetClip((__int64)a1, *v8, &v30);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v23);
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v24, (struct EWNDOBJ *)((char *)a1 + 56));
          v20 = *v8;
          v21 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&REGION::ulUniqueREGION, 1u);
          v31 = v17;
          *((_DWORD *)v20 + 7) = v21 + 1;
          EWNDOBJ::vSetClip((__int64)a1, *v8, &v31);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v24);
          if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
            (*(void (__fastcall **)(struct EWNDOBJ *))(*((_QWORD *)a1 + 21) + 40LL))(a1);
          v22 = *((_QWORD *)a1 + 21);
          *((_DWORD *)a1 + 46) |= 0x80000000;
          *(_DWORD *)(v22 + 48) |= 0x80000000;
          SEMOBJ::vUnlock((SEMOBJ *)&v28);
          SEMOBJ::vUnlock((SEMOBJ *)&v29);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
