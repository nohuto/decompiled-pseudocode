/*
 * XREFs of GreRealizePalette @ 0x1C0108418
 * Callers:
 *     xxxRealizePalette @ 0x1C01083C0 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0096770 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02959E8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C0298FA4 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  HPALETTE v6; // rsi
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  unsigned int v8; // ebx
  struct _W32PROCESS *v10; // rcx
  __int64 v11; // rdx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v13; // rdx
  int v14; // eax
  HDC v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 matched; // rax
  HDC v22; // rbx
  _DWORD *v23; // rdx
  int v24; // eax
  HDC v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  HDC v29; // rbx
  void (__fastcall *v30)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v31; // r8
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  _BYTE v36[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v44[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v45[112]; // [rsp+E0h] [rbp-20h] BYREF
  char v46; // [rsp+168h] [rbp+68h] BYREF
  int v47; // [rsp+170h] [rbp+70h] BYREF
  int v48; // [rsp+178h] [rbp+78h] BYREF

  v1 = 0;
  v48 = 0;
  v47 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v44, a1);
  v2 = v44[0];
  if ( !v44[0] )
    goto LABEL_5;
  v33 = *(_QWORD *)(v44[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v46);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v41, (struct PDEVOBJ *)&v33);
  v40 = *(_QWORD *)(v33 + 48);
  GreAcquireSemaphore(v40);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v45, (struct PDEVOBJ *)&v33);
  v3 = v33;
  v4 = *(_QWORD *)(v33 + 1824);
  v32 = v4;
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(HPALETTE *)v5;
  if ( (*(_DWORD *)(v33 + 2188) & 0x100) != 0 )
  {
    v39 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v10 = (struct _W32PROCESS *)hForePalette;
    if ( v6 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v2 + 80) + 68LL) == 1
      && (v11 = (unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000,
          v10 = (struct _W32PROCESS *)((unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000),
          (_DWORD)v10 == (_DWORD)v11)
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v10, v11),
          v10 = hForePID,
          hForePID == CurrentProcessWin32Process) )
    {
      if ( (struct PALETTE *)v5 == ppalDefault )
        goto LABEL_69;
      v23 = *(_DWORD **)(v5 + 72);
      if ( v23 )
      {
        if ( v23 == *(_DWORD **)(v5 + 80) )
        {
          v24 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
          if ( *v23 == v24 )
            goto LABEL_69;
        }
      }
      GreAcquireHmgrSemaphore(v10, v23);
      v25 = *(HDC *)(v5 + 40);
      while ( v25 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v38, v25);
        v26 = v38[0];
        if ( !v38[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
          goto LABEL_65;
        }
        *(_DWORD *)(*(_QWORD *)(v38[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) | 0xF;
        v25 = *(HDC *)(v26 + 1400);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
        v38[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
      }
      v27 = *(_QWORD *)(v5 + 88);
      if ( v27 )
      {
        if ( v27 != *(_QWORD *)(v5 + 72) )
          Win32FreePool(v27);
        *(_QWORD *)(v5 + 88) = 0LL;
      }
      v28 = *(_DWORD **)(v5 + 72);
      if ( v28 && !*v28 )
      {
        if ( *(_DWORD **)(v5 + 80) != v28 )
          Win32FreePool(v28);
        *(_QWORD *)(v5 + 72) = 0LL;
      }
      if ( *(_QWORD *)(v5 + 72) )
        vMatchAPal(v2, v32, v5, &v47, &v48);
      else
        *(_QWORD *)(v5 + 72) = ptransMatchAPal(v28, v32, v5, 1LL, &v47, &v48);
      *(_QWORD *)(v5 + 88) = *(_QWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 72);
LABEL_65:
      v29 = *(HDC *)(v5 + 40);
      while ( v29 != v25 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v43, v29);
        _InterlockedDecrement((volatile signed __int32 *)(v43[0] + 12LL));
        v29 = *(HDC *)(v43[0] + 1400LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v43);
      }
    }
    else
    {
      if ( (struct PALETTE *)v5 == ppalDefault )
        goto LABEL_69;
      v13 = *(_DWORD **)(v5 + 80);
      if ( v13 )
      {
        v14 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
        if ( *v13 == v14 )
          goto LABEL_69;
      }
      GreAcquireHmgrSemaphore(v10, v13);
      v15 = *(HDC *)(v5 + 40);
      while ( v15 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v37, v15);
        v16 = v37[0];
        if ( !v37[0] )
        {
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
          goto LABEL_38;
        }
        *(_DWORD *)(*(_QWORD *)(v37[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v2 + 80) + 8LL) | 0xF;
        v15 = *(HDC *)(v16 + 1400);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v37);
        v37[0] = 0LL;
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v37);
      }
      v17 = *(_QWORD *)(v5 + 88);
      if ( v17 )
      {
        if ( v17 != *(_QWORD *)(v5 + 72) )
          Win32FreePool(v17);
        *(_QWORD *)(v5 + 88) = 0LL;
      }
      v18 = *(_DWORD **)(v5 + 72);
      if ( v18 && !*v18 )
      {
        if ( *(_DWORD **)(v5 + 80) != v18 )
          Win32FreePool(v18);
        *(_QWORD *)(v5 + 72) = 0LL;
      }
      if ( !*(_QWORD *)(v5 + 72) )
      {
        v35 = 0;
        v34 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v34, 1u, *(_DWORD *)(v32 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v19 = *(_DWORD *)(v34 + 28);
          if ( *(_DWORD *)(v32 + 28) < v19 )
            v19 = *(_DWORD *)(v32 + 28);
          memmove(*(void **)(v34 + 120), *(const void **)(v32 + 120), 4LL * v19);
          *(_DWORD *)(v34 + 60) = *(_DWORD *)(v32 + 60);
          *(_DWORD *)(v34 + 24) = *(_DWORD *)(v32 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v34);
          *(_QWORD *)(v5 + 72) = ptransMatchAPal(v20, v34, v5, 1LL, v36, v36);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v34);
      }
      *(_QWORD *)(v5 + 88) = *(_QWORD *)(v5 + 80);
      if ( *(_QWORD *)(v5 + 72) )
      {
        matched = ptransMatchAPal(v18, v32, v5, 0LL, &v47, &v48);
        *(_QWORD *)(v5 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 72);
      }
      else
      {
        *(_QWORD *)(v5 + 80) = 0LL;
      }
LABEL_38:
      v22 = *(HDC *)(v5 + 40);
      while ( v22 != v15 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v42, v22);
        _InterlockedDecrement((volatile signed __int32 *)(v42[0] + 12LL));
        v22 = *(HDC *)(v42[0] + 1400LL);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v42);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_69:
    SEMOBJ::vUnlock((SEMOBJ *)&v39);
    v3 = v33;
    v4 = v32;
  }
  if ( v47 )
  {
    if ( (*(_DWORD *)(v3 + 32) & 0x400) == 0 )
    {
      v30 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v3 + 1784);
      if ( v30 )
      {
        v30(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 1816LL), &v32, 0LL, 0LL, *(_DWORD *)(v4 + 28));
        v4 = v32;
      }
    }
    if ( *(_DWORD *)(v4 + 28) == 256 )
    {
      v31 = &aPalHalftone;
      do
      {
        if ( ((*v31 ^ *(_DWORD *)((char *)v31 + *(_QWORD *)(v4 + 120) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v1;
        ++v31;
      }
      while ( v1 < 0x100 );
      if ( v1 == 256 )
        *(_DWORD *)(v4 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v4 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v45);
  SEMOBJ::vUnlock((SEMOBJ *)&v40);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v41);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
LABEL_5:
  v8 = v48 | (v47 << 16);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v44);
  return v8;
}
