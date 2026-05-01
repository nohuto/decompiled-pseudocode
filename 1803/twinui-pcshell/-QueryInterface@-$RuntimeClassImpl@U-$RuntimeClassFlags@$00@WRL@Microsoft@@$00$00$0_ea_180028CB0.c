/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028CB0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7AE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A7AE0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7AF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A7AF0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  volatile signed __int64 **v8; // r8
  volatile signed __int64 *v9; // r10
  unsigned int v10; // ebx
  volatile signed __int64 *v11; // r8
  __int64 (__fastcall *v12)(); // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _DWORD *v16; // rcx
  _DWORD *v17; // r9
  __int64 v18; // r10
  volatile signed __int64 **v19; // r11

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
    {
      *v8 = v9;
      v10 = 0;
      v11 = v9;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
      {
        *v19 = v11;
        v10 = 0;
      }
      else if ( InlineIsEqualGUID(v16, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v19 = v11;
        v10 = 0;
      }
      else
      {
        v10 = -2147467262;
        v11 = 0LL;
      }
      if ( v10 == -2147467262 )
      {
        if ( *v17 != 56
          || v17[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
          || v17[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
          || v17[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
        {
          return 2147500034LL;
        }
        v11 = (volatile signed __int64 *)(v18 + 64);
        v10 = 0;
        *v19 = (volatile signed __int64 *)(v18 + 64);
      }
    }
    v12 = *(__int64 (__fastcall **)())(*v11 + 8);
    if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::AddRef )
    {
      v13 = *((_QWORD *)v11 + 10);
      while ( v13 >= 0 )
      {
        if ( (_DWORD)v13 == 0x7FFFFFFF )
          return v10;
        v14 = v13;
        v13 = _InterlockedCompareExchange64(v11 + 10, v13 + 1, v13);
        if ( v14 == v13 )
          return v10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v13 + 16));
      return v10;
    }
    else
    {
      ((void (__fastcall *)(volatile signed __int64 *))v12)(v11);
      return v10;
    }
  }
}
