/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C007C018
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C007BE60 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned int WindowDpiLastNotify; // r12d
  __int64 v15; // r15
  int WindowBordersForDpi; // eax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 SysMenu; // rax
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  int v26; // r15d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD v50[2]; // [rsp+50h] [rbp-10h] BYREF

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v50);
  v11 = 0LL;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v8);
    goto LABEL_28;
  }
  v12 = 1;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
  }
  else if ( (*(_DWORD *)(BugCheckParameter2 + 368) & 0xF) == 0
         && (v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 432LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 400LL) + 284LL);
  }
  if ( a2 == -3 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x40) == 0 )
    {
      v15 = *(_QWORD *)(BugCheckParameter2 + 208);
      if ( v15 )
      {
        if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(v15 + 68) )
        {
          *(_QWORD *)(a4 + 24) = *(_QWORD *)v15;
          if ( *(_DWORD *)(v15 + 72) && *(_DWORD *)(v15 + 76) )
          {
            if ( (_DWORD)v5 )
            {
              v32 = *(_QWORD *)(v15 + 96);
              v33 = 152 * v5;
              if ( (*(_BYTE *)(BugCheckParameter2 + 66) & 0x40) != 0 )
              {
                v34 = *(_DWORD *)(BugCheckParameter2 + 136) - *(_DWORD *)(v33 + v32 - 80);
                *(_DWORD *)(a4 + 12) = v34;
                *(_DWORD *)(a4 + 4) = v34 - *(_DWORD *)(v33 + v32 - 72);
              }
              else
              {
                v35 = *(_DWORD *)(BugCheckParameter2 + 128) + *(_DWORD *)(v33 + v32 - 80);
                *(_DWORD *)(a4 + 4) = v35;
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v33 + v32 - 72) + v35;
              }
              v36 = *(_DWORD *)(BugCheckParameter2 + 132) + *(_DWORD *)(v33 + v32 - 76);
              *(_DWORD *)(a4 + 8) = v36;
              *(_DWORD *)(a4 + 16) = *(_DWORD *)(v33 + v32 - 68) + v36;
            }
            else
            {
              WindowBordersForDpi = GetWindowBordersForDpi(
                                      *(_DWORD *)(BugCheckParameter2 + 68),
                                      *(_DWORD *)(BugCheckParameter2 + 64),
                                      v9,
                                      v10,
                                      WindowDpiLastNotify);
              if ( (*(_BYTE *)(BugCheckParameter2 + 66) & 0x40) != 0 )
              {
                v31 = *(_DWORD *)(BugCheckParameter2 + 136) - WindowBordersForDpi;
                *(_DWORD *)(a4 + 12) = v31;
                *(_DWORD *)(a4 + 4) = v31 - *(_DWORD *)(v15 + 72);
              }
              else
              {
                v17 = WindowBordersForDpi + *(_DWORD *)(BugCheckParameter2 + 128);
                *(_DWORD *)(a4 + 4) = v17;
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v15 + 72) + v17;
              }
              *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(BugCheckParameter2 + 132);
              if ( (*(_BYTE *)(BugCheckParameter2 + 56) & 8) != 0 )
              {
                v18 = 22LL;
                if ( *(char *)(BugCheckParameter2 + 64) >= 0 )
                  v18 = 2LL;
                *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(v18, WindowDpiLastNotify);
              }
              *(_DWORD *)(a4 + 16) = *(_DWORD *)(v15 + 76) + *(_DWORD *)(a4 + 8);
            }
          }
          v19 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 584LL);
          if ( v19 )
            v20 = *v19;
          else
            v20 = 0LL;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v50, v20);
          if ( !*(_QWORD *)v50[0] || (**(_DWORD **)v50[0] & 2) == 0 || (**(_DWORD **)v50[0] & 4) != 0 )
            goto LABEL_25;
          goto LABEL_62;
        }
      }
    }
