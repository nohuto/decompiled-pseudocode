/*
 * XREFs of DxgkProcessDisplayCalloutBatch @ 0x1C01AB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C00383B8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C0197028 (-StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkProcessDisplayCalloutBatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  bool started; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DISPLAY_CALLOUT_ENTRY *v14; // rbx
  bool v15; // r14
  bool v16; // si
  int v17; // eax
  struct DXGGLOBAL *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 **v21; // rax
  struct DXGGLOBAL *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 result; // rax
  _BYTE v29[8]; // [rsp+30h] [rbp-10h] BYREF
  char v30; // [rsp+38h] [rbp-8h]
  DISPLAY_CALLOUT_ENTRY *v31; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  started = DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch((struct DXGGLOBAL *)((char *)Global + 1208), &v31, v7, v8);
  v14 = v31;
  v15 = started;
  if ( !v31 )
    goto LABEL_24;
  while ( 1 )
  {
    v16 = 0;
    *(_OWORD *)(a1 + 40) = *((_OWORD *)v14 + 4);
    *(_OWORD *)(a1 + 56) = *((_OWORD *)v14 + 5);
    *(_OWORD *)(a1 + 72) = *((_OWORD *)v14 + 6);
    *(_OWORD *)(a1 + 88) = *((_OWORD *)v14 + 7);
    v17 = *((_DWORD *)v14 + 4);
    if ( v17 == 1 )
    {
      v5 = DxgkHandleMonitorEvent(
             *((_QWORD *)v14 + 3),
             *((unsigned int *)v14 + 8),
             *((_DWORD *)v14 + 9),
             *((_QWORD *)v14 + 5),
             a1);
      if ( v5 >= 0 )
        goto LABEL_9;
      goto LABEL_7;
    }
    if ( v17 == 2 )
    {
      *(_BYTE *)a1 |= 4u;
      *(_DWORD *)(a1 + 4) = *((_DWORD *)v14 + 12);
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v14 + 10);
      *(_QWORD *)(a1 + 16) = *((_QWORD *)v14 + 3);
      *(_DWORD *)(a1 + 24) = *((_DWORD *)v14 + 11);
      *(_QWORD *)(a1 + 32) = *((_QWORD *)v14 + 4);
LABEL_7:
      v16 = 1;
      goto LABEL_9;
    }
    v16 = v17 == 3;
LABEL_9:
    if ( *((_BYTE *)v14 + 20) )
    {
      v16 = 1;
      *(_QWORD *)(a1 + 104) = (char *)v14 + 56;
    }
    else
    {
      DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(v14);
    }
    if ( v16 )
      goto LABEL_22;
    v18 = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGGLOBAL *)((char *)v18 + 1208), v19, v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    v21 = (__int64 **)((char *)v18 + 1248);
    if ( *v21 == (__int64 *)v21 )
      break;
    v14 = (DISPLAY_CALLOUT_ENTRY *)*v21;
    v11 = **v21;
    if ( (__int64 **)(*v21)[1] != v21 || *(DISPLAY_CALLOUT_ENTRY **)(v11 + 8) != v14 )
      __fastfail(3u);
    *v21 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v21;
    v15 = *v21 != (__int64 *)v21;
    if ( v30 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v10, v12, v13);
  }
  if ( v30 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v10, v12, v13);
  v15 = 0;
LABEL_22:
  v22 = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGGLOBAL *)((char *)v22 + 1208), v23, v24);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  *((_QWORD *)v22 + 158) = 0LL;
  if ( v30 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v25, v26, v27);
LABEL_24:
  result = (unsigned int)v5;
  *(_BYTE *)a1 = *(_BYTE *)a1 & 0xFE | !v15;
  return result;
}
