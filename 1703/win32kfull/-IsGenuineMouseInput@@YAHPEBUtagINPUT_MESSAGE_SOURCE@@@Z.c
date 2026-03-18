/*
 * XREFs of ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0049220
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010B570 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGenuineMouseInput(const struct tagINPUT_MESSAGE_SOURCE *a1)
{
  unsigned int v1; // r8d
  int v2; // eax

  if ( (unsigned __int64)a1 <= 0x79 )
    return 0LL;
  v1 = 0;
  if ( (HIDWORD(gMouseKeys) & 1) == 0 )
    goto LABEL_3;
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 2 )
  {
LABEL_4:
    if ( ((v2 - 18) & 0xFFFFFFEF) != 0 )
      return v1;
LABEL_6:
    if ( (unsigned int)(*((_DWORD *)a1 + 1) - 1) <= 1 )
      return 1;
    return v1;
  }
  if ( *((_DWORD *)a1 + 1) )
  {
LABEL_3:
    v2 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 2 )
      goto LABEL_6;
    goto LABEL_4;
  }
  return 1LL;
}
