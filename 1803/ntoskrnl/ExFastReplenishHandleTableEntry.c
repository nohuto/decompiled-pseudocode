/*
 * XREFs of ExFastReplenishHandleTableEntry @ 0x1400CAFEC
 * Callers:
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExFastReplenishHandleTableEntry(volatile signed __int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int128 v11; // rt0
  unsigned __int8 v12; // tt
  __int128 v14; // [rsp+0h] [rbp-18h]

  v4 = a3;
  v5 = *a2;
  v7 = v5 >> 20;
  while ( 1 )
  {
    v8 = 0;
    v9 = v4 + (unsigned __int16)(v5 >> 1);
    v14 = *(_OWORD *)a2;
    if ( v9 > 0xFFFF )
    {
      v8 = v9 - 0xFFFF;
      LODWORD(v9) = 0xFFFF;
    }
    *(_QWORD *)&v14 = ((unsigned int)v14 ^ (2 * (_DWORD)v9)) & 0x1FFFE ^ (unsigned __int64)v14;
    v11 = *(_OWORD *)a2;
    v12 = _InterlockedCompareExchange128(a1, *((signed __int64 *)&v14 + 1), v14, (signed __int64 *)&v11);
    v10 = v11;
    *(_OWORD *)a2 = v11;
    if ( v12 )
      break;
    v5 = v10;
    if ( v10 >> 20 != v7 || (v10 & 1) == 0 )
    {
      v8 = v4;
      *(_OWORD *)a2 = v14;
      return v8;
    }
  }
  return v8;
}
