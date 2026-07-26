/*
 * XREFs of ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00C4810
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0j @ 0x1C00400F8 (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0040160 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C004023C (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C00402C0 (McTemplateK0qxqqq.c)
 *     WPP_SF_DDDDDDDDDDD @ 0x1C0040710 (WPP_SF_DDDDDDDDDDD.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_ddLLL @ 0x1C0040E38 (WPP_SF_ddLLL.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

void __fastcall ndisNsiClientParameterChangeHandler(unsigned __int64 a1, int **a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int *v8; // r14
  __int64 v9; // [rsp+28h] [rbp-70h]

  v4 = a4;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(0x6Au, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3, a4);
  v8 = *a2;
  if ( *a2 && a1 <= 7 )
  {
    if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 1:
          if ( (unsigned __int8)byte_1C009875D >= 4u )
            WPP_SF_dd(
              0x6Cu,
              &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids,
              *((unsigned __int16 *)v8 + 3),
              (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            McTemplateK0qx(
              (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
              (__int64)a2,
              (__int64)a3,
              *((unsigned __int16 *)*a2 + 3),
              (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
          break;
        case 6:
          if ( (unsigned __int8)byte_1C009875D >= 4u )
          {
            WPP_SF_DDDDDDDDDDD(
              0x6Du,
              &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids,
              *v8,
              *((unsigned __int16 *)v8 + 2));
            v4 = a4;
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            McTemplateK0j(a1, (__int64)a2, (__int64)a3, (__int64)v8);
          break;
        case 7:
          if ( (unsigned __int8)byte_1C009875D >= 4u )
            WPP_SF_d(0x6Eu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, *v8);
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            McTemplateK0q(a1, &ChangeNotificationCompartment, &NDIS_PROVIDER_ID, **a2);
          break;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C009875D >= 4u )
        WPP_SF_ddLLL(a1, (__int64)a2, *((unsigned __int16 *)v8 + 3), (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
        McTemplateK0qxqqq(
          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
          (__int64)a2,
          (__int64)a3,
          *((unsigned __int16 *)*a2 + 3),
          BYTE3(*(_QWORD *)*a2),
          *a3,
          a3[4],
          a3[5]);
    }
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    LODWORD(v9) = v4;
    WPP_SF_qqqL(0x6Fu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3, v9);
  }
}
