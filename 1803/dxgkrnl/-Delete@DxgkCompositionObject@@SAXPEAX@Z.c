/*
 * XREFs of ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C000D800
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C000D87C (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ??1DxgkAttachToObjectSession@@QEAA@XZ @ 0x1C000D8CC (--1DxgkAttachToObjectSession@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkCompositionObject::Delete(_QWORD *a1)
{
  bool v2; // zf
  int v3; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+28h] [rbp-60h]
  int v6; // [rsp+30h] [rbp-58h]

  v5 = 0LL;
  v2 = a1[1] == 0LL;
  v3 = *(_DWORD *)a1;
  v4[0] = 0;
  v6 = v3;
  if ( !v2 && (int)DxgkAttachToObjectSession::Attach((DxgkAttachToObjectSession *)v4) >= 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[1] + 48LL))(a1[1], a1);
  DxgkAttachToObjectSession::~DxgkAttachToObjectSession((DxgkAttachToObjectSession *)v4);
}
