/*
 * XREFs of PsQuerySystemDllInfo @ 0x14053D978
 * Callers:
 *     PspWow64PickBestNtdll @ 0x14012CFFC (PspWow64PickBestNtdll.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     PsWow64IsMachineSupported @ 0x14053D92C (PsWow64IsMachineSupported.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
 *     PspInitializeSystemDlls @ 0x14085020C (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x140857D2C (MmInitSystemDll.c)
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
