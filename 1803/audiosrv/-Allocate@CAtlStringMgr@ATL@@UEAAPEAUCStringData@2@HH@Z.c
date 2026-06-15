/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x1800340F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  unsigned __int64 v6; // rcx
  SIZE_T v7; // rdx
  __int64 v8; // rcx
  LPVOID (__fastcall *v9)(HANDLE *, SIZE_T); // rax
  struct ATL::CStringData *result; // rax

  if ( a2 < 0 || 0x7FFFFFFF - a2 < 1 )
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
  v8 = *((_QWORD *)this + 1);
  v9 = **(LPVOID (__fastcall ***)(HANDLE *, SIZE_T))v8;
  if ( v9 == ATL::CWin32Heap::Allocate )
    result = (struct ATL::CStringData *)HeapAlloc(*(HANDLE *)(v8 + 8), 0, v7);
  else
    result = (struct ATL::CStringData *)v9((HANDLE *)v8, v7);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 3) = v5 - 1;
  *((_DWORD *)result + 2) = 0;
  return result;
}
