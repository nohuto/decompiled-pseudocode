/*
 * XREFs of ComputeProcessorEnergy @ 0x1C0009C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int *v6; // r8
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int *v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // r11d
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 result; // rax

  v6 = (unsigned int *)((char *)&unk_1C0011970 + 256 * (unsigned __int64)a1);
  v8 = v6[1];
  if ( (v8 & 1) != 0 )
  {
    v9 = 0;
    v10 = (unsigned __int8)v8 >> 1;
    if ( v10 )
    {
      v11 = v6 + 2;
      do
      {
        v12 = *v11;
        if ( a4 == (unsigned __int8)*v11 )
        {
          v14 = v12 >> 8;
          goto LABEL_16;
        }
        if ( a4 < (unsigned __int8)v12 )
          break;
        ++v9;
        ++v11;
      }
      while ( v9 < v10 );
      if ( !v9 )
        goto LABEL_12;
      if ( v9 == v10 )
        v13 = v6[--v9 + 2];
      else
        v13 = v6[v9 + 1];
    }
    else
    {
LABEL_12:
      v13 = v6[2];
      v9 = 1;
    }
    v15 = v13 >> 8;
    v16 = v6[v9 + 1];
    v17 = v6[v9 + 2];
    if ( (unsigned __int8)v16 < (unsigned int)(unsigned __int8)v17 )
      v14 = v15
          + (int)((a4 - (unsigned __int8)v16) * ((v17 >> 8) - (v16 >> 8)))
          / ((unsigned __int8)v17 - (unsigned __int8)v16);
    else
      v14 = 0LL;
LABEL_16:
    v18 = 100LL;
  }
  else
  {
    v14 = *v6;
    v18 = a4;
  }
  result = 10 * a2 * v18 * v14 / (unsigned __int64)qword_1C0011B78;
  *a5 = result;
  return result;
}
