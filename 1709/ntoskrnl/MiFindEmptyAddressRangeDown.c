/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x14056E304
 * Callers:
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x14056E3C0 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(int a1, int a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // r15d
  int v11; // r12d
  __int64 v12; // r11
  unsigned __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // ebp
  int EmptyAddressRangeDownTree; // ecx
  unsigned __int64 v18; // rax

  v8 = a4;
  v9 = a5 + 1;
  v10 = a3;
  v11 = a2;
  v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v13 = *(_QWORD *)(v12 + 80);
  if ( (unsigned __int64)(a5 + 1) > *(_QWORD *)(v12 + 40) )
    v9 = *(_QWORD *)(v12 + 40);
  v14 = *(_DWORD *)(v12 + 76);
  v15 = (unsigned __int8)v14;
  if ( !(_BYTE)v14 )
    v15 = 1;
  while ( 1 )
  {
    EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(a1, a2, a3, a4, v13, v9, a7);
    if ( EmptyAddressRangeDownTree >= 0 )
      return (unsigned int)EmptyAddressRangeDownTree;
    if ( v9 != a5 + 1 )
    {
      if ( (a6 & 2) == 0 )
      {
        v9 = a5 + 1;
        goto LABEL_15;
      }
LABEL_12:
      v18 = (unsigned __int64)v15 << 16;
      goto LABEL_13;
    }
    if ( (a6 & 2) != 0 )
      goto LABEL_12;
    v18 = 0x10000LL;
LABEL_13:
    if ( v18 >= v13 )
      return (unsigned int)EmptyAddressRangeDownTree;
    v13 = v18;
LABEL_15:
    a4 = v8;
    a3 = v10;
    a2 = v11;
  }
}
