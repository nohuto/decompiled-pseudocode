/*
 * XREFs of ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x140051C94
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140051EE0 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x14001C8D4 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_s @ 0x140034390 (memcpy_s.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x1400387A8 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x140051BF4 (-Add@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x140055798 (-ocslen@@YAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall ATL::CExpansionVector::Add(
        ATL::CExpansionVector *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r12
  const unsigned __int16 *v4; // r15
  int v5; // r14d
  __int64 v6; // rax
  void *v7; // r13
  void *v8; // rdi
  rsize_t v9; // rcx
  errno_t v10; // eax
  errno_t v11; // eax
  void *v12; // rbx
  void *v14; // [rsp+20h] [rbp-68h] BYREF
  void *v15; // [rsp+28h] [rbp-60h] BYREF
  rsize_t DestinationSize; // [rsp+30h] [rbp-58h]
  void *v17; // [rsp+38h] [rbp-50h]
  rsize_t SourceSize; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = -2LL;
  v3 = a3;
  v4 = a2;
  if ( a2 && a3 )
  {
    v5 = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    SourceSize = 2 * v6 + 2;
    v14 = 0LL;
    try
    {
      v7 = operator new[](saturated_mul(2 * v6 + 2, 2uLL));
      v14 = v7;
    }
    catch ( ... )
    {
      v3 = a3;
      v4 = a2;
      v5 = 0;
      v7 = v14;
    }
    v8 = v7;
    v17 = v7;
    v9 = 2LL * (int)(ocslen(v3) + 1);
    DestinationSize = v9;
    v15 = 0LL;
    try
    {
      v12 = operator new[](saturated_mul(v9, 2uLL));
      v15 = v12;
    }
    catch ( ... )
    {
      v3 = a3;
      v4 = a2;
      v5 = 0;
      v7 = v14;
      v8 = v17;
      v12 = v15;
    }
    if ( v7 && v12 )
    {
      v10 = memcpy_s(v7, SourceSize, v4, SourceSize);
      ATL::AtlCrtErrorCheck(v10);
      v11 = memcpy_s(v12, DestinationSize, v3, DestinationSize);
      ATL::AtlCrtErrorCheck(v11);
      if ( !(unsigned int)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
                            (__int64)this,
                            &v14,
                            &v15) )
      {
        v5 = -2147024882;
LABEL_14:
        operator delete(v12);
        operator delete(v8);
        return v5 >= 0;
      }
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v5 >= 0 )
    {
      v8 = 0LL;
      v12 = 0LL;
    }
    goto LABEL_14;
  }
  return 0LL;
}
