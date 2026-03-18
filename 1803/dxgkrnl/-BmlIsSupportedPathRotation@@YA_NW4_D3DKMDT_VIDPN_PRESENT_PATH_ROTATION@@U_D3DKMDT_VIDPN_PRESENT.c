/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00C2A88
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C00C2AE0 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00072FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000731C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

unsigned __int8 __fastcall BmlIsSupportedPathRotation(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  __int32 v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // r10d
  unsigned int v6; // eax
  __int32 v7; // eax
  unsigned __int8 v8; // r8
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  __int32 v12; // eax
  __int32 v13; // eax
  __int64 v14; // rax
  __int32 v15; // eax
  __int32 v16; // eax

  v2 = a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v12 = v3 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
          goto LABEL_13;
        v6 = v5 >> 3;
      }
      else
      {
        v6 = v5 >> 2;
      }
    }
    else
    {
      v6 = v5 >> 1;
    }
  }
  else
  {
    LOBYTE(v6) = v5;
  }
  if ( (v6 & 1) == 0 )
    return 0;
  v7 = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v2) - 1;
  if ( !v7 )
  {
    v10 = v9 >> 4;
    goto LABEL_6;
  }
  v15 = v7 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v10 = v9 >> 7;
        goto LABEL_6;
      }
LABEL_13:
      v14 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdAssertion(v14);
      return 0;
    }
    v10 = v9 >> 6;
  }
  else
  {
    v10 = v9 >> 5;
  }
LABEL_6:
  if ( ((unsigned __int8)v10 & v8) == 0 )
    return 0;
  return v8;
}
