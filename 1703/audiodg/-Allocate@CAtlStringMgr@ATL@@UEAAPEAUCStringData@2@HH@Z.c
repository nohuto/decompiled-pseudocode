/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140001FB0
 * Callers:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140001E2C (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z @ 0x140002080 (-Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  ATL::CWin32Heap *v8; // rcx
  void *(__fastcall *v9)(ATL::CWin32Heap *__hidden, unsigned __int64); // rax
  struct ATL::CStringData *result; // rax

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 )
    return 0LL;
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < a3 )
      return 0LL;
    v6 = a3 * (__int64)v5;
    if ( v6 > 0xFFFFFFFFFFFFFFE7uLL )
      return 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 + 24;
  v8 = (ATL::CWin32Heap *)*((_QWORD *)this + 1);
  v9 = **(void *(__fastcall ***)(ATL::CWin32Heap *__hidden, unsigned __int64))v8;
  if ( v9 == ATL::CWin32Heap::Allocate )
    result = (struct ATL::CStringData *)ATL::CWin32Heap::Allocate(v8, v7);
  else
    result = (struct ATL::CStringData *)v9(v8, v7);
  if ( result )
  {
    *((_DWORD *)result + 2) = 0;
    *(_QWORD *)result = this;
    *((_DWORD *)result + 4) = 1;
    *((_DWORD *)result + 3) = v5 - 1;
    return result;
  }
  return 0LL;
}
