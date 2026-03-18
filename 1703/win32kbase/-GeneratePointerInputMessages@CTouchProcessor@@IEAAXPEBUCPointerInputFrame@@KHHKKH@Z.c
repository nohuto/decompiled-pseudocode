/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C0120040
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0127E00 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0129854 (WPP_RECORDER_SF_LL.c)
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
  const struct CPointerInputFrame *v10; // rdi
  PDEVICE_OBJECT v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-118h]
  _BYTE v18[208]; // [rsp+40h] [rbp-F8h] BYREF

  v10 = a2;
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      200,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v12 = WPP_GLOBAL_Control;
  }
  v13 = 0;
  v14 = *((_QWORD *)v10 + 12);
  if ( *((_DWORD *)v10 + 12) )
  {
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(
             (CTouchProcessor *)v12,
             v10,
             (const struct CPointerInfoNode *)v14,
             a8) )
      {
        if ( (*(_DWORD *)v14 & 0x1000) == 0 )
        {
          LODWORD(a2) = *(_DWORD *)(v14 + 260);
          LOBYTE(v12) = (a6 & (unsigned int)a2) == a6;
          if ( ((unsigned __int8)v12 & (((unsigned int)a2 & a7) == 0)) != 0 && (*(_DWORD *)v14 & 0x80000) == 0 )
          {
            memset(v18, 0, 0xC8uLL);
            v15 = *(_QWORD *)(v14 + 16);
            v18[192] = 0;
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (__int64)this,
                                  v14,
                                  v15,
                                  0,
                                  a3,
                                  a4,
                                  a5,
                                  (CInputDest *)v18) )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_LL(
                *((_QWORD *)this + 1),
                (_DWORD)a2,
                v16,
                201,
                v17,
                *(_WORD *)(v14 + 252),
                *(_WORD *)(v14 + 240));
            }
          }
        }
      }
      v14 += 608LL;
      ++v13;
    }
    while ( v13 < *((_DWORD *)v10 + 12) );
    v12 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v12->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      v12->DeviceExtension,
      (_DWORD)a2,
      11,
      202,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
}
