/*
 * XREFs of AdtpWriteToEtw @ 0x14063D16C
 * Callers:
 *     SepRmCallLsa @ 0x1400C7970 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x14017E4E8 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x14017E53C (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x14017E5D8 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x1401818EC (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14063D3F8 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  __int16 v6; // r15
  __int64 v7; // rdx
  int v8; // edi
  unsigned __int16 v9; // ax
  __int16 v10; // r10
  unsigned int v11; // eax
  __int16 v12; // cx
  char v13; // r9
  __int16 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  char *v24; // rax
  unsigned __int16 v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v29; // [rsp+50h] [rbp-B0h] BYREF
  char v30; // [rsp+52h] [rbp-AEh]
  __int16 v31; // [rsp+53h] [rbp-ADh]
  char v32; // [rsp+55h] [rbp-ABh]
  __int16 v33; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h]
  _BYTE v35[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v36; // [rsp+1A0h] [rbp+A0h] BYREF
  char v37; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v38[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v39[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v26[0] = 0;
  memset(v39, 0, sizeof(v39));
  memset(v35, 0, sizeof(v35));
  memset(v38, 0, sizeof(v38));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v8 = -1073741811;
    goto LABEL_23;
  }
  v6 = *(_WORD *)(a1 + 18);
  v8 = AdtpPackageParameters(a1, 0LL, v5, (__int64)v39, (__int64)v35, (__int64)&v36, v26, (__int64)v38);
  if ( v8 < 0 )
  {
    v4 = v26[0];
    goto LABEL_23;
  }
  v9 = *(_WORD *)(a1 + 16);
  if ( v9 && (int)AdtpGetCategoryAndSubCategoryId(v9, &v27, &v28) >= 0 )
  {
    v7 = (unsigned __int16)(v27 + 48) << 8;
    LOWORD(v7) = v28 + ((v27 + 48) << 8);
    v10 = v7;
  }
  else
  {
    v10 = -256;
  }
  v11 = *(_DWORD *)(a1 + 4);
  v12 = v11;
  v13 = 2;
  if ( v11 > 0x13C3 )
  {
    if ( v11 > 0x154C )
    {
      if ( v11 != 5632 )
      {
        v7 = (unsigned __int16)v11;
        v14 = *(_DWORD *)(a1 + 4);
        if ( v11 <= 0x187F )
          goto LABEL_25;
        if ( v11 <= 0x1881 )
          goto LABEL_15;
        v12 = *(_DWORD *)(a1 + 4);
        if ( v11 > 0x1883 )
          goto LABEL_25;
      }
    }
    else if ( v11 < 0x154B )
    {
      v12 = *(_DWORD *)(a1 + 4);
      if ( v11 != 5125 && v11 != 5140 )
      {
        v7 = (unsigned __int16)v11;
        if ( v11 <= 0x1423 || v11 > 0x1425 )
          goto LABEL_25;
      }
    }
    goto LABEL_34;
  }
  if ( v11 >= 0x13C2 )
    goto LABEL_34;
  v14 = *(_DWORD *)(a1 + 4);
  v7 = (unsigned __int16)v11;
  v15 = v11 - 4616;
  if ( !v15 )
    goto LABEL_34;
  v16 = v15 - 8;
  if ( v16 )
  {
    v17 = v16 - 30;
    if ( v17 )
    {
      v18 = v17 - 2;
      if ( v18 )
      {
        v19 = v18 - 5;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            v21 = v20 - 25;
            if ( !v21 )
              goto LABEL_15;
            if ( v21 != 128 )
            {
LABEL_25:
              v13 = 0;
              v14 = v7;
              goto LABEL_15;
            }
          }
        }
      }
    }
LABEL_34:
    v13 = 1;
    v14 = v12;
  }
LABEL_15:
  v32 = 0;
  v29 = v14;
  v22 = 0x8020000000000000uLL;
  v30 = v13;
  if ( v6 != 8 )
    v22 = 0x8010000000000000uLL;
  v31 = 10;
  v34 = v22;
  v23 = 0;
  v33 = v10;
  v4 = v26[0];
  if ( !v26[0] )
    goto LABEL_21;
  v24 = &v37;
  v7 = v26[0];
  do
  {
    v23 += *(_DWORD *)v24;
    v24 += 16;
    --v7;
  }
  while ( v7 );
  if ( v23 > 0xDC00 )
  {
    *a2 = 1;
    v8 = -2147483643;
  }
  else
  {
LABEL_21:
    v8 = EtwWriteKMSecurityEvent((__int64)&v29, v7, v26[0], (unsigned __int64)&v36 & -(__int64)(v26[0] != 0));
    if ( v8 == -1073741058 )
      *a2 = 1;
  }
LABEL_23:
  AdtpCleanupParameterAllocations(v38, &v36, v4);
  return (unsigned int)v8;
}
