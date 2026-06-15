/*
 * XREFs of ?CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z @ 0x1801175C8
 * Callers:
 *     ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x180117C10 (-GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointIterator::CreateInstance(struct IUnknown *a1, struct IEndpointIterator **a2)
{
  unsigned int v2; // ebx
  char *v5; // rax
  char *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // eax

  v2 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v5 = (char *)operator new(0x38uLL);
      v6 = v5;
      if ( v5 )
      {
        *((_DWORD *)v5 + 6) = 1;
        v7 = v5 + 8;
        v7[1] = v7;
        *(_QWORD *)v6 = &EndpointIterator::`vftable'{for `IEndpointIterator'};
        *v7 = &EndpointIterator::`vftable'{for `CUnknown'};
        *((_QWORD *)v6 + 4) = 0LL;
        *((_QWORD *)v6 + 5) = 0LL;
        *((_DWORD *)v6 + 12) = 0;
        v8 = *((_QWORD *)v6 + 4);
        if ( (struct IUnknown *)v8 != a1 )
        {
          ATL::AtlComPtrAssign((struct IUnknown **)v6 + 4, a1);
          v8 = *((_QWORD *)v6 + 4);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 80));
        v9 = (**(__int64 (__fastcall ***)(char *, GUID *, struct IEndpointIterator **))v6)(
               v6,
               &GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa,
               a2);
        if ( v9 < 0 )
          v2 = v9;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147467261;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
