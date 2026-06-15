/*
 * XREFs of ?CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z @ 0x1800E85C4
 * Callers:
 *     ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x1800E8BA0 (-GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointIterator::CreateInstance(struct IUnknown *a1, struct IEndpointIterator **a2)
{
  unsigned int v2; // ebx
  char *v5; // rax
  char *v6; // rdi
  _QWORD *v7; // rax
  int v8; // eax

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
        if ( *((struct IUnknown **)v6 + 4) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)v6 + 4, a1);
        EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)v6 + 4) + 80LL));
        v8 = (**(__int64 (__fastcall ***)(char *, GUID *, struct IEndpointIterator **))v6)(
               v6,
               &GUID_d4097df1_7f94_44a5_9922_1146dd4dbdaa,
               a2);
        if ( v8 < 0 )
          v2 = v8;
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
