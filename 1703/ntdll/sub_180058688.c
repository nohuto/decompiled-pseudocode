/*
 * XREFs of sub_180058688 @ 0x180058688
 * Callers:
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_180102B68 @ 0x180102B68 (sub_180102B68.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_18005879C @ 0x18005879C (sub_18005879C.c)
 *     sub_180058A20 @ 0x180058A20 (sub_180058A20.c)
 *     sub_180058A44 @ 0x180058A44 (sub_180058A44.c)
 */

__int64 __fastcall sub_180058688(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // r15d
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // r10
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  int v16; // r10d
  __int64 v17; // rdx
  char v19; // [rsp+70h] [rbp+8h] BYREF

  v7 = a6;
  v9 = a2 / *(unsigned int *)(a1 + 56);
  v11 = a3;
  v12 = sub_18005879C(
          a1,
          (unsigned int)&v19,
          v9,
          (*(unsigned int *)(a1 + 56) + a2 + a3 - 1) / *(unsigned int *)(a1 + 56));
  if ( v12 >= 0 )
  {
    v13 = a2 % *(unsigned int *)(a1 + 56);
    if ( v11 )
    {
      v14 = a5;
      do
      {
        v15 = (unsigned int)(*(_DWORD *)(a1 + 56) - v13);
        if ( v11 < v15 )
          LODWORD(v15) = v11;
        if ( *(_QWORD *)(a1 + 8) )
        {
          if ( (unsigned __int8)sub_180058A20(a1, (unsigned int)v9) )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)v9);
            if ( v17 )
              sub_180058A44(a1, v17, v16, v15, a4, v14, v7, 0LL);
          }
        }
        LODWORD(v13) = 0;
        LODWORD(v9) = v9 + 1;
        v11 -= (unsigned int)v15;
      }
      while ( v11 );
    }
    v12 = 0;
  }
  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)a1);
  return (unsigned int)v12;
}
