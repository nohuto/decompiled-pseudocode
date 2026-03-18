/*
 * XREFs of MiStoreLogFullPagefile @ 0x140220BF4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void MiStoreLogFullPagefile()
{
  UINT32 cData; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  const GUID *v3; // [rsp+20h] [rbp-58h]
  const GUID *v4; // [rsp+28h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_14036CFD8, 2uLL) )
      TlgWriteEx(v2, &unk_1402ACCD9, v1, (ULONG)v2, v3, v4, cData, &pData);
  }
}
