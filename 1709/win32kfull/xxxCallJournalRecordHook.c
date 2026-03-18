/*
 * XREFs of xxxCallJournalRecordHook @ 0x1C01C4BB4
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 */

__int16 __fastcall xxxCallJournalRecordHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // dl
  int v8; // eax
  __int64 GlobalValid; // rax
  int v10; // ecx
  __int16 result; // ax
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+60h] [rbp+10h] BYREF

  v12 = 0LL;
  LOBYTE(a2) = 1;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v12) = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 16);
  HIDWORD(v13) = v5;
  if ( HMValidateHandleNoSecure(v6, a2, a3, a4) )
    v14 = *(_QWORD *)(a1 + 16);
  else
    v14 = 0LL;
  if ( (unsigned int)(v12 - 512) > 0xE )
  {
    if ( (unsigned int)(v12 - 256) <= 9 )
    {
      v7 = *(_BYTE *)(a1 + 42);
      if ( *(_WORD *)(a1 + 32) != 231 || v7 )
        HIDWORD(v12) = *(unsigned __int8 *)(a1 + 32) | (unsigned __int16)(v7 << 8);
      else
        HIDWORD(v12) = (*(unsigned __int16 *)(gptiCurrent + 850LL) << 16) | 0xE7;
      v8 = *(_DWORD *)(a1 + 40);
      LODWORD(v13) = v7;
      if ( (v8 & 0x1000000) != 0 )
        LODWORD(v13) = v7 | 0x8000;
    }
  }
  else
  {
    HIDWORD(v12) = *(_DWORD *)(a1 + 52);
    LODWORD(v13) = *(_DWORD *)(a1 + 56);
  }
  GlobalValid = PhkFirstGlobalValid(gptiCurrent, 0);
  xxxCallHook2(GlobalValid, 0, 0LL, (int *)&v12, &v15);
  v10 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v10 - 512) > 0xE )
  {
    result = v10 - 256;
    if ( (unsigned int)(v10 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = BYTE4(v12);
      result = HIBYTE(WORD2(v12));
      *(_BYTE *)(a1 + 42) = BYTE5(v12);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = HIDWORD(v12);
    result = v13;
    *(_DWORD *)(a1 + 56) = v13;
  }
  return result;
}
