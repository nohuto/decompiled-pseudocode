/*
 * XREFs of xxxCallJournalRecordHook @ 0x1C01C13AC
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00CBF64 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 */

__int16 __fastcall xxxCallJournalRecordHook(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  __int64 GlobalValid; // rax
  int v7; // ecx
  __int16 result; // ax
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+34h] [rbp-1Ch]
  _QWORD v11[2]; // [rsp+3Ch] [rbp-14h] BYREF
  int v12; // [rsp+60h] [rbp+10h] BYREF

  memset(v11, 0, 12);
  v10 = 0LL;
  v9 = *(_DWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 16);
  LODWORD(v11[0]) = v2;
  if ( HMValidateHandleNoSecure(v3, 1) )
    *(_QWORD *)((char *)v11 + 4) = *(_QWORD *)(a1 + 16);
  else
    *(_QWORD *)((char *)v11 + 4) = 0LL;
  if ( (unsigned int)(v9 - 512) > 0xE )
  {
    if ( (unsigned int)(v9 - 256) <= 9 )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 42);
      if ( *(_WORD *)(a1 + 32) != 231 || (_BYTE)v4 )
        LODWORD(v10) = *(unsigned __int8 *)(a1 + 32) | ((unsigned __int8)v4 << 8);
      else
        LODWORD(v10) = (*(unsigned __int16 *)(gptiCurrent + 762LL) << 16) | 0xE7;
      v5 = *(_DWORD *)(a1 + 40);
      HIDWORD(v10) = (unsigned __int8)v4;
      if ( (v5 & 0x1000000) != 0 )
        HIDWORD(v10) = (unsigned __int8)v4 | 0x8000;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 52);
  }
  GlobalValid = PhkFirstGlobalValid(gptiCurrent, 0, v4);
  xxxCallHook2(GlobalValid, 0, 0LL, &v9, &v12);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v7 - 512) > 0xE )
  {
    result = v7 - 256;
    if ( (unsigned int)(v7 - 256) <= 9 )
    {
      *(_BYTE *)(a1 + 32) = v10;
      result = BYTE1(v10);
      *(_BYTE *)(a1 + 42) = BYTE1(v10);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = v10;
    result = WORD2(v10);
    *(_DWORD *)(a1 + 56) = HIDWORD(v10);
  }
  return result;
}
