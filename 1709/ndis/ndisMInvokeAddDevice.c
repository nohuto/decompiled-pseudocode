/*
 * XREFs of ndisMInvokeAddDevice @ 0x1C00C16BC
 * Callers:
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeAddDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  unsigned int v4; // esi
  int v6; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0xCAu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1, a1);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v1 + 784))(a1, *(_QWORD *)(v1 + 64));
  v4 = v3;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v6 = v3;
    WPP_SF_qqd(0xCBu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1, a1, v6);
  }
  return v4;
}
