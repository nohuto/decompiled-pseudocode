/*
 * XREFs of ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C01998C0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C014DC80 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C019A650 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0199B6C (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C019A830 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCompleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1, char a2, bool a3)
{
  __int64 v4; // rcx
  unsigned int v7; // edx
  __int64 v8; // rcx

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 6);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2464LL) + 520LL)
                                                          + 8LL)
                                              + 480LL))(
        v4,
        0LL);
    v7 = *((_DWORD *)a1 + 4);
    if ( v7 != 6 )
    {
      v8 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_1C007B0A4, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v8 + 3) = *((_QWORD *)a1 + 15);
      *((_DWORD *)&g_TdrHistory + 2 * v8 + 8) = *((_DWORD *)a1 + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v8 + 40) = *(UUID *)((char *)a1 + 56);
      *((_QWORD *)&g_TdrHistory + v8 + 7) = *((_QWORD *)a1 + 9);
      v7 = *((_DWORD *)a1 + 4);
    }
    DxgkLogCodePointPacket(
      0x18u,
      v7,
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 200LL),
      *((_DWORD *)a1 + 20),
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 268LL));
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)a1);
    if ( a2 )
    {
      *((_DWORD *)a1 + 29) &= ~1u;
      TdrUpdateDbgReport(a1, 0);
    }
    TdrDereferenceRecoveryContext(a1, a3);
  }
}
