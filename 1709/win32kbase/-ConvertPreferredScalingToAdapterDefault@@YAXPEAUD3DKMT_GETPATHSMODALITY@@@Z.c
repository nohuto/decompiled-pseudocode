/*
 * XREFs of ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5A14
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPreferredScalingToAdapterDefault(
        struct D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // rax
  int v11; // eax

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *(_DWORD *)((char *)a1 + v6 + 184) = v11 )
  {
    v6 = 264LL * i;
    if ( (*(_QWORD *)((_BYTE *)a1 + v6 + 48) & 0x40000000000LL) == 0 )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v7);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v6 + 48) & 0x10000) == 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = (char *)a1 + v6;
    if ( *(_DWORD *)((char *)a1 + v6 + 188) == 253 )
    {
      if ( (*(_QWORD *)((_BYTE *)a1 + v6 + 48) & 0x100000000000LL) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(0x100000000000LL, a2, a3, a4);
        WdLogEvent5_WdAssertion(v10);
      }
      ((void (__fastcall *)(char *, char *))qword_1C01906F0)((char *)a1 + v6 + 64, v9 + 188);
    }
    v11 = *((_DWORD *)v9 + 47);
    ++i;
    *(_QWORD *)((char *)a1 + v6 + 48) |= 0x40000000000uLL;
  }
}
