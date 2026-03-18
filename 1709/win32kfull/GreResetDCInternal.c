/*
 * XREFs of GreResetDCInternal @ 0x1C013CE80
 * Callers:
 *     NtGdiResetDC @ 0x1C013CD50 (NtGdiResetDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r13
  int v7; // r15d
  HDC v8; // r12
  unsigned int v9; // edi
  DC *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  DC *v13; // rcx
  int v14; // r13d
  BOOL v15; // r14d
  int v16; // esi
  HDC v17; // rax
  _QWORD *v18; // rdx
  void (__fastcall *v19)(_QWORD, _QWORD); // rax
  DC *v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // zf
  int v25; // [rsp+20h] [rbp-58h]
  _QWORD v26[2]; // [rsp+50h] [rbp-28h] BYREF
  DC *v27[3]; // [rsp+60h] [rbp-18h] BYREF

  v5 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v10 = v27[0];
  if ( !v27[0] )
  {
    EngSetLastError(6u);
    v13 = v27[0];
LABEL_36:
    v16 = v26[0];
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
  v13 = v27[0];
  v26[0] = v12;
  if ( (*((_DWORD *)v27[0] + 9) & 0x100) != 0 || *((_DWORD *)v27[0] + 8) == 1 || (*(_DWORD *)(v11 + 32) & 0x80u) == 0 )
    goto LABEL_36;
  v14 = *((_DWORD *)v27[0] + 30);
  v15 = *((_QWORD *)v27[0] + 64) != 0LL;
  v16 = v15;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v27, 0) )
  {
    if ( *(_DWORD *)(v11 + 8) == 1 )
    {
      v17 = (HDC)hdcOpenDCW(&word_1C02D9FB8, a2, 0LL, 0LL, *(_QWORD *)(v11 + 2576), v26[0], a4, a5, 0);
      v8 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v11 + 2576) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)v26, v17);
        v18 = (_QWORD *)v26[0];
        if ( v26[0] )
        {
          if ( v14 > 0 )
            *(_DWORD *)(v26[0] + 120LL) = *(_DWORD *)(v26[0] + 116LL);
          v18[313] = *((_QWORD *)v27[0] + 313);
          *((_QWORD *)v27[0] + 313) = 0LL;
          v18[314] = *((_QWORD *)v27[0] + 314);
          *((_QWORD *)v27[0] + 314) = 0LL;
          v19 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 2760);
          if ( v19 )
            v19(*(_QWORD *)(v11 + 1816), *(_QWORD *)(v18[6] + 1816LL));
          GreAcquireHmgrSemaphore();
          LOBYTE(v25) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v25);
          GreReleaseHmgrSemaphore();
          v9 = 1;
          XDCOBJ::vUnlockFast((XDCOBJ *)v26);
        }
        else
        {
          EngSetLastError(6u);
        }
        v16 = v15;
      }
    }
  }
  v13 = v27[0];
  v5 = a1;
  v6 = a3;
LABEL_18:
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v27);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v27, v5);
    v20 = v27[0];
    if ( !v27[0] )
    {
      EngSetLastError(6u);
      return 0;
    }
    v26[0] = *((_QWORD *)v27[0] + 6);
    if ( v16 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)v26, 0LL) )
      {
        v9 = 0;
LABEL_27:
        XDCOBJ::vUnlockFast((XDCOBJ *)v27);
        return v9;
      }
      *((_QWORD *)v20 + 64) = *(_QWORD *)(v26[0] + 2568LL);
      DC::vInheritSurfaceDpiScale(v20);
      v22 = v26[0];
      v23 = *(_QWORD *)(v26[0] + 2568LL);
      v24 = (*(_DWORD *)(v23 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v23 + 112) & 0x2000000;
      if ( !v24 )
      {
        *((_QWORD *)v20 + 66) = *(_QWORD *)(*(_QWORD *)(v22 + 2568) + 56LL);
        DC::bSetDefaultRegion(v20);
        v22 = v26[0];
      }
      if ( *(_QWORD *)(v22 + 2984) )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v22 + 2984))(
          (*(_QWORD *)(v22 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v22 + 2568) != 0LL),
          0LL,
          0LL);
      else
        v9 = 0;
    }
    else
    {
      *v6 = 0;
    }
    if ( v9 && v7 )
      DC::bMakeInfoDC(v20, 1);
    goto LABEL_27;
  }
  return v9;
}
