/*
 * XREFs of PsQuerySystemDllInfo @ 0x14055FF3C
 * Callers:
 *     PspWow64PickBestNtdll @ 0x1400B9E4C (PspWow64PickBestNtdll.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     PsWow64IsMachineSupported @ 0x14055FEF0 (PsWow64IsMachineSupported.c)
 *     DbgkSendSystemDllMessages @ 0x14070E1AC (DbgkSendSystemDllMessages.c)
 *     PspInitializeSystemDlls @ 0x1408C1410 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x1408C9E98 (MmInitSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  __int64 v1; // rax

  v1 = (__int64)*(&PspSystemDlls + a1);
  if ( v1 && *(_QWORD *)(v1 + 40) )
    return v1 + 16;
  else
    return 0LL;
}
