/*
 * XREFs of ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x18001BFB0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x18001BD48 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTest(__int64 a1, __int128 *a2, __int64 *a3)
{
  __int64 v5; // xmm1_8
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]

  v5 = *((_QWORD *)a2 + 2);
  v13 = *a2;
  v14 = v5;
  v15 = *((_DWORD *)a2 + 6);
  v6 = DWMInputRouter::RequestViewHitTestHelper(a1 - 24, (__int64)&v13, a2);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( a3 )
    {
      v9 = *a2;
      v15 = *((_DWORD *)a2 + 6);
      v10 = *((_QWORD *)a2 + 2);
      v11 = *a3;
      v13 = v9;
      v14 = v10;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v11 + 24))(a3, &v13);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 2145, v6);
  }
  return v8;
}
