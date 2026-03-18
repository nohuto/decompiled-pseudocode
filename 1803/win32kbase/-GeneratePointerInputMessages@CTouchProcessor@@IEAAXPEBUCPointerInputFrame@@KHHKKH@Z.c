/*
 * XREFs of ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C011384C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C011D810 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     WPP_RECORDER_SF_LL @ 0x1C011F908 (WPP_RECORDER_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GeneratePointerInputMessages(
        struct _KTHREAD **this,
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
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned __int64 i; // rbx
  CTouchProcessor *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  int v19; // r8d
  int v20; // [rsp+20h] [rbp-108h]
  _BYTE v21[192]; // [rsp+40h] [rbp-E8h] BYREF

  v10 = a2;
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD7u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2);
  v13 = *((unsigned int *)v10 + 12);
  v14 = 0;
  for ( i = *((_QWORD *)v10 + 12); v14 < (unsigned int)v13; ++v14 )
  {
    v16 = (CTouchProcessor *)(*((_QWORD *)v10 + 12) + 576 * v13);
    if ( i >= (unsigned __int64)v16 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, a2);
    if ( CTouchProcessor::ShouldGenerateMessagesForNode(v16, v10, (const struct CPointerInfoNode *)i, a8) )
    {
      if ( (*(_DWORD *)i & 0x1000) == 0 )
      {
        a2 = (const struct CPointerInputFrame *)*(unsigned int *)(i + 244);
        LOBYTE(v17) = (a6 & *(_DWORD *)(i + 244)) == a6;
        if ( ((unsigned __int8)v17 & (((unsigned int)a2 & a7) == 0)) != 0 )
        {
          if ( (*(_DWORD *)i & 0x80000) == 0
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, a2), (*(_DWORD *)i & 0x80000) == 0) )
          {
            memset(v21, 0, 0xB8uLL);
            v18 = *(_QWORD *)(i + 16);
            v21[176] = 0;
            if ( !(unsigned int)CTouchProcessor::GenerateMessage(
                                  (__int64 *)this,
                                  i,
                                  v18,
                                  0,
                                  a3,
                                  a4,
                                  a5,
                                  (CInputDest *)v21) )
            {
              LOBYTE(a2) = 2;
              WPP_RECORDER_SF_LL(
                (unsigned int)this[1],
                (_DWORD)a2,
                v19,
                216,
                v20,
                *(_WORD *)(i + 236),
                *(_WORD *)(i + 224));
            }
          }
        }
      }
    }
    v13 = *((unsigned int *)v10 + 12);
    i += 576LL;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xD9u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
}
