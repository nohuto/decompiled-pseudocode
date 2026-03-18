/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C02812D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x1C026B1C8 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C0285790 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0285A6C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HSURF __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        ULONG a3,
        char a4,
        struct DHSURF__ *a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  ULONG v11; // r11d
  struct DHPDEV__ *v13; // r8
  HSURF v14; // r13
  __int64 *i; // rcx
  __int64 v16; // rdx
  __int64 **v17; // r10
  __int64 **v18; // r15
  struct _LUID v19; // rax
  HSURF v20; // rax
  HSURF v21; // r14
  SURFOBJ *v22; // r12
  __int64 (__fastcall *v23)(_QWORD, SIZEL, _QWORD); // r10
  HSURF v24; // rax
  DHSURF v25; // rax
  DHSURF v26; // rax
  HBITMAP RedirectionDeviceBitmap; // rax
  SURFOBJ *v28; // r8
  DHSURF v29; // rdx
  DHSURF v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r14
  HSURF v34; // rcx
  int v36; // [rsp+58h] [rbp-39h]
  __int64 v37; // [rsp+60h] [rbp-31h] BYREF
  DHSURF dhsurf; // [rsp+68h] [rbp-29h]
  void *v39; // [rsp+70h] [rbp-21h]
  struct _LUID v40; // [rsp+78h] [rbp-19h] BYREF
  __int64 **v41; // [rsp+80h] [rbp-11h]
  SURFOBJ *pso; // [rsp+88h] [rbp-9h]
  char v45; // [rsp+F0h] [rbp+5Fh]

  v45 = a4;
  v8 = *((_QWORD *)a1 + 4);
  v9 = 0LL;
  v10 = 0LL;
  dhsurf = 0LL;
  v37 = v8;
  v11 = a3;
  v13 = a1;
  v14 = 0LL;
  if ( (*(_DWORD *)(v8 + 32) & 0x4000000) == 0
    || (a4 & 2) == 0 && g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
  {
    v39 = 0LL;
    if ( (a4 & 2) != 0 && a8 )
      v39 = *a8;
    v41 = 0LL;
    if ( (*(_DWORD *)(v8 + 32) & 0x4000000) == 0 )
      goto LABEL_17;
    for ( i = *(__int64 **)a1; i; i = (__int64 *)*i )
    {
      v16 = *(_QWORD *)(i[7] + 2592);
      if ( v16 && *(_DWORD *)(v16 + 264) == *((_DWORD *)v13 + 26) && *(_DWORD *)(v16 + 268) == *((_DWORD *)v13 + 27) )
      {
        v41 = (__int64 **)i;
        break;
      }
    }
    v40 = 0LL;
    PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v37, &v40);
    v18 = v17;
    if ( !v17 )
LABEL_17:
      v18 = *(__int64 ***)v13;
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = (struct _LUID)v18[6];
        v40 = v19;
        v36 = 0;
        if ( (*(_DWORD *)(*(_QWORD *)&v19 + 1840LL) & 0x8000000) != 0
          && (*(_DWORD *)(*(_QWORD *)&v19 + 2144LL) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)&v19 + 2784LL) )
        {
          v20 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(*(_QWORD *)&v19 + 2784LL))(
                         *(_QWORD *)(*(_QWORD *)&v19 + 1816LL),
                         a2,
                         v11);
          v21 = v20;
          if ( !v20 )
            goto LABEL_62;
          v22 = EngLockSurface(v20);
          v36 = 1;
        }
        else
        {
          if ( (*(_DWORD *)(*(_QWORD *)&v19 + 1840LL) & 0x8000000) != 0 )
            goto LABEL_62;
          v23 = *(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(*(_QWORD *)&v19 + 3456LL);
          if ( !v23 )
            goto LABEL_62;
          v24 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v23)(
                         *(_QWORD *)(*(_QWORD *)&v19 + 1816LL),
                         a2,
                         v11);
          v21 = v24;
          if ( !v24 )
            goto LABEL_62;
          v22 = EngLockSurface(v24);
          if ( !v22 )
            break;
          v10 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v40);
        }
        if ( !v22 )
          break;
        v25 = dhsurf;
        if ( !dhsurf )
        {
          LODWORD(v37) = 0;
          v26 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
          dhsurf = v26;
          if ( !v26 )
            goto LABEL_54;
          RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v26, a2, a3);
          v14 = (HSURF)RedirectionDeviceBitmap;
          if ( !RedirectionDeviceBitmap )
            goto LABEL_57;
          if ( !EngModifySurface(
                  (HSURF)RedirectionDeviceBitmap,
                  *((HDEV *)a1 + 4),
                  *((_DWORD *)a1 + 17),
                  3u,
                  dhsurf,
                  0LL,
                  0,
                  0LL)
            || (LODWORD(v37) = 1, pso = EngLockSurface(v14), (v28 = pso) == 0LL) )
          {
LABEL_54:
            if ( v14 )
              EngDeleteSurface(v14);
            if ( !(_DWORD)v37 )
            {
LABEL_57:
              if ( dhsurf )
                EngFreeMem(dhsurf);
            }
            EngUnlockSurface(v22);
            v34 = v21;
            goto LABEL_64;
          }
          v29 = dhsurf;
          v30 = dhsurf + 6;
          *(_QWORD *)dhsurf = a1;
          *((_QWORD *)v29 + 1) = v30;
          v29[4] = (struct DHSURF__)v18[2];
          v31 = SURFOBJ_TO_SURFACE_NOT_NULL(v28);
          *(_QWORD *)(v31 + 496) = v39;
          *(_DWORD *)(v31 + 112) |= 0x800000u;
          *(_QWORD *)(v31 + 504) = v10;
          *(_DWORD *)(v31 + 512) = a6;
          if ( (v45 & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v22) + 116) & 0x2000) != 0 )
              *(_DWORD *)(v31 + 116) |= 0x2000u;
            v45 &= ~0x10u;
          }
          EngUnlockSurface(pso);
          v25 = dhsurf;
        }
        *(_QWORD *)(*((_QWORD *)v25 + 1) + 8LL * *((unsigned int *)v18 + 4)) = v22;
        v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v22);
        v33 = v32;
        if ( v36 )
        {
          *(_DWORD *)(v32 + 112) |= 0x80000u;
          *(_DWORD *)(v32 + 116) |= 1u;
        }
        else if ( (v45 & 1) != 0 )
        {
          *(_DWORD *)(v32 + 116) |= 1u;
          *(_QWORD *)(v32 + 496) = v39;
          *(_DWORD *)(v32 + 512) = a6;
          *(_QWORD *)(v32 + 504) = v10;
        }
        else if ( (v45 & 2) != 0 )
        {
          *(_DWORD *)(v32 + 116) |= 8u;
        }
        *(_DWORD *)(v32 + 116) |= 4u;
        *(_QWORD *)(v32 + 144) = v14;
        vSetupDevBitmap((struct PDEVOBJ *)&v40, (struct SURFACE *)v32);
        *(_DWORD *)(v33 + 112) |= 0x800000u;
        GreMarkUndeletableBitmap(v22->hsurf);
        if ( !v41 || (v18 != v41 ? (v18 = (__int64 **)*v18) : (v18 = *(__int64 ***)a1), v18 == v41) )
          v18 = (__int64 **)*v18;
        a4 = v45;
        if ( !v18 )
          goto LABEL_65;
        v11 = a3;
      }
      if ( v21 )
        EngDeleteSurface(v21);
LABEL_62:
      if ( !v14 )
        return (HSURF)v9;
      v34 = v14;
LABEL_64:
      EngDeleteSurface(v34);
    }
    else
    {
LABEL_65:
      if ( a8 && (a4 & 2) == 0 )
        *a8 = v39;
      return v14;
    }
  }
  return (HSURF)v9;
}
