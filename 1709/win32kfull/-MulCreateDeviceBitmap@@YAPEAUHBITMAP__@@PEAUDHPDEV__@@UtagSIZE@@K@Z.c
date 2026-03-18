/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C027DC60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02822F4 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02825CC (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG iFormat)
{
  __int64 **v3; // rsi
  struct _MDSURF *v4; // rdi
  HBITMAP Bitmap; // rbp
  SIZEL v7; // rbx
  __int64 *v9; // rax
  HSURF v10; // rax
  HSURF v11; // r12
  SURFOBJ *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v18; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  v7 = sizl;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v9 = v3[6];
      v18 = v9;
      if ( (v9[230] & 0x8000000) != 0 && v9[348] )
      {
        v10 = (HSURF)((__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v9[348])(v9[227], v7, iFormat);
        v11 = v10;
        v12 = v10 ? EngLockSurface(v10) : 0LL;
        if ( v12 )
        {
          if ( !v4 )
          {
            v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
            if ( !v4 )
              goto LABEL_18;
            Bitmap = EngCreateBitmap(v7, 0, iFormat, 1u, 0LL);
            if ( !Bitmap )
            {
              EngFreeMem(v4);
LABEL_18:
              EngUnlockSurface(v12);
              EngDeleteSurface(v11);
              return 0LL;
            }
          }
          v13 = *((_QWORD *)v4 + 1);
          *(_QWORD *)v4 = a1;
          *(_QWORD *)(v13 + 8LL * *((unsigned int *)v3 + 4)) = v12;
          v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
          *(_DWORD *)(v14 + 112) |= 0x80000u;
          *(_QWORD *)(v14 + 144) = Bitmap;
          vSetupDevBitmap((struct PDEVOBJ *)&v18, (struct SURFACE *)v14);
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      LOBYTE(sizl.cx) = 5;
      v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD))HmgShareLockCheck)(Bitmap, sizl);
      v16 = v15;
      if ( v15 )
      {
        *(_DWORD *)(v15 + 112) |= 0x400000u;
        *(_QWORD *)(v15 + 24) = v4;
        *(_WORD *)(v15 + 100) = 3;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
        DEC_SHARE_REF_CNT(v16);
      }
    }
  }
  return Bitmap;
}
