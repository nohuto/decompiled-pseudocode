/*
 * XREFs of HDXDrvEscape @ 0x1C009C070
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C009C470 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00388C0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C009C19C (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C009C33C (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-E8h]
  HSEMAPHORE v14; // [rsp+28h] [rbp-E0h]
  unsigned int v15; // [rsp+30h] [rbp-D8h]
  HSEMAPHORE v16; // [rsp+68h] [rbp-A0h]
  unsigned int v17; // [rsp+70h] [rbp-98h]
  HSEMAPHORE v18; // [rsp+78h] [rbp-90h]
  unsigned int v19; // [rsp+80h] [rbp-88h]
  _BYTE v20[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+110h] [rbp+8h] BYREF

  v21 = a1;
  v4 = (unsigned int)a4;
  v6 = (unsigned int)a2;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 32) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v20,
      a2,
      a3,
      a4,
      v13,
      v14,
      v15,
      *(HSEMAPHORE *)(a1 + 48),
      4u,
      (HSEMAPHORE)ghsemSprite,
      5u,
      ghsemHT,
      6u,
      v16,
      v17,
      v18,
      v19);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 40), 11);
    PDEVOBJ::vSync(
      (PDEVOBJ *)&v21,
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2568) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2568) >> 64)),
      0LL,
      0);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2896);
    if ( v9 )
      v8 = v9(*(_QWORD *)(a1 + 2568) + 24LL, v6, v4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
    v10 = *(struct _ERESOURCE **)(a1 + 40);
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v11);
    }
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v20);
  }
  else
  {
    return 0;
  }
  return v8;
}
