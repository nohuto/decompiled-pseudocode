/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180032880
 * Callers:
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18003280C (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x180032910 (-Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  int v5; // r8d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  ATL::CWin32Heap *v9; // rcx
  void *(__fastcall *v10)(ATL::CWin32Heap *__hidden, void *, unsigned __int64); // rax
  struct ATL::CStringData *result; // rax

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v5 = a3 + 1;
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v5 > (int)v6 )
    return 0LL;
  v7 = a4 * (unsigned __int64)v6;
  if ( v7 > 0xFFFFFFFF || (unsigned int)v7 > 0xFFFFFFE7 )
    return 0LL;
  v8 = (unsigned int)(v7 + 24);
  v9 = (ATL::CWin32Heap *)*((_QWORD *)this + 1);
  v10 = *(void *(__fastcall **)(ATL::CWin32Heap *__hidden, void *, unsigned __int64))(*(_QWORD *)v9 + 16LL);
  result = v10 == ATL::CWin32Heap::Reallocate
         ? (struct ATL::CStringData *)ATL::CWin32Heap::Reallocate(v9, a2, v8)
         : (struct ATL::CStringData *)v10(v9, a2, v8);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v6 - 1;
  return result;
}
