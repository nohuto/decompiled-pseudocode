/*
 * XREFs of ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00F2A78
 * Callers:
 *     BmlPinPathContentRotation @ 0x1C00F2724 (BmlPinPathContentRotation.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 */

bool __fastcall BmlIsSupportedPathRotation(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT a2)
{
  __int64 v2; // rbx
  __int32 v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r10d
  __int32 v9; // eax
  __int32 v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r10d
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax

  v2 = a1;
  v3 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1) - 1;
  if ( v3 )
  {
    v9 = v3 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          goto LABEL_17;
        v11 = v8 >> 3;
      }
      else
      {
        v11 = v8 >> 2;
      }
    }
    else
    {
      v11 = v8 >> 1;
    }
  }
  else
  {
    LOBYTE(v11) = v8;
  }
  v6 = 1LL;
  if ( (v11 & 1) == 0 )
  {
LABEL_16:
    LOBYTE(v6) = 0;
    return v6;
  }
  v5 = (unsigned int)(v2 - 1);
  v12 = v2;
  if ( (unsigned int)v5 <= 0xF )
  {
    v5 = 4LL;
    v4 = (unsigned int)(((int)v2 - 1) >> 31);
    LODWORD(v4) = ((int)v2 - 1) % 4;
    v12 = ((int)v2 - 1) / 4 + 1;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = v8 >> 4;
    goto LABEL_11;
  }
  v17 = v13 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v14 = v8 >> 7;
        goto LABEL_11;
      }
LABEL_17:
      v16 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
      *(_QWORD *)(v16 + 24) = v2;
      WdLogEvent5_WdAssertion(v16);
      goto LABEL_16;
    }
    v14 = v8 >> 6;
  }
  else
  {
    v14 = v8 >> 5;
  }
LABEL_11:
  if ( (v14 & 1) == 0 )
    goto LABEL_16;
  return v6;
}
