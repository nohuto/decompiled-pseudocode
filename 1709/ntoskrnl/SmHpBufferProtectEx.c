/*
 * XREFs of SmHpBufferProtectEx @ 0x140271E6C
 * Callers:
 *     SmHpChunkHeapProtect @ 0x140006D94 (SmHpChunkHeapProtect.c)
 *     SmHpBufferUpdateFullness @ 0x140271F94 (SmHpBufferUpdateFullness.c)
 *     SmHpChunkUnprotect @ 0x140272200 (SmHpChunkUnprotect.c)
 *     SmHpUnprotectListNeighbors @ 0x14027223C (SmHpUnprotectListNeighbors.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14025D7A4 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140275EBC (SmPrepareForFatalHeapCorruption.c)
 */

__int64 __fastcall SmHpBufferProtectEx(ULONG_PTR a1, __int64 a2, char a3, unsigned int a4)
{
  int v4; // r15d
  ULONG_PTR v6; // r12
  unsigned int v8; // edi
  int v9; // eax
  const unsigned __int8 *v10; // r14
  int v11; // edx
  int v12; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  BugCheckParameter4 = a1;
  v4 = *(_DWORD *)(a2 + 12);
  v6 = a4;
  v8 = 1;
  if ( v4 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = *(const unsigned __int8 **)a2;
      MetroHash64::Hash(*(const unsigned __int8 **)a2, 0x1000uLL, (unsigned __int8 *const)&BugCheckParameter4);
      v12 = BugCheckParameter4;
      if ( !(_DWORD)BugCheckParameter4 )
        v12 = 1;
      if ( v12 == v4 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx((unsigned __int64)v10, (unsigned __int64)v10, 4096LL, 4u);
          *(_DWORD *)(a2 + 12) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption((_DWORD)v10, v11, v4, v12, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v6, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*(_QWORD *)a2, *(_QWORD *)a2, 4096LL, 2u);
    MetroHash64::Hash(*(const unsigned __int8 **)a2, 0x1000uLL, (unsigned __int8 *const)&BugCheckParameter4);
    v9 = BugCheckParameter4;
    *(_DWORD *)(a2 + 12) = BugCheckParameter4;
    if ( !v9 )
      *(_DWORD *)(a2 + 12) = 1;
  }
  return v8;
}
