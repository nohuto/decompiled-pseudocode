/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C0012910 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012B08 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003D5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003E500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00EFAD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  _QWORD *v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *ThreadWin32Thread; // rax

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v5;
  v6 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v7 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
  v8 = (_QWORD *)*v6;
  v9 = (_QWORD *)*v7;
  if ( *(_QWORD *)this != -48LL )
  {
    KeEnterCriticalRegion();
    v10 = (_QWORD *)*v6;
    v11 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v11 != v6 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    v6[1] = v6;
    *v6 = v6;
    KeLeaveCriticalRegion();
  }
  v12 = (_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( *(_QWORD *)a2 != -48LL )
  {
    KeEnterCriticalRegion();
    v13 = *v12;
    v14 = (_QWORD *)v12[1];
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v12[1] = v12;
    *v12 = v12;
    KeLeaveCriticalRegion();
  }
  v15 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v15;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    if ( v8 != v6 )
      PushThreadGuardedObject(*(_QWORD *)this + 48LL, *(_QWORD *)this, CleanUpRegion);
    if ( v9 != v7 )
      PushThreadGuardedObject(*(_QWORD *)a2 + 48LL, *(_QWORD *)a2, CleanUpRegion);
  }
}
