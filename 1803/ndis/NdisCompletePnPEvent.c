/*
 * XREFs of NdisCompletePnPEvent @ 0x1C0065370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisCompletePnPEvent(int a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v6; // rcx

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xCu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2);
  v6 = *(struct _KEVENT **)(a3 + 24);
  *(_DWORD *)(a3 + 32) = a1;
  KeSetEvent(v6, 0, 0);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xDu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2);
}
