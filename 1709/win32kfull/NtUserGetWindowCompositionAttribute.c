/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C00630D0
 * Callers:
 *     <none>
 * Callees:
 *     DwmSyncGetCompositionAttribute @ 0x1C004C830 (DwmSyncGetCompositionAttribute.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _FindProp @ 0x1C0064018 (_FindProp.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C01143B4 (IsTopLevelOrLayeredChildWindow.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, ULONG64 a2)
{
  NTSTATUS CompositionAttribute; // edi
  __int64 v4; // r14
  size_t v5; // r12
  ULONG v6; // r8d
  void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r8d
  __int32 v19; // edx
  __m256i *v20; // rcx
  int v21; // eax
  bool v22; // al
  __int64 v23; // rcx
  bool v24; // sf
  int v26; // ebx
  __int64 v27; // r10
  unsigned __int32 v28; // esi
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r9
  __m256i **Prop; // rax
  __m256i *v37; // rax
  ULONG v38; // eax
  int v39; // r8d
  __int64 CurrentProcessWow64Process; // rax
  ULONG v41; // r8d
  _QWORD Src[4]; // [rsp+28h] [rbp-1E0h] BYREF
  size_t v43; // [rsp+58h] [rbp-1B0h]
  void *v44[2]; // [rsp+60h] [rbp-1A8h]
  SIZE_T v45; // [rsp+70h] [rbp-198h]
  __m256i v46; // [rsp+78h] [rbp-190h] BYREF
  __int64 v47; // [rsp+98h] [rbp-170h]
  __m256i v48; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-140h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-138h]
  SIZE_T Length; // [rsp+E0h] [rbp-128h]
  __int128 v52; // [rsp+E8h] [rbp-120h]
  __int128 v53; // [rsp+F8h] [rbp-110h]
  __int64 v54; // [rsp+110h] [rbp-F8h]
  int v55[10]; // [rsp+128h] [rbp-E0h] BYREF
  int v56[10]; // [rsp+150h] [rbp-B8h] BYREF
  int v57[10]; // [rsp+178h] [rbp-90h] BYREF
  int v58[26]; // [rsp+1A0h] [rbp-68h] BYREF

  CompositionAttribute = -1073741811;
  v44[0] = 0LL;
  v44[1] = 0LL;
  v45 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v43 = 0LL;
  memset(Src, 0, 24);
  if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v44 = *(_OWORD *)Address;
  v45 = Length;
  if ( PsGetCurrentProcessWow64Process(MmUserProbeAddress) )
    v6 = 1;
  else
    v6 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v6);
  if ( (unsigned int)(LODWORD(Address[0]) - 1) <= 0x18 )
  {
    v5 = qword_1C02E2038[2 * SLODWORD(Address[0])];
    v43 = v5;
    if ( (unsigned int)Length < v5 )
      CompositionAttribute = -1073741789;
    else
      CompositionAttribute = 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_82;
  v7 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( !v8 )
    goto LABEL_81;
  if ( LODWORD(v44[0]) == 18 )
  {
    v26 = 0;
    v27 = v8;
    v28 = v48.m256i_i32[0];
    while ( 1 )
    {
      v29 = *(_QWORD *)(v27 + 104);
      if ( v29 )
      {
        v10 = 0LL;
        v30 = *(_QWORD *)(v27 + 24);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 8);
          if ( v31 )
            v10 = *(_QWORD *)(v31 + 16);
        }
        if ( v29 == v10 )
          goto LABEL_62;
      }
      if ( (*(_BYTE *)(v27 + 66) & 8) != 0 )
      {
        v32 = v27;
        do
        {
          v10 = *(_QWORD *)(v32 + 104);
          if ( v10 )
          {
            v33 = 0LL;
            v34 = *(_QWORD *)(v32 + 24);
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 8);
              if ( v35 )
                v33 = *(_QWORD *)(v35 + 16);
            }
            if ( v10 == v33 )
              break;
          }
          v32 = *(_QWORD *)(v32 + 104);
        }
        while ( v10 );
        if ( v32 )
        {
LABEL_62:
          if ( *(_QWORD *)(v27 + 184)
            && (Prop = (__m256i **)FindProp(v27, (unsigned __int16)atomDWMProp, 1LL)) != 0LL
            && (v37 = *Prop) != 0LL )
          {
            v48 = *v37;
            v49 = v37[1].m256i_i64[0];
            v28 = v48.m256i_i32[0];
          }
          else
          {
            v28 &= 0xFFFF0000;
            v48.m256i_i64[0] = v28;
            v52 = 0uLL;
            memset(&v48.m256i_u64[1], 0, 24);
            v49 = 0LL;
          }
          v10 = 0LL;
          if ( (v28 & 0x400) != 0 || (v28 & 0x2000) != 0 )
            v10 = 1LL;
          v26 = v10 | 2;
          if ( (v28 & 0x800) == 0 )
            v26 = v10;
          if ( v26 )
            break;
        }
      }
      v27 = v29;
      if ( !v29 )
        goto LABEL_66;
    }
    if ( v27 != v11 )
      v26 |= 4u;
