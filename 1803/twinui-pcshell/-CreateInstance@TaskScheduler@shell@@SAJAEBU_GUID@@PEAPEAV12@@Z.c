/*
 * XREFs of ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@PEAPEAV12@@Z @ 0x18026733C
 * Callers:
 *     ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z @ 0x1802672AC (-CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall shell::TaskScheduler::CreateInstance(const struct _GUID *a1, struct TaskScheduler **a2)
{
  HRESULT v3; // ebx
  struct TaskScheduler *v4; // rax
  struct TaskScheduler *v5; // rdi
  LPVOID v6; // rcx
  LPVOID v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (LPVOID)a1;
  *a2 = 0LL;
  v3 = CoCreateInstance(&CLSID_ShellTaskScheduler, 0LL, 1u, &GUID_6ccb7be0_6807_11d0_b810_00c04fd706ec, &v8);
  if ( v3 >= 0 )
  {
    v4 = (struct TaskScheduler *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    if ( v4 )
    {
      v6 = v8;
      *((_QWORD *)v4 + 2) = v8;
      *(_OWORD *)v4 = xmmword_1803B0CE0;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      v5 = 0LL;
    }
    v3 = v5 == 0LL ? 0x8007000E : 0;
    if ( v5 )
      *a2 = v5;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v3;
}
