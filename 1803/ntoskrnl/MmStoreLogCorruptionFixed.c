/*
 * XREFs of MmStoreLogCorruptionFixed @ 0x140267CAC
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1402A4F98 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x14007A058 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MmStoreLogCorruptionFixed(char *a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  __int16 v6; // di
  PHYSICAL_ADDRESS v7; // r15
  __int64 v8; // r9
  const struct _TlgProvider_t *v9; // r10
  int v10; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  char *v12; // [rsp+48h] [rbp-61h] BYREF
  PHYSICAL_ADDRESS v13; // [rsp+50h] [rbp-59h] BYREF
  __int64 v14; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  char **v16; // [rsp+80h] [rbp-29h]
  int v17; // [rsp+88h] [rbp-21h]
  int v18; // [rsp+8Ch] [rbp-1Dh]
  int *v19; // [rsp+90h] [rbp-19h]
  int v20; // [rsp+98h] [rbp-11h]
  int v21; // [rsp+9Ch] [rbp-Dh]
  int *v22; // [rsp+A0h] [rbp-9h]
  int v23; // [rsp+A8h] [rbp-1h]
  int v24; // [rsp+ACh] [rbp+3h]
  PHYSICAL_ADDRESS *v25; // [rsp+B0h] [rbp+7h]
  int v26; // [rsp+B8h] [rbp+Fh]
  int v27; // [rsp+BCh] [rbp+13h]
  __int64 *v28; // [rsp+C0h] [rbp+17h]
  int v29; // [rsp+C8h] [rbp+1Fh]
  int v30; // [rsp+CCh] [rbp+23h]

  v4 = a2;
  v6 = (__int16)a1;
  if ( hProvider )
  {
    v7.QuadPart = MmGetPhysicalAddress(a1).QuadPart / 4096;
    if ( (((v6 & 0xFFF) + v4 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 )
      MmGetPhysicalAddress(&a1[(unsigned int)(v4 - 1)]);
    if ( hProvider->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(hProvider, 0x400000000002uLL) )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v16 = &v12;
        v12 = a1;
        v19 = &v10;
        v22 = &v11;
        v25 = &v13;
        v28 = &v14;
        v10 = v4;
        v11 = a3;
        v13 = v7;
        v14 = v8;
        v17 = 8;
        v20 = 4;
        v23 = 4;
        v26 = 8;
        v29 = 8;
        TlgWriteEx(v9, &unk_14030A490, 0LL, 1u, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
