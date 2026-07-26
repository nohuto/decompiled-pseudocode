/*
 * XREFs of NdisCompletePnPEvent @ 0x1C0064830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall NdisCompletePnPEvent(int a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xCu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2);
  v6 = *(struct _KEVENT **)(a3 + 24);
  *(_DWORD *)(a3 + 32) = a1;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xDu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2);
}
