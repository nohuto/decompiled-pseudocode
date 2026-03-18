/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011EEA8
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C012748C (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C01291A0 (WPP_RECORDER_SF_LL.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  CTouchProcessor *v12; // rcx
  unsigned int v13; // esi
  __int64 i; // rbx
  __int64 v15; // r8
  int v16; // edx
  int v17; // r8d
  int v18; // [rsp+20h] [rbp-118h]
  _BYTE v19[208]; // [rsp+40h] [rbp-F8h] BYREF

  v12 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC8u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v13 = 0;
  for ( i = *((_QWORD *)a2 + 12); v13 < *((_DWORD *)a2 + 12); ++v13 )
  {
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v12, a2, (const struct CPointerInfoNode *)i, a8) )
    {
      if ( (*(_DWORD *)i & 0x1000) == 0 )
      {
        LOBYTE(v12) = (a6 & *(_DWORD *)(i + 260)) == a6;
        if ( ((unsigned __int8)v12 & ((*(_DWORD *)(i + 260) & a7) == 0)) != 0 && (*(_DWORD *)i & 0x80000) == 0 )
        {
          memset(v19, 0, 0xC8uLL);
          v15 = *(_QWORD *)(i + 16);
          v19[192] = 0;
          if ( !(unsigned int)CTouchProcessor::GenerateMessage((__int64)this, i, v15, 0, a3, a4, a5, (CInputDest *)v19) )
          {
            LOBYTE(v16) = 2;
            WPP_RECORDER_SF_LL(*((_QWORD *)this + 1), v16, v17, 201, v18, *(_WORD *)(i + 252), *(_WORD *)(i + 240));
          }
        }
      }
    }
    i += 608LL;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xCAu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
}
