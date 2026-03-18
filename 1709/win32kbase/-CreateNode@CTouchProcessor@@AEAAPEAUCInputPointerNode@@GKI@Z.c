/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011BA34
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C0127FAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0125BA4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int16 a2,
        unsigned int a3,
        unsigned int a4)
{
  char *v8; // rbx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  __int16 v11; // cx
  _QWORD *v12; // rsi
  unsigned int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  char *v16; // rdi
  __int64 v17; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xDFu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( a3 < 2 || a3 > 3 && a3 != 5 )
  {
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 1),
      2u,
      0xBu,
      0xE0u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids,
      a3);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 225;
      goto LABEL_23;
    }
    return 0LL;
  }
  v8 = (char *)Win32AllocPoolZInit(0x160uLL, 1885958997LL);
  if ( !v8 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xE2u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 227;
LABEL_23:
      WPP_RECORDER_SF_(
        (__int64)v9->DeviceExtension,
        5u,
        0xBu,
        v10,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  v11 = *((_WORD *)this + 164);
  *((_WORD *)this + 164) = v11 + 1;
  if ( (unsigned __int16)(v11 + 1) < 2u )
    *((_WORD *)this + 164) = 2;
  *((_WORD *)v8 + 16) = v11;
  *((_DWORD *)v8 + 10) = a3;
  *((_WORD *)v8 + 17) = a2;
  v12 = v8 + 16;
  *((_QWORD *)v8 + 39) = v8 + 304;
  *((_QWORD *)v8 + 38) = v8 + 304;
  *((_QWORD *)v8 + 37) = v8 + 288;
  *((_QWORD *)v8 + 36) = v8 + 288;
  *((_QWORD *)v8 + 42) = v8 + 328;
  *((_QWORD *)v8 + 41) = v8 + 328;
  *((_QWORD *)v8 + 1) = v8;
  *(_QWORD *)v8 = v8;
  *((_QWORD *)v8 + 3) = v8 + 16;
  *((_QWORD *)v8 + 2) = v8 + 16;
  v13 = *((_DWORD *)v8 + 86) & 0xFFFFF4BF;
  *((_WORD *)v8 + 160) = 0;
  *((_DWORD *)v8 + 9) = 0;
  *((_DWORD *)v8 + 86) = v13 | 0x480;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(this, a4, (struct CInputPointerNode *)v8) )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xE4u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    Win32FreePool((__int64)v8);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 229;
      goto LABEL_23;
    }
    return 0LL;
  }
  v14 = (_QWORD *)((char *)this + 296);
  v15 = *((_QWORD *)this + 37);
  if ( *(CTouchProcessor **)(v15 + 8) != (CTouchProcessor *)((char *)this + 296) )
    __fastfail(3u);
  *(_QWORD *)v8 = v15;
  v16 = (char *)this + 312;
  *((_QWORD *)v8 + 1) = v14;
  *(_QWORD *)(v15 + 8) = v8;
  *v14 = v8;
  v17 = *(_QWORD *)v16;
  if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
    __fastfail(3u);
  *v12 = v17;
  *((_QWORD *)v8 + 3) = v16;
  *(_QWORD *)(v17 + 8) = v12;
  *(_QWORD *)v16 = v12;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE6u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  return (struct CInputPointerNode *)v8;
}
