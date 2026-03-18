/*
 * XREFs of Template_qz @ 0x1401FAC80
 * Callers:
 *     PipProcessStartPhase1 @ 0x14044C310 (PipProcessStartPhase1.c)
 *     PipProcessStartPhase2 @ 0x14044F9D8 (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PipProcessRestartPhase1 @ 0x1406AAEE0 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1406AAFA8 (PipProcessRestartPhase2.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qz(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, const wchar_t *a5)
{
  const wchar_t *v5; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v14 = a4;
  v5 = a5;
  UserData.Ptr = (ULONGLONG)&v14;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v12 = v8;
  v13 = 0;
  if ( !a5 )
    v5 = L"NULL";
  v11 = v5;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
}
