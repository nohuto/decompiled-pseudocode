/*
 * XREFs of MiInsertVad @ 0x1400C1CF0
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14004B4D0 (RtlpTreeDoubleRotateNodes.c)
 */

__int64 __fastcall MiInsertVad(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // r8
  char v16; // cl
  char v17; // bl
  unsigned __int64 v18; // rax
  __int64 result; // rax
  _BOOL8 v20; // r8
  _QWORD *v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10

  v4 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v5 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v6 = *(unsigned int *)(a1 + 24);
  ++*(_QWORD *)(a2 + 1592);
  v7 = v6 | v5;
  v8 = *(_QWORD *)(a2 + 1152) >> 12;
  *(_QWORD *)(a2 + 1584) = a1;
  if ( v4 <= v8 )
  {
    *(_QWORD *)(a2 + 824) += ((v4 - v7) << 12) + 4096;
    v9 = *(_QWORD *)(a2 + 824);
    if ( *(_QWORD *)(a2 + 816) < v9 )
      *(_QWORD *)(a2 + 816) = v9;
  }
  v10 = 0;
  v11 = *(_QWORD *)(a2 + 1576);
  v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( v11 )
  {
    while ( 1 )
    {
      if ( v12 > (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32))
        || v12 >= (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) )
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( !v13 )
        {
          v10 = 1;
          break;
        }
      }
      else
      {
        v13 = *(_QWORD *)v11;
        if ( !*(_QWORD *)v11 )
        {
          v10 = 0;
          break;
        }
      }
      v11 = v13;
    }
  }
  *(_QWORD *)a1 = 0LL;
  v14 = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = v11;
  if ( v11 )
  {
    v15 = (_BYTE *)(v11 + 16);
    *(_QWORD *)(v11 + 8LL * v10) = a1;
    v16 = ~(-2 * v10) & 3;
    v17 = *(_BYTE *)(v11 + 16) & 3;
    if ( v17 )
    {
LABEL_16:
      if ( v17 == v16 )
      {
        if ( (*(_BYTE *)(v14 + 16) & 3) == v17 )
        {
          if ( (*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v11 )
            __fastfail(0x1Du);
          v20 = !v10;
          v21 = (_QWORD *)(v11 + 8LL * v10);
          if ( *v21 != v14 )
            __fastfail(0x1Du);
          v22 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v22 )
          {
            if ( *(_QWORD *)(v22 + 8) == v11 )
            {
              *(_QWORD *)(v22 + 8) = v14;
            }
            else
            {
              if ( *(_QWORD *)v22 != v11 )
                __fastfail(0x1Du);
              *(_QWORD *)v22 = v14;
            }
          }
          else
          {
            if ( *(_QWORD *)(a2 + 1576) != v11 )
              __fastfail(0x1Du);
            *(_QWORD *)(a2 + 1576) = v14;
          }
          *(_QWORD *)(v14 + 16) = v22 | *(_DWORD *)(v14 + 16) & 3;
          v23 = *(_QWORD *)(v14 + 8 * v20);
          if ( v23 )
          {
            v26 = *(_QWORD *)(v23 + 16);
            if ( (v26 & 0xFFFFFFFFFFFFFFFCuLL) != v14 )
              __fastfail(0x1Du);
            *(_QWORD *)(v23 + 16) = v11 | v26 & 3;
          }
          *v21 = v23;
          *(_QWORD *)(v14 + 8 * v20) = v11;
          *(_QWORD *)(v11 + 16) = v14 | *(_DWORD *)(v11 + 16) & 3;
          *(_BYTE *)(v14 + 16) &= 0xFCu;
          *(_BYTE *)(v11 + 16) &= 0xFCu;
        }
        else
        {
          v24 = RtlpTreeDoubleRotateNodes((_QWORD *)(a2 + 1576), v11, v14, v10);
          *(_BYTE *)(v25 + 16) &= 0xFCu;
          *(_BYTE *)(v14 + 16) &= 0xFCu;
          if ( v17 == (*(_BYTE *)(v24 + 16) & 3) )
          {
            *(_BYTE *)(v25 + 16) ^= (v17 ^ *(_BYTE *)(v25 + 16) ^ 0xFE) & 3;
            *(_BYTE *)(v24 + 16) &= 0xFCu;
          }
          else
          {
            if ( v17 == ((*(_BYTE *)(v24 + 16) ^ 0xFE) & 3) )
              *(_BYTE *)(v14 + 16) = v17 | *(_BYTE *)(v14 + 16) & 0xFC;
            *(_BYTE *)(v24 + 16) &= 0xFCu;
          }
        }
      }
      else
      {
        *(_BYTE *)(v11 + 16) &= 0xFCu;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = v11;
        *v15 = v16 | *v15 & 0xFC;
        v18 = v11;
        v11 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v11 )
          break;
        v15 = (_BYTE *)(v11 + 16);
        v10 = *(_QWORD *)v11 != v18;
        v16 = ~(-2 * v10) & 3;
        v17 = *(_BYTE *)(v11 + 16) & 3;
        if ( v17 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    *(_QWORD *)(a2 + 1576) = a1;
  }
  result = *(_DWORD *)(a1 + 48) & 7;
  if ( (_DWORD)result == 5 || (_DWORD)result == 2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
    ++*(_DWORD *)(a2 + 1708);
  return result;
}
