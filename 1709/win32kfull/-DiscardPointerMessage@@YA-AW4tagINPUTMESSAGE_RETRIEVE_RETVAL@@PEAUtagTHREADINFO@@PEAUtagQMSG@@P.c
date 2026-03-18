/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01CAE8C
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01CC920 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  char *v9; // rbx
  unsigned int v10; // edi
  int v12; // [rsp+78h] [rbp-1h] BYREF
  __int64 v13; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v15; // [rsp+90h] [rbp+17h] BYREF
  struct tagQMSG *v16; // [rsp+98h] [rbp+1Fh] BYREF
  unsigned int v17; // [rsp+E0h] [rbp+67h] BYREF
  int v18; // [rsp+F0h] [rbp+77h] BYREF
  int v19; // [rsp+F4h] [rbp+7Bh]

  v19 = HIDWORD(a4);
  v18 = 1;
  v7 = 0LL;
  v8 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(unsigned int *)(a2 + 24),
         *(unsigned int *)(a2 + 24),
         0,
         1,
         &v18,
         (struct tagQMSG *)a2,
         &v13,
         &v17,
         &v14,
         &v15,
         &v12,
         &v16);
  v9 = (char *)a5;
  v10 = v8;
  if ( a5 && v8 == 1 )
  {
    memset(a5, 0, 0x30uLL);
    if ( v13 )
      v7 = *(_QWORD *)v13;
    *((_DWORD *)v9 + 2) = v17;
    *((_QWORD *)v9 + 2) = v14;
    *((_QWORD *)v9 + 3) = v15;
    *(_QWORD *)v9 = v7;
    *((_DWORD *)v9 + 8) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v10 != 2 )
    DelQEntry((_QWORD *)(*(_QWORD *)(a1 + 408) + 24LL), a2);
  return v10;
}
