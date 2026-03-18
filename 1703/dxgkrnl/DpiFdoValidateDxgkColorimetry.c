/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1C01C5C54
 * Callers:
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0106620 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01C5D40 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(_DWORD *a1, unsigned int a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rdi
  _DWORD *v5; // rcx
  _BOOL8 v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax

  v2 = a1;
  v3 = a2;
  v5 = a1 + 2;
  if ( v2 < (_BYTE *)v5 )
  {
    while ( !*v2 )
    {
      if ( ++v2 >= (_BYTE *)v5 )
        goto LABEL_6;
    }
    v2 = 0LL;
  }
LABEL_6:
  if ( v2 )
    return 279LL;
  v7 = a1[9] == 0;
  if ( (a1[6] == 0) != v7 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, 0LL);
    v8[4] = 1LL;
LABEL_10:
    v8[3] = v3;
LABEL_11:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v9 = a1[11];
  if ( (v9 & 3) != 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, 0LL);
    v8[3] = (int)(a1[11] << 30) >> 30;
    v8[4] = v3;
    v8[5] = 2LL;
    goto LABEL_11;
  }
  if ( !v9 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, 0LL);
    v8[4] = 3LL;
    goto LABEL_10;
  }
  if ( a1[12] >= 8u )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v7, 0LL);
    v8[3] = (unsigned __int64)(unsigned int)a1[12] >> 3;
    v8[4] = v3;
    v8[5] = 4LL;
    goto LABEL_11;
  }
  return 0LL;
}
