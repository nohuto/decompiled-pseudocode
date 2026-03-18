/*
 * XREFs of CmpLogFailureToGetFileSize @ 0x14066DF10
 * Callers:
 *     CmpInitializeActualFileSizes @ 0x1404D3A34 (CmpInitializeActualFileSizes.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void CmpLogFailureToGetFileSize()
{
  int v0; // r9d
  char v1; // r10
  char v2; // [rsp+30h] [rbp-78h] BYREF
  int v3; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  char *v5; // [rsp+60h] [rbp-48h]
  int v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+6Ch] [rbp-3Ch]
  int *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]

  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_14033C3C0, 0x400000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v5 = &v2;
      v8 = &v3;
      v2 = v1;
      v3 = v0;
      v6 = 1;
      v9 = 4;
      TlgWrite(&stru_14033C3C0, &unk_1402AB2A5, 0LL, 0LL, 4u, &pData);
    }
  }
}
