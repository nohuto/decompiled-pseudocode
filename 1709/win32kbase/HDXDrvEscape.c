/*
 * XREFs of HDXDrvEscape @ 0x1C00A6230
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C00A6070 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C003CF60 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00A635C (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00A64FC (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned int v8; // edi
  int v9; // r8d
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-E8h]
  HSEMAPHORE v15; // [rsp+28h] [rbp-E0h]
  unsigned int v16; // [rsp+30h] [rbp-D8h]
  HSEMAPHORE v17; // [rsp+68h] [rbp-A0h]
  unsigned int v18; // [rsp+70h] [rbp-98h]
  HSEMAPHORE v19; // [rsp+78h] [rbp-90h]
  unsigned int v20; // [rsp+80h] [rbp-88h]
  _BYTE v21[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+110h] [rbp+8h] BYREF

  v22 = a1;
  v4 = (unsigned int)a4;
  v6 = (unsigned int)a2;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 32) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v21,
      a2,
      a3,
      a4,
      v14,
      v15,
      v16,
      *(HSEMAPHORE *)(a1 + 48),
      4u,
      (HSEMAPHORE)ghsemSprite,
      5u,
      ghsemHT,
      6u,
      v17,
      v18,
      v19,
      v20);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 40), 11);
    PDEVOBJ::vSync(
      (PDEVOBJ *)&v22,
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2568) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2568) >> 64)),
      0LL,
      0);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2896);
    if ( v10 )
      v8 = v10(*(_QWORD *)(a1 + 2568) + 24LL, v6, v4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 40), v9);
    v11 = *(struct _ERESOURCE **)(a1 + 40);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v21);
  }
  else
  {
    return 0;
  }
  return v8;
}
