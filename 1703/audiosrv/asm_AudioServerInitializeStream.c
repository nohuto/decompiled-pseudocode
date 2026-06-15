/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800AFD50
 * Callers:
 *     <none>
 * Callees:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        unsigned int a3,
        struct _RTL_CRITICAL_SECTION *a4,
        void **a5)
{
  const unsigned __int16 *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  struct IProcessSubmixProxy *v13; // [rsp+48h] [rbp-F0h]
  unsigned __int16 *v14; // [rsp+60h] [rbp-D8h] BYREF
  struct _GUID v15; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v16[112]; // [rsp+80h] [rbp-B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 144LL))(*a2);
  memset(v16, 0, 0x68uLL);
  v13 = *a2;
  v15 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = AudioServerInitialize_Internal(a1, v9, 0, a3, a4, &v15, 1u, (struct VadServerSettings *)v16, &v14, v13, a5);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xFD,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
