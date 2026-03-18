/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00D33CC
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C00D3150 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

char __fastcall BmlIsSupportedPathRotation(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  __int32 v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int32 v6; // eax
  __int32 v7; // eax
  unsigned int v8; // eax
  char v9; // r8
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r10d
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax

  v2 = a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v6 = v3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          goto LABEL_17;
        v8 = v5 >> 3;
      }
      else
      {
        v8 = v5 >> 2;
      }
    }
    else
    {
      v8 = v5 >> 1;
    }
  }
  else
  {
    LOBYTE(v8) = v5;
  }
  v9 = 1;
  if ( (v8 & 1) == 0 )
    return 0;
  v4 = (unsigned int)(v2 - 1);
  v10 = v2;
  if ( (unsigned int)v4 <= 0xF )
  {
    v4 = 4LL;
    v10 = ((int)v2 - 1) / 4 + 1;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12 = v5 >> 4;
    goto LABEL_11;
  }
  v15 = v11 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v12 = v5 >> 7;
        goto LABEL_11;
      }
LABEL_17:
      v14 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v14 + 24) = v2;
      WdLogEvent5_WdAssertion(v14);
      return 0;
    }
    v12 = v5 >> 6;
  }
  else
  {
    v12 = v5 >> 5;
  }
LABEL_11:
  if ( (v12 & 1) == 0 )
    return 0;
  return v9;
}
