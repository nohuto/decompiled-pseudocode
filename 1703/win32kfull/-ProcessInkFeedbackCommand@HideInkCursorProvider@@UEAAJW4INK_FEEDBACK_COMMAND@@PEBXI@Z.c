/*
 * XREFs of ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021C560
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021BF80 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021C09C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021C170 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C021C390 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021CDC0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C021CE0C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ProcessInkFeedbackCommand(LPCSTR *a1, int a2, const GUID *a3, const GUID *a4)
{
  int v6; // edi
  char v7; // r10
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  HideInkCursorProvider *v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v17; // eax
  const struct IFC_HIDE_INK_CURSOR_STOP_DATA *v18; // rdx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  HideInkCursorProvider *v23; // rcx
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  int v28; // eax
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  _QWORD *v31; // rax
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v32; // rdx
  const GUID *v33; // r8
  const GUID *v34; // r9
  _QWORD *v35; // r14
  char v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  int v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+3Ch] [rbp-C4h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  LPCSTR *v48; // [rsp+60h] [rbp-A0h] BYREF
  LPCSTR *v49; // [rsp+68h] [rbp-98h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+70h] [rbp-90h] BYREF
  LPCSTR *v51; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-40h] BYREF
  LPCSTR **v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v61; // [rsp+100h] [rbp+0h] BYREF
  int *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+140h] [rbp+40h] BYREF
  LPCSTR **v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  const GUID *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v70; // [rsp+180h] [rbp+80h] BYREF
  int *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1C0h] [rbp+C0h] BYREF
  LPCSTR **v75; // [rsp+1D0h] [rbp+D0h]
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  const GUID *v77; // [rsp+1E0h] [rbp+E0h]
  __int64 v78; // [rsp+1E8h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v79; // [rsp+200h] [rbp+100h] BYREF
  int *v80; // [rsp+220h] [rbp+120h]
  __int64 v81; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+230h] [rbp+130h] BYREF
  const GUID *v83; // [rsp+240h] [rbp+140h]
  __int64 v84; // [rsp+248h] [rbp+148h]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+260h] [rbp+160h] BYREF
  int *v86; // [rsp+280h] [rbp+180h]
  __int64 v87; // [rsp+288h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+290h] [rbp+190h] BYREF
  const GUID *v89; // [rsp+2A0h] [rbp+1A0h]
  __int64 v90; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v91; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v92; // [rsp+2E0h] [rbp+1E0h]
  __int64 v93; // [rsp+2E8h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+2F0h] [rbp+1F0h] BYREF
  EVENT_DATA_DESCRIPTOR v95; // [rsp+300h] [rbp+200h] BYREF
  int *v96; // [rsp+320h] [rbp+220h]
  __int64 v97; // [rsp+328h] [rbp+228h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+330h] [rbp+230h] BYREF
  EVENT_DATA_DESCRIPTOR v99; // [rsp+340h] [rbp+240h] BYREF
  int *v100; // [rsp+360h] [rbp+260h]
  __int64 v101; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR v102; // [rsp+378h] [rbp+278h] BYREF
  int *v103; // [rsp+398h] [rbp+298h]
  __int64 v104; // [rsp+3A0h] [rbp+2A0h]
  EVENT_DATA_DESCRIPTOR v105; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v106; // [rsp+3D0h] [rbp+2D0h]
  __int64 v107; // [rsp+3D8h] [rbp+2D8h]

  if ( a2 == 3 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( hProvider > 4u )
      {
        v44 = 0;
        v71 = &v44;
        v72 = 4LL;
        TlgCreateSz(&v73, "Processing ink feedback command: IFC_HIDE_INK_CURSOR_START...");
        TlgCreateSz(&v74, a1[6]);
        v51 = a1;
        v75 = &v51;
        v76 = 8LL;
        v77 = a3;
        v78 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC7CD, v21, v22, 7u, &v70);
      }
      if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId((__int64)a1, 3, a3->Data1) )
      {
        v6 = -1073741823;
        if ( v25 > 2 )
        {
          v45 = -1073741823;
          v87 = 4LL;
          v86 = &v45;
          TlgCreateSz(&v88, "The specified pointer id already has an active IFC_HIDE_INK_CURSOR_START command");
          v89 = a3;
          v90 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC670, v26, v27, 5u, &v85);
        }
      }
      else
      {
        v28 = HideInkCursorProvider::ValidatePointer(v23, v24);
        v6 = v28;
        if ( v28 >= 0 )
        {
          v31 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
          v35 = v31;
          if ( v31 )
          {
            v31[2] = 0LL;
            v31[3] = 0LL;
            v31[1] = 0LL;
            *v31 = 0LL;
          }
          else
          {
            v35 = 0LL;
          }
          if ( v35 )
          {
            *((_DWORD *)v35 + 4) = 3;
            *((_DWORD *)v35 + 5) = a3->Data1;
            v35[3] = KeGetCurrentThread();
            v6 = HideInkCursorProvider::DoHideInkCursorStart((HideInkCursorProvider *)a1, v32);
            if ( v6 < 0 )
              Win32FreePool(v35);
            else
              InkFeedbackProviderBase::AddActiveCommand(
                (InkFeedbackProviderBase *)a1,
                (struct InkFeedbackProviderBase::ActiveCommand *)v35);
          }
          else
          {
            v6 = -1073741801;
            if ( hProvider > 2u )
            {
              v47 = -1073741801;
              v106 = &v47;
              v107 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v33, v34, 3u, &v105);
            }
          }
        }
        else if ( hProvider > 2u )
        {
          v46 = v28;
          v97 = 4LL;
          v96 = &v46;
          TlgCreateSz(&v98, "ValidatePointer failed");
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v29, v30, 4u, &v95);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( hProvider > 2u )
      {
        v43 = -1073741811;
        v103 = &v43;
        v104 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, a4, 3u, &v102);
      }
    }
  }
  else if ( a2 == 4 )
  {
    if ( (_DWORD)a4 == 4 )
    {
      if ( hProvider > 4u )
      {
        v40 = 0;
        v62 = &v40;
        v63 = 4LL;
        TlgCreateSz(&v64, "Processing ink feedback command: IFC_HIDE_INK_CURSOR_STOP...");
        TlgCreateSz(&v65, a1[6]);
        v49 = a1;
        v66 = &v49;
        v67 = 8LL;
        v68 = a3;
        v69 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC7CD, v10, v11, 7u, &v61);
      }
      ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                          (__int64)a1,
                                                                                          3,
                                                                                          a3->Data1);
      if ( ActiveCommandByTargetPointerId )
      {
        v17 = HideInkCursorProvider::ValidatePointer(v12, v13);
        v6 = v17;
        if ( v17 >= 0 )
        {
          v6 = HideInkCursorProvider::DoHideInkCursorStop((HideInkCursorProvider *)a1, v18);
          InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
            (InkFeedbackProviderBase *)a1,
            &ActiveCommandByTargetPointerId);
        }
        else if ( hProvider > 2u )
        {
          v42 = v17;
          v93 = 4LL;
          v92 = &v42;
          TlgCreateSz(&v94, "ValidatePointer failed");
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v19, v20, 4u, &v91);
        }
      }
      else
      {
        v6 = -1073741823;
        if ( v14 > 2 )
        {
          v41 = -1073741823;
          v81 = 4LL;
          v80 = &v41;
          TlgCreateSz(&v82, "Active IFC_HIDE_INK_CURSOR_START command not found for the specified pointer id");
          v83 = a3;
          v84 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC670, v15, v16, 5u, &v79);
        }
      }
    }
    else
    {
      v6 = -1073741811;
      if ( hProvider > 2u )
      {
        v39 = -1073741811;
        v100 = &v39;
        v101 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, a4, 3u, &v99);
      }
    }
  }
  else
  {
    v6 = -1073741637;
    if ( hProvider > 2u )
    {
      v38 = -1073741637;
      v53 = &v38;
      v54 = 4LL;
      TlgCreateSz(&pDesc, "Unsupported command");
      TlgCreateSz(&v56, a1[6]);
      v48 = a1;
      v57 = &v48;
      v59 = &v37;
      v58 = 8LL;
      v37 = v7;
      v60 = 1LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC9D4, v8, v9, 7u, &pData);
    }
  }
  return (unsigned int)v6;
}
