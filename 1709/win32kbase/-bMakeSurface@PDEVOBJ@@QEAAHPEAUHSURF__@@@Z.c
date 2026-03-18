/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EEF64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C003D1EC (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C006E5E0 (HmgShareLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, struct HOBJ__ *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  struct HOBJ__ *v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ebp

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2568LL) )
    return 1LL;
  if ( a2
    || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2728)) != 0LL
    && (v4 = (struct HOBJ__ *)v6(*(_QWORD *)(v2 + 1816))) != 0LL )
  {
    v7 = HmgShareLockCheck(v4);
    v8 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 112) |= 0x80000000;
      HmgIncrementShareReferenceCount((struct OBJECT *)v7);
      *(_QWORD *)(*(_QWORD *)this + 2568LL) = v8;
      if ( !*(_DWORD *)(v8 + 96) )
        *(_DWORD *)(v8 + 96) = *(_DWORD *)(*(_QWORD *)this + 2124LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2568LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1824LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1840LL) & 0x8000000) != 0 )
        *(_DWORD *)(v8 + 112) |= 0x80000u;
      LOBYTE(v9) = 8;
      HmgShareLock(**(_QWORD **)(*(_QWORD *)this + 1824LL), v9);
      if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 1) != 0 && (int)IsGreMovePointerSupported() >= 0 )
        GreMovePointer(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      PDEVOBJ::vFilterDriverHooks(this);
      v10 = bSpEnableSprites(v2);
      vEnableSynchronize(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1792LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1792LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2568LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2568LL) != 0LL),
          4LL);
      v3 = v10;
      HmgDecrementShareReferenceCountEx((struct OBJECT *)v8);
    }
  }
  return v3;
}
