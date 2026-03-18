/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021D820
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021D230 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021D344 (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021D41C (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C021D65C (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021E0A0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C021E0EC (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(
        HideInkCursorProvider *a1,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  int v6; // edi
  const CHAR *v7; // rdx
  char v8; // r10
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  const CHAR *v11; // rdx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  HideInkCursorProvider *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // eax
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v18; // rdx
  const GUID *v19; // r8
  const GUID *v20; // r9
  const CHAR *v21; // rdx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  HideInkCursorProvider *v24; // rcx
  const GUID *v25; // r8
  const GUID *v26; // r9
  int v27; // eax
  const GUID *v28; // r8
  const GUID *v29; // r9
  _QWORD *v30; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v31; // rdx
  const GUID *v32; // r8
  const GUID *v33; // r9
  _QWORD *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // r8
  char v38; // [rsp+30h] [rbp-D0h] BYREF
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+3Ch] [rbp-C4h] BYREF
  int v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  HideInkCursorProvider *v49; // [rsp+60h] [rbp-A0h] BYREF
  HideInkCursorProvider *v50; // [rsp+68h] [rbp-98h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+70h] [rbp-90h] BYREF
  HideInkCursorProvider *v52; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+80h] [rbp-80h] BYREF
  int *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  const char *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  const GUID *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+D0h] [rbp-30h] BYREF
  int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  const char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  const GUID *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  const char *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  HideInkCursorProvider **v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  char *v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v77; // [rsp+190h] [rbp+90h] BYREF
  int *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  const char *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1D0h] [rbp+D0h] BYREF
  HideInkCursorProvider **v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  const GUID *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR v87; // [rsp+200h] [rbp+100h] BYREF
  int *v88; // [rsp+220h] [rbp+120h]
  __int64 v89; // [rsp+228h] [rbp+128h]
  const char *v90; // [rsp+230h] [rbp+130h]
  __int64 v91; // [rsp+238h] [rbp+138h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+240h] [rbp+140h] BYREF
  HideInkCursorProvider **v93; // [rsp+250h] [rbp+150h]
  __int64 v94; // [rsp+258h] [rbp+158h]
  const GUID *v95; // [rsp+260h] [rbp+160h]
  __int64 v96; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v97; // [rsp+270h] [rbp+170h] BYREF
  int *v98; // [rsp+290h] [rbp+190h]
  __int64 v99; // [rsp+298h] [rbp+198h]
  const char *v100; // [rsp+2A0h] [rbp+1A0h]
  __int64 v101; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v102; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v103; // [rsp+2D0h] [rbp+1D0h]
  __int64 v104; // [rsp+2D8h] [rbp+1D8h]
  const char *v105; // [rsp+2E0h] [rbp+1E0h]
  __int64 v106; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v107; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v108; // [rsp+310h] [rbp+210h]
  __int64 v109; // [rsp+318h] [rbp+218h]
  EVENT_DATA_DESCRIPTOR v110; // [rsp+320h] [rbp+220h] BYREF
  int *v111; // [rsp+340h] [rbp+240h]
  __int64 v112; // [rsp+348h] [rbp+248h]
  EVENT_DATA_DESCRIPTOR v113; // [rsp+350h] [rbp+250h] BYREF
  int *v114; // [rsp+370h] [rbp+270h]
  __int64 v115; // [rsp+378h] [rbp+278h]

  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v21 = (const CHAR *)*((_QWORD *)a1 + 6);
        v88 = &v45;
        v45 = 0;
        v90 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...";
        v89 = 4LL;
        v91 = 62LL;
        TlgCreateSz(&v92, v21);
        v52 = a1;
        v93 = &v52;
        v94 = 8LL;
        v95 = a3;
        v96 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E92AF, v22, v23, 7u, &v87);
      }
      if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId((__int64)a1, 3, a3->Data1) )
      {
        v6 = -1073741823;
        if ( (unsigned int)v26 > 2 )
        {
          v46 = -1073741823;
          v61 = &v46;
          v63 = "The specified pointer id already has an active IFC_HIDE_INK_CURSOR_START command";
          v62 = 4LL;
          v64 = 81LL;
          v65 = a3;
          v66 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E94BB, v25, v26, 5u, &v60);
        }
      }
      else
      {
        v27 = HideInkCursorProvider::ValidatePointer(v24, (unsigned int)v25);
        v6 = v27;
        if ( v27 >= 0 )
        {
          v30 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
          v34 = v30;
          if ( v30 )
          {
            v30[2] = 0LL;
            v30[3] = 0LL;
            v30[1] = 0LL;
            *v30 = 0LL;
          }
          else
          {
            v34 = 0LL;
          }
          if ( v34 )
          {
            *((_DWORD *)v34 + 4) = 3;
            *((_DWORD *)v34 + 5) = a3->Data1;
            v34[3] = KeGetCurrentThread();
            v6 = HideInkCursorProvider::DoHideInkCursorStart(a1, v31);
            if ( v6 < 0 )
              Win32FreePool(v34, v35, v36);
            else
              InkFeedbackProviderBase::AddActiveCommand(a1, (struct InkFeedbackProviderBase::ActiveCommand *)v34);
          }
          else
          {
            v6 = -1073741801;
            if ( (unsigned int)pRelatedActivityId > 2 )
            {
              v48 = -1073741801;
              v114 = &v48;
              v115 = 4LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v32, v33, 3u, &v113);
            }
          }
        }
        else if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v47 = v27;
          v103 = &v47;
          v105 = "ValidatePointer failed";
          v104 = 4LL;
          v106 = 23LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v28, v29, 4u, &v102);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v44 = -1073741811;
        v111 = &v44;
        v112 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, a3, a4, 3u, &v110);
      }
    }
  }
  else if ( a2 == 4 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( (unsigned int)pRelatedActivityId > 4 )
      {
        v11 = (const CHAR *)*((_QWORD *)a1 + 6);
        v78 = &v41;
        v41 = 0;
        v80 = "Processing ink feedback command: IFC_HIDE_INK_CURSOR_STOP...";
        v79 = 4LL;
        v81 = 61LL;
        TlgCreateSz(&v82, v11);
        v50 = a1;
        v83 = &v50;
        v84 = 8LL;
        v85 = a3;
        v86 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E92AF, v12, v13, 7u, &v77);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          (__int64)a1,
                                                                                          3,
                                                                                          a3->Data1);
      if ( ActiveCommandByTargetPointerId )
      {
        v17 = HideInkCursorProvider::ValidatePointer(v14, (unsigned int)v15);
        v6 = v17;
        if ( v17 >= 0 )
        {
          v6 = HideInkCursorProvider::DoHideInkCursorStop(a1, v18);
          InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(a1, &ActiveCommandByTargetPointerId);
        }
        else if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v43 = v17;
          v98 = &v43;
          v100 = "ValidatePointer failed";
          v99 = 4LL;
          v101 = 23LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v19, v20, 4u, &v97);
        }
      }
      else
      {
        v6 = -1073741823;
        if ( (unsigned int)v16 > 2 )
        {
          v42 = -1073741823;
          v54 = &v42;
          v56 = "Active IFC_HIDE_INK_CURSOR_START command not found for the specified pointer id";
          v55 = 4LL;
          v57 = 80LL;
          v58 = a3;
          v59 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E94BB, v15, v16, 5u, &v53);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v40 = -1073741811;
        v108 = &v40;
        v109 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, a3, a4, 3u, &v107);
      }
    }
  }
  else
  {
    v6 = -1073741637;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v7 = (const CHAR *)*((_QWORD *)a1 + 6);
      v68 = &v39;
      v39 = -1073741637;
      v70 = "Unsupported command";
      v69 = 4LL;
      v71 = 20LL;
      TlgCreateSz(&pDesc, v7);
      v49 = a1;
      v73 = &v49;
      v75 = &v38;
      v74 = 8LL;
      v38 = v8;
      v76 = 1LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9251, v9, v10, 7u, &pData);
    }
  }
  return (unsigned int)v6;
}
