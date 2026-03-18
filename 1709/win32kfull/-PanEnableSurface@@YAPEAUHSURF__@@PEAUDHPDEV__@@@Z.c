/*
 * XREFs of ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02717C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0272340 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0273610 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

HSURF __fastcall PanEnableSurface(struct DHPDEV__ *a1)
{
  int v1; // r9d
  int v3; // r8d
  int v4; // eax
  int v5; // edx
  HSURF v6; // rax
  SURFOBJ *v7; // rax
  SURFOBJ *v8; // rsi
  __int64 v9; // rax
  DHPDEV v10; // rcx
  LONG v11; // r14d
  HSURF DeviceSurface; // rdi
  HDEV v13; // rdx
  HBITMAP Bitmap; // r14
  SURFOBJ *v15; // rax
  SURFOBJ *v16; // r15
  HDEV v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  int v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  int v24; // [rsp+68h] [rbp-8h]
  SIZEL sizl; // [rsp+A0h] [rbp+30h]
  HSEMAPHORE v26; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_DWORD *)a1;
  v3 = *((_DWORD *)a1 + 1);
  v4 = (*((_DWORD *)a1 + 2) - *(_DWORD *)a1) >> 1;
  v5 = *((_DWORD *)a1 + 3) - v3;
  *((_DWORD *)a1 + 4) = v4;
  v5 >>= 1;
  *((_DWORD *)a1 + 6) = v1 + v4;
  *((_DWORD *)a1 + 5) = v5;
  *((_DWORD *)a1 + 7) = v5 + v3;
  v26 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v26);
  v6 = (HSURF)(*((__int64 (__fastcall **)(_QWORD))a1 + 102))(*((_QWORD *)a1 + 4));
  if ( !v6 )
    goto LABEL_26;
  v7 = EngLockSurface(v6);
  v8 = v7;
  if ( !v7 )
  {
LABEL_25:
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v26);
    (*((void (__fastcall **)(_QWORD))a1 + 103))(*((_QWORD *)a1 + 4));
LABEL_26:
    DeviceSurface = 0LL;
    goto LABEL_27;
  }
  v9 = SURFOBJ_TO_SURFACE(v7);
  *(_DWORD *)(v9 + 112) &= ~0x1000u;
  v10 = (DHPDEV)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 9) = v8;
  v8->dhpdev = v10;
  v11 = *((_DWORD *)a1 + 2);
  sizl = (SIZEL)*((_QWORD *)a1 + 1);
  DeviceSurface = EngCreateDeviceSurface(0LL, sizl, *((_DWORD *)a1 + 10));
  if ( !DeviceSurface )
  {
LABEL_24:
    EngUnlockSurface(v8);
    goto LABEL_25;
  }
  v13 = (HDEV)*((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 7) = DeviceSurface;
  if ( !EngModifySurface(DeviceSurface, v13, 0x394ABu, 3u, (DHSURF)a1 + 14, 0LL, 0, 0LL) )
  {
LABEL_23:
    EngDeleteSurface(DeviceSurface);
    goto LABEL_24;
  }
  Bitmap = EngCreateBitmap(sizl, v11, *((_DWORD *)a1 + 10), 1u, 0LL);
  v15 = EngLockSurface((HSURF)Bitmap);
  v16 = v15;
  if ( !v15 || (v17 = (HDEV)*((_QWORD *)a1 + 6), *((_QWORD *)a1 + 8) = v15, !EngAssociateSurface((HSURF)Bitmap, v17, 0)) )
  {
LABEL_22:
    EngUnlockSurface(v16);
    EngDeleteSurface((HSURF)Bitmap);
    goto LABEL_23;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
  if ( !v19 || !v21 || !v23 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    if ( v24 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    if ( v20 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    if ( v22 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
    goto LABEL_22;
  }
  RGNOBJ::vSet((RGNOBJ *)&v21);
  RGNOBJ::vSet((RGNOBJ *)&v19);
  *((_QWORD *)a1 + 10) = v21;
  *((_QWORD *)a1 + 11) = v19;
  *((_QWORD *)a1 + 12) = v23;
  PanSynchronize(a1, 0LL);
  if ( v24 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
  if ( v20 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
  if ( v22 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
LABEL_27:
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v26);
  return DeviceSurface;
}
