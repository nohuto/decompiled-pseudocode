/*
 * XREFs of RtlReportSilentProcessExit @ 0x180048200
 * Callers:
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 * Callees:
 *     sub_180048A50 @ 0x180048A50 (sub_180048A50.c)
 *     sub_180048C9C @ 0x180048C9C (sub_180048C9C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 */

__int64 __fastcall RtlReportSilentProcessExit(__int64 a1, int a2)
{
  int v5; // ebx
  int UniqueProcess; // edi
  int UniqueThread; // esi
  int v8; // eax
  int v9; // ebx
  unsigned int NtGlobalFlag; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[176]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v17[352]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(v17, 0, 0x578uLL);
  memset(v16, 0, 0x578uLL);
  v15 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( a1 == -1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0LL;
  v5 = ZwDuplicateObject(-1LL, a1, -1LL, &v15, 4096, 0, 0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  v8 = sub_180048C9C(v15);
  v9 = v8;
  if ( !UniqueProcess || !UniqueThread || !v8 )
    return 3221225485LL;
  if ( UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = sub_180048A50(v15);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    memset(v17, 0, 0x578uLL);
    v17[0] = 91751760;
    v17[10] = 805306368;
    v17[12] = UniqueThread;
    v17[13] = UniqueProcess;
    v17[14] = v9;
    v17[15] = a2;
    memset(v16, 0, 0x578uLL);
    LODWORD(v16[0]) = 91751760;
    v11 = sub_1800D7658(v17, v16);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v13 = v16[6];
        while ( 1 )
        {
          LOBYTE(v12) = 1;
          v14 = ZwWaitForSingleObject(v13, v12, 0LL);
          v5 = v14;
          if ( v14 < 0 || v14 == 258 )
            break;
          if ( v14 != 192 && v14 != 257 )
          {
            v5 = 0;
            break;
          }
        }
        if ( v13 )
          ZwClose(v13);
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_13:
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)v5;
}
