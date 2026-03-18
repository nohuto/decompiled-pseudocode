/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKI@Z @ 0x1C011CBD0
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C012876C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01265C4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        CTouchProcessor *this,
        __int16 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int16 v6; // r14
  char *v8; // rbx
  __int16 v9; // dx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r9d
  __int16 v12; // cx
  _QWORD *v13; // rsi
  unsigned int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  char *v17; // rdi
  __int64 v18; // rax

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      223,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( a3 < 2 || a3 > 3 && a3 != 5 )
  {
    WPP_RECORDER_SF_D(
      *((_QWORD *)this + 1),
      2u,
      0xBu,
      0xE0u,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids,
      a3);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 225;
      goto LABEL_23;
    }
    return 0LL;
  }
  v8 = (char *)Win32AllocPoolZInit(0x160uLL, 1885958997LL);
  if ( !v8 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2, 11, 226, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 227;
LABEL_23:
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(v10->DeviceExtension, v9, 11, v11, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  v12 = *((_WORD *)this + 152);
  *((_WORD *)this + 152) = v12 + 1;
  if ( (unsigned __int16)(v12 + 1) < 2u )
    *((_WORD *)this + 152) = 2;
  *((_WORD *)v8 + 16) = v12;
  *((_DWORD *)v8 + 10) = a3;
  *((_WORD *)v8 + 17) = v6;
  v13 = v8 + 16;
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
  v14 = *((_DWORD *)v8 + 86) & 0xFFFFF4BF;
  *((_WORD *)v8 + 160) = 0;
  *((_DWORD *)v8 + 9) = 0;
  *((_DWORD *)v8 + 86) = v14 | 0x480;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState(this, a4, (struct CInputPointerNode *)v8) )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2, 11, 228, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    Win32FreePool((__int64)v8);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 229;
      goto LABEL_23;
    }
    return 0LL;
  }
  v15 = (_QWORD *)((char *)this + 272);
  v16 = *((_QWORD *)this + 34);
  if ( *(CTouchProcessor **)(v16 + 8) != (CTouchProcessor *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v8 = v16;
  v17 = (char *)this + 288;
  *((_QWORD *)v8 + 1) = v15;
  *(_QWORD *)(v16 + 8) = v8;
  *v15 = v8;
  v18 = *(_QWORD *)v17;
  if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 )
    __fastfail(3u);
  *v13 = v18;
  *((_QWORD *)v8 + 3) = v17;
  *(_QWORD *)(v18 + 8) = v13;
  *(_QWORD *)v17 = v13;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)v16,
      11,
      230,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  return (struct CInputPointerNode *)v8;
}