LABEL_66:
    LODWORD(Src[0]) = v26;
    goto LABEL_42;
  }
  if ( LODWORD(v44[0]) == 21 )
  {
    LODWORD(Src[0]) = *(_BYTE *)(v8 + 306) & 0x20;
    goto LABEL_42;
  }
  v12 = *(_QWORD *)(v8 + 104);
  if ( !v12 )
    goto LABEL_124;
  v13 = 0LL;
  v10 = *(_QWORD *)(v11 + 24);
  if ( v10 )
  {
    v9 = *(_QWORD *)(v10 + 8);
    if ( v9 )
      v13 = *(_QWORD *)(v9 + 16);
  }
  if ( v12 != v13 )
  {
LABEL_124:
    if ( LODWORD(v44[0]) != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v11) )
      goto LABEL_81;
  }
  switch ( LODWORD(v44[0]) )
  {
    case 1:
      if ( v12 )
      {
        v14 = 0LL;
        v10 = *(_QWORD *)(v11 + 24);
        if ( v10 )
        {
          v15 = *(_QWORD *)(v10 + 8);
          if ( v15 )
            v14 = *(_QWORD *)(v15 + 16);
        }
        if ( v12 == v14 )
          goto LABEL_26;
      }
      if ( (*(_BYTE *)(v11 + 66) & 8) != 0 && GetTopLevelWindow(v11) )
      {
LABEL_26:
        v16 = *(_QWORD *)(v11 + 184);
        if ( !v16 )
          goto LABEL_31;
        if ( !atomDWMProp )
          goto LABEL_31;
        v17 = v16 + 8;
        v18 = *(_DWORD *)(v16 + 4);
        if ( !v18 )
          goto LABEL_31;
        while ( *(_WORD *)(v17 + 8) != atomDWMProp || (*(_BYTE *)(v17 + 10) & 1) == 0 )
        {
          v17 += 16LL;
          if ( !--v18 )
            goto LABEL_31;
        }
        v20 = *(__m256i **)v17;
        if ( *(_QWORD *)v17 )
        {
          v46 = *v20;
          v47 = v20[1].m256i_i64[0];
          v19 = v46.m256i_i32[1];
          v10 = v46.m256i_u32[0];
        }
        else
        {
LABEL_31:
          v10 = v46.m256i_i32[0] & 0xFFFF0000;
          v46.m256i_i64[0] = v10;
          v19 = 0;
          v53 = 0uLL;
          memset(&v46.m256i_u64[1], 0, 24);
          v54 = 0LL;
          v47 = 0LL;
        }
        v21 = *(_DWORD *)(v11 + 64);
        if ( ((v21 & 0x80000) == 0 || (v21 & 0x20000000) != 0) && (v10 & 1) == 0 )
        {
          if ( v19 )
          {
            if ( v19 == 2 )
              LODWORD(v7) = 1;
          }
          else
          {
            v10 = *(unsigned __int8 *)(v11 + 70);
            v22 = (v10 & 0xC0) != 0xC0;
            LOBYTE(v10) = ~((unsigned __int8)v10 >> 2);
            if ( ((unsigned __int8)v10 & v22 & 1) == 0 )
              LODWORD(v7) = 1;
          }
        }
      }
      LODWORD(Src[0]) = (_DWORD)v7;
      goto LABEL_42;
    case 0x14:
      if ( (unsigned int)GetWindowCompositionInfo(v11, v55) && (v55[0] & 0x1000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_42;
      }
      goto LABEL_89;
    case 0x17:
      if ( (unsigned int)GetWindowCompositionInfo(v11, v56) && (v56[0] & 0x2000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_42;
      }
      goto LABEL_89;
    case 0x18:
      if ( (unsigned int)GetWindowCompositionInfo(v11, v57) && (v57[0] & 0x4000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_42;
      }
      goto LABEL_89;
    case 0x19:
      if ( (unsigned int)GetWindowCompositionInfo(v11, v58) && (v58[0] & 0x8000) != 0 )
      {
        LODWORD(Src[0]) = 1;
        goto LABEL_42;
      }
LABEL_89:
      LODWORD(Src[0]) = 0;
      goto LABEL_42;
  }
  if ( !(unsigned int)IsWindowDesktopComposed(v11) )
  {
LABEL_81:
    CompositionAttribute = -1073741816;
    goto LABEL_43;
  }
LABEL_42:
  v7 = (void *)ReferenceDwmApiPort(v10);
LABEL_43:
  UserSessionSwitchLeaveCrit(v10, v9);
  if ( CompositionAttribute >= 0 && LODWORD(v44[0]) != 1 && LODWORD(v44[0]) != 18 )
  {
    switch ( LODWORD(v44[0]) )
    {
      case 5:
        v39 = 5;
        goto LABEL_92;
      case 8:
        v39 = 8;
        goto LABEL_92;
      case 0xC:
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23);
        v41 = 4;
        if ( CurrentProcessWow64Process )
          v41 = 1;
        ProbeForRead(v44[1], 4uLL, v41);
        LODWORD(Src[0]) = *(_DWORD *)v44[1];
        v39 = 12;
LABEL_92:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v7, a1, v39, Src);
        v7 = 0LL;
        break;
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
  DereferenceDwmApiPort(v7);
  if ( CompositionAttribute < 0 )
  {
LABEL_82:
    v38 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v38);
    v24 = CompositionAttribute < 0;
    goto LABEL_47;
  }
  memmove(v44[1], Src, v5);
  v24 = CompositionAttribute < 0;
LABEL_47:
  LOBYTE(v4) = !v24;
  return v4;
}
