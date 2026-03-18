/*
 * XREFs of ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F49A0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPreferredScalingToAdapterDefault(struct _D3DKMT_GETPATHSMODALITY *a1, __int64 a2)
{
  unsigned int i; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // r14
  __int64 v8; // rax
  int v9; // eax

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); *(_DWORD *)((char *)a1 + v4 + 184) = v9 )
  {
    v4 = 264LL * i;
    if ( (*(_QWORD *)((_BYTE *)a1 + v4 + 48) & 0x40000000000LL) == 0 )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v5);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v4 + 48) & 0x10000) == 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = (char *)a1 + v4;
    if ( *(_DWORD *)((char *)a1 + v4 + 188) == 253 )
    {
      if ( (*(_QWORD *)((_BYTE *)a1 + v4 + 48) & 0x100000000000LL) == 0 )
      {
        v8 = WdLogNewEntry5_WdAssertion(0x100000000000LL, a2);
        WdLogEvent5_WdAssertion(v8);
      }
      ((void (__fastcall *)(char *, char *))qword_1C018BA88)((char *)a1 + v4 + 64, v7 + 188);
    }
    v9 = *((_DWORD *)v7 + 47);
    ++i;
    *(_QWORD *)((char *)a1 + v4 + 48) |= 0x40000000000uLL;
  }
}
