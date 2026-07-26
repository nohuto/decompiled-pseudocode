/*
 * XREFs of NdisMReadConfigBlock @ 0x1C00EEFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall NdisMReadConfigBlock(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edi

  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x7Fu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, (__int64)a1);
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[611];
  if ( v8 && (v9 = a1[612]) != 0 && (v10 = a1[580]) != 0 && (*(_BYTE *)(v10 + 8) & 5) == 5 )
    v11 = v8(v9, a2, a3, a4);
  else
    v11 = -1073741637;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x80u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, (__int64)a1);
  return v11;
}
