/*
 * XREFs of ??$emplace_back@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAAEAUDeviceDisplayMapping@DWMInputRouter@@$$QEAU23@@Z @ 0x180081380
 * Callers:
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x18007F6D0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUDeviceDisplayMapping@DWMInputRouter@@PEAU12@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@YAPEAUDeviceDisplayMapping@DWMInputRouter@@PEAU12@00AEAV?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180081DCC (--$_Uninitialized_move_al_unchecked@PEAUDeviceDisplayMapping@DWMInputRouter@@PEAU12@V-$allocator.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::emplace_back<DWMInputRouter::DeviceDisplayMapping>(
        _QWORD *a1,
        _DWORD *a2)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // r15
  size_t v14; // rcx
  void *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // r13
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+88h] [rbp+20h]

  v4 = (_DWORD *)a1[2];
  v5 = (_DWORD *)a1[1];
  if ( v4 == v5 )
  {
    v8 = ((__int64)v5 - *a1) >> 4;
    v29 = v8;
    if ( v8 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v9 = v8 + 1;
    v10 = ((__int64)v4 - *a1) >> 4;
    v11 = v10 >> 1;
    if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v9 )
        v12 = v8 + 1;
    }
    else
    {
      v12 = v8 + 1;
    }
    if ( v12 )
    {
      if ( v12 > 0xFFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v14 = 16 * v12;
      if ( 16 * v12 < 0x1000 )
      {
        v13 = operator new(v14);
      }
      else
      {
        if ( v14 + 39 < v14 )
          std::_Default_allocate_traits<1>::_Fail();
        v15 = operator new(v14 + 39);
        v13 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v13 - 1) = v15;
      }
    }
    else
    {
      v13 = 0LL;
    }
    try
    {
      v16 = 2 * v8;
      LODWORD(v13[v16]) = *a2;
      v17 = a2 + 2;
      v18 = &v13[v16 + 1];
      *v18 = 0LL;
      if ( v18 != v17 )
      {
        *v18 = *v17;
        *v17 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<DWMInputRouter::DeviceDisplayMapping *,DWMInputRouter::DeviceDisplayMapping *,std::allocator<DWMInputRouter::DeviceDisplayMapping>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v26 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v13[2 * v29]);
      std::_Default_allocator_traits<std::allocator<DWMInputRouter::DeviceDisplayMapping>>::destroy<DWMInputRouter::DeviceDisplayMapping>(
        v27,
        v26);
      std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v28, v13, v12);
      throw;
    }
    v20 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_33;
    v21 = (_QWORD *)a1[1];
    if ( v20 != v21 )
    {
      do
      {
        v22 = v20[1];
        if ( v22 )
        {
          v20[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v20 += 2;
      }
      while ( v20 != v21 );
      v20 = (_QWORD *)*a1;
    }
    v23 = (__int64)(a1[2] - (_QWORD)v20) >> 4;
    if ( v23 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v23 < 0x1000 )
      {
LABEL_32:
        operator delete(v20);
LABEL_33:
        *a1 = v13;
        a1[1] = &v13[2 * v9];
        a1[2] = &v13[2 * v12];
        return a1[1] - 16LL;
      }
      if ( ((unsigned __int8)v20 & 0x1F) == 0 )
      {
        v24 = *(v20 - 1);
        if ( v24 < (unsigned __int64)v20 && (unsigned __int64)v20 - v24 - 8 <= 0x1F )
        {
          v20 = (_QWORD *)*(v20 - 1);
          goto LABEL_32;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0xFFFFFFFFFFFFFFFLL, v19);
    __debugbreak();
  }
  *v5 = *a2;
  v6 = a2 + 2;
  v7 = v5 + 2;
  *v7 = 0LL;
  if ( v7 != (_QWORD *)(a2 + 2) )
  {
    *v7 = *v6;
    *v6 = 0LL;
  }
  a1[1] += 16LL;
  return a1[1] - 16LL;
}
