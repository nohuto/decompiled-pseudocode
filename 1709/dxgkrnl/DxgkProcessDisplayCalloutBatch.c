/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x1C0101D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0010FB8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C0101F88 (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1)
{
  int v2; // r14d
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 started; // al
  __int64 v5; // rcx
  DISPLAY_CALLOUT_ENTRY *v6; // rbx
  bool v7; // bp
  int v8; // eax
  bool v9; // si
  struct DXGGLOBAL *v10; // rbx
  DISPLAY_CALLOUT_ENTRY **v11; // rax
  struct DXGGLOBAL *v12; // rbx
  __int64 result; // rax
  int v14; // eax
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  char v16; // [rsp+38h] [rbp-30h]
  DISPLAY_CALLOUT_ENTRY *v17; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch((struct DXGGLOBAL *)((char *)Global + 1192), &v17);
  v6 = v17;
  v7 = started;
  if ( !v17 )
    goto LABEL_12;
  while ( 1 )
  {
    *(_OWORD *)(a1 + 24) = *((_OWORD *)v6 + 4);
    *(_OWORD *)(a1 + 40) = *((_OWORD *)v6 + 5);
    *(_OWORD *)(a1 + 56) = *((_OWORD *)v6 + 6);
    *(_OWORD *)(a1 + 72) = *((_OWORD *)v6 + 7);
    *(_QWORD *)(a1 + 88) = *((_QWORD *)v6 + 16);
    v8 = *((_DWORD *)v6 + 4);
    if ( v8 == 1 )
    {
      v2 = DxgkHandleMonitorEvent(
             *((_QWORD *)v6 + 3),
             *((unsigned int *)v6 + 8),
             *((unsigned int *)v6 + 9),
             *((_QWORD *)v6 + 5),
             a1);
      if ( v2 >= 0 )
      {
        v9 = (*(_BYTE *)a1 & 0x44) == 68;
        goto LABEL_5;
      }
      goto LABEL_17;
    }
    if ( v8 == 2 )
    {
      *(_BYTE *)a1 |= 4u;
      v14 = *((_DWORD *)v6 + 12);
      *(_BYTE *)a1 &= ~0x80u;
      *(_DWORD *)(a1 + 4) = v14;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v6 + 10);
      *(_QWORD *)(a1 + 16) = *((_QWORD *)v6 + 3);
LABEL_17:
      v9 = 1;
      goto LABEL_5;
    }
    v9 = v8 == 3;
LABEL_5:
    if ( *((_BYTE *)v6 + 20) )
    {
      v9 = 1;
      *(_QWORD *)(a1 + 96) = (char *)v6 + 56;
    }
    else
    {
      DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(v6);
    }
    if ( v9 )
      goto LABEL_10;
    v10 = DXGGLOBAL::GetGlobal(v5);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)v10 + 1192));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v11 = (DISPLAY_CALLOUT_ENTRY **)((char *)v10 + 1232);
    if ( *v11 == (DISPLAY_CALLOUT_ENTRY *)v11 )
      break;
    v6 = *v11;
    if ( *((DISPLAY_CALLOUT_ENTRY ***)*v11 + 1) != v11
      || (v5 = *(_QWORD *)v6, *(DISPLAY_CALLOUT_ENTRY **)(*(_QWORD *)v6 + 8LL) != v6) )
    {
      __fastfail(3u);
    }
    *v11 = (DISPLAY_CALLOUT_ENTRY *)v5;
    *(_QWORD *)(v5 + 8) = v11;
    v7 = *v11 != (DISPLAY_CALLOUT_ENTRY *)v11;
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  v7 = 0;
LABEL_10:
  v12 = DXGGLOBAL::GetGlobal(v5);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)v12 + 1192));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  *((_QWORD *)v12 + 156) = 0LL;
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
LABEL_12:
  result = (unsigned int)v2;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v7;
  return result;
}
