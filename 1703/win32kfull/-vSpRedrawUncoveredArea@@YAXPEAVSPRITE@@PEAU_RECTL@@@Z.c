/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0263810
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010B384 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01182A0 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C025D6C8 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C025E7C0 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C025EA04 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F688 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0265AE0 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C026607C (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02661D0 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // r12
  struct _RECTL *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // r15
  int v7; // r14d
  struct _POINTL *v8; // rdx
  struct _SURFOBJ *Composite; // r13
  __int64 v10; // rdi
  struct _RECTL *v11; // rbx
  struct SPRITE *v12; // rcx
  struct SPRITE *v13; // rbx
  struct _RECTL *v14; // r12
  struct _RECTL *v15; // rdi
  const struct _RECTL *v16; // rcx
  __int64 v17; // r12
  struct _RECTL *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rbx
  struct _SURFOBJ *v22; // rcx
  struct _SURFOBJ *v23; // rcx
  BOOL (__stdcall *v24)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct SPRITE *v25; // rbx
  __int64 v26; // r15
  struct _RECTL *v27; // rdi
  __int64 v28; // r14
  struct _SURFOBJ *v29; // r8
  struct _POINTL *v30; // rdx
  unsigned int v31; // [rsp+50h] [rbp-B0h]
  ULONG StartingIndex; // [rsp+54h] [rbp-ACh] BYREF
  struct _POINTL v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  struct _RECTL *v36; // [rsp+70h] [rbp-90h]
  struct SPRITE *v37; // [rsp+78h] [rbp-88h]
  struct SPRITE *v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  struct _RECTL *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  _BYTE v42[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v43; // [rsp+A8h] [rbp-58h] BYREF
  struct _RECTL v44; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v41 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 32LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v44);
    v6 = v5;
    v31 = v5;
    if ( v5 )
    {
      v7 = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1040) && (_DWORD)v6 )
        {
          v10 = (unsigned int)v6;
          v11 = &v44;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v8, v11++, 0LL, 1);
            --v10;
          }
          while ( v10 );
          v6 = v31;
          v4 = (struct _RECTL *)((char *)a1 + 80);
        }
        v12 = *(struct SPRITE **)(v2 + 16);
        v33.x = -v4->left;
        v33.y = -*((_DWORD *)a1 + 21);
        v37 = pSpFindInZ(v12, v4);
        v13 = v37;
        if ( v37 )
        {
          v14 = (struct _RECTL *)((char *)a1 + 80);
          while ( v13 == a1 || !(_DWORD)v6 )
          {
LABEL_69:
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v13 + 248));
            v37 = pSpFindInZ(*((struct SPRITE **)v13 + 3), v14);
            v13 = v37;
            if ( !v37 )
            {
              v2 = v41;
              goto LABEL_71;
            }
          }
          v15 = &v44;
          v36 = &v44;
          v16 = (const struct _RECTL *)((char *)v13 + 80);
          v35 = (unsigned int)v6;
          v17 = (unsigned int)v6;
LABEL_14:
          if ( !bIntersect(v15, v16, &v43) )
            goto LABEL_67;
          if ( v7 )
            goto LABEL_66;
          v18 = &v44;
          v34 = v17;
          while ( 1 )
          {
            v19 = *((_QWORD *)a1 + 20);
            v20 = 0LL;
            if ( v19
              && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v19) + 112) & 0x200) == 0 )
            {
              v20 = SURFOBJ_TO_SURFACE_NOT_NULL(v19);
              GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
            }
            v21 = 0LL;
            if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x4000) != 0
               || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) < 0)
              && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x200) == 0 )
            {
              v21 = SURFOBJ_TO_SURFACE_NOT_NULL(Composite);
              GreLockDisplayDevice(*(_QWORD *)(v21 + 48));
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) != 0
              || (v22 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20), !v22->hdev) )
            {
              if ( Composite->iType == 1 )
              {
                if ( bAllowShareAccess(Composite)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
                {
LABEL_50:
                  v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
                  goto LABEL_60;
                }
                if ( Composite->iType == 1
                  && bAllowShareAccess(Composite)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
                {
                  goto LABEL_59;
                }
              }
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(Composite) + 112) & 0x400) == 0 )
                goto LABEL_59;
              v24 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)Composite->hdev + 166);
            }
            else
            {
              if ( v22->iType == 1
                && bAllowShareAccess(v22)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
              {
                goto LABEL_50;
              }
              v23 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
              if ( v23->iType == 1
                && bAllowShareAccess(v23)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 20)) + 112) & 0x400) == 0 )
              {
LABEL_59:
                v24 = EngCopyBits;
                goto LABEL_60;
              }
              v24 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(*((_QWORD *)a1 + 20) + 24LL) + 1328LL);
            }
LABEL_60:
            OffCopyBits(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v24,
              (int *)&v33,
              (__int64)Composite,
              (int *)a1 + 42,
              *((_QWORD *)a1 + 20),
              0LL,
              0LL,
              v18,
              v18);
            if ( v21 )
              GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
            if ( v20 )
              GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
            ++v18;
            if ( !--v34 )
            {
              v13 = v37;
              v7 = 1;
              v15 = v36;
              v17 = v35;
LABEL_66:
              vSpComposite(v13, &v33, Composite, &v43);
LABEL_67:
              ++v15;
              v16 = (const struct _RECTL *)((char *)v13 + 80);
              v36 = v15;
              if ( !--v6 )
              {
                v6 = v31;
                v14 = (struct _RECTL *)((char *)a1 + 80);
                goto LABEL_69;
              }
              goto LABEL_14;
            }
          }
        }
LABEL_71:
        v25 = 0LL;
        v39 = 0;
        v38 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v39 = v6;
          v25 = a1;
          v40 = &v44;
          v38 = a1;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v38);
        }
        if ( (_DWORD)v6 )
        {
          v26 = v7;
          v27 = &v44;
          v28 = v31;
          do
          {
            if ( v26 )
            {
              v29 = Composite;
              v30 = &v33;
            }
            else
            {
              v29 = (struct _SURFOBJ *)*((_QWORD *)a1 + 20);
              v30 = (struct _POINTL *)((char *)a1 + 168);
            }
            vSpWriteToScreen((struct _SPRITESTATE *)v2, v30, v29, v27++);
            --v28;
          }
          while ( v28 );
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v42, (struct _EX_PUSH_LOCK *)(v2 + 696));
          RtlClearBits((PRTL_BITMAP)(v2 + 672), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v42);
        }
        if ( v25 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v38);
      }
    }
  }
}
