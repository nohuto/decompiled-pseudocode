/*
 * XREFs of ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z @ 0x1802672AC
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x180267BAC (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@PEAPEAV12@@Z @ 0x18026733C (-CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall shell::TaskScheduler::CreateInstance(
        const struct _GUID *a1,
        __int64 a2,
        __int64 a3,
        struct TaskScheduler **a4)
{
  int Instance; // eax
  struct TaskScheduler *v6; // rbx
  int v7; // edi
  struct TaskScheduler *v8; // rax
  void *Block; // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  Block = 0LL;
  Instance = shell::TaskScheduler::CreateInstance(a1, (struct TaskScheduler **)&Block);
  v6 = (struct TaskScheduler *)Block;
  v7 = Instance;
  if ( Instance >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)Block + 2) + 48LL))(
           *((_QWORD *)Block + 2),
           1LL,
           4294967294LL);
    if ( v7 >= 0 )
    {
      v8 = v6;
      v6 = 0LL;
      *a4 = v8;
    }
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v6 + 2) + 16LL))(*((_QWORD **)v6 + 2));
    operator delete(v6);
  }
  return (unsigned int)v7;
}
