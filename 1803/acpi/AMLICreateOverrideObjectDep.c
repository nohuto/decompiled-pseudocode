/*
 * XREFs of AMLICreateOverrideObjectDep @ 0x1C0045DF0
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDep(_BYTE *Src, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int i; // ecx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // r15
  __int64 v13; // rdi
  unsigned int *v14; // rsi
  __int64 v15; // rax
  void *v16; // rax
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  _OWORD v20[3]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  memset(v20, 0, 0x28uLL);
  v7 = 0;
  if ( a2 && Src[a2 - 1] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = 0; i < a2; i += v10 + 1 )
    {
      v9 = &Src[i];
      if ( !*v9 )
        break;
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      ++v7;
    }
    WORD1(v20[0]) = 4;
    DWORD2(v20[1]) = 40 * v7 + 48;
    v11 = (unsigned int *)NewObjData(gpheapGlobal, v20);
    *(_QWORD *)&v20[2] = v11;
    v12 = v11;
    if ( v11 )
    {
      LODWORD(v13) = 0;
      *v11 = v7;
      if ( v7 )
      {
        v14 = v11 + 8;
        while ( 1 )
        {
          *((_WORD *)v14 - 11) = 2;
          v15 = -1LL;
          do
            ++v15;
          while ( Src[v15] );
          *v14 = v15 + 1;
          v16 = (void *)NewObjData(gpheapGlobal, v14 - 6);
          *((_QWORD *)v14 + 1) = v16;
          if ( !v16 )
            break;
          memmove(v16, Src, *v14);
          LODWORD(v13) = v13 + 1;
          Src += *v14;
          v14 += 10;
          if ( (unsigned int)v13 >= v7 )
            goto LABEL_17;
        }
        v6 = -1073741670;
        while ( (_DWORD)v13 )
        {
          v13 = (unsigned int)(v13 - 1);
          FreeObjData(&v12[8 * v13 + 2 + 2 * (unsigned int)v13]);
        }
        FreeObjData(v20);
      }
      else
      {
LABEL_17:
        v17 = v20[1];
        *(_OWORD *)a3 = v20[0];
        v18 = *(_QWORD *)&v20[2];
        *(_OWORD *)(a3 + 16) = v17;
        *(_QWORD *)(a3 + 32) = v18;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v6;
}