LABEL_28:
    v12 = 0;
    goto LABEL_25;
  }
  if ( a2 != -1 )
  {
    if ( a2 == -4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      v39 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
      v40 = ValidateHmenu(v39);
      if ( v40 )
      {
        if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(v40 + 68) )
        {
          *(_QWORD *)(a4 + 24) = v39;
          if ( (_DWORD)v5 )
          {
            v41 = *(_QWORD *)(v40 + 96);
            v42 = 152 * v5;
            if ( (*(_BYTE *)(BugCheckParameter2 + 66) & 0x40) != 0 )
            {
              v43 = *(_DWORD *)(BugCheckParameter2 + 152) - *(_DWORD *)(v42 + v41 - 80);
              *(_DWORD *)(a4 + 12) = v43;
              *(_DWORD *)(a4 + 4) = v43 - *(_DWORD *)(v42 + v41 - 72);
            }
            else
            {
              v44 = *(_DWORD *)(BugCheckParameter2 + 144) + *(_DWORD *)(v42 + v41 - 80);
              *(_DWORD *)(a4 + 4) = v44;
              *(_DWORD *)(a4 + 12) = *(_DWORD *)(v42 + v41 - 72) + v44;
            }
            v45 = *(_DWORD *)(BugCheckParameter2 + 148) + *(_DWORD *)(v42 + v41 - 76);
            *(_DWORD *)(a4 + 8) = v45;
            *(_DWORD *)(a4 + 16) = *(_DWORD *)(v42 + v41 - 68) + v45;
          }
          else
          {
            *(_OWORD *)(a4 + 4) = *(_OWORD *)(BugCheckParameter2 + 144);
          }
          v46 = safe_cast_fnid_to_PMENUWND(BugCheckParameter2);
          if ( !v46 )
            goto LABEL_25;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v50, *(_QWORD *)(v46 + 8));
          if ( !*(_QWORD *)v50[0] )
            goto LABEL_25;
          v47 = *(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 16) + 584LL);
          v48 = v47 ? *v47 : 0LL;
          if ( *(_QWORD *)(*(_QWORD *)v50[0] + 64LL) != v48 )
            goto LABEL_25;
          *(_DWORD *)(a4 + 40) |= 1u;
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)v50[0] + 80LL) + 1 )
              goto LABEL_25;
            v49 = v50[0];
            *(_DWORD *)(a4 + 40) |= 2u;
            if ( *(_QWORD *)(*(_QWORD *)v49 + 24LL) )
              v11 = **(_QWORD **)(*(_QWORD *)v50[0] + 24LL);
            goto LABEL_67;
          }
LABEL_88:
          *(_DWORD *)(a4 + 40) |= 2u;
          goto LABEL_25;
        }
      }
    }
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 70) & 8) == 0 )
    goto LABEL_28;
  SysMenu = xxxGetSysMenu((struct tagWND *)BugCheckParameter2, 0);
  if ( !SysMenu || (int)v5 < 0 || (unsigned int)v5 > *(_DWORD *)(SysMenu + 68) )
    goto LABEL_28;
  *(_QWORD *)(a4 + 24) = *(_QWORD *)SysMenu;
  if ( (unsigned int)HasCaptionIcon(BugCheckParameter2) )
  {
    v25 = GetWindowBordersForDpi(
            *(_DWORD *)(BugCheckParameter2 + 68),
            *(_DWORD *)(BugCheckParameter2 + 64),
            v23,
            v24,
            WindowDpiLastNotify);
    v26 = v25;
    if ( (*(_BYTE *)(BugCheckParameter2 + 66) & 0x40) != 0 )
    {
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(BugCheckParameter2 + 136) - v25;
      v37 = 23LL;
      if ( *(char *)(BugCheckParameter2 + 64) >= 0 )
        v37 = 12LL;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - GetDpiDependentMetric(v37, WindowDpiLastNotify);
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v25 + *(_DWORD *)(BugCheckParameter2 + 128);
      v27 = 23LL;
      if ( *(char *)(BugCheckParameter2 + 64) >= 0 )
        v27 = 12LL;
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + GetDpiDependentMetric(v27, WindowDpiLastNotify);
    }
    *(_DWORD *)(a4 + 8) = v26 + *(_DWORD *)(BugCheckParameter2 + 132);
    v28 = 24LL;
    if ( *(char *)(BugCheckParameter2 + 64) >= 0 )
      v28 = 13LL;
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8) + GetDpiDependentMetric(v28, WindowDpiLastNotify);
  }
  v29 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 584LL);
  if ( v29 )
    v30 = *v29;
  else
    v30 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v50, v30);
  if ( !*(_QWORD *)v50[0] || (**(_DWORD **)v50[0] & 2) == 0 || (**(_DWORD **)v50[0] & 4) == 0 )
    goto LABEL_25;
LABEL_62:
  if ( *(_QWORD *)(*(_QWORD *)v50[0] + 8LL) != BugCheckParameter2 )
    goto LABEL_25;
  *(_DWORD *)(a4 + 40) |= 1u;
  if ( !(_DWORD)v5 )
    goto LABEL_88;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 64LL) + 80LL) == (_DWORD)v5 - 1 )
  {
    v38 = v50[0];
    *(_DWORD *)(a4 + 40) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38 + 64LL) + 24LL) )
      v11 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v50[0] + 64LL) + 24LL);
LABEL_67:
    *(_QWORD *)(a4 + 32) = v11;
  }
LABEL_25:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50);
  return v12;
}
