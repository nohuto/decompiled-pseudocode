/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00F9BE0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0038770 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // esi
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  unsigned int v18; // ebx
  struct _LUID *v19; // rax
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v24[5]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+90h] [rbp-70h]
  _DWORD v26[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  v6 = *(__int64 **)&WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      v23 = v6;
      if ( !v6 )
        goto LABEL_25;
      if ( (v6[4] & 0x401) != 1 )
        goto LABEL_25;
      v7 = v6[324];
      if ( ((v7 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v7 + 160) & 0x800000) == 0 )
        goto LABEL_25;
      memset(v26, 0, sizeof(v26));
      v8 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _DWORD *))qword_1C018BE10)(
             a1,
             *(_QWORD *)(v7 + 256),
             *(unsigned int *)(v7 + 272),
             v26);
      v4 = v8;
      if ( v8 < 0 )
        break;
      v24[0] = *(__m128i *)(v6 + 309);
      v24[1] = *(__m128i *)(v6 + 311);
      v24[2] = *(__m128i *)(v6 + 313);
      v24[3] = *(__m128i *)(v6 + 315);
      v24[4] = *(__m128i *)(v6 + 317);
      v25 = *(_OWORD *)(v6 + 319);
      if ( v26[2] != _mm_srli_si128(*v24, 8).m128i_i32[1] )
      {
        v12 = 0;
        v13 = &DesktopScaleFactorCutoffs;
        do
        {
          if ( *v13 > v26[2] )
            break;
          ++v12;
          ++v13;
        }
        while ( (__int64)v13 < (__int64)dword_1C016C41C );
        v14 = &DesktopScaleFactorCutoffs;
        v15 = 0;
        do
        {
          if ( *v14 > v24[0].m128i_i32[3] )
            break;
          ++v15;
          ++v14;
        }
        while ( (__int64)v14 < (__int64)dword_1C016C41C );
        v16 = v12 - v15;
        v17 = v16;
        if ( (int)v25 > v16 )
          v17 = v25;
        if ( v17 >= SDWORD2(v25) )
        {
          v16 = DWORD2(v25);
        }
        else if ( (int)v25 > v16 )
        {
          v16 = v25;
        }
        v18 = *(_DWORD *)(v6[324] + 272);
        v19 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
        v20 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, _QWORD, __m128i *))qword_1C018BDF0)(
                v19,
                v18,
                (unsigned int)v16,
                v24);
        v4 = v20;
        if ( v20 < 0 )
          break;
        *a2 = 1;
      }
LABEL_25:
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_26;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v21[3] = v4;
    v21[4] = *(_QWORD *)(v6[324] + 256);
    v21[5] = *(unsigned int *)(v6[324] + 272);
    WdLogEvent5_WdError(v21);
    goto LABEL_25;
  }
LABEL_26:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v22);
  }
  return (unsigned int)v4;
}
