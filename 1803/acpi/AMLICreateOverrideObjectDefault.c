/*
 * XREFs of AMLICreateOverrideObjectDefault @ 0x1C0045CFC
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDefault(_BYTE *Src, size_t Size, __int64 a3)
{
  size_t v3; // rdi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  _BYTE *v8; // rcx
  void *v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  _OWORD v13[3]; // [rsp+20h] [rbp-30h] BYREF

  v3 = (unsigned int)Size;
  memset(v13, 0, 0x28uLL);
  v6 = 0;
  if ( (_DWORD)v3 == 4 )
  {
    LODWORD(v13[1]) = (_DWORD)Src;
    goto LABEL_14;
  }
  if ( (_DWORD)v3 == 8 )
  {
    *(_QWORD *)&v13[1] = Src;
LABEL_14:
    WORD1(v13[0]) = 1;
    goto LABEL_15;
  }
  v7 = 0;
  if ( (_DWORD)v3 )
  {
    v8 = Src;
    do
    {
      if ( !*v8 )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < (unsigned int)v3 );
  }
  if ( v7 != (_DWORD)v3 - 1 )
    return (unsigned int)-1073741637;
  DWORD2(v13[1]) = v3;
  WORD1(v13[0]) = 2;
  v9 = (void *)NewObjData(gpheapGlobal, v13);
  *(_QWORD *)&v13[2] = v9;
  if ( v9 )
  {
    memmove(v9, Src, v3);
LABEL_15:
    v10 = v13[1];
    *(_OWORD *)a3 = v13[0];
    v11 = *(_QWORD *)&v13[2];
    *(_OWORD *)(a3 + 16) = v10;
    *(_QWORD *)(a3 + 32) = v11;
    return v6;
  }
  return (unsigned int)-1073741670;
}
