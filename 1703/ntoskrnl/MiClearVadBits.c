/*
 * XREFs of MiClearVadBits @ 0x1400DB1D0
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 CurrentThread; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  _DWORD *v9; // r14
  int v10; // ebp
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rsi
  __int64 v16; // rcx
  _BYTE *v17; // r12
  unsigned int v18; // edx
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // ecx

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v6 = a1 >> 16;
  v8 = a2 >> 16;
  v9 = *(_DWORD **)(*(_QWORD *)(CurrentThread + 184) + 1296LL);
  if ( a3 )
  {
    CurrentThread = *(unsigned int *)(a3 + 28);
    if ( ((a1 ^ ((CurrentThread | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      LODWORD(v6) = v6 + 1;
  }
  if ( a4 )
  {
    CurrentThread = *(unsigned int *)(a4 + 24);
    if ( ((a2 ^ ((CurrentThread | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      LOBYTE(CurrentThread) = BYTE2(a2) - 1;
      if ( !(_DWORD)v8 )
        return CurrentThread;
      LODWORD(v8) = v8 - 1;
    }
  }
  v10 = v9[14] - qword_14036C5C8;
  if ( !(_DWORD)v6 )
  {
    if ( v10 )
      goto LABEL_8;
    LODWORD(v6) = 1;
  }
  if ( (unsigned int)v6 > (unsigned int)v8 )
    return CurrentThread;
LABEL_8:
  v11 = 8 * v10;
  if ( (unsigned int)v8 >= v11 )
  {
    v12 = v11 + v9[12];
    if ( (unsigned int)v6 < v12 )
    {
      if ( (unsigned int)v6 < v11 )
        LODWORD(v6) = v11;
      if ( (unsigned int)v8 >= v12 )
        LODWORD(v8) = v12 - 1;
      v13 = v8 - v6;
      v14 = v6 - v11;
      v15 = (unsigned int)(v13 + 1);
      if ( (_DWORD)v15 )
      {
        v16 = v14 & 7;
        v17 = (_BYTE *)(*((_QWORD *)v9 + 7) + ((unsigned __int64)v14 >> 3));
        if ( (unsigned int)(v16 + v15) > 8 )
        {
          if ( (v14 & 7) != 0 )
          {
            LOBYTE(CurrentThread) = byte_14029EB30[v16];
            v15 = (unsigned int)(v16 + v15 - 8);
            *v17++ &= CurrentThread;
          }
          if ( (unsigned int)v15 > 8 )
          {
            LOBYTE(CurrentThread) = (unsigned __int8)memset(v17, 0, (unsigned __int64)(unsigned int)v15 >> 3);
            v17 += (unsigned __int64)(unsigned int)v15 >> 3;
            v15 &= 7u;
          }
          if ( (_DWORD)v15 )
          {
            LOBYTE(CurrentThread) = byte_14029EB40[v15];
            *v17 &= CurrentThread;
          }
        }
        else
        {
          LOBYTE(CurrentThread) = ~(byte_14029EB30[v15] << v16);
          *v17 &= CurrentThread;
        }
        if ( v9[16] > v14 )
          v9[16] = v14;
        v18 = 0;
        if ( a3 )
        {
          CurrentThread = *(unsigned int *)(a3 + 28);
          v19 = ((((CurrentThread | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 0xFFFF) >> 16;
          if ( (unsigned int)v19 <= v11 )
          {
            v18 = 0;
          }
          else
          {
            v18 = v19 - v11;
            if ( v18 )
            {
LABEL_22:
              if ( a4 )
              {
                v20 = (*(_DWORD *)(a4 + 24) >> 4) | (*(unsigned __int8 *)(a4 + 32) << 28);
                LODWORD(CurrentThread) = v9[12] + v11;
                if ( v20 > (unsigned int)CurrentThread )
                  v21 = v9[12];
                else
                  v21 = v20 - v11;
              }
              else
              {
                v21 = v9[12];
              }
              if ( v18 < v9[18] && v21 - v18 >= v9[17] )
                v9[18] = v18;
              return CurrentThread;
            }
          }
        }
        if ( !v11 )
          v18 = 1;
        goto LABEL_22;
      }
    }
  }
  return CurrentThread;
}
