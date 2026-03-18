/*
 * XREFs of GreRealizePalette @ 0x1C010EC68
 * Callers:
 *     xxxRealizePalette @ 0x1C010EC10 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024C078 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C009BD3C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0292098 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C0295644 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rsi
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  HDC v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 matched; // rax
  HDC v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  _DWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  HDC v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rcx
  HDC v31; // rbx
  void (__fastcall *v32)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v33; // r8
  unsigned int i; // r9d
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  _BYTE v39[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v43[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v47[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[112]; // [rsp+E0h] [rbp-20h] BYREF
  char v49; // [rsp+168h] [rbp+68h] BYREF
  int v50; // [rsp+170h] [rbp+70h] BYREF
  int v51; // [rsp+178h] [rbp+78h] BYREF

  v51 = 0;
  v50 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  v1 = v40[0];
  if ( !v40[0] )
    goto LABEL_5;
  v36 = *(_QWORD *)(v40[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v49);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v43, (struct PDEVOBJ *)&v36);
  v42 = *(_QWORD *)(v36 + 48);
  GreAcquireSemaphore(v42);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v48, (struct PDEVOBJ *)&v36);
  v2 = v36;
  v3 = *(_QWORD *)(v36 + 1824);
  v35 = v3;
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v36 + 2188) & 0x100) != 0 )
  {
    v41 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v5 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v1 + 80) + 68LL) == 1
      && (v9 = (unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000,
          (_DWORD)v9 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v9) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_70;
      v22 = *(_QWORD *)(v4 + 72);
      if ( v22 )
      {
        if ( v22 == *(_QWORD *)(v4 + 80) )
        {
          v23 = XEPALOBJ::ulTime((XEPALOBJ *)&v35);
          if ( *v24 == v23 )
            goto LABEL_70;
        }
      }
      GreAcquireHmgrSemaphore();
      v27 = *(HDC *)(v4 + 40);
      while ( v27 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v46, v27);
        v28 = v46[0];
        if ( !v46[0] )
          goto LABEL_66;
        *(_DWORD *)(*(_QWORD *)(v46[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 8LL) | 0xF;
        v27 = *(HDC *)(v28 + 1400);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v46);
        v46[0] = 0LL;
      }
      v29 = *(_QWORD *)(v4 + 88);
      if ( v29 )
      {
        if ( v29 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v29, v25, v26);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v30 = *(_DWORD **)(v4 + 72);
      if ( v30 && !*v30 )
      {
        if ( *(_DWORD **)(v4 + 80) != v30 )
          Win32FreePool(v30, v25, v26);
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      if ( *(_QWORD *)(v4 + 72) )
        vMatchAPal(v1, v35, v4, &v50, &v51);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v30, v35, v4, 1LL, &v50, &v51);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_66:
      v31 = *(HDC *)(v4 + 40);
      if ( v31 == v27 )
        goto LABEL_69;
      do
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v47, v31);
        _InterlockedDecrement((volatile signed __int32 *)(v47[0] + 12LL));
        v31 = *(HDC *)(v47[0] + 1400LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v47);
      }
      while ( v31 != v27 );
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_70;
      if ( *(_QWORD *)(v4 + 80) )
      {
        v10 = XEPALOBJ::ulTime((XEPALOBJ *)&v35);
        if ( *v11 == v10 )
          goto LABEL_70;
      }
      GreAcquireHmgrSemaphore();
      v14 = *(HDC *)(v4 + 40);
      while ( v14 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v44, v14);
        v15 = v44[0];
        if ( !v44[0] )
          goto LABEL_40;
        *(_DWORD *)(*(_QWORD *)(v44[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 8LL) | 0xF;
        v14 = *(HDC *)(v15 + 1400);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v44);
        v44[0] = 0LL;
      }
      v16 = *(_QWORD *)(v4 + 88);
      if ( v16 )
      {
        if ( v16 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v16, v12, v13);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v17 = *(_DWORD **)(v4 + 72);
      if ( v17 && !*v17 )
      {
        if ( *(_DWORD **)(v4 + 80) != v17 )
          Win32FreePool(v17, v12, v13);
        *(_QWORD *)(v4 + 72) = 0LL;
      }
      if ( !*(_QWORD *)(v4 + 72) )
      {
        v38 = 0;
        v37 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v37, 1u, *(_DWORD *)(v35 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v18 = *(_DWORD *)(v37 + 28);
          if ( *(_DWORD *)(v35 + 28) < v18 )
            v18 = *(_DWORD *)(v35 + 28);
          memmove(*(void **)(v37 + 120), *(const void **)(v35 + 120), 4LL * v18);
          *(_DWORD *)(v37 + 60) = *(_DWORD *)(v35 + 60);
          *(_DWORD *)(v37 + 24) = *(_DWORD *)(v35 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v37);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v19, v37, v4, 1LL, v39, v39);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v37);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( *(_QWORD *)(v4 + 72) )
      {
        matched = ptransMatchAPal(v17, v35, v4, 0LL, &v50, &v51);
        *(_QWORD *)(v4 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
      }
      else
      {
        *(_QWORD *)(v4 + 80) = 0LL;
      }
LABEL_40:
      v21 = *(HDC *)(v4 + 40);
      if ( v21 == v14 )
      {
LABEL_69:
        GreReleaseHmgrSemaphore();
LABEL_70:
        SEMOBJ::vUnlock((SEMOBJ *)&v41);
        v2 = v36;
        v3 = v35;
        goto LABEL_3;
      }
      do
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v45, v21);
        _InterlockedDecrement((volatile signed __int32 *)(v45[0] + 12LL));
        v21 = *(HDC *)(v45[0] + 1400LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v45);
      }
      while ( v21 != v14 );
    }
    v1 = v40[0];
    goto LABEL_69;
  }
LABEL_3:
  if ( v50 )
  {
    if ( (*(_DWORD *)(v2 + 32) & 0x400) == 0 )
    {
      v32 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1784);
      if ( v32 )
      {
        v32(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1816LL), &v35, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v35;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v33 = &aPalHalftone;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( ((*v33 ^ *(_DWORD *)((char *)v33 + *(_QWORD *)(v3 + 120) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v33;
      }
      if ( i == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v48);
  SEMOBJ::vUnlock((SEMOBJ *)&v42);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v43);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
LABEL_5:
  v7 = v51 | (v50 << 16);
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v40);
  return v7;
}
