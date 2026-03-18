/*
 * XREFs of MiSetVadBits @ 0x1406E4C98
 * Callers:
 *     MiUpdateVadBits @ 0x14045EA90 (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // eax
  BOOL v11; // r14d

  v1 = 0;
  v2 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v3 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
  v4 = 0LL;
  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  do
  {
    v6 = v4 + v5 + 48;
    v7 = 8 * (*(_DWORD *)(v6 + 8) - qword_140388950);
    if ( v3 >= v7 )
    {
      v8 = v7 + *(_DWORD *)v6;
      if ( v2 < v8 )
      {
        v9 = 8 * (*(_DWORD *)(v6 + 8) - qword_140388950);
        v10 = v3;
        if ( v2 >= v7 )
          v9 = v2;
        v11 = v2 < v7;
        if ( v3 >= v8 )
        {
          v10 = v8 - 1;
          v11 = 1;
        }
        RtlSetBits((PRTL_BITMAP)v6, v9 - v7, v10 - v9 + 1);
        if ( !v11 )
          break;
      }
    }
    ++v1;
    v4 += 40LL;
  }
  while ( v1 < 2 );
}
