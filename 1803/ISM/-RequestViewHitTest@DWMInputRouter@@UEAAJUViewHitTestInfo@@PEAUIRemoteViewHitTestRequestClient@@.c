/*
 * XREFs of ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x180080970
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800807F4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTest(__int64 a1, __int128 *a2, __int64 *a3)
{
  __int64 v5; // xmm1_8
  int v6; // esi
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  void (__fastcall *v10)(__int64 *, __int128 *); // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-10h]

  v5 = *((_QWORD *)a2 + 2);
  v12 = *a2;
  v13 = v5;
  v14 = *((_DWORD *)a2 + 6);
  v6 = DWMInputRouter::RequestViewHitTestHelper(a1 - 32, (__int64)&v12, a2);
  if ( v6 >= 0 && a3 )
  {
    v7 = *a3;
    v8 = *a2;
    v14 = *((_DWORD *)a2 + 6);
    v9 = *((_QWORD *)a2 + 2);
    v10 = *(void (__fastcall **)(__int64 *, __int128 *))(v7 + 24);
    v12 = v8;
    v13 = v9;
    v10(a3, &v12);
  }
  return (unsigned int)v6;
}
