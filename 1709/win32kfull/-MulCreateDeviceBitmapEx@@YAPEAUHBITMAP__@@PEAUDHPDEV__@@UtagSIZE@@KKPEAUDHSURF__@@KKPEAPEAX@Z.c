/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C027DE00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02822F4 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02825CC (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HSURF __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        ULONG a3,
        unsigned int a4,
        DHSURF a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // r11d
  ULONG v12; // ebp
  DHSURF v14; // r13
  HSURF v15; // r12
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // r14
  __int64 v21; // rax
  HSURF v22; // rax
  HSURF v23; // rbp
  SURFOBJ *v24; // r15
  __int64 (__fastcall *v25)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **); // r10
  HSURF v26; // rax
  int v27; // r13d
  DHSURF v28; // rax
  HBITMAP RedirectionDeviceBitmap; // rax
  SURFOBJ *v30; // rdx
  DHSURF v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rbp
  HSURF v35; // rcx
  int v37; // [rsp+50h] [rbp-68h]
  void *v38; // [rsp+58h] [rbp-60h] BYREF
  DHSURF dhsurf; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h] BYREF
  _QWORD *v41; // [rsp+70h] [rbp-48h]
  SURFOBJ *pso; // [rsp+78h] [rbp-40h]
  unsigned int v45; // [rsp+D8h] [rbp+20h]

  v45 = a4;
  v8 = *((_QWORD *)a1 + 4);
  v9 = 0LL;
  v10 = 0LL;
  v11 = a4;
  v12 = a3;
  v14 = 0LL;
  v15 = 0LL;
  if ( (*(_DWORD *)(v8 + 32) & 0x4000000) == 0
    || (a4 & 2) == 0 && g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
  {
    v38 = 0LL;
    if ( (a4 & 2) != 0 && a8 )
      v38 = *a8;
    v16 = 0LL;
    v41 = 0LL;
    if ( (*(_DWORD *)(v8 + 32) & 0x4000000) == 0 )
      goto LABEL_18;
    v17 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v17[7] + 2592LL);
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 264) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v18 + 268) == *((_DWORD *)a1 + 27) )
            break;
        }
        v17 = (_QWORD *)*v17;
        if ( !v17 )
        {
          v16 = 0LL;
          goto LABEL_15;
        }
      }
      v16 = v17;
      v41 = v17;
    }
LABEL_15:
    v19 = *(_QWORD *)(v8 + 1816);
    if ( v19 )
      *(_QWORD *)(v19 + 104) = 0LL;
    v20 = v16;
    if ( !v16 )
LABEL_18:
      v20 = *(_QWORD **)a1;
    if ( v20 )
    {
      while ( 1 )
      {
        v21 = v20[6];
        v40 = v21;
        v37 = 0;
        if ( (*(_DWORD *)(v21 + 1840) & 0x8000000) != 0
          && (*(_DWORD *)(v21 + 2144) & 0x8000) != 0
          && *(_QWORD *)(v21 + 2784) )
        {
          v22 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(v21 + 2784))(*(_QWORD *)(v21 + 1816), a2, v12);
          v23 = v22;
          if ( !v22 )
            goto LABEL_64;
          v24 = EngLockSurface(v22);
          v37 = 1;
        }
        else
        {
          if ( (*(_DWORD *)(v21 + 1840) & 0x8000000) != 0 )
            goto LABEL_64;
          v25 = *(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **))(v21 + 3456);
          if ( !v25 )
            goto LABEL_64;
          v26 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))v25)(
                         *(_QWORD *)(v21 + 1816),
                         a2,
                         v12,
                         v11,
                         a5,
                         a6,
                         a7,
                         &v38);
          v23 = v26;
          if ( !v26 )
            goto LABEL_64;
          v24 = EngLockSurface(v26);
          if ( !v24 )
            break;
          v10 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v40);
          a5 = v24->dhsurf;
        }
        if ( !v24 )
          break;
        if ( !v14 )
        {
          v27 = 0;
          v28 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
          dhsurf = v28;
          if ( !v28 )
            goto LABEL_56;
          RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v28, a2, a3);
          v15 = (HSURF)RedirectionDeviceBitmap;
          if ( !RedirectionDeviceBitmap )
            goto LABEL_59;
          if ( !EngModifySurface(
                  (HSURF)RedirectionDeviceBitmap,
                  *((HDEV *)a1 + 4),
                  *((_DWORD *)a1 + 17),
                  3u,
                  dhsurf,
                  0LL,
                  0,
                  0LL)
            || (v27 = 1, pso = EngLockSurface(v15), (v30 = pso) == 0LL) )
          {
LABEL_56:
            if ( v15 )
              EngDeleteSurface(v15);
            if ( !v27 )
            {
LABEL_59:
              if ( dhsurf )
                EngFreeMem(dhsurf);
            }
            EngUnlockSurface(v24);
            v35 = v23;
            goto LABEL_66;
          }
          v14 = dhsurf;
          v31 = dhsurf + 6;
          *(_QWORD *)dhsurf = a1;
          *((_QWORD *)v14 + 1) = v31;
          v14[4] = (struct DHSURF__)v20[2];
          v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v30);
          *(_QWORD *)(v32 + 496) = v38;
          *(_DWORD *)(v32 + 112) |= 0x800000u;
          *(_QWORD *)(v32 + 504) = v10;
          *(_DWORD *)(v32 + 512) = a6;
          if ( (v45 & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v24) + 116) & 0x2000) != 0 )
              *(_DWORD *)(v32 + 116) |= 0x2000u;
            v45 &= ~0x10u;
          }
          EngUnlockSurface(pso);
        }
        *(_QWORD *)(*((_QWORD *)v14 + 1) + 8LL * *((unsigned int *)v20 + 4)) = v24;
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(v24);
        v34 = v33;
        if ( v37 )
        {
          *(_DWORD *)(v33 + 112) |= 0x80000u;
          *(_DWORD *)(v33 + 116) |= 1u;
        }
        else if ( (v45 & 1) != 0 )
        {
          *(_DWORD *)(v33 + 116) |= 1u;
          *(_QWORD *)(v33 + 496) = v38;
          *(_DWORD *)(v33 + 512) = a6;
          *(_QWORD *)(v33 + 504) = v10;
        }
        else if ( (v45 & 2) != 0 )
        {
          *(_DWORD *)(v33 + 116) |= 8u;
        }
        *(_DWORD *)(v33 + 116) |= 4u;
        *(_QWORD *)(v33 + 144) = v15;
        vSetupDevBitmap((struct PDEVOBJ *)&v40, (struct SURFACE *)v33);
        *(_DWORD *)(v34 + 112) |= 0x800000u;
        GreMarkUndeletableBitmap(v24->hsurf);
        if ( !v41 || (v20 != v41 ? (v20 = (_QWORD *)*v20) : (v20 = *(_QWORD **)a1), v20 == v41) )
          v20 = (_QWORD *)*v20;
        v11 = v45;
        if ( !v20 )
          goto LABEL_67;
        v12 = a3;
      }
      if ( v23 )
        EngDeleteSurface(v23);
LABEL_64:
      if ( !v15 )
        return (HSURF)v9;
      v35 = v15;
LABEL_66:
      EngDeleteSurface(v35);
    }
    else
    {
LABEL_67:
      if ( a8 && (v11 & 2) == 0 )
        *a8 = v38;
      return v15;
    }
  }
  return (HSURF)v9;
}
