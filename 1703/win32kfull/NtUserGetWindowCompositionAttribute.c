/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C0037F20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetWindowEffectiveCloakState @ 0x1C005F394 (GetWindowEffectiveCloakState.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00626B0 (IsTopLevelOrLayeredChildWindow.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C00E9738 (DwmSyncGetCompositionAttribute.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS CompositionAttribute; // edi
  __int64 v6; // r14
  size_t v7; // r12
  ULONG v8; // eax
  void *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __m256i *v21; // rcx
  int v22; // eax
  bool v23; // al
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // sf
  ULONG v29; // eax
  bool v30; // zf
  __int64 CurrentProcessWow64Process; // rax
  ULONG v32; // r8d
  _QWORD Src[4]; // [rsp+28h] [rbp-1A0h] BYREF
  size_t v34; // [rsp+58h] [rbp-170h]
  void *v35[2]; // [rsp+60h] [rbp-168h]
  SIZE_T v36; // [rsp+70h] [rbp-158h]
  __m256i v37; // [rsp+78h] [rbp-150h] BYREF
  __int64 v38; // [rsp+98h] [rbp-130h]
  volatile void *Address[2]; // [rsp+A8h] [rbp-120h]
  SIZE_T Length; // [rsp+B8h] [rbp-110h]
  __int128 v41; // [rsp+C0h] [rbp-108h]
  _DWORD v42[10]; // [rsp+E8h] [rbp-E0h] BYREF
  _DWORD v43[10]; // [rsp+110h] [rbp-B8h] BYREF
  _DWORD v44[10]; // [rsp+138h] [rbp-90h] BYREF
  _DWORD v45[26]; // [rsp+160h] [rbp-68h] BYREF

  CompositionAttribute = -1073741811;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  memset(Src, 0, 24);
  if ( a2 + 24 < a2 || a2 + 24 > W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v35 = *(_OWORD *)Address;
  v36 = Length;
  if ( PsGetCurrentProcessWow64Process(W32UserProbeAddress, a2, a3, a4) )
    v8 = 1;
  else
    v8 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v8);
  if ( (unsigned int)(LODWORD(Address[0]) - 1) <= 0x18 )
  {
    v7 = qword_1C02E56B8[2 * SLODWORD(Address[0])];
    v34 = v7;
    if ( (unsigned int)Length < v7 )
      CompositionAttribute = -1073741789;
    else
      CompositionAttribute = 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_50;
  v9 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v15 = v10;
  if ( !v10 )
    goto LABEL_49;
  if ( LODWORD(v35[0]) == 18 )
  {
    LODWORD(Src[0]) = GetWindowEffectiveCloakState(v10);
    goto LABEL_42;
  }
  if ( LODWORD(v35[0]) == 21 )
  {
    LODWORD(Src[0]) = *(_BYTE *)(v10 + 306) & 0x20;
    goto LABEL_42;
  }
  v16 = *(_QWORD *)(v10 + 104);
  if ( !v16 )
    goto LABEL_87;
  v17 = 0LL;
  v12 = *(_QWORD *)(v15 + 24);
  if ( v12 )
  {
    v11 = *(_QWORD *)(v12 + 8);
    if ( v11 )
      v17 = *(_QWORD *)(v11 + 16);
  }
  if ( v16 != v17 )
  {
LABEL_87:
    if ( LODWORD(v35[0]) != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v15) )
      goto LABEL_49;
  }
  switch ( LODWORD(v35[0]) )
  {
    case 1:
      if ( v16 )
      {
        v18 = 0LL;
        v12 = *(_QWORD *)(v15 + 24);
        if ( v12 )
        {
          v11 = *(_QWORD *)(v12 + 8);
          if ( v11 )
            v18 = *(_QWORD *)(v11 + 16);
        }
        if ( v16 == v18 )
          goto LABEL_26;
      }
      if ( (*(_BYTE *)(v15 + 66) & 8) != 0 && GetTopLevelWindow(v15) )
      {
LABEL_26:
        v19 = *(_QWORD *)(v15 + 184);
        if ( !v19 )
          goto LABEL_31;
        if ( !atomDWMProp )
          goto LABEL_31;
        v20 = v19 + 8;
        v13 = *(unsigned int *)(v19 + 4);
        if ( !(_DWORD)v13 )
          goto LABEL_31;
        while ( *(_WORD *)(v20 + 8) != atomDWMProp || (*(_BYTE *)(v20 + 10) & 1) == 0 )
        {
          v20 += 16LL;
          v30 = (_DWORD)v13 == 1;
          v13 = (unsigned int)(v13 - 1);
          if ( v30 )
            goto LABEL_31;
        }
        v21 = *(__m256i **)v20;
        if ( *(_QWORD *)v20 )
        {
          v37 = *v21;
          v38 = v21[1].m256i_i64[0];
          v11 = v37.m256i_u32[1];
          v12 = v37.m256i_u32[0];
        }
        else
        {
LABEL_31:
          v12 = v37.m256i_i32[0] & 0xFFFF0000;
          v37.m256i_i64[0] = v12;
          v11 = 0LL;
          v41 = 0uLL;
          memset(&v37.m256i_u64[1], 0, 24);
          v38 = 0LL;
        }
        v22 = *(_DWORD *)(v15 + 64);
        if ( ((v22 & 0x80000) == 0 || (v22 & 0x20000000) != 0) && (v12 & 1) == 0 )
        {
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 == 2 )
              LODWORD(v9) = 1;
          }
          else
          {
            v12 = *(unsigned __int8 *)(v15 + 70);
            v23 = (v12 & 0xC0) != 0xC0;
            LOBYTE(v12) = ~((unsigned __int8)v12 >> 2);
            if ( ((unsigned __int8)v12 & v23 & 1) == 0 )
              LODWORD(v9) = 1;
          }
        }
      }
      LODWORD(Src[0]) = (_DWORD)v9;
      goto LABEL_42;
    case 0x14:
      if ( !(unsigned int)GetWindowCompositionInfo(v15, v42) )
        goto LABEL_60;
      v30 = (v42[0] & 0x1000) == 0;
LABEL_59:
      if ( !v30 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_42;
      }
      goto LABEL_60;
    case 0x17:
      if ( (unsigned int)GetWindowCompositionInfo(v15, v43) )
      {
        v30 = (v43[0] & 0x2000) == 0;
        goto LABEL_59;
      }
LABEL_60:
      LODWORD(Src[0]) = 0;
      goto LABEL_42;
    case 0x18:
      if ( !(unsigned int)GetWindowCompositionInfo(v15, v44) )
        goto LABEL_60;
      v30 = (v44[0] & 0x4000) == 0;
      goto LABEL_59;
    case 0x19:
      if ( !(unsigned int)GetWindowCompositionInfo(v15, v45) )
        goto LABEL_60;
      v30 = (v45[0] & 0x8000) == 0;
      goto LABEL_59;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(v15) )
  {
LABEL_49:
    CompositionAttribute = -1073741816;
    goto LABEL_43;
  }
LABEL_42:
  v9 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
LABEL_43:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  if ( CompositionAttribute >= 0 && LODWORD(v35[0]) != 1 )
  {
    switch ( LODWORD(v35[0]) )
    {
      case 5:
      case 8:
        goto LABEL_52;
      case 0xC:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24, 0x1C0000000uLL, v25, v26);
        v32 = 4;
        if ( CurrentProcessWow64Process )
          v32 = 1;
        ProbeForRead(v35[1], 4uLL, v32);
        LODWORD(Src[0]) = *(_DWORD *)v35[1];
LABEL_52:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v9);
        v9 = 0LL;
        break;
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x17:
      case 0x18:
      case 0x19:
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v9);
  if ( CompositionAttribute < 0 )
  {
LABEL_50:
    v29 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v29);
    v27 = CompositionAttribute < 0;
    goto LABEL_47;
  }
  memmove(v35[1], Src, v7);
  v27 = CompositionAttribute < 0;
LABEL_47:
  LOBYTE(v6) = !v27;
  return v6;
}
