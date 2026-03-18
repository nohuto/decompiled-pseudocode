/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8
 * Callers:
 *     EditionContactVisualization @ 0x1C01B7210 (EditionContactVisualization.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018CD0 (IsCurrentDesktopComposed.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     _GetPointerDeviceType @ 0x1C01A7E5C (_GetPointerDeviceType.c)
 *     ?DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01B68B4 (-DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01B6964 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01B6A98 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01B6D30 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01B6F64 (-SwitchMouseCursors@@YAXHHH@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01B727C (FeedbackGetWindowSetting.c)
 *     DwmAsyncSendTouchContacts @ 0x1C024BD64 (DwmAsyncSendTouchContacts.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, _DWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // r15d
  _DWORD *v7; // r14
  __int64 v8; // r12
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // r13
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  const struct tagPOINTERCURSORDATA *v20; // rcx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r14d
  int *v25; // rax
  bool v26; // zf
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  BOOL v31; // edi
  __int64 v32; // rsi
  _BOOL8 v33; // rdx
  int v34; // eax
  __int64 i; // rsi
  int v36; // r14d
  void *v37; // rax
  struct tagDIGITIZER_CONTACT_INFO *v39; // [rsp+28h] [rbp-50h]
  unsigned __int16 v40[2]; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+34h] [rbp-44h] BYREF
  int v42; // [rsp+38h] [rbp-40h]
  int v43; // [rsp+3Ch] [rbp-3Ch]
  __int64 v44; // [rsp+40h] [rbp-38h]
  _DWORD v45[4]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v46[8]; // [rsp+58h] [rbp-20h] BYREF
  int v47; // [rsp+C0h] [rbp+48h] BYREF
  _DWORD *v48; // [rsp+C8h] [rbp+50h]
  __int64 v49; // [rsp+D0h] [rbp+58h]
  int v50; // [rsp+D8h] [rbp+60h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v5 = a1;
  v6 = 0;
  v43 = 0;
  v7 = a2;
  v8 = 0LL;
  v9 = *(_DWORD *)UPDWORDPointer(8216LL);
  v42 = v9;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v8 = Win32AllocPool(40 * v5, 1987081045LL);
  v13 = 0;
  if ( (_DWORD)v5 )
  {
    v44 = v5;
    v14 = 0;
    while ( 1 )
    {
      v47 = 0;
      if ( (gdwMitConfig & 4) != 0 )
      {
        ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                                gpTouchProcessor,
                                                v7,
                                                &v47);
      }
      else if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v7) || (*v7 & 0x1000) != 0 )
      {
        ContactVisualizationPointerEventInt = 0LL;
      }
      else
      {
        ContactVisualizationPointerEventInt = (const struct tagPOINTEREVENTINT *)(v7 + 12);
        v47 = -__CFSHR__(*v7, 4);
      }
      if ( ContactVisualizationPointerEventInt )
      {
        v16 = (_DWORD *)((char *)ContactVisualizationPointerEventInt + 8);
        if ( (unsigned int)(*((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2) <= 1
          && !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
        {
          if ( (unsigned int)(*v16 - 2) > 1 )
            goto LABEL_26;
          v17 = *((_QWORD *)ContactVisualizationPointerEventInt + 4);
          if ( !v17 )
            break;
          v18 = ValidateHwnd(v17);
          if ( !v18 )
            break;
          v41 = 0;
          if ( !(unsigned int)FeedbackGetWindowSetting(v18, 13LL, 1LL, &v41) || !v41 )
            break;
        }
      }
LABEL_60:
      v7 = (_DWORD *)((char *)v7 + v49);
      v26 = v44-- == 1;
      v9 = v42;
      v48 = v7;
      if ( v26 )
      {
        v47 = v14;
        v6 = v43;
        v13 = v47;
        goto LABEL_62;
      }
    }
    if ( *v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) == 1 )
    {
      v19 = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
      Feedback::gfIntegratedPenActive = ((unsigned __int8)v19 >> 1) & 1;
      if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v19 & 0x10001) != 0 )
        SwitchMouseCursors(1, 0, 0);
      v20 = (const struct tagPOINTERCURSORDATA *)v45;
      v45[0] = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
      v45[1] = *((_DWORD *)ContactVisualizationPointerEventInt + 10);
      v45[2] = *((_DWORD *)ContactVisualizationPointerEventInt + 11);
    }
    else
    {
LABEL_26:
      if ( Feedback::gfIntegratedPenActive )
        goto LABEL_45;
      v21 = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
      if ( (v21 & 0x2000) == 0 )
        goto LABEL_45;
      v46[1] = *((_DWORD *)ContactVisualizationPointerEventInt + 10);
      v46[2] = *((_DWORD *)ContactVisualizationPointerEventInt + 11);
      v46[0] = v21;
      if ( (v21 & 0x10001) != 0 )
      {
        v22 = 0;
        v23 = 0;
        v24 = 0;
        if ( *v16 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) == 2 )
        {
          v24 = 1;
        }
        else
        {
          v25 = (int *)UPDWORDPointer(8216LL);
          v26 = *v16 == 2;
          v41 = 0;
          v27 = *v25;
          if ( v26 )
          {
            v28 = *((_QWORD *)ContactVisualizationPointerEventInt + 4);
            if ( v28 )
            {
              v29 = ValidateHwnd(v28);
              if ( v29 )
              {
                FeedbackGetWindowSetting(v29, 12LL, 1LL, &v41);
                v22 = v41;
              }
            }
          }
          if ( *v16 == 3 || !v27 || !(unsigned int)IsCurrentDesktopComposed() || v22 )
          {
            v22 = 1;
            v23 = 0;
          }
          else
          {
            v23 = 1;
          }
        }
        SwitchMouseCursors(v22, v23, v24);
        v7 = v48;
        v9 = v42;
      }
      v20 = (const struct tagPOINTERCURSORDATA *)v46;
    }
    DeferPointerCursorOperation(v20);
LABEL_45:
    if ( a5 != 3 )
    {
      *(_DWORD *)v40 = 0;
      if ( *v16 != 2
        || (unsigned int)Feedback::GetWindowVisualizationSetting(
                           (const struct tagPOINTEREVENTINT *)((char *)ContactVisualizationPointerEventInt + 8),
                           (const struct tagPOINTER_INFO *)(v9 == 0),
                           a5 == 2,
                           v9 == 2,
                           (unsigned __int16)v40,
                           (int *)v39)
        || *(_DWORD *)v40 )
      {
        if ( v8 )
        {
          v30 = v14;
          v31 = 1;
          ++v14;
          v32 = v8 + 40 * v30;
          if ( *v16 == 3 )
            v31 = Feedback::GetWindowBarrelVisualizationSetting(
                    (const struct tagPOINTEREVENTINT *)((char *)ContactVisualizationPointerEventInt + 8),
                    (const struct tagPOINTER_INFO *)(v47 != 0),
                    v11) != 0;
          v33 = v50 && a5 == 2;
          Feedback::PointerEventIntToDigitizerContactInfo(
            ContactVisualizationPointerEventInt,
            (const struct tagPOINTEREVENTINT *)v33,
            v31,
            *(int *)v40,
            v32,
            v39);
          v34 = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
          if ( (v34 & 0x10000) != 0 )
          {
            EtwTraceContactVisualizationDown();
          }
          else if ( (v34 & 0x40000) != 0 )
          {
            EtwTraceContactVisualizationUp();
          }
        }
      }
    }
    goto LABEL_60;
  }
LABEL_62:
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(v36 + i) )
    {
      v36 = v13 - i;
      if ( v13 - (unsigned int)i > 0xB )
        v36 = 11;
      v37 = (void *)ReferenceDwmApiPort(5 * i, v10, v11, v12);
      v6 = DwmAsyncSendTouchContacts(v37);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v8);
  }
  return v6 >= 0;
}
