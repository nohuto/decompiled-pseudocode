/*
 * XREFs of ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688
 * Callers:
 *     EditionContactVisualization @ 0x1C01BC570 (EditionContactVisualization.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00780E0 (IsCurrentDesktopComposed.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01BBAC0 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01BBC7C (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01BBDB0 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01BC08C (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01BC2C0 (-SwitchMouseCursors@@YAXHHH@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01BC5F4 (FeedbackGetWindowSetting.c)
 *     _GetPointerDeviceType @ 0x1C01CA9E0 (_GetPointerDeviceType.c)
 *     DwmAsyncSendTouchContacts @ 0x1C024D724 (DwmAsyncSendTouchContacts.c)
 */

_BOOL8 __fastcall ContactVisualizationWorker(unsigned int a1, _DWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r15
  _DWORD *v8; // rsi
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r12d
  __int64 v13; // rdi
  const struct tagPOINTEREVENTINT *ContactVisualizationPointerEventInt; // r13
  _DWORD *v15; // rbx
  int v16; // r8d
  int v17; // ecx
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // esi
  int v22; // r14d
  int v23; // r15d
  int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r14
  BOOL v29; // esi
  _BOOL8 v30; // rdx
  int v31; // eax
  bool v32; // zf
  __int64 i; // rsi
  int v34; // r14d
  void *v35; // rax
  struct tagDIGITIZER_CONTACT_INFO *v37; // [rsp+30h] [rbp-49h]
  unsigned int v38; // [rsp+38h] [rbp-41h]
  int v39; // [rsp+3Ch] [rbp-3Dh] BYREF
  unsigned __int16 v40[2]; // [rsp+40h] [rbp-39h] BYREF
  int v41; // [rsp+44h] [rbp-35h]
  __int64 v42; // [rsp+48h] [rbp-31h]
  int v43; // [rsp+50h] [rbp-29h]
  __int64 v44; // [rsp+58h] [rbp-21h]
  _DWORD v45[4]; // [rsp+60h] [rbp-19h] BYREF
  _DWORD v46[22]; // [rsp+70h] [rbp-9h] BYREF
  int v47; // [rsp+D8h] [rbp+5Fh] BYREF
  _DWORD *v48; // [rsp+E0h] [rbp+67h]
  __int64 v49; // [rsp+E8h] [rbp+6Fh]
  int v50; // [rsp+F0h] [rbp+77h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  v43 = 0;
  v42 = 0LL;
  v8 = a2;
  v9 = *(_DWORD *)UPDWORDPointer(8216LL);
  v41 = v9;
  if ( (unsigned int)IsCurrentDesktopComposed() )
  {
    v7 = Win32AllocPool(40 * v5, 1987081045LL);
    v42 = v7;
  }
  v12 = 0;
  v38 = 0;
  if ( (_DWORD)v5 )
  {
    v13 = v49;
    v44 = v5;
    do
    {
      v39 = 0;
      if ( (gdwMitConfig & 4) != 0 )
      {
        ContactVisualizationPointerEventInt = CTouchProcessor::GetContactVisualizationPointerEventInt(
                                                gpTouchProcessor,
                                                v8,
                                                &v39);
        v11 = 1LL;
      }
      else if ( !(unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v8) || (*v8 & 0x1000) != 0 )
      {
        ContactVisualizationPointerEventInt = 0LL;
      }
      else
      {
        ContactVisualizationPointerEventInt = (const struct tagPOINTEREVENTINT *)(v8 + 12);
        v39 = -__CFSHR__(*v8, 4);
      }
      if ( ContactVisualizationPointerEventInt )
      {
        v15 = (_DWORD *)((char *)ContactVisualizationPointerEventInt + 8);
        if ( *((_DWORD *)ContactVisualizationPointerEventInt + 2) - 2 <= (unsigned int)v11 )
        {
          if ( !(unsigned int)GetWorkspaceId(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) )
          {
            if ( *v15 == 3
              && (unsigned int)GetPointerDeviceType(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) == 1 )
            {
              v17 = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
              Feedback::gfIntegratedPenActive = ((unsigned __int8)v17 >> 1) & 1;
              if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v17 & 0x10001) != 0 )
                SwitchMouseCursors(1, 0, 0);
              v45[0] = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
              v45[1] = *((_DWORD *)ContactVisualizationPointerEventInt + 10);
              v45[2] = *((_DWORD *)ContactVisualizationPointerEventInt + 11);
              DeferPointerCursorOperation(
                (const struct tagPOINTEREVENTINT *)((char *)ContactVisualizationPointerEventInt + 8),
                (const struct tagPOINTERCURSORDATA *)v45);
            }
            else if ( !Feedback::gfIntegratedPenActive
                   && (*((_DWORD *)ContactVisualizationPointerEventInt + 5) & 0x2000) != 0 )
            {
              v46[0] = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
              v18 = 0;
              v46[1] = *((_DWORD *)ContactVisualizationPointerEventInt + 10);
              v46[2] = *((_DWORD *)ContactVisualizationPointerEventInt + 11);
              if ( (unsigned int)(*v15 - 2) <= 1 )
              {
                v19 = *((_QWORD *)ContactVisualizationPointerEventInt + 4);
                if ( v19 )
                {
                  v20 = ValidateHwnd(v19);
                  if ( v20 )
                  {
                    if ( (unsigned int)FeedbackGetWindowSetting(v20, 13LL, 1LL, &v47) )
                      v18 = v47;
                  }
                }
              }
              if ( (*((_DWORD *)ContactVisualizationPointerEventInt + 5) & 0x10001) != 0 )
              {
                v21 = 0;
                v22 = 0;
                v23 = v18;
                if ( *v15 == 3
                  && (unsigned int)GetPointerDeviceType(*((_QWORD *)ContactVisualizationPointerEventInt + 3)) == 2 )
                {
                  v23 = 1;
                }
                if ( !v23 )
                {
                  v24 = *(_DWORD *)UPDWORDPointer(8216LL);
                  if ( *v15 == 2 )
                  {
                    v25 = *((_QWORD *)ContactVisualizationPointerEventInt + 4);
                    if ( v25 )
                    {
                      v26 = ValidateHwnd(v25);
                      if ( v26 )
                      {
                        if ( (unsigned int)FeedbackGetWindowSetting(v26, 12LL, 1LL, &v47) )
                          v21 = v47;
                      }
                    }
                  }
                  if ( *v15 == 3 || !v24 || !(unsigned int)IsCurrentDesktopComposed() || v21 )
                  {
                    v21 = 1;
                    v22 = 0;
                  }
                  else
                  {
                    v22 = 1;
                  }
                }
                SwitchMouseCursors(v21, v22, v23);
                v8 = v48;
                v9 = v41;
              }
              if ( !v18 )
                DeferPointerCursorOperation(
                  (const struct tagPOINTEREVENTINT *)((char *)ContactVisualizationPointerEventInt + 8),
                  (const struct tagPOINTERCURSORDATA *)v46);
              v12 = v38;
            }
            if ( a5 == 3
              || (*(_DWORD *)v40 = 0, *v15 == 2)
              && !(unsigned int)Feedback::GetWindowVisualizationSetting(
                                  (const struct tagPOINTEREVENTINT *)((char *)ContactVisualizationPointerEventInt + 8),
                                  (const struct tagPOINTER_INFO *)(v9 == 0),
                                  a5 == 2,
                                  v9 == 2,
                                  (unsigned __int16)v40,
                                  (int *)v37)
              && !*(_DWORD *)v40 )
            {
              v7 = v42;
            }
            else
            {
              v7 = v42;
              if ( v42 )
              {
                v27 = 5LL * v12++;
                v28 = v42 + 8 * v27;
                v29 = 1;
                v38 = v12;
                if ( *v15 == 3 )
                  v29 = Feedback::GetWindowBarrelVisualizationSetting(
                          (const struct tagPOINTEREVENTINT *)((char *)ContactVisualizationPointerEventInt + 8),
                          (const struct tagPOINTER_INFO *)(v39 != 0),
                          v16) != 0;
                v30 = v50 && a5 == 2;
                Feedback::PointerEventIntToDigitizerContactInfo(
                  ContactVisualizationPointerEventInt,
                  (const struct tagPOINTEREVENTINT *)v30,
                  v29,
                  *(int *)v40,
                  v28,
                  v37);
                v31 = *((_DWORD *)ContactVisualizationPointerEventInt + 5);
                if ( (v31 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v31 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v8 = v48;
              }
            }
          }
          v11 = 1LL;
        }
      }
      v9 = v41;
      v8 = (_DWORD *)((char *)v8 + v13);
      v32 = v44 == v11;
      v44 -= v11;
      v48 = v8;
    }
    while ( !v32 );
    v6 = v43;
  }
  if ( v7 )
  {
    for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(v34 + i) )
    {
      v34 = v12 - i;
      if ( v12 - (unsigned int)i > 0xB )
        v34 = 11;
      v35 = (void *)ReferenceDwmApiPort(5 * i);
      v6 = DwmAsyncSendTouchContacts(v35);
      if ( v6 < 0 )
        break;
    }
    Win32FreePool(v7, v10, v11);
  }
  return v6 >= 0;
}
