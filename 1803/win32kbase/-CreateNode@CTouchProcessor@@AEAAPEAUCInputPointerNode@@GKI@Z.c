/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C010FB2C
 * Callers:
 *     ?CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z @ 0x1C010F8EC (-CreateInputPointerNode@CTouchProcessor@@AEAA_NPEAUtagPOINTEREVENTINT@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C011E4F0 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0113F78 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C011B80C (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int16 v6; // r14
  PDEVICE_OBJECT v8; // rcx
  char *v9; // rbx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  _QWORD *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // rdi
  __int64 v19; // rax

  v6 = a2;
  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xF2u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2);
  if ( a3 < 2 || a3 > 3 && a3 != 5 )
  {
    WPP_RECORDER_SF_D(
      *((_QWORD *)this + 1),
      2u,
      0xBu,
      0xF3u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids,
      a3);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 244;
      goto LABEL_25;
    }
    return 0LL;
  }
  v9 = (char *)Win32AllocPoolZInit(0x150uLL, 0x70697355u);
  if ( !v9 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xF5u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 246;
LABEL_25:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  *((_WORD *)v9 + 16) = CTouchProcessor::GetNextPointerId(this);
  *((_DWORD *)v9 + 10) = a3;
  *((_WORD *)v9 + 17) = v6;
  v12 = v9 + 16;
  *((_QWORD *)v9 + 37) = v9 + 288;
  *((_QWORD *)v9 + 36) = v9 + 288;
  *((_QWORD *)v9 + 35) = v9 + 272;
  *((_QWORD *)v9 + 34) = v9 + 272;
  *((_QWORD *)v9 + 40) = v9 + 312;
  *((_QWORD *)v9 + 39) = v9 + 312;
  *((_QWORD *)v9 + 1) = v9;
  *(_QWORD *)v9 = v9;
  *((_QWORD *)v9 + 3) = v9 + 16;
  *((_QWORD *)v9 + 2) = v9 + 16;
  v13 = *((_DWORD *)v9 + 82) & 0xFFFFF4BF;
  *((_WORD *)v9 + 152) = 0;
  *((_DWORD *)v9 + 9) = 0;
  *((_DWORD *)v9 + 82) = v13 | 0x480;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(this, a4, (struct CInputPointerNode *)v9) )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xF7u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    Win32FreePool((__int64)v9);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 248;
      goto LABEL_25;
    }
    return 0LL;
  }
  if ( *((_DWORD *)v9 + 9) == 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  v16 = (_QWORD *)((char *)this + 136);
  v17 = *((_QWORD *)this + 17);
  if ( *(CTouchProcessor **)(v17 + 8) != (CTouchProcessor *)((char *)this + 136) )
    __fastfail(3u);
  *(_QWORD *)v9 = v17;
  v18 = (char *)this + 152;
  *((_QWORD *)v9 + 1) = v16;
  *(_QWORD *)(v17 + 8) = v9;
  *v16 = v9;
  v19 = *(_QWORD *)v18;
  if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
    __fastfail(3u);
  *v12 = v19;
  *((_QWORD *)v9 + 3) = v18;
  *(_QWORD *)(v19 + 8) = v12;
  *(_QWORD *)v18 = v12;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xF9u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return (struct CInputPointerNode *)v9;
}
