/*
 * XREFs of AMLICreateOverrideObjectDep @ 0x1C005CEC8
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CB74 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDep(_BYTE *Src, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int i; // ecx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // r15
  __int64 v13; // rdi
  unsigned int *v14; // rsi
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  _OWORD v23[3]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  memset(v23, 0, 0x28uLL);
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
    WORD1(v23[0]) = 4;
    DWORD2(v23[1]) = 40 * v7 + 48;
    v11 = (_DWORD *)NewObjData(gpheapGlobal, (__int64)v23);
    *(_QWORD *)&v23[2] = v11;
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
          v16 = (void *)NewObjData(gpheapGlobal, (__int64)(v14 - 6));
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
          FreeObjData((__int64)&v12[8 * v13 + 2 + 2 * (unsigned int)v13], v17, v18, v19);
        }
        FreeObjData((__int64)v23, v17, v18, v19);
      }
      else
      {
LABEL_17:
        v20 = v23[1];
        *(_OWORD *)a3 = v23[0];
        v21 = *(_QWORD *)&v23[2];
        *(_OWORD *)(a3 + 16) = v20;
        *(_QWORD *)(a3 + 32) = v21;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v6;
}
