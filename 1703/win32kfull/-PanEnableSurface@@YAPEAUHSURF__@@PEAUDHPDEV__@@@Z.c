/*
 * XREFs of ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0274DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0275970 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0276C3C (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

HSURF __fastcall PanEnableSurface(struct DHPDEV__ *a1)
{
  int v1; // r8d
  int v3; // eax
  int v4; // edx
  HSURF v5; // rax
  SURFOBJ *v6; // rax
  SURFOBJ *v7; // rsi
  __int64 v8; // rax
  DHPDEV v9; // rcx
  LONG v10; // r14d
  HSURF DeviceSurface; // rdi
  HDEV v12; // rdx
  HBITMAP Bitmap; // r14
  SURFOBJ *v14; // rax
  SURFOBJ *v15; // r15
  HDEV v16; // rdx
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  int v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+68h] [rbp-8h]
  SIZEL sizl; // [rsp+A0h] [rbp+30h]
  HSEMAPHORE v25; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *((_DWORD *)a1 + 1);
  v3 = (*((_DWORD *)a1 + 2) - *(_DWORD *)a1) >> 1;
  v4 = *((_DWORD *)a1 + 3) - v1;
  *((_DWORD *)a1 + 4) = v3;
  v4 >>= 1;
  *((_DWORD *)a1 + 6) = *(_DWORD *)a1 + v3;
  *((_DWORD *)a1 + 5) = v4;
  *((_DWORD *)a1 + 7) = v4 + v1;
  v25 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v25);
  v5 = (HSURF)(*((__int64 (__fastcall **)(_QWORD))a1 + 102))(*((_QWORD *)a1 + 4));
  if ( !v5 )
    goto LABEL_26;
  v6 = EngLockSurface(v5);
  v7 = v6;
  if ( !v6 )
  {
LABEL_25:
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v25);
    (*((void (__fastcall **)(_QWORD))a1 + 103))(*((_QWORD *)a1 + 4));
LABEL_26:
    DeviceSurface = 0LL;
    goto LABEL_27;
  }
  v8 = SURFOBJ_TO_SURFACE(v6);
  *(_DWORD *)(v8 + 112) &= ~0x1000u;
  v9 = (DHPDEV)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 9) = v7;
  v7->dhpdev = v9;
  v10 = *((_DWORD *)a1 + 2);
  sizl = (SIZEL)*((_QWORD *)a1 + 1);
  DeviceSurface = EngCreateDeviceSurface(0LL, sizl, *((_DWORD *)a1 + 10));
  if ( !DeviceSurface )
  {
LABEL_24:
    EngUnlockSurface(v7);
    goto LABEL_25;
  }
  v12 = (HDEV)*((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 7) = DeviceSurface;
  if ( !EngModifySurface(DeviceSurface, v12, 0x394ABu, 3u, (DHSURF)a1 + 14, 0LL, 0, 0LL) )
  {
LABEL_23:
    EngDeleteSurface(DeviceSurface);
    goto LABEL_24;
  }
  Bitmap = EngCreateBitmap(sizl, v10, *((_DWORD *)a1 + 10), 1u, 0LL);
  v14 = EngLockSurface((HSURF)Bitmap);
  v15 = v14;
  if ( !v14 || (v16 = (HDEV)*((_QWORD *)a1 + 6), *((_QWORD *)a1 + 8) = v14, !EngAssociateSurface((HSURF)Bitmap, v16, 0)) )
  {
LABEL_22:
    EngUnlockSurface(v15);
    EngDeleteSurface((HSURF)Bitmap);
    goto LABEL_23;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  if ( !v18 || !v20 || !v22 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    if ( v23 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    if ( v19 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    goto LABEL_22;
  }
  RGNOBJ::vSet((RGNOBJ *)&v20);
  RGNOBJ::vSet((RGNOBJ *)&v18);
  *((_QWORD *)a1 + 10) = v20;
  *((_QWORD *)a1 + 11) = v18;
  *((_QWORD *)a1 + 12) = v22;
  PanSynchronize(a1, 0LL);
  if ( v23 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
LABEL_27:
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v25);
  return DeviceSurface;
}
