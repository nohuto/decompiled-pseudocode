/*
 * XREFs of SmHpBufferProtectEx @ 0x140093C88
 * Callers:
 *     SmHpChunkUnprotect @ 0x140093C4C (SmHpChunkUnprotect.c)
 *     SmHpBufferUpdateFullness @ 0x140093E04 (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x140096010 (SmHpUnprotectListNeighbors.c)
 *     SmHpChunkHeapProtect @ 0x140099D4C (SmHpChunkHeapProtect.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1400AE6F0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1402A8F98 (SmPrepareForFatalHeapCorruption.c)
 */

__int64 __fastcall SmHpBufferProtectEx(ULONG_PTR a1, __int64 a2, char a3, unsigned __int64 a4)
{
  int v4; // r15d
  ULONG_PTR v5; // r12
  unsigned int v8; // ebx
  const unsigned __int8 *v10; // r14
  int v11; // edx
  int v12; // r9d
  unsigned __int64 v13; // r9
  int v14; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  BugCheckParameter4 = a1;
  v4 = *(_DWORD *)(a2 + 12);
  v5 = (unsigned int)a4;
  v8 = 1;
  if ( v4 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = *(const unsigned __int8 **)a2;
      MetroHash64::Hash(*(const unsigned __int8 **)a2, 0x1000uLL, (unsigned __int8 *const)&BugCheckParameter4, a4);
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
          KeBugCheckEx(0x1C7u, v5, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*(_QWORD *)a2, *(_QWORD *)a2, 4096LL, 2u);
    MetroHash64::Hash(*(const unsigned __int8 **)a2, 0x1000uLL, (unsigned __int8 *const)&BugCheckParameter4, v13);
    v14 = BugCheckParameter4;
    *(_DWORD *)(a2 + 12) = BugCheckParameter4;
    if ( !v14 )
      *(_DWORD *)(a2 + 12) = 1;
  }
  return v8;
}
