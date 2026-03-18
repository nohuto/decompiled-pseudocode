/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30
 * Callers:
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00EA884 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0038B5C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // ebp

  v2 = *(_QWORD *)this;
  v3 = 0;
  LODWORD(v4) = (_DWORD)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2568LL) )
    return 1LL;
  if ( a2 || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2728)) != 0LL && (v4 = v6(*(_QWORD *)(v2 + 1816))) != 0 )
  {
    v7 = HmgShareLockCheck(v4, 5);
    v8 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 112) |= 0x80000000;
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v7);
      *(_QWORD *)(*(_QWORD *)this + 2568LL) = v8;
      if ( !*(_DWORD *)(v8 + 96) )
        *(_DWORD *)(v8 + 96) = *(_DWORD *)(*(_QWORD *)this + 2124LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2568LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1824LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1840LL) & 0x8000000) != 0 )
        *(_DWORD *)(v8 + 112) |= 0x80000u;
      HmgShareLock(**(_QWORD **)(*(_QWORD *)this + 1824LL), 8);
      if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 1) != 0 && (int)IsGreMovePointerSupported() >= 0 )
        GreMovePointer(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      PDEVOBJ::vFilterDriverHooks(this);
      v9 = bSpEnableSprites(v2);
      vEnableSynchronize(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1792LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1792LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2568LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2568LL) != 0LL),
          4LL);
      v3 = v9;
      HmgDecrementShareReferenceCount(v8);
    }
  }
  return v3;
}
