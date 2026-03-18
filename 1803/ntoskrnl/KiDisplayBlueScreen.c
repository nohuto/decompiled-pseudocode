/*
 * XREFs of KiDisplayBlueScreen @ 0x140243D14
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     HeadlessDispatch @ 0x1401716E0 (HeadlessDispatch.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     RtlStringCbPrintfExA @ 0x14021F608 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x140230CF0 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x140233B00 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x140243938 (KeGetBugMessageText.c)
 *     KiDumpParameterImages @ 0x140244050 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1402441A8 (KiHeadlessDisplayString.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402C7278 (BgpFwDisplayBugCheckScreen.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  char *v5; // rdx
  unsigned __int16 v6; // cx
  _WORD *v7; // r8
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  char *v13; // rax
  int v14; // edi
  __int64 result; // rax
  unsigned __int16 *v16; // rdi
  unsigned __int16 *v17; // rbx
  char *v18; // rbx
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v22; // [rsp+78h] [rbp-90h]
  __int16 v23; // [rsp+7Ah] [rbp-8Eh]
  _WORD *v24; // [rsp+80h] [rbp-88h]
  char v25; // [rsp+88h] [rbp-80h] BYREF
  char v26; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v28[128]; // [rsp+D8h] [rbp-30h] BYREF
  char v29; // [rsp+1D8h] [rbp+D0h] BYREF

  LODWORD(ppszDestEnd[0]) = KiBugCheckData;
  LOBYTE(v19) = 1;
  HeadlessDispatch(14LL, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1LL, (__int64)&v19, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, (__int64)ppszDestEnd, 4LL, 0LL, 0LL);
  IoSaveBugCheckProgress(0x81u);
  v3 = KiBugCheckDriver;
  if ( KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v24 = v28;
  v23 = 256;
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)ppszDestEnd) )
  {
    v5 = ppszDestEnd[1];
    v4 = (unsigned __int16)ppszDestEnd[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v4 = LOWORD(ppszDestEnd[0]) - (unsigned __int16)pszDest;
    v5 = pszDest;
  }
  if ( v4 >= 0x7Fu )
    v4 = 127;
  v6 = 0;
  if ( v4 )
  {
    v6 = v4;
    v7 = v28;
    v8 = v4;
    do
    {
      v9 = *v5++;
      *v7++ = v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6;
  v11 = 4LL;
  v22 = 2 * v6;
  v12 = &v29;
  v28[v10] = 0;
  v13 = &v25;
  do
  {
    *((_QWORD *)v13 + 1) = v12;
    v12 += 38;
    *(_DWORD *)v13 = 2490404;
    v13 += 16;
    --v11;
  }
  while ( v11 );
  v21 = 0LL;
  InbvAcquireDisplayOwnership();
  IoSaveBugCheckProgress(0x82u);
  v14 = KiBugCheckData;
  BgpFwAcquireLock();
  if ( (dword_14039D7F0 & 2) != 0 )
    BgpFwDisplayBugCheckScreen(v14, (unsigned int)&qword_1403ADD08, v3, (unsigned int)&v21, a1);
  BgpFwReleaseLock();
  result = IoSaveBugCheckProgress(0x80u);
  v16 = (unsigned __int16 *)v21;
  if ( (_QWORD)v21 )
  {
    v17 = (unsigned __int16 *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(*((_QWORD *)v16 + 1), *v16);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(*((_QWORD *)v17 + 1), *v17);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(v24, v22);
      if ( KiBugCheckDriver )
      {
        KiHeadlessDisplayString(L"\r\n", 6LL);
        KiHeadlessDisplayString(*(_QWORD *)(KiBugCheckDriver + 8), *(unsigned __int16 *)KiBugCheckDriver);
      }
      KiHeadlessDisplayString(L"\r\n", 6LL);
      KiHeadlessDisplayString(L"\r\n", 6LL);
      v18 = &v26;
      do
      {
        KiHeadlessDisplayString(*(_QWORD *)v18, *((unsigned __int16 *)v18 - 4));
        KiHeadlessDisplayString(L"\r\n", 6LL);
        v18 += 16;
        --v2;
      }
      while ( v2 );
      return KiHeadlessDisplayString(L"\r\n", 6LL);
    }
  }
  return result;
}
