/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x14001ABF0
 * Callers:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A764 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z @ 0x14001ACC0 (-Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z.c)
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x14001ACD0 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  ATL::CWin32Heap *v6; // rcx
  unsigned __int64 v7; // rdx
  void *(__fastcall *v8)(ATL::CWin32Heap *__hidden, unsigned __int64); // rax
  struct ATL::CStringData *result; // rax
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 || (int)ATL::AtlMultiply<unsigned __int64>(&v10, v5, a3) < 0 || v10 > 0xFFFFFFFFFFFFFFE7uLL )
    return 0LL;
  v6 = (ATL::CWin32Heap *)*((_QWORD *)this + 1);
  v7 = v10 + 24;
  v8 = **(void *(__fastcall ***)(ATL::CWin32Heap *__hidden, unsigned __int64))v6;
  result = v8 == ATL::CWin32Heap::Allocate
         ? (struct ATL::CStringData *)ATL::CWin32Heap::Allocate(v6, v7)
         : (struct ATL::CStringData *)v8(v6, v7);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 2) = 0;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 3) = v5 - 1;
  return result;
}
