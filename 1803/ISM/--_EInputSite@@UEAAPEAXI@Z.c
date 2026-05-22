/*
 * XREFs of ??_EInputSite@@UEAAPEAXI@Z @ 0x18000EE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA@XZ @ 0x18000EFDC (--1-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@InputSit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

InputSite *__fastcall InputSite::`vector deleting destructor'(InputSite *this, char a2)
{
  __int64 v4; // rdi
  InputSite **v5; // rax
  InputSite **i; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &InputSite::`vftable';
  v4 = *((_QWORD *)this + 6);
  v5 = *(InputSite ***)(v4 + 64);
  for ( i = *(InputSite ***)(v4 + 56); i != v5 && *i != this; ++i )
    ;
  memmove(i, i + 1, (char *)v5 - (char *)(i + 1));
  *(_QWORD *)(v4 + 64) -= 8LL;
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  std::vector<InputSite::AttachedInputObjectEntry>::~vector<InputSite::AttachedInputObjectEntry>((char *)this + 24);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
