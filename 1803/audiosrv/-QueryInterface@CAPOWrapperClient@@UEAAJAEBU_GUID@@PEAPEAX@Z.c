/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D300
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066500 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066510 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066520 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066530 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::QueryInterface(
        CAPOWrapperClient *this,
        const struct _GUID *a2,
        CAPOWrapperClient **a3)
{
  CAPOWrapperClient *v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int Data1; // ecx
  void (*v8)(void); // rax
  __int64 result; // rax
  __int64 v10; // r10
  int v11; // eax

  v4 = this;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( v5 || *((_DWORD *)this + 16) )
  {
    v6 = 0;
    *a3 = 0LL;
    Data1 = a2->Data1;
    if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v4;
      v8 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    }
    else
    {
      if ( Data1 == 1221972245
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4[4]
        || (v4 = (CAPOWrapperClient *)((char *)v4 + 8), Data1 == -41997527)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4[4] )
      {
        *a3 = v4;
      }
      else
      {
        if ( Data1 == -1157719598
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4[4] )
        {
          *a3 = (CAPOWrapperClient *)((char *)v4 + 8);
          v11 = 0;
        }
        else if ( Data1 == 1290472107
               && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data2
               && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4
               && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4[4] )
        {
          *a3 = (CAPOWrapperClient *)((char *)v4 + 16);
          v11 = 0;
        }
        else if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014) )
        {
          *a3 = (CAPOWrapperClient *)(v10 + 8);
          v11 = 0;
        }
        else
        {
          v11 = -2147467262;
        }
        v6 = v11;
        if ( v11 < 0 )
          return v6;
      }
      v8 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    }
    v8();
    return v6;
  }
  result = 2147500034LL;
  *a3 = 0LL;
  return result;
}
