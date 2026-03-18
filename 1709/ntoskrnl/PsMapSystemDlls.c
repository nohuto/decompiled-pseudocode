/*
 * XREFs of PsMapSystemDlls @ 0x14045FCCC
 * Callers:
 *     MiMapProcessExecutable @ 0x14045EF60 (MiMapProcessExecutable.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsWow64GetProcessNtdllType @ 0x14045FB98 (PsWow64GetProcessNtdllType.c)
 *     PspMapSystemDll @ 0x14045FDEC (PspMapSystemDll.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // rdx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v10; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0, (__int64)&v10);
  }
  v6 = 0;
  v7 = (__int64 *)&PspSystemDlls;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7
      && (v6 <= 0
       || *(_WORD *)(v8 + 18)
       && a1[1].ActiveProcessors.Bitmap[7]
       && v6 == (unsigned int)PsWow64GetProcessNtdllType((__int64)a1)) )
    {
      v4 = PspMapSystemDll(a1, v8, a2, 0LL);
      if ( v4 < 0 )
        break;
    }
    ++v6;
    ++v7;
    if ( v6 >= 6 )
      goto LABEL_9;
  }
  if ( v6 > 0 )
    v4 = -1073741405;
LABEL_9:
  if ( v5 )
    KiUnstackDetachProcess(&v10, 0LL);
  return (unsigned int)v4;
}
