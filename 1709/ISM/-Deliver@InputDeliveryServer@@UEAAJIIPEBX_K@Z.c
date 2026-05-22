/*
 * XREFs of ?Deliver@InputDeliveryServer@@UEAAJIIPEBX_K@Z @ 0x18007F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::Deliver(
        InputDeliveryServer *this,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned __int64 a5)
{
  __int64 **v5; // r10
  __int64 *i; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (__int64 **)*((_QWORD *)this + 58);
  for ( i = *v5; i != (__int64 *)v5 && (*((_DWORD *)i + 4) != a2 || *((_DWORD *)i + 5) != a3); i = (__int64 *)*i )
    ;
  if ( i != (__int64 *)v5 )
    (*(void (__fastcall **)(__int64, const void *, unsigned __int64))(*(_QWORD *)i[8] + 8LL))(i[8], a4, a5);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *, _DWORD))(**((_QWORD **)this + 12) + 56LL))(
          *((_QWORD *)this + 12),
          a2,
          a3,
          a4,
          a5);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x27A,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18007F652LL);
  }
  return 0LL;
}
