/*
 * XREFs of ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x140050514
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140050790 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x14001B998 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_s @ 0x140033200 (memcpy_s.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140037388 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x140050474 (-Add@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x140053430 (-ocslen@@YAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall ATL::CExpansionVector::Add(
        ATL::CExpansionVector *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r13
  const unsigned __int16 *v4; // r12
  int v5; // r14d
  __int64 v6; // rax
  void *v7; // rax
  void *v8; // r15
  void *v9; // rbx
  int v10; // eax
  void *v11; // rax
  void *v12; // rdi
  errno_t v13; // eax
  errno_t v14; // eax
  void *v16; // [rsp+20h] [rbp-88h] BYREF
  void *v17; // [rsp+28h] [rbp-80h] BYREF
  void *v18; // [rsp+30h] [rbp-78h]
  void *v19; // [rsp+38h] [rbp-70h]
  rsize_t DestinationSize; // [rsp+40h] [rbp-68h]
  void *Destination; // [rsp+48h] [rbp-60h]
  rsize_t SourceSize; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h]
  void *v24; // [rsp+60h] [rbp-48h]

  v23 = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a2 || !a3 )
    return 0LL;
  v5 = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  SourceSize = 2 * v6 + 2;
  v17 = 0LL;
  try
  {
    v7 = operator new[](saturated_mul(2 * v6 + 2, 2uLL));
    v8 = v7;
    v17 = v7;
    v16 = v7;
  }
  catch ( ... )
  {
    v9 = v16;
    v19 = v16;
    v3 = a3;
    v4 = a2;
    v5 = 0;
    v8 = v17;
    goto LABEL_7;
  }
  v9 = v7;
  v19 = v7;
LABEL_7:
  v24 = v8;
  v10 = ocslen(v3) + 1;
  DestinationSize = 2LL * v10;
  v16 = 0LL;
  try
  {
    v11 = operator new[](saturated_mul(2LL * v10, 2uLL));
    Destination = v11;
    v16 = v11;
    v18 = v11;
  }
  catch ( ... )
  {
    v12 = v18;
    v3 = a3;
    v4 = a2;
    v5 = 0;
    v8 = v17;
    Destination = v16;
    v9 = v19;
    goto LABEL_9;
  }
  v12 = v11;
LABEL_9:
  if ( !v9
    || !v12
    || (v13 = memcpy_s(v8, SourceSize, v4, SourceSize),
        ATL::AtlCrtErrorCheck(v13),
        v14 = memcpy_s(Destination, DestinationSize, v3, DestinationSize),
        ATL::AtlCrtErrorCheck(v14),
        !(unsigned int)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
                         (__int64)this,
                         &v17,
                         &v16)) )
  {
    v5 = -2147024882;
  }
  if ( v5 >= 0 )
  {
    v9 = 0LL;
    v12 = 0LL;
  }
  operator delete(v12);
  operator delete(v9);
  return v5 >= 0;
}
