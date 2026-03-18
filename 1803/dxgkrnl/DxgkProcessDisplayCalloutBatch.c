/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x1C01C78A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C003273C (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01A13B0 (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01C50F8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1)
{
  int v2; // r14d
  struct DXGGLOBAL *Global; // rax
  bool started; // al
  __int64 v5; // rcx
  __int64 *v6; // rbx
  bool v7; // bp
  int v8; // eax
  bool v9; // si
  int v10; // eax
  struct DXGGLOBAL *v11; // rbx
  __int64 *v12; // rax
  struct DXGGLOBAL *v13; // rbx
  __int64 result; // rax
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
              (struct DXGGLOBAL *)((char *)Global + 1320),
              (struct DISPLAY_CALLOUT_ENTRY **)&P);
  v6 = (__int64 *)P;
  v7 = started;
  if ( !P )
    goto LABEL_22;
  while ( 1 )
  {
    *(_OWORD *)(a1 + 24) = *((_OWORD *)v6 + 4);
    *(_OWORD *)(a1 + 40) = *((_OWORD *)v6 + 5);
    *(_OWORD *)(a1 + 56) = *((_OWORD *)v6 + 6);
    *(_OWORD *)(a1 + 72) = *((_OWORD *)v6 + 7);
    *(_QWORD *)(a1 + 88) = v6[16];
    v8 = *((_DWORD *)v6 + 4);
    if ( v8 == 1 )
    {
      v2 = DxgkHandleMonitorEvent((struct _LUID)v6[3], *((_DWORD *)v6 + 8), *((_DWORD *)v6 + 9), v6[5], a1);
      if ( v2 >= 0 )
      {
        v9 = (*(_BYTE *)a1 & 0x44) == 68;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
    if ( v8 == 2 )
    {
      *(_BYTE *)a1 |= 4u;
      v10 = *((_DWORD *)v6 + 12);
      *(_BYTE *)a1 &= ~0x80u;
      *(_DWORD *)(a1 + 4) = v10;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v6 + 10);
      *(_QWORD *)(a1 + 16) = v6[3];
LABEL_7:
      v9 = 1;
      goto LABEL_9;
    }
    v9 = v8 == 3;
LABEL_9:
    if ( *((_BYTE *)v6 + 20) )
    {
      v9 = 1;
      *(_QWORD *)(a1 + 96) = v6 + 7;
    }
    else
    {
      DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)v6);
    }
    if ( v9 )
      goto LABEL_20;
    v11 = DXGGLOBAL::GetGlobal(v5);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)v11 + 1320), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v12 = (__int64 *)((char *)v11 + 1360);
    v6 = (__int64 *)*((_QWORD *)v11 + 170);
    if ( v6 == v12 )
      break;
    if ( (__int64 *)v6[1] != v12 || (v5 = *v6, *(__int64 **)(*v6 + 8) != v6) )
      __fastfail(3u);
    *v12 = v5;
    *(_QWORD *)(v5 + 8) = v12;
    v7 = *v12 != (_QWORD)v12;
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v15);
  v7 = 0;
LABEL_20:
  v13 = DXGGLOBAL::GetGlobal(v5);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)v13 + 1320), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  *((_QWORD *)v13 + 172) = 0LL;
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
LABEL_22:
  result = (unsigned int)v2;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v7;
  return result;
}
