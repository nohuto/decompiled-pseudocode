/*
 * XREFs of EditionBuildManipulationInputInteropInfoMessage @ 0x1C01CE010
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     CalcManipulationInputInteropMessageSize @ 0x1C01CDDE0 (CalcManipulationInputInteropMessageSize.c)
 */

__int64 __fastcall EditionBuildManipulationInputInteropInfoMessage(_DWORD *a1, unsigned int a2, __int64 a3)
{
  int v4; // r9d
  const struct tagPOINTERINFONODE *v7; // r10
  BOOL v8; // eax
  int v9; // r9d
  __int64 v10; // r11
  int v11; // edx
  __int64 result; // rax
  int v13; // r8d
  size_t v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // ecx

  v4 = 0;
  if ( *(_DWORD *)(a3 + 40) )
  {
    v7 = *(const struct tagPOINTERINFONODE **)(a3 + 88);
    do
    {
      v8 = IsManipulationThreadNode(v7);
      v11 = v9 + 1;
      if ( !v8 )
        v11 = v9;
      v4 = v11;
    }
    while ( v10 != 1 );
  }
  result = CalcManipulationInputInteropMessageSize(v4);
  if ( a2 >= (unsigned int)result )
  {
    v14 = 0LL;
    if ( !v13 )
      goto LABEL_15;
    switch ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 56LL) )
    {
      case 1:
        v14 = 96LL;
        break;
      case 2:
LABEL_12:
        v14 = 144LL;
        break;
      case 3:
        v14 = 120LL;
        break;
      case 5:
        goto LABEL_12;
      default:
        break;
    }
LABEL_15:
    *a1 = 0;
    v15 = 0;
    for ( a1[4] = 0; v15 < *(_DWORD *)(a3 + 40); ++v15 )
    {
      v16 = *(_QWORD *)(a3 + 88) + 216LL * v15;
      result = IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v16);
      if ( (_DWORD)result )
      {
        v17 = 52LL * (unsigned int)a1[4];
        memmove(&a1[v17 + 6], (const void *)(v16 + 56), v14);
        memset(&a1[52 * a1[4] + 42], 0, 0x30uLL);
        *(_QWORD *)&a1[52 * a1[4] + 56] = 0LL;
        if ( (*(_DWORD *)(v16 + 4) & 0x80u) == 0 )
          v18 = 0;
        else
          v18 = *(_DWORD *)(v16 + 212);
        result = 208 * ((unsigned int)a1[4] + 1LL);
        *(_DWORD *)((char *)a1 + result + 8) = v18;
        *(_QWORD *)&a1[v17 + 12] = 0LL;
        ++a1[4];
      }
    }
  }
  return result;
}
