/*
 * XREFs of ??_ECDelayedTask@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180087C80
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 * Callees:
 *     ??_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z @ 0x18003AF78 (--_GTaskData@ComTaskPool@Internal@Windows@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComTaskPool::CDelayedTask *__fastcall Windows::Internal::ComTaskPool::CDelayedTask::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CDelayedTask *this,
        char a2)
{
  Windows::Internal::ComTaskPool::TaskData *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CDelayedTask::`vftable';
  v4 = (Windows::Internal::ComTaskPool::TaskData *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    Windows::Internal::ComTaskPool::TaskData::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
