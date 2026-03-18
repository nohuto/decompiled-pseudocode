/*
 * XREFs of ExFastReplenishHandleTableEntry @ 0x14012B3EC
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExFastReplenishHandleTableEntry(volatile signed __int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r10
  unsigned int v7; // r8d
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int128 v10; // rt0
  unsigned __int8 v11; // tt
  __int128 v13; // [rsp+0h] [rbp-18h]

  v4 = a3;
  v5 = *a2;
  v6 = v5 >> 20;
  while ( 1 )
  {
    v7 = 0;
    v8 = v4 + (unsigned __int16)(v5 >> 1);
    v13 = *(_OWORD *)a2;
    if ( v8 > 0xFFFF )
    {
      v7 = v8 - 0xFFFF;
      LODWORD(v8) = 0xFFFF;
    }
    *(_QWORD *)&v13 = ((unsigned int)v13 ^ (2 * (_DWORD)v8)) & 0x1FFFE ^ (unsigned __int64)v13;
    v10 = *(_OWORD *)a2;
    v11 = _InterlockedCompareExchange128(a1, *((signed __int64 *)&v13 + 1), v13, (signed __int64 *)&v10);
    v9 = v10;
    *(_OWORD *)a2 = v10;
    if ( v11 )
      break;
    v5 = v9;
    if ( v9 >> 20 != v6 || (v9 & 1) == 0 )
    {
      v7 = v4;
      *(_OWORD *)a2 = v13;
      return v7;
    }
  }
  return v7;
}
