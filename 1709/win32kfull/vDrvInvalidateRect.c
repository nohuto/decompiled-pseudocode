/*
 * XREFs of vDrvInvalidateRect @ 0x1C0298EF4
 * Callers:
 *     RemoteRedrawRectangle @ 0x1C01F3AD8 (RemoteRedrawRectangle.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0141DC8 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0141EC0 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrvInvalidateRect(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  void (__fastcall *v4)(__int64); // rax
  _BYTE v5[104]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v6; // [rsp+100h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = (_QWORD *)a1;
    if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
    {
      SEMOBJEX::SEMOBJEX(
        (SEMOBJEX *)v5,
        ghsemDynamicModeChange,
        1,
        ghsemGreLock,
        2u,
        ghsemDCVisRgn,
        3u,
        *(HSEMAPHORE *)(a1 + 48),
        4u,
        ghsemSprite,
        5u,
        ghsemHT,
        6u);
      GreAcquireSemaphore(v6[5]);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v6[5], 11LL);
      PDEVOBJ::vSync((PDEVOBJ *)&v6, (struct _SURFOBJ *)((v6[321] + 24LL) & -(__int64)(v6[321] != 0LL)), 0LL, 0);
      v3 = v6;
      v4 = (void (__fastcall *)(__int64))v6[420];
      if ( v4 )
      {
        v4(a2);
        v3 = v6;
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v3[5]);
      GreReleaseSemaphoreInternal(v6[5]);
      SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v5);
    }
  }
}
