/*
 * XREFs of ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180012020
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180012104 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x180012F98 (-_Change_array@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX.c)
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x180012FF8 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rdi
  __int64 v3; // rsi
  __int64 i; // r12
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  _DWORD *v11; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rbx
  _BYTE v14[20]; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (char *)this + 136;
  *((_QWORD *)this + 18) = *((_QWORD *)this + 17);
  std::vector<D2D1_GRADIENT_STOP>::reserve(
    (char *)this + 136,
    (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3);
  v3 = *((_QWORD *)this + 14);
  for ( i = *((_QWORD *)this + 15); v3 != i; v3 += 8LL )
  {
    v5 = *((_QWORD *)v1 + 2);
    v6 = *((_QWORD *)v1 + 1);
    *(_DWORD *)v14 = *(_DWORD *)(*(_QWORD *)v3 + 56LL);
    *(_OWORD *)&v14[4] = *(_OWORD *)(*(_QWORD *)v3 + 60LL);
    if ( v5 == v6 )
    {
      v7 = (v6 - *(_QWORD *)v1) / 20;
      if ( v7 == 0xCCCCCCCCCCCCCCCLL )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v8 = (v5 - *(_QWORD *)v1) / 20;
      v9 = v8 >> 1;
      if ( v8 <= 0xCCCCCCCCCCCCCCCLL - (v8 >> 1) )
      {
        v10 = v9 + v8;
        if ( v9 + v8 < v7 + 1 )
          v10 = v7 + 1;
      }
      else
      {
        v10 = v7 + 1;
      }
      v11 = (_DWORD *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 20LL);
      v12 = 5 * v7;
      v13 = v11;
      *(_OWORD *)&v11[v12] = *(_OWORD *)v14;
      v11[v12 + 4] = *(_DWORD *)&v14[16];
      memmove(v11, *(const void **)v1, *((_QWORD *)v1 + 1) - *(_QWORD *)v1);
      std::vector<D2D1_GRADIENT_STOP>::_Change_array(v1, v13, v7 + 1, v10);
    }
    else
    {
      *(_OWORD *)v6 = *(_OWORD *)v14;
      *(_DWORD *)(v6 + 16) = *(_DWORD *)&v14[16];
      *((_QWORD *)v1 + 1) += 20LL;
    }
  }
}
