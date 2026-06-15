/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180014548
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015324 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000FF20 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001701C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180019884 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v9; // edx
  signed int v10; // ecx
  char v11; // bp
  unsigned __int16 **v12; // r10
  unsigned __int16 *v13; // rdx
  __int64 v14; // r9
  unsigned __int16 v15; // r8
  unsigned int *v16; // rbx
  _QWORD *v17; // rdx
  HANDLE ProcessHeap; // rax
  void *v19; // rax
  void *v20; // rbx
  void *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rax
  volatile signed __int32 *v28; // rdx
  void *v30; // [rsp+20h] [rbp-58h]
  _QWORD v31[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-38h]
  volatile signed __int32 *v33; // [rsp+80h] [rbp+8h] BYREF
  int v34; // [rsp+90h] [rbp+18h]

  v31[1] = -2LL;
  v6 = 0;
  v7 = (unsigned int)-a3;
  v8 = (char *)this + ((_DWORD)v7 != 0 ? 0x18 : 0) + 312;
  v31[2] = v8;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v31,
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
      if ( !v31[0] )
        ATL::AtlThrowImpl(-2147467259);
      v13 = *v12;
      v14 = v31[0] - (_QWORD)*v12;
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 != *(unsigned __int16 *)((char *)v13 + v14) )
          break;
        ++v13;
        if ( !v15 )
        {
          v9 = 0;
          goto LABEL_9;
        }
      }
      v9 = v15 < *(unsigned __int16 *)((char *)v13 + v14) ? -1 : 1;
LABEL_9:
      if ( !v9 )
        break;
      ++v10;
      ++v12;
      if ( v10 >= *((_DWORD *)v8 + 4) )
        goto LABEL_11;
    }
  }
  if ( v10 == -1 )
  {
    v16 = 0LL;
  }
  else
  {
    if ( v10 < 0 || v10 >= *((_DWORD *)v8 + 4) )
    {
      ATL::_AtlRaiseException(v10, v9);
      JUMPOUT(0x180014787LL);
    }
    v16 = *(unsigned int **)(*((_QWORD *)v8 + 1) + 8LL * v10);
  }
  v17 = (_QWORD *)(v31[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
  if ( v16 )
    goto LABEL_35;
  ProcessHeap = GetProcessHeap();
  v19 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
  v20 = v19;
  v30 = v19;
  if ( v19 )
  {
    memset_0(v19, 0, 0x54uLL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v33,
      a2,
      v22);
    v23 = _o__recalloc(*(_QWORD *)v8, *((_DWORD *)v8 + 4) + 1, 8LL);
    if ( v23 )
    {
      *(_QWORD *)v8 = v23;
      v24 = _o__recalloc(*((_QWORD *)v8 + 1), *((_DWORD *)v8 + 4) + 1, 8LL);
      v25 = v24;
      if ( v24 )
      {
        *((_QWORD *)v8 + 1) = v24;
        v34 = *((_DWORD *)v8 + 4);
        v26 = v34;
        v32 = (_QWORD *)(*(_QWORD *)v8 + 8LL * v34);
        if ( v32 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v32,
            (const void **)&v33);
          v25 = *((_QWORD *)v8 + 1);
        }
        v27 = (_QWORD *)(v25 + 8 * v26);
        v32 = v27;
        if ( v27 )
          *v27 = v20;
        ++*((_DWORD *)v8 + 4);
        v11 = 0;
      }
    }
    v28 = v33 - 6;
    if ( _InterlockedExchangeAdd(v33 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 8LL))(*(_QWORD *)v28);
    if ( v11 )
    {
      v6 = -2147024882;
      v21 = v30;
      goto LABEL_22;
    }
    v16 = (unsigned int *)v30;
    operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_35:
    *a4 = v16;
    return v6;
  }
  v6 = -2147024882;
  v21 = 0LL;
LABEL_22:
  operator delete(v21, (const struct std::nothrow_t *)4);
  return v6;
}
