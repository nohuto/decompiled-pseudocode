/*
 * XREFs of MiStoreLogWriteDisabled @ 0x140220CFC
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void MiStoreLogWriteDisabled()
{
  int v0; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  int v3; // r10d
  int v4; // r11d
  const GUID *v5; // [rsp+20h] [rbp-98h]
  const GUID *v6; // [rsp+28h] [rbp-90h]
  int v7; // [rsp+40h] [rbp-78h] BYREF
  int v8; // [rsp+44h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  int *v10; // [rsp+70h] [rbp-48h]
  int v11; // [rsp+78h] [rbp-40h]
  int v12; // [rsp+7Ch] [rbp-3Ch]
  int *v13; // [rsp+80h] [rbp-38h]
  int v14; // [rsp+88h] [rbp-30h]
  int v15; // [rsp+8Ch] [rbp-2Ch]

  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_14036CFD8, 2uLL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v13 = &v8;
      v7 = v4;
      v8 = v3;
      v11 = v0 + 2;
      v14 = v0 + 2;
      TlgWriteEx(v2, &unk_1402ACCFB, v1, (ULONG)v2, v5, v6, v0 + 2, &pData);
    }
  }
}
