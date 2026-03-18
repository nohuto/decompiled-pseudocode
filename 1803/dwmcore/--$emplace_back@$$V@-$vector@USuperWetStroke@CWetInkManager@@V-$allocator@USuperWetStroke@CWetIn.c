/*
 * XREFs of ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x180171188
 * Callers:
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x18017165C (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Change_array@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CWetInkManager@@_K1@Z @ 0x180171B98 (-_Change_array@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkMana.c)
 */

void *__fastcall std::vector<CWetInkManager::SuperWetStroke>::emplace_back<>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  void *result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  _OWORD *v15; // rdx
  __int64 v16; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2];
  v3 = a1[1];
  if ( v2 == v3 )
  {
    v5 = (__int64)((unsigned __int128)((v3 - *a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
    v6 = (v5 >> 63) + v5;
    if ( v6 == 0x38E38E38E38E38ELL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v7 = v6 + 1;
    v8 = (v2 - *a1) / 72;
    v9 = v8 >> 1;
    if ( v8 <= 0x38E38E38E38E38ELL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x48uLL);
    v12 = (_QWORD *)(v11 + 72 * v6);
    memset_0(v12, 0, 0x48uLL);
    *v12 = 0LL;
    v12[1] = 0LL;
    memset_0(v12 + 2, 0, 0x30uLL);
    *((_BYTE *)v12 + 64) = 0;
    v13 = a1[1];
    v14 = *a1;
    if ( *a1 != v13 )
    {
      v15 = (_OWORD *)(v11 + 16);
      do
      {
        *((_QWORD *)v15 - 2) = *(_QWORD *)v14;
        v16 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = 0LL;
        *((_QWORD *)v15 - 1) = v16;
        *v15 = *(_OWORD *)(v14 + 16);
        v15 = (_OWORD *)((char *)v15 + 72);
        *(_OWORD *)((char *)v15 - 56) = *(_OWORD *)(v14 + 32);
        *(_OWORD *)((char *)v15 - 40) = *(_OWORD *)(v14 + 48);
        LOBYTE(v16) = *(_BYTE *)(v14 + 64);
        v14 += 72LL;
        *((_BYTE *)v15 - 24) = v16;
      }
      while ( v14 != v13 );
    }
    return (void *)std::vector<CWetInkManager::SuperWetStroke>::_Change_array(a1, v11, v7, v10);
  }
  else
  {
    memset_0((void *)a1[1], 0, 0x48uLL);
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    result = memset_0((void *)(v3 + 16), 0, 0x30uLL);
    *(_BYTE *)(v3 + 64) = 0;
    a1[1] += 72LL;
  }
  return result;
}
