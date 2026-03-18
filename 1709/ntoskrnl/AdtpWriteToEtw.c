/*
 * XREFs of AdtpWriteToEtw @ 0x1405D08F8
 * Callers:
 *     SepRmCallLsa @ 0x14014C140 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x14014C4C0 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x14014C514 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x14014C5B0 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x140154268 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1405D0B90 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  __int16 v6; // r15
  int v7; // edi
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned int v10; // eax
  char v11; // cl
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  char *v20; // rax
  bool v22; // cc
  unsigned __int16 v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27; // [rsp+52h] [rbp-AEh]
  __int16 v28; // [rsp+53h] [rbp-ADh]
  char v29; // [rsp+55h] [rbp-ABh]
  __int16 v30; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  _BYTE v32[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v33; // [rsp+1A0h] [rbp+A0h] BYREF
  char v34; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v35[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v36[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v23[0] = 0;
  memset(v36, 0, sizeof(v36));
  memset(v32, 0, sizeof(v32));
  memset(v35, 0, sizeof(v35));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = -1073741811;
    goto LABEL_23;
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = AdtpPackageParameters(a1, 0LL, v5, (__int64)v36, (__int64)v32, (__int64)&v33, v23, (__int64)v35);
  if ( v7 < 0 )
  {
    v4 = v23[0];
    goto LABEL_23;
  }
  v8 = *(_WORD *)(a1 + 16);
  if ( v8 && (int)AdtpGetCategoryAndSubCategoryId(v8, &v24, &v25) >= 0 )
  {
    v9 = (unsigned __int16)(v24 + 48) << 8;
    LOWORD(v9) = v25 + ((v24 + 48) << 8);
  }
  else
  {
    v9 = 65280LL;
  }
  v10 = *(_DWORD *)(a1 + 4);
  v11 = 2;
  if ( v10 > 0x12D0 )
  {
    if ( v10 > 0x154C )
    {
      if ( v10 == 5632 )
        goto LABEL_30;
      if ( v10 <= 0x187F )
        goto LABEL_29;
      if ( v10 <= 0x1881 )
        goto LABEL_15;
      v22 = v10 <= 0x1883;
    }
    else
    {
      if ( v10 >= 0x154B || v10 == 5125 || v10 == 5140 )
        goto LABEL_30;
      if ( v10 <= 0x1423 )
        goto LABEL_29;
      v22 = v10 <= 0x1425;
    }
    if ( !v22 )
      goto LABEL_29;
LABEL_30:
    v11 = 1;
    goto LABEL_15;
  }
  if ( v10 == 4816 )
    goto LABEL_30;
  v12 = v10 - 4616;
  if ( !v12 )
    goto LABEL_30;
  v13 = v12 - 8;
  if ( v13 )
  {
    v14 = v13 - 30;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        v16 = v15 - 5;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 == 25 )
              goto LABEL_15;
LABEL_29:
            v11 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    goto LABEL_30;
  }
LABEL_15:
  v26 = *(_WORD *)(a1 + 4);
  v18 = 0x8020000000000000uLL;
  v27 = v11;
  if ( v6 != 8 )
    v18 = 0x8010000000000000uLL;
  v29 = 0;
  v31 = v18;
  v19 = 0;
  v28 = 10;
  v4 = v23[0];
  v30 = v9;
  if ( !v23[0] )
    goto LABEL_21;
  v20 = &v34;
  v9 = v23[0];
  do
  {
    v19 += *(_DWORD *)v20;
    v20 += 16;
    --v9;
  }
  while ( v9 );
  if ( v19 > 0xDC00 )
  {
    *a2 = 1;
    v7 = -2147483643;
  }
  else
  {
LABEL_21:
    v7 = EtwWriteKMSecurityEvent((__int64)&v26, v9, v23[0], (unsigned __int64)&v33 & -(__int64)(v23[0] != 0));
    if ( v7 == -1073741058 )
      *a2 = 1;
  }
LABEL_23:
  AdtpCleanupParameterAllocations(v35, &v33, v4);
  return (unsigned int)v7;
}
