/*
 * XREFs of NVMeSplitIoCommand @ 0x1C0009EC4
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSplitIoCommand(__int64 a1, __int64 a2)
{
  char v2; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned __int16 v8; // ax
  unsigned int v9; // r9d
  int v10; // r9d
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v14; // [rsp+10h] [rbp+10h]

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v4 + 4245) & 2) != 0 )
  {
    if ( v2 == 40 )
      v5 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v5 = *(unsigned __int8 *)(a2 + 7);
    v6 = *(_QWORD *)(a1 + 8 * v5 + 1184);
    v14 = *(_QWORD *)(v4 + 4136);
    v7 = *(_DWORD *)(v6 + 52);
    v8 = *(_WORD *)(v6 + 92);
    if ( v8 )
      v9 = v8;
    else
      v9 = *(_DWORD *)(a1 + 48) / v7;
    ++*(_DWORD *)(v6 + 36);
    v10 = v9 - v14 % v9;
    v11 = (*(_DWORD *)(v4 + 4120) & 0xFFF) + 4095LL;
    *(_WORD *)(v4 + 4144) = v10 - 1;
    v12 = ((unsigned __int64)(v7 * v10) + v11) >> 12;
    if ( (_DWORD)v12 == 1 )
    {
      *(_QWORD *)(v4 + 4128) = 0LL;
    }
    else if ( (_DWORD)v12 == 2 )
    {
      *(_QWORD *)(v4 + 4128) = *(_QWORD *)v4;
    }
    *(_QWORD *)(v4 + 4216) = NVMeSplitIoCommandCompletion;
  }
  return 0LL;
}
