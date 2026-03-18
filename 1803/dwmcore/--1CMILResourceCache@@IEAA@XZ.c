/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x18001DC24
 * Callers:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x18001DA7C (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180081BE4 (--1CBitmap@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this)
{
  __int64 v1; // rdx
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx

  LODWORD(v1) = *((_DWORD *)this + 8);
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  v2 = (__int64 *)((char *)this + 8);
  while ( (_DWORD)v1 )
  {
    v4 = *v2;
    v1 = (unsigned int)(v1 - 1);
    *((_DWORD *)this + 8) = v1;
    v5 = *(_QWORD *)(v4 + 8 * v1);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      LODWORD(v1) = *((_DWORD *)this + 8);
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(v2);
}
