/*
 * XREFs of MiCheckVadSequential @ 0x1400401C0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiCheckVadSequential(int *a1)
{
  unsigned __int64 v1; // r12
  unsigned int v2; // r13d
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  int v12; // ebp
  _QWORD *v13; // r11
  __int64 v14; // rax
  int v15; // edx
  __int64 result; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+68h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  v4 = *((_QWORD *)a1 + 8);
  v5 = *a1 | 0x10;
  *a1 = v5;
  v6 = *(_QWORD *)(v4 + 120);
  v7 = v1 & 0xFFFFFFFFFFFFF000uLL | 1;
  v8 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v20 = v6 & 0xFFF;
  v9 = (v6 & 0xFFFFFFFFFFFFF000uLL) + (v20 << 12);
  v19 = v6 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v9 )
  {
    if ( (*(_QWORD *)(v4 + 120) & 0xFFFLL) == 0xFFF )
      v7 = (v6 + 4096) | 0xFFF;
    else
      v7 = v8 | ((_WORD)v6 + 1) & 0xFFF;
  }
  else if ( v1 <= v9 || (v10 = (v1 - v9) >> 12, v10 >= 8) )
  {
    if ( v9 || v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) )
      *a1 = v5 & 0xFFFFFFEF;
  }
  else
  {
    v11 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    if ( v11 <= v10 )
    {
      if ( v11 )
        *a1 = v5 & 0xFFFFFFEF;
    }
    else
    {
      v11 = (v1 - v9) >> 12;
    }
    v12 = *a1;
    if ( (*a1 & 0x10) != 0 )
    {
      v13 = (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      if ( v11 )
      {
        while ( 1 )
        {
          v14 = *v13;
          if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v14) = MiReadPteShadow(v13, *v13);
          if ( (v14 & 1) == 0 || (v14 & 0x20) == 0 )
            break;
          --v13;
          if ( !--v11 )
          {
            v8 = v19;
            goto LABEL_20;
          }
        }
        *a1 = v12 & 0xFFFFFFEF;
      }
      else
      {
LABEL_20:
        v15 = v10 + 1;
        if ( (unsigned __int64)(unsigned int)(v10 + 1) + v20 > 0xFFF )
          v7 = (v6 + ((unsigned __int64)(v15 + (unsigned int)(v6 & 0xFFF) - 4095) << 12)) | 0xFFF;
        else
          v7 = v8 | ((_WORD)v15 + (_WORD)v6) & 0xFFF;
      }
    }
  }
  if ( (*a1 & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 64) & 0x2000000) != 0 )
    {
      v17 = v9 - 4096;
      if ( !v9 )
        v17 = v1;
      v18 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      if ( (((v17 >> 12) - v18) >> 8) + 1 == ((v1 >> 12) - v18) >> 8 )
        v2 = -1073741280;
    }
    *(_QWORD *)(v4 + 120) = v7;
    return v2;
  }
  else
  {
    *(_DWORD *)(v4 + 64) &= ~0x2000000u;
    result = 0LL;
    *(_QWORD *)(v4 + 120) = v7;
  }
  return result;
}
