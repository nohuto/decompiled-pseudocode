/*
 * XREFs of MiAdjustCachedStacks @ 0x140084230
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 */

__int64 MiAdjustCachedStacks()
{
  unsigned __int16 v0; // bp
  __int64 v1; // r14
  __int64 v2; // rbx
  PSLIST_HEADER v3; // rsi
  int v4; // r13d
  __int64 result; // rax
  int v6; // edi
  int v7; // edx
  int v8; // edi
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  int Alignment; // ecx
  int v12; // ecx
  unsigned __int16 v13; // [rsp+60h] [rbp+8h]
  __int64 v14; // [rsp+68h] [rbp+10h]

  v0 = 0;
  v13 = KeNumberNodes;
  do
  {
    v1 = 0LL;
    v2 = 25LL * v0;
    v14 = 0LL;
    do
    {
      v3 = qword_14036C1C8;
      v4 = *((_DWORD *)&qword_14036C1C8[v2 + 8].HeaderX64 + 1);
      result = (unsigned int)(v4 - *((_DWORD *)&qword_14036C1C8[v2 + 8].HeaderX64 + 2));
      if ( (_DWORD)result )
      {
        Alignment = qword_14036C1C8[v2 + 8].Alignment;
        if ( Alignment < 16 || (unsigned int)result >= 0x10 )
        {
          result = (unsigned int)(Alignment / 4);
        }
        else if ( Alignment >= 64 )
        {
          result = (unsigned int)(Alignment / 16);
        }
        else
        {
          result = (unsigned int)(Alignment / 8);
        }
        *((_DWORD *)&qword_14036C1C8[v2 + 8].HeaderX64 + 2) = v4;
        if ( !(_DWORD)result )
          result = 1LL;
        v12 = result + Alignment;
        if ( v12 > 256 )
          v12 = 256;
        LODWORD(v3[v2 + 8].Alignment) = v12;
      }
      else if ( !*((_DWORD *)&qword_14036C1C8[v2 + 8].HeaderX64 + 3) )
      {
        v6 = qword_14036C1C8[v2 + 8].Alignment;
        v7 = v6 / 20;
        if ( !(v6 / 20) )
          v7 = v6 != 0;
        v8 = v6 - v7;
        if ( v1 != 1 && v8 < 5 )
          v8 = 5;
        LODWORD(qword_14036C1C8[v2 + 8].Alignment) = v8;
        v9 = 4;
        v10 = 16;
        if ( v1 != 1 )
        {
          v9 = 0;
          v10 = 0;
        }
        do
        {
          result = LOWORD(v3[v2 + 7].Alignment);
          if ( (int)result <= v8 )
            break;
          result = MmCreateKernelStack(v10, v0, 0LL);
          if ( !result )
            break;
          result = MmDeleteKernelStack(result, v9);
        }
        while ( v4 == *((_DWORD *)&v3[v2 + 8].HeaderX64 + 1) );
        v1 = v14;
      }
      ++v1;
      *((_DWORD *)&v3[v2 + 8].HeaderX64 + 3) = 0;
      v2 += 2LL;
      v14 = v1;
    }
    while ( v1 <= 1 );
    ++v0;
  }
  while ( v0 < v13 );
  return result;
}
