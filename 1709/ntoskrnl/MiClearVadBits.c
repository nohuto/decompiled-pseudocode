/*
 * XREFs of MiClearVadBits @ 0x1400588B0
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

char __fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 CurrentThread; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // r9
  _DWORD *v9; // r14
  int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // r15
  __int64 v17; // rcx
  _BYTE *v18; // r12
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edx

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
  v10 = v9[14] - qword_140388950;
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
      v13 = v12 - 1;
      if ( (unsigned int)v8 < v12 )
        v13 = v8;
      v14 = v13 - v6;
      v15 = v6 - v11;
      v16 = (unsigned int)(v14 + 1);
      if ( (_DWORD)v16 )
      {
        v17 = v15 & 7;
        v18 = (_BYTE *)(*((_QWORD *)v9 + 7) + ((unsigned __int64)v15 >> 3));
        if ( (unsigned int)(v17 + v16) > 8 )
        {
          if ( (v15 & 7) != 0 )
          {
            LOBYTE(CurrentThread) = byte_1402C7730[v17];
            v16 = (unsigned int)(v17 + v16 - 8);
            *v18++ &= CurrentThread;
          }
          if ( (unsigned int)v16 > 8 )
          {
            LOBYTE(CurrentThread) = (unsigned __int8)memset(v18, 0, (unsigned __int64)(unsigned int)v16 >> 3);
            v18 += (unsigned __int64)(unsigned int)v16 >> 3;
            v16 &= 7u;
          }
          if ( !(_DWORD)v16 )
          {
LABEL_18:
            if ( v9[16] > v15 )
              v9[16] = v15;
            v19 = 0;
            if ( a3 )
            {
              CurrentThread = *(unsigned int *)(a3 + 28);
              v20 = ((((CurrentThread | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 0xFFFF) >> 16;
              if ( (unsigned int)v20 <= v11 )
              {
                v19 = 0;
              }
              else
              {
                v19 = v20 - v11;
                if ( v19 )
                {
LABEL_23:
                  if ( a4 )
                  {
                    v21 = (*(_DWORD *)(a4 + 24) >> 4) | (*(unsigned __int8 *)(a4 + 32) << 28);
                    LODWORD(CurrentThread) = v9[12] + v11;
                    if ( v21 > (unsigned int)CurrentThread )
                      v22 = v9[12];
                    else
                      v22 = v21 - v11;
                  }
                  else
                  {
                    v22 = v9[12];
                  }
                  if ( v19 < v9[18] && v22 - v19 >= v9[17] )
                    v9[18] = v19;
                  return CurrentThread;
                }
              }
            }
            if ( !v11 )
              v19 = 1;
            goto LABEL_23;
          }
          LOBYTE(CurrentThread) = byte_1402C7740[v16];
        }
        else
        {
          LOBYTE(CurrentThread) = ~(byte_1402C7730[v16] << v17);
        }
        *v18 &= CurrentThread;
        goto LABEL_18;
      }
    }
  }
  return CurrentThread;
}
