/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0046C60
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0047480 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01311E4 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     IsEqualInputSource @ 0x1C0080A10 (IsEqualInputSource.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0081DC0 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C008B39C (ApiSetEditionInitiateMouseEventProcessing.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C00DA0D0 (EtwTraceMouseInputCoalesced.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4)
{
  char *v8; // rdi
  __int16 v9; // ax
  int v10; // eax
  bool v11; // r8
  struct CMouseProcessor::RawMouseEvent *v12; // rax
  int v13; // edx
  struct CMouseProcessor::RawMouseEvent *v14; // rdi
  char v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  char v18; // al
  char v19; // [rsp+30h] [rbp-40h]
  __int128 v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-38h]
  int v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+4Ch] [rbp-24h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h]

  v19 = 0;
  v22 = *((_DWORD *)a2 + 14) & 0x10;
  v23 = *((_DWORD *)a2 + 14) & 0x100;
  if ( !v22 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_7;
  if ( a4 )
  {
    v17 = *((_DWORD *)a4 + 2);
    v24 = *(_QWORD *)a4;
    v25 = v17;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 14) & 1) != 0 )
      goto LABEL_7;
    EditionComputeInjectorUIPI(&v24);
  }
  v19 = 1;
LABEL_7:
  RIMLockExclusive((char *)this + 2416);
  if ( *((_WORD *)this + 1205) )
    v8 = (char *)this + 136 * *((unsigned __int16 *)this + 1204) + 232;
  else
    v8 = 0LL;
  if ( *((_BYTE *)a2 + 68) )
  {
    v21 = 2LL;
  }
  else
  {
    v9 = *((_WORD *)a2 + 1);
    if ( (v9 & 0x10) != 0 )
    {
      LODWORD(v21) = 4;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      LODWORD(v21) = 8;
    }
    else if ( (v9 & 0x80u) != 0 )
    {
      LODWORD(v21) = 18;
    }
    else
    {
      LODWORD(v21) = (v9 & 0x100 | 0x10u) >> 3;
    }
    v10 = *((_DWORD *)a2 + 14);
    if ( (v10 & 0x40) != 0 )
      HIDWORD(v21) = 1;
    else
      HIDWORD(v21) = ((unsigned __int8)v10 >> 3) & 2;
  }
  v11 = v8
     && !*((_WORD *)v8 + 8)
     && (v18 = IsEqualInputSource(v8 + 80), v18 && !*((_WORD *)a2 + 2) && (*((_BYTE *)a2 + 2) & 8) == 0)
     && *((_DWORD *)v8 + 31) == *((_DWORD *)a2 + 15);
  v12 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 232), v11);
  v14 = v12;
  if ( v15 )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, 18, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    EtwTraceMouseInputCoalesced();
  }
  else
  {
    if ( !v12 )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, 19, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
      *((_QWORD *)this + 303) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 2416, 0LL);
      KeLeaveCriticalRegion();
      v16 = 1LL;
      goto LABEL_51;
    }
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, 20, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    *((_WORD *)v14 + 8) = *((_WORD *)a2 + 2);
    *((_WORD *)v14 + 9) = *((_WORD *)a2 + 3);
    *((_DWORD *)v14 + 5) = *((_DWORD *)a2 + 2);
    *((_QWORD *)v14 + 10) = v21;
    *((_DWORD *)v14 + 31) = *((_DWORD *)a2 + 15);
  }
  *(_OWORD *)v14 = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)v14 + 4) = *((unsigned int *)a2 + 5);
  *((_QWORD *)v14 + 7) = 0LL;
  if ( (*((_DWORD *)a2 + 14) & 0x10000) != 0 )
  {
    *((_QWORD *)v14 + 6) = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v14 + 5) = 0LL;
  }
  else
  {
    *((struct tagPOINT *)v14 + 6) = gptCursorAsync;
    *((_QWORD *)v14 + 5) = *(_QWORD *)((char *)a2 + 12);
    if ( a3 )
      *((_QWORD *)v14 + 7) = *(_QWORD *)a3;
  }
  *((_OWORD *)v14 + 4) = *(_OWORD *)((char *)a2 + 40);
  if ( !*((_BYTE *)a2 + 68) )
    *((_DWORD *)v14 + 22) |= 0x20u;
  if ( (*((_DWORD *)a2 + 14) & 0x1000) != 0 )
    *((_DWORD *)v14 + 22) |= 2u;
  if ( (*((_DWORD *)a2 + 14) & 0x80u) != 0 )
    *((_DWORD *)v14 + 22) |= 8u;
  if ( (*((_DWORD *)a2 + 14) & 0x20) != 0 )
    *((_DWORD *)v14 + 22) |= 1u;
  if ( (*((_DWORD *)a2 + 14) & 0x800) != 0 )
    *((_DWORD *)v14 + 22) |= 0x40u;
  if ( (*((_DWORD *)a2 + 14) & 0x4000) != 0 )
    *((_DWORD *)v14 + 22) |= 0x100u;
  if ( (*((_DWORD *)a2 + 14) & 0x8000) != 0 )
    *((_DWORD *)v14 + 22) |= 0x200u;
  if ( (*((_BYTE *)a2 + 2) & 8) != 0 )
    *((_DWORD *)v14 + 22) |= 4u;
  if ( v22 )
    *((_DWORD *)v14 + 22) |= 0x80u;
  if ( (*((_DWORD *)a2 + 14) & 0x10000) != 0 )
    *((_DWORD *)v14 + 22) |= 0x400u;
  if ( *((_BYTE *)a2 + 68)
    || (*((_DWORD *)a2 + 16) & 4) != 0
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported() == -1073741637 )
  {
    *((_DWORD *)v14 + 22) |= 0x10u;
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = v24;
    DWORD2(v20) = v25;
    BYTE12(v20) = 1;
    *(_OWORD *)((char *)v14 + 92) = v20;
  }
  *((_QWORD *)this + 303) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 2416, 0LL);
  KeLeaveCriticalRegion();
  if ( v23 )
  {
    v16 = 0LL;
LABEL_51:
    ApiSetEditionInitiateMouseEventProcessing(v16);
  }
}
