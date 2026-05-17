/*
 * XREFs of LdrEnumerateLoadedModules @ 0x180083E40
 * Callers:
 *     RtlLockModuleSection @ 0x180083C60 (RtlLockModuleSection.c)
 * Callees:
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrEnumerateLoadedModules(
        int a1,
        void (__fastcall *a2)(__int64 *, __int64, char *),
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // rcx
  __int64 *i; // rdi
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+20h]

  if ( a1 || !a2 )
    return 3221225485LL;
  v11 = 0;
  v6 = 4096LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v7 = 1;
    v12 = 1;
  }
  else
  {
    v7 = 0;
    v12 = 0;
    sub_18001AE14(0);
  }
  sub_180019FC0(v6, (__int64)a2, a3, a4);
  for ( i = (__int64 *)qword_18015B350; i != &qword_18015B350; i = (__int64 *)*i )
  {
    a2(i, a3, &v11);
    if ( v11 )
      break;
  }
  sub_18001A028(v8, 15, 0);
  if ( !v7 )
    sub_18001A338();
  return 0LL;
}
