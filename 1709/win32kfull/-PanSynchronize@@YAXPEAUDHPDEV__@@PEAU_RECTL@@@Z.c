/*
 * XREFs of ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0272340
 * Callers:
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02717C0 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C0271D90 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001D83C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C0270F28 (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0272FC8 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0273610 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall PanSynchronize(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v2; // r8
  struct _RECTL *v4; // rdx
  struct REGION *v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+54h] [rbp-ACh]
  _DWORD v14[6]; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ v15; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+C0h] [rbp-40h]
  int v18; // [rsp+C8h] [rbp-38h]
  int v19; // [rsp+F0h] [rbp-10h]
  __int64 v20; // [rsp+100h] [rbp+0h]
  __int128 v21; // [rsp+110h] [rbp+10h] BYREF
  struct DHPDEV__ *v22; // [rsp+120h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 8);
  v11 = 0LL;
  v4 = (struct _RECTL *)&v11;
  v22 = a1;
  if ( a2 )
    v4 = a2;
  v12 = *(_DWORD *)(v2 + 32);
  v13 = *(_DWORD *)(v2 + 36);
  v21 = 0LL;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)&v21, v4, 0LL, 1);
  v11 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v11);
  if ( *((_DWORD *)a1 + 26) )
  {
    v6 = (struct REGION *)*((_QWORD *)a1 + 10);
    v17 = 0LL;
    v18 = 0;
    v20 = 0LL;
    v16 = 0LL;
    v19 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v15, v6, (struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v15.rclBounds) )
    {
      CLIPOBJ_vOffset(&v15, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      *(_QWORD *)(*((_QWORD *)a1 + 9) + 16LL) = *((_QWORD *)a1 + 4);
      v7 = (_DWORD *)SURFOBJ_TO_SURFACE(*((_QWORD *)a1 + 9));
      v14[0] = 0;
      v14[1] = 0;
      v8 = *((_QWORD *)a1 + 8);
      v14[2] = v7[14];
      v14[3] = v7[15];
      if ( v8 )
      {
        if ( (v7[28] & 0x400) != 0 )
          (*((void (__fastcall **)(_DWORD *, __int64, struct _CLIPOBJ *, _QWORD, _DWORD *, struct DHPDEV__ *))a1 + 118))(
            v7 + 6,
            v8,
            &v15,
            0LL,
            v14,
            a1 + 4);
        else
          ((void (__fastcall *)(_DWORD *, __int64, struct _CLIPOBJ *, _QWORD, _DWORD *, struct DHPDEV__ *))EngCopyBits)(
            v7 + 6,
            v8,
            &v15,
            0LL,
            v14,
            a1 + 4);
      }
    }
    v9 = *((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 26) = 0;
    v10 = v9;
    RGNOBJ::vSet((RGNOBJ *)&v10);
  }
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v11);
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)&v21);
}
