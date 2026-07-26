/*
 * XREFs of ndisMSetNative802_11Attributes @ 0x1C00DE804
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AA760 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Duplicate802_11AttachAttributes @ 0x1C00789D8 (Duplicate802_11AttachAttributes.c)
 */

__int64 __fastcall ndisMSetNative802_11Attributes(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v6; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x74u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  if ( *(_QWORD *)(a1 + 768) )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    v6 = Duplicate802_11AttachAttributes(
           _byteswap_ushort(*(_WORD *)(*(_QWORD *)(a1 + 3784) + 24LL)),
           a2,
           a3,
           a4,
           (__int64)&v8);
    if ( v6 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x75u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
    }
    else
    {
      *(_QWORD *)(a1 + 768) = v8;
    }
  }
  return v6;
}
