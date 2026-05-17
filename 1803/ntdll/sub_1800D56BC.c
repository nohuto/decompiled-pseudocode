/*
 * XREFs of sub_1800D56BC @ 0x1800D56BC
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800D3188 (RtlDeCommitDebugInfo_0.c)
 */

__int64 __fastcall sub_1800D56BC(_QWORD *a1)
{
  int v3; // r10d
  char *v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v8 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v3 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_180156498)(0LL, &v7, 0LL);
  if ( v3 == -1073741820 )
  {
    v4 = RtlCommitDebugInfo_0(a1, v7);
    v5 = (__int64)v4;
    if ( v4 )
    {
      v6 = v7;
      v8 = v7;
      *((_DWORD *)v4 + 1) = 0;
      *(_DWORD *)v4 = v6;
      v3 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, char *))qword_180156498)(0LL, &v8, v4);
      if ( v3 >= 0 )
        a1[18] = v5;
      else
        RtlDeCommitDebugInfo_0((__int64)a1, v5, v7);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
