/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000EDF8
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000F8E4 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000B168 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180010F00 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001189C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1800275FE (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::GetActiveStreamCountStatsForEndpoint(
        CProcess *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned int **a4)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  char *v8; // rsi
  unsigned __int16 *v9; // rdx
  signed int v10; // ecx
  char v11; // bp
  unsigned __int16 **v12; // r8
  int v13; // r10d
  int v14; // r9d
  unsigned int *v15; // rbx
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  void *v18; // rax
  void *v19; // rbx
  void *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  _QWORD *v25; // rcx
  volatile signed __int32 *v26; // rdx
  void *v28; // [rsp+20h] [rbp-58h]
  _QWORD v29[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-38h]
  volatile signed __int32 *v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+90h] [rbp+18h]

  v29[1] = -2LL;
  v6 = 0;
  v7 = (unsigned int)-a3;
  v8 = (char *)this + ((_DWORD)v7 != 0 ? 0x18 : 0) + 304;
  v29[2] = v8;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v29,
    a2,
    v7);
  v10 = 0;
  v11 = 1;
  if ( *((int *)v8 + 4) <= 0 )
  {
LABEL_11:
    v10 = -1;
  }
  else
  {
    v12 = *(unsigned __int16 ***)v8;
    while ( 1 )
    {
      if ( !v29[0] )
        ATL::AtlThrowImpl(-2147467259);
      v9 = *v12;
      do
      {
        v13 = *(unsigned __int16 *)((char *)v9 + v29[0] - (_QWORD)*v12);
        v14 = *v9 - v13;
        if ( v14 )
          break;
        ++v9;
      }
      while ( v13 );
      if ( !v14 )
        break;
      ++v10;
      ++v12;
      if ( v10 >= *((_DWORD *)v8 + 4) )
        goto LABEL_11;
    }
  }
  if ( v10 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v10 < 0 || v10 >= *((_DWORD *)v8 + 4) )
    {
      ATL::_AtlRaiseException(v10, (unsigned int)v9);
      __debugbreak();
    }
    v15 = *(unsigned int **)(*((_QWORD *)v8 + 1) + 8LL * v10);
  }
  v16 = (_QWORD *)(v29[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_35;
  ProcessHeap = GetProcessHeap();
  v18 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
  v19 = v18;
  v28 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0x54uLL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v31,
      a2,
      v21);
    v22 = _o__recalloc(*(_QWORD *)v8, *((_DWORD *)v8 + 4) + 1, 8LL);
    if ( v22 )
    {
      *(_QWORD *)v8 = v22;
      v23 = _o__recalloc(*((_QWORD *)v8 + 1), *((_DWORD *)v8 + 4) + 1, 8LL);
      if ( v23 )
      {
        *((_QWORD *)v8 + 1) = v23;
        v32 = *((_DWORD *)v8 + 4);
        v24 = v32;
        v30 = (_QWORD *)(*(_QWORD *)v8 + 8LL * v32);
        if ( v30 )
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v30,
            (const void **)&v31);
        v25 = (_QWORD *)(*((_QWORD *)v8 + 1) + 8 * v24);
        v30 = v25;
        if ( v25 )
          *v25 = v19;
        ++*((_DWORD *)v8 + 4);
        v11 = 0;
      }
    }
    v26 = v31 - 6;
    if ( _InterlockedExchangeAdd(v31 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26);
    if ( v11 )
    {
      v6 = -2147024882;
      v20 = v28;
      goto LABEL_22;
    }
    v15 = (unsigned int *)v28;
    operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_35:
    *a4 = v15;
    return v6;
  }
  v6 = -2147024882;
  v20 = 0LL;
LABEL_22:
  operator delete(v20, (const struct std::nothrow_t *)4);
  return v6;
}
