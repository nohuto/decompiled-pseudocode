/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C0038710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0004F60 (SetWindowCompositionFreezeSWR.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C001EC48 (DwmAsyncSetCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0038ADC (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C003BAC8 (SetWindowExtendedBoundsMargin.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00626B0 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0104380 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C010AC38 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C010BF00 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010DA24 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0113F78 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0114428 (SetWindowCompositionForceIconicSWR.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C020AF08 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C020AFBC (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C020B070 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C020B120 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C020B1D4 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C020B268 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C020B31C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C020B3CC (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C020B534 (SetWindowCompositionVisualOwner.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  NTSTATUS v5; // edi
  __int64 v6; // r14
  __int8 *v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v9; // xmm0_8
  size_t v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  struct tagWND *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // ebx
  bool v18; // sf
  ULONG v19; // eax
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  NTSTATUS active; // eax
  int v28; // ebx
  int v29; // ebx
  unsigned int v30; // r15d
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  __int64 v36; // rbx
  struct tagWND *Host; // rax
  void *v38; // rax
  int v39; // ebx
  int v40; // ebx
  int v41; // ebx
  __int128 v42; // [rsp+28h] [rbp-90h] BYREF
  __int64 v43; // [rsp+38h] [rbp-80h]
  __m128i v44; // [rsp+50h] [rbp-68h]
  SIZE_T v45; // [rsp+60h] [rbp-58h]
  __m128i v46; // [rsp+68h] [rbp-50h]
  SIZE_T Length; // [rsp+78h] [rbp-40h]

  v5 = -1073741811;
  v44 = 0uLL;
  v45 = 0LL;
  v6 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  v7 = &a2[1].m128i_i8[8];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || (unsigned __int64)v7 > W32UserProbeAddress )
    a2 = (__m128i *)W32UserProbeAddress;
  v46 = *a2;
  Length = a2[1].m128i_u64[0];
  v44 = v46;
  v45 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, a2, a3, a4);
  v9 = (volatile void *)_mm_srli_si128(v46, 8).m128i_u64[0];
  ProbeForRead(v9, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v46.m128i_i32[0] - 1) <= 0x18 )
  {
    v10 = qword_1C02E56B8[2 * v46.m128i_i32[0]];
    if ( (unsigned int)Length < v10 )
    {
      v5 = -1073741789;
    }
    else
    {
      memmove(&v42, (const void *)v9, v10);
      v5 = 0;
    }
  }
  if ( v5 < 0 )
    goto LABEL_15;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwndIAMComponetUIAware(a1);
  v16 = v11;
  if ( !v11 )
    goto LABEL_13;
  v17 = v44.m128i_i32[0];
  if ( v44.m128i_i32[0] != 17 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v11) || *(_DWORD *)(v16 + 320) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v16) || v17 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v16) )
    {
      if ( v17 > 13 )
      {
        v32 = v17 - 15;
        if ( !v32 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance((struct tagWND *)v16);
          goto LABEL_26;
        }
        v33 = v32 - 1;
        if ( !v33 )
        {
          active = SetWindowCompositionDisallowPeek((struct tagWND *)v16);
          goto LABEL_26;
        }
        v34 = v33 - 3;
        if ( !v34 )
        {
          active = SetWindowCompositionAccentPolicy((struct tagWND *)v16);
          goto LABEL_26;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          v39 = v35 - 2;
          if ( !v39 )
          {
            active = SetWindowCompositionVisualOwner((struct tagWND *)v16);
            goto LABEL_26;
          }
          v40 = v39 - 1;
          if ( !v40 )
          {
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              active = SetWindowCompositionHolographic((struct tagWND *)v16);
              goto LABEL_26;
            }
            v5 = -1073741790;
            goto LABEL_14;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            active = SetWindowCompositionExcludedFromDDA((struct tagWND *)v16);
            goto LABEL_26;
          }
          if ( v41 == 1 )
          {
            active = SetWindowCompositionPassiveUpdateMode((struct tagWND *)v16);
            goto LABEL_26;
          }
LABEL_74:
          v5 = -1073741811;
          goto LABEL_14;
        }
        SetWindowCompositionFreezeSWR((struct tagWND *)v16, (int *)&v42);
      }
      else
      {
        if ( v17 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview((struct tagWND *)v16);
          goto LABEL_26;
        }
        v21 = v17 - 2;
        if ( !v21 )
        {
          active = SetWindowCompositionNCRenderPolicy((struct tagWND *)v16);
          goto LABEL_26;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          active = SetWindowCompositionTransitions((struct tagWND *)v16);
          goto LABEL_26;
        }
        v23 = v22 - 1;
        if ( !v23 )
        {
          active = SetWindowCompositionAllowNCPaint((struct tagWND *)v16);
          goto LABEL_26;
        }
        v24 = v23 - 2;
        if ( !v24 )
        {
          active = SetWindowCompositionNonClientRTLLayout((struct tagWND *)v16);
          goto LABEL_26;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          active = SetWindowCompositionForceIconicSWR((struct tagWND *)v16);
          goto LABEL_26;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          active = SetWindowExtendedBoundsMargin((struct tagWND *)v16);
          goto LABEL_26;
        }
        v28 = v26 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( !v29 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v16) )
              goto LABEL_14;
            v38 = (void *)ReferenceDwmApiPort(v13, v12, v14, v15);
            active = DwmAsyncSetCompositionAttribute(v38, a1, 10, &v42);
            goto LABEL_26;
          }
          if ( v29 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled((struct tagWND *)v16);
            goto LABEL_26;
          }
          goto LABEL_74;
        }
      }
      active = SetWindowCompositionHasIconicBitmap((struct tagWND *)v16);
      goto LABEL_26;
    }
LABEL_13:
    v5 = -1073741816;
    goto LABEL_14;
  }
  v30 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v30 = 2;
  }
  else
  {
    v36 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( *(_QWORD *)(*(_QWORD *)(v16 + 16) + 376LL) == v36
      && ((*(_DWORD *)(v36 + 768) & 0x30) != 0x10 || !(unsigned int)IsTopLevelWindow(v16))
      || (unsigned int)CoreWindowProp::IsComponent((struct tagWND *)v16)
      && (Host = CoreWindowProp::GetHost(v13)) != 0LL
      && *(_QWORD *)(*((_QWORD *)Host + 2) + 376LL) == v36 )
    {
      v30 = 1;
    }
    else
    {
      v5 = -1073741790;
    }
  }
  if ( v5 >= 0 )
  {
    if ( !(_DWORD)v42 )
    {
      v31 = *(_QWORD *)(v16 + 120);
      if ( v31 )
      {
        if ( ((unsigned int)GetWindowCloakState(v31) & v30) != 0 )
          goto LABEL_74;
      }
    }
    active = zzzSetWindowCompositionCloak(v16, (__int64)&v42, v30);
LABEL_26:
    v5 = active;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  v18 = v5 < 0;
  if ( v5 < 0 )
  {
LABEL_15:
    v19 = RtlNtStatusToDosError(v5);
    UserSetLastError(v19);
    v18 = v5 < 0;
  }
  LOBYTE(v6) = !v18;
  return v6;
}
