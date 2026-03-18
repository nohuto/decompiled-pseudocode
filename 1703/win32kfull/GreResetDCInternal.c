/*
 * XREFs of GreResetDCInternal @ 0x1C01367DC
 * Callers:
 *     NtGdiResetDC @ 0x1C01366B0 (NtGdiResetDC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  int *v6; // r13
  int v7; // r14d
  HDC v8; // r15
  unsigned int v9; // edi
  DC *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r13d
  BOOL v14; // esi
  HDC v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  DC *v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-60h]
  __int64 v25; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-20h] BYREF
  DC *v27[2]; // [rsp+70h] [rbp-10h] BYREF

  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v10 = v27[0];
  if ( !v27[0] )
  {
    EngSetLastError(6u);
LABEL_34:
    v14 = v25;
    goto LABEL_18;
  }
  v7 = *((_DWORD *)v27[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v27[0], 0);
    v10 = v27[0];
  }
  v11 = *((_QWORD *)v10 + 6);
  v12 = *(_QWORD *)(v11 + 1728);
  *(_QWORD *)(v11 + 1728) = 0LL;
  v26[0] = v12;
  if ( (*((_DWORD *)v27[0] + 9) & 0x100) != 0 || *((_DWORD *)v27[0] + 8) == 1 || (*(_DWORD *)(v11 + 32) & 0x80u) == 0 )
    goto LABEL_34;
  v13 = *((_DWORD *)v27[0] + 30);
  v14 = *((_QWORD *)v27[0] + 64) != 0LL;
  LODWORD(v25) = v14;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v27, 0) )
  {
    if ( *(_DWORD *)(v11 + 8) == 1 )
    {
      v15 = (HDC)hdcOpenDCW(&word_1C02E2588, a2, 0LL, 0LL, *(_QWORD *)(v11 + 2576), v26[0], a4, a5, 0);
      v8 = v15;
      if ( v15 )
      {
        *(_QWORD *)(v11 + 2576) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)v26, v15);
        v16 = (_QWORD *)v26[0];
        if ( v26[0] )
        {
          if ( v13 > 0 )
            *(_DWORD *)(v26[0] + 120LL) = *(_DWORD *)(v26[0] + 116LL);
          v16[313] = *((_QWORD *)v27[0] + 313);
          *((_QWORD *)v27[0] + 313) = 0LL;
          v17 = *((_QWORD *)v27[0] + 314);
          v16[314] = v17;
          *((_QWORD *)v27[0] + 314) = 0LL;
          v18 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 2760);
          if ( v18 )
            v18(*(_QWORD *)(v11 + 1816), *(_QWORD *)(v16[6] + 1816LL));
          GreAcquireHmgrSemaphore(v17, v16);
          LOBYTE(v24) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v24);
          GreReleaseHmgrSemaphore();
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
        }
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v26);
        v14 = v25;
      }
    }
  }
  v6 = a3;
LABEL_18:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v27, a1);
    v19 = v27[0];
    if ( v27[0] )
    {
      v25 = *((_QWORD *)v27[0] + 6);
      if ( !v14 )
      {
        *v6 = 0;
LABEL_22:
        if ( v9 && v7 )
          DC::bMakeInfoDC(v19, 1);
        goto LABEL_25;
      }
      if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v25, 0LL) )
      {
        *((_QWORD *)v19 + 64) = *(_QWORD *)(v25 + 2568);
        DC::vInheritSurfaceDpiScale(v19);
        v21 = v25;
        v22 = *(_QWORD *)(v25 + 2568);
        v23 = (*(_DWORD *)(v22 + 112) & 0x2000000) == 0;
        *v6 = *(_DWORD *)(v22 + 112) & 0x2000000;
        if ( !v23 )
        {
          *((_QWORD *)v19 + 66) = *(_QWORD *)(*(_QWORD *)(v21 + 2568) + 56LL);
          DC::bSetDefaultRegion(v19);
          v21 = v25;
        }
        if ( *(_QWORD *)(v21 + 2984) )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v21 + 2984))(
            (*(_QWORD *)(v21 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v21 + 2568) != 0LL),
            0LL,
            0LL);
        else
          v9 = 0;
        goto LABEL_22;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v9 = 0;
LABEL_25:
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  }
  return v9;
}
