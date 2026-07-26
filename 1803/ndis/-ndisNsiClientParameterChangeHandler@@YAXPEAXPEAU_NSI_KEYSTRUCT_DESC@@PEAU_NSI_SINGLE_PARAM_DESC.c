/*
 * XREFs of ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00C84C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0j @ 0x1C00411D8 (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0041240 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C004131C (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C00413A0 (McTemplateK0qxqqq.c)
 *     WPP_SF_DDDDDDDDDDD @ 0x1C00417F0 (WPP_SF_DDDDDDDDDDD.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_ddLLL @ 0x1C0041FC8 (WPP_SF_ddLLL.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 */

void __fastcall ndisNsiClientParameterChangeHandler(unsigned __int64 a1, int **a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int *v8; // r14
  __int64 v9; // [rsp+28h] [rbp-70h]

  v4 = a4;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqL(0x6Au, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, a3, a4);
  v8 = *a2;
  if ( *a2 && a1 <= 7 )
  {
    if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 1:
          if ( (unsigned __int8)byte_1C009961D >= 4u )
            WPP_SF_dd(
              0x6Cu,
              &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids,
              HIWORD(*(_QWORD *)v8),
              (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            McTemplateK0qx(
              HIWORD(*(_QWORD *)*a2),
              (__int64)a2,
              (__int64)a3,
              HIWORD(*(_QWORD *)*a2),
              (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
          break;
        case 6:
          if ( (unsigned __int8)byte_1C009961D >= 4u )
          {
            WPP_SF_DDDDDDDDDDD(
              0x6Du,
              &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids,
              *v8,
              *((unsigned __int16 *)v8 + 2));
            v4 = a4;
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            McTemplateK0j(a1, (__int64)a2, (__int64)a3, (__int64)v8);
          break;
        case 7:
          if ( (unsigned __int8)byte_1C009961D >= 4u )
            WPP_SF_d(0x6Eu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, *v8);
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            McTemplateK0q(a1, &ChangeNotificationCompartment, &NDIS_PROVIDER_ID, **a2);
          break;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C009961D >= 4u )
        WPP_SF_ddLLL(a1, (__int64)a2, HIWORD(*(_QWORD *)v8), (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
        McTemplateK0qxqqq(
          HIWORD(*(_QWORD *)*a2),
          (__int64)a2,
          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
          HIWORD(*(_QWORD *)*a2),
          BYTE3(*(_QWORD *)*a2),
          *a3,
          a3[4],
          a3[5]);
    }
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    LODWORD(v9) = v4;
    WPP_SF_qqqL(0x6Fu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, a3, v9);
  }
}
