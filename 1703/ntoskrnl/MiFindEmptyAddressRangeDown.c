/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x140435DF0
 * Callers:
 *     MiSelectUserAddress @ 0x1405126A0 (MiSelectUserAddress.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x140435EB0 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(int a1, int a2, int a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r11
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned int v14; // ebp
  __int64 result; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax

  v9 = a4 + 1;
  v10 = a4 + 1;
  v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v12 = *(_DWORD *)(v11 + 76);
  if ( (unsigned __int64)(a4 + 1) > *(_QWORD *)(v11 + 40) )
    v10 = *(_QWORD *)(v11 + 40);
  v13 = *(_QWORD *)(v11 + 80);
  v14 = (unsigned __int8)v12;
  if ( !(_BYTE)v12 )
    v14 = 1;
  while ( 1 )
  {
    result = MiFindEmptyAddressRangeDownTree(a1, a2, a3, v13, v10, a6);
    v16 = result;
    if ( (int)result >= 0 )
      return result;
    if ( v10 == v9 )
    {
      if ( (a5 & 2) == 0 )
      {
        v17 = 0x10000LL;
        goto LABEL_12;
      }
LABEL_11:
      v17 = (unsigned __int64)v14 << 16;
LABEL_12:
      if ( v17 >= v13 )
        return v16;
      v13 = v17;
    }
    else
    {
      if ( (a5 & 2) != 0 )
        goto LABEL_11;
      v10 = v9;
    }
  }
}
