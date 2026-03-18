/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C005E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0057F80 (DwmAsyncSetCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C005EAC4 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C010A6C4 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C010D5D4 (SetWindowCompositionNCRenderingExiled.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C01143B4 (IsTopLevelOrLayeredChildWindow.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0114CB0 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0115E64 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C0115F70 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0117064 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C011AC64 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C011F9E4 (SetWindowCompositionForceIconicSWR.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C020C2CC (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C020C380 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C020C434 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C020C4E4 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C020C598 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C020C62C (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C020C6E0 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C020C790 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C020C8F8 (SetWindowCompositionVisualOwner.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS v3; // edi
  ULONG64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v6; // xmm0_8
  size_t v7; // r8
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // ebx
  bool v14; // sf
  ULONG v15; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  NTSTATUS active; // eax
  int v24; // ebx
  int v25; // ebx
  unsigned int v26; // r15d
  __int64 v27; // rcx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  __int64 v32; // rbx
  struct tagWND *Host; // rax
  void *v34; // rax
  int v35; // eax
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  __int128 v39; // [rsp+28h] [rbp-90h] BYREF
  __int64 v40; // [rsp+38h] [rbp-80h]
  __m128i v41; // [rsp+50h] [rbp-68h]
  SIZE_T v42; // [rsp+60h] [rbp-58h]
  __m128i v43; // [rsp+68h] [rbp-50h]
  SIZE_T Length; // [rsp+78h] [rbp-40h]

  v3 = -1073741811;
  v41 = 0uLL;
  v42 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v43 = *a2;
  Length = a2[1].m128i_u64[0];
  v41 = v43;
  v42 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v43, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v43.m128i_i32[0] - 1) <= 0x18 )
  {
    v7 = qword_1C02E2038[2 * v43.m128i_i32[0]];
    if ( (unsigned int)Length >= v7 )
    {
      memmove(&v39, (const void *)v6, v7);
      v8 = 0LL;
      v3 = 0;
      goto LABEL_9;
    }
    v3 = -1073741789;
  }
  v8 = 0LL;
LABEL_9:
  if ( v3 < 0 )
  {
LABEL_16:
    v15 = RtlNtStatusToDosError(v3);
    UserSetLastError(v15);
    v14 = v3 < 0;
    goto LABEL_17;
  }
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwndIAMComponetUIAware(a1);
  v12 = v9;
  if ( !v9 )
    goto LABEL_14;
  v13 = v41.m128i_i32[0];
  if ( v41.m128i_i32[0] != 17 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v9) || *(_DWORD *)(v12 + 320) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v12) || v13 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v12) )
    {
      if ( v13 > 13 )
      {
        v28 = v13 - 15;
        if ( !v28 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance((struct tagWND *)v12);
          goto LABEL_27;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          active = SetWindowCompositionDisallowPeek((struct tagWND *)v12);
          goto LABEL_27;
        }
        v30 = v29 - 3;
        if ( !v30 )
        {
          active = SetWindowCompositionAccentPolicy((struct tagWND *)v12);
          goto LABEL_27;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          v36 = v31 - 2;
          if ( !v36 )
          {
            active = SetWindowCompositionVisualOwner((struct tagWND *)v12);
            goto LABEL_27;
          }
          v37 = v36 - 1;
          if ( !v37 )
          {
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              active = SetWindowCompositionHolographic((struct tagWND *)v12);
              goto LABEL_27;
            }
            v3 = -1073741790;
            goto LABEL_15;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            active = SetWindowCompositionExcludedFromDDA((struct tagWND *)v12);
            goto LABEL_27;
          }
          if ( v38 == 1 )
          {
            active = SetWindowCompositionPassiveUpdateMode((struct tagWND *)v12);
            goto LABEL_27;
          }
LABEL_75:
          v3 = -1073741811;
          goto LABEL_15;
        }
        SetWindowCompositionFreezeSWR((struct tagWND *)v12);
      }
      else
      {
        if ( v13 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview((struct tagWND *)v12);
          goto LABEL_27;
        }
        v17 = v13 - 2;
        if ( !v17 )
        {
          active = SetWindowCompositionNCRenderPolicy((struct tagWND *)v12);
          goto LABEL_27;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          active = SetWindowCompositionTransitions((struct tagWND *)v12);
          goto LABEL_27;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          active = SetWindowCompositionAllowNCPaint((struct tagWND *)v12);
          goto LABEL_27;
        }
        v20 = v19 - 2;
        if ( !v20 )
        {
          active = SetWindowCompositionNonClientRTLLayout((struct tagWND *)v12);
          goto LABEL_27;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          active = SetWindowCompositionForceIconicSWR((struct tagWND *)v12);
          goto LABEL_27;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          active = SetWindowExtendedBoundsMargin((struct tagWND *)v12);
          goto LABEL_27;
        }
        v24 = v22 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v12) )
              goto LABEL_15;
            v34 = (void *)ReferenceDwmApiPort(v11);
            active = DwmAsyncSetCompositionAttribute(v34, a1, 10, &v39);
            goto LABEL_27;
          }
          if ( v25 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled((struct tagWND *)v12);
            goto LABEL_27;
          }
          goto LABEL_75;
        }
      }
      active = SetWindowCompositionHasIconicBitmap((struct tagWND *)v12);
      goto LABEL_27;
    }
LABEL_14:
    v3 = -1073741816;
    goto LABEL_15;
  }
  v26 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v26 = 2;
  }
  else
  {
    v32 = *(_QWORD *)(gptiCurrent + 400LL);
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 400LL) == v32
      && ((*(_DWORD *)(v32 + 776) & 0x30) != 0x10 || (v35 = IsTopLevelWindow(v12)) == 0)
      || (unsigned int)CoreWindowProp::IsComponent((struct tagWND *)v12)
      && (Host = CoreWindowProp::GetHost((struct tagWND *)v12)) != 0LL
      && *(_QWORD *)(*((_QWORD *)Host + 2) + 400LL) == v32 )
    {
      v26 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !(_DWORD)v39 )
    {
      v27 = *(_QWORD *)(v12 + 120);
      if ( v27 )
      {
        if ( ((unsigned int)GetWindowCloakState(v27) & v26) != 0 )
          goto LABEL_75;
      }
    }
    active = zzzSetWindowCompositionCloak(v12, &v39, v26);
LABEL_27:
    v3 = active;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v11, v10);
  v14 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_16;
LABEL_17:
  LOBYTE(v8) = !v14;
  return v8;
}
