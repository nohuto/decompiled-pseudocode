/*
 * XREFs of ??1?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18001E024
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800171CC (--1DWMInputRouter@@MEAA@XZ.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$13 @ 0x1800CD07A (_DWMInputRouter--DWMInputRouter_--_1_--dtor$13.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$13 @ 0x1800CD229 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$13.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::~vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v2 != v3 )
    {
      v4 = *(_QWORD *)(v2 + 8);
      if ( v4 )
      {
        *(_QWORD *)(v2 + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v2 += 16LL;
    }
    v5 = *a1;
    v6 = (__int64)(a1[2] - *a1) >> 4;
    if ( v6 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v5);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
  }
}
