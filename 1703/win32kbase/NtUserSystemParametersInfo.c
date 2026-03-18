/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C00E4870
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceUIPISystemError @ 0x1C0088050 (EtwTraceUIPISystemError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     SetLastNtError @ 0x1C013E9AC (SetLastNtError.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned int v4; // r13d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r12
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rbx
  LARGE_INTEGER v14; // r8
  char v15; // al
  struct tagTHREADINFO *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  bool v19; // zf
  bool v20; // zf
  unsigned int v21; // eax
  bool v22; // zf
  unsigned int v23; // eax
  bool v24; // zf
  unsigned int v25; // eax
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  int v35; // eax
  const void *v36; // r15
  size_t v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  _DWORD *v40; // r15
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  _OWORD *v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rax
  _OWORD *v48; // rdx
  _OWORD *v49; // rax
  int v50; // edi
  __int64 v51; // rax
  __int64 v52; // r12
  _OWORD *v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  __int64 v63; // [rsp+20h] [rbp-328h]
  int v64; // [rsp+30h] [rbp-318h]
  _DWORD *v65; // [rsp+38h] [rbp-310h]
  _DWORD *v66; // [rsp+38h] [rbp-310h]
  int v67; // [rsp+40h] [rbp-308h]
  _DWORD *v68; // [rsp+48h] [rbp-300h]
  _DWORD *v69; // [rsp+50h] [rbp-2F8h]
  int v70; // [rsp+58h] [rbp-2F0h]
  struct tagTHREADINFO *v71; // [rsp+78h] [rbp-2D0h]
  __int64 v72; // [rsp+B0h] [rbp-298h]
  _BYTE v73[24]; // [rsp+B8h] [rbp-290h] BYREF
  _BYTE v74[24]; // [rsp+D0h] [rbp-278h] BYREF
  _BYTE v75[608]; // [rsp+E8h] [rbp-260h] BYREF
  unsigned int Size; // [rsp+358h] [rbp+10h]

  Size = a2;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v64 = 0;
  v65 = 0LL;
  v69 = 0LL;
  v70 = 0;
  v67 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v71 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v15 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v15 = 0;
      }
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v12.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v12.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v14.QuadPart,
          v13.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v63) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        v63,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v3 = a3;
    v4 = Size;
    v6 = 0;
    v65 = 0LL;
  }
  v16 = v71;
  gptiCurrent = v71;
  gbValidateHandleForIL = 1;
  if ( (*((_DWORD *)v71 + 110) & 0x20000000) != 0 )
  {
    v16 = *(struct tagTHREADINFO **)(*((_QWORD *)v71 + 47) + 720LL);
    v17 = *((_DWORD *)v16 + 6) & 8;
  }
  else
  {
    v17 = 0;
  }
  if ( v17
    || (v18 = PsGetCurrentProcessWin32Process(v16),
        !CheckAccessForIntegrityLevelEx(*(_QWORD *)(v18 + 824), 0xFFFFFFFF00002000uLL, 0)) )
  {
    if ( v5 <= 0x93 )
    {
      if ( v5 != 147 )
      {
        switch ( v5 )
        {
          case 2u:
          case 4u:
          case 6u:
          case 0xBu:
          case 0xDu:
          case 0xFu:
          case 0x11u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x17u:
          case 0x18u:
          case 0x1Au:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x24u:
          case 0x25u:
          case 0x2Au:
          case 0x2Cu:
          case 0x2Eu:
          case 0x2Fu:
          case 0x31u:
          case 0x33u:
          case 0x35u:
          case 0x37u:
          case 0x39u:
          case 0x3Bu:
          case 0x3Du:
          case 0x41u:
          case 0x43u:
          case 0x45u:
          case 0x47u:
          case 0x49u:
          case 0x4Bu:
          case 0x4Cu:
          case 0x4Du:
          case 0x4Eu:
          case 0x51u:
          case 0x52u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
          case 0x5Au:
          case 0x5Bu:
          case 0x5Du:
          case 0x60u:
          case 0x61u:
          case 0x63u:
          case 0x65u:
          case 0x67u:
          case 0x69u:
          case 0x6Bu:
          case 0x6Du:
          case 0x6Fu:
          case 0x71u:
          case 0x75u:
          case 0x77u:
            goto LABEL_301;
          default:
            goto LABEL_66;
        }
      }
      goto LABEL_301;
    }
    if ( v5 <= 0x1019 )
    {
      if ( v5 == 4121 )
        goto LABEL_301;
      if ( v5 <= 0x1001 )
      {
        if ( v5 == 4097 )
          goto LABEL_301;
        if ( v5 <= 0xA3 )
        {
          if ( v5 == 163 || v5 == 149 || v5 == 151 || v5 == 153 || v5 == 155 )
            goto LABEL_301;
          v19 = v5 == 161;
LABEL_65:
          if ( !v19 )
            goto LABEL_66;
LABEL_301:
          CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v16);
          EtwTraceUIPISystemError(CurrentProcessWin32Process, 0LL, 1);
          v30 = 5LL;
          goto LABEL_302;
        }
        if ( v5 == 166 )
          goto LABEL_301;
        v21 = v5 - 169;
        v20 = v5 == 169;
        goto LABEL_61;
      }
      if ( v5 > 0x100D )
      {
        if ( v5 == 4111 )
          goto LABEL_301;
        v21 = v5 - 4115;
        v20 = v5 == 4115;
        goto LABEL_61;
      }
      if ( v5 == 4109 || v5 == 4099 )
        goto LABEL_301;
      v23 = v5 - 4101;
      v22 = v5 == 4101;
LABEL_59:
      if ( v22 )
        goto LABEL_301;
      v21 = v23 - 2;
      v20 = v21 == 0;
LABEL_61:
      if ( v20 )
        goto LABEL_301;
      v25 = v21 - 2;
      v24 = v25 == 0;
      goto LABEL_63;
    }
    if ( v5 > 0x2001 )
    {
      if ( v5 > 0x2015 )
      {
        v22 = v5 == 8215;
        v23 = v5 - 8215;
        goto LABEL_59;
      }
      if ( v5 == 8213 || v5 == 8195 || v5 == 8197 || v5 == 8201 )
        goto LABEL_301;
      v25 = v5 - 8207;
      v24 = v5 == 8207;
    }
    else
    {
      if ( v5 == 8193 )
        goto LABEL_301;
      if ( v5 > 0x1049 )
      {
        v22 = v5 == 4171;
        v23 = v5 - 4171;
        goto LABEL_59;
      }
      if ( v5 == 4169 || v5 == 4125 || v5 == 4127 || v5 == 4135 )
        goto LABEL_301;
      v25 = v5 - 4161;
      v24 = v5 == 4161;
    }
LABEL_63:
    if ( v24 )
      goto LABEL_301;
    v19 = v25 == 2;
    goto LABEL_65;
  }
LABEL_66:
  v26 = Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v68 = v26;
  if ( !v26 )
  {
    v30 = 8LL;
LABEL_302:
    v50 = 0;
    UserSetLastError(v30, v27, v28, v29);
    goto LABEL_303;
  }
  PushW32ThreadLock(v26, v74, Win32FreePool);
  if ( v5 <= 0x54 )
  {
    if ( v5 >= 0x53 )
      goto LABEL_291;
    if ( v5 <= 0x2E )
    {
      if ( v5 == 46 )
      {
        v6 = 108;
        goto LABEL_258;
      }
      if ( v5 <= 0x18 )
      {
        if ( v5 == 24 )
        {
LABEL_109:
          if ( (v3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
            goto LABEL_295;
          goto LABEL_291;
        }
        if ( v5 <= 0xE )
        {
          if ( v5 == 14 || v5 == 1 )
            goto LABEL_291;
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 && v5 != 10 )
              {
                if ( v5 != 13 )
                  goto LABEL_271;
                goto LABEL_109;
              }
LABEL_291:
              v64 = 4;
              v69 = (_DWORD *)v3;
              if ( v3 >= (unsigned __int64)W32UserProbeAddress )
                v3 = (unsigned __int64)W32UserProbeAddress;
              *(_DWORD *)v3 = *(_DWORD *)v3;
              v67 = 1;
              v3 = (unsigned __int64)v68;
LABEL_108:
              v4 = Size;
              v6 = v64;
              v40 = v69;
              goto LABEL_296;
            }
            goto LABEL_83;
          }
          goto LABEL_85;
        }
        if ( v5 == 16 || v5 == 18 )
          goto LABEL_291;
        if ( v5 == 20 )
        {
          if ( !v3 )
            v3 = -1LL;
          if ( v3 > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_92;
          goto LABEL_96;
        }
        v34 = v5 - 21;
        if ( v5 == 21 )
        {
          if ( v4 == -1 )
            goto LABEL_295;
          if ( !v3 )
          {
LABEL_92:
            v4 = -1;
            goto LABEL_295;
          }
LABEL_96:
          if ( v3 >= (unsigned __int64)W32UserProbeAddress )
            v3 = (unsigned __int64)W32UserProbeAddress;
          v35 = *(_DWORD *)v3;
          v36 = *(const void **)(v3 + 8);
          if ( ((unsigned __int8)v36 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v37 = (unsigned __int16)v35;
          v38 = (unsigned __int64)v36 + (unsigned __int16)v35 + 2;
          if ( v38 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v35 > (unsigned __int16)HIWORD(*(_DWORD *)v3)
            || (v35 & 1) != 0
            || v38 <= (unsigned __int64)v36 )
          {
            *(_BYTE *)W32UserProbeAddress = 0;
          }
          v39 = Win32AllocPoolWithQuota((unsigned __int16)v35 + 2LL, 0x79747355u);
          v3 = v39;
          if ( !v39 )
            ExRaiseStatus(-1073741801);
          PushW32ThreadLock(v39, v73, Win32FreePool);
          v70 = 1;
          memmove((void *)v3, v36, v37);
          *(_WORD *)(v3 + 2 * (v37 >> 1)) = 0;
          goto LABEL_108;
        }
        goto LABEL_117;
      }
      if ( v5 <= 0x26 )
      {
        if ( v5 == 38 || v5 == 25 || v5 == 27 )
          goto LABEL_291;
        if ( v5 == 31 )
        {
          v6 = 92;
          goto LABEL_268;
        }
        v34 = v5 - 34;
        if ( v5 != 34 )
        {
LABEL_117:
          if ( v34 == 1 )
            goto LABEL_291;
LABEL_271:
          if ( v5 < 0xAE )
            goto LABEL_295;
          if ( v5 - 4096 > 0x51 && v5 - 0x2000 > 0x21
            || v4 && (*((_DWORD *)gptiCurrent + 138) > 0x400u || v5 != 4159 || v4 != 1) )
          {
            goto LABEL_285;
          }
          if ( (v5 & 1) != 0 )
          {
            if ( v5 == 8193 )
            {
              if ( (int)IsCanForceForegroundSupported() < 0
                || (v60 = PsGetCurrentProcessWin32Process(v57), !(unsigned int)CanForceForeground(v60)) )
              {
                UserSetLastError(5LL, v56, v58, v59);
                v50 = 0;
                goto LABEL_298;
              }
            }
            else
            {
              if ( v5 != 8203 )
              {
                if ( v5 == 8211 && (v3 & 0xFFFFFFFE) != 0 )
                  goto LABEL_285;
                goto LABEL_295;
              }
              if ( (v3 & 0xFFFFFFFC) != 0 )
              {
LABEL_285:
                UserSetLastError(87LL, v31, v32, v33);
                v50 = 0;
                goto LABEL_298;
              }
            }
            goto LABEL_295;
          }
          goto LABEL_291;
        }
        v6 = 92;
LABEL_258:
        if ( (v3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v54 = v3 + v6;
        if ( v54 > (unsigned __int64)W32UserProbeAddress || v54 < v3 )
          *(_BYTE *)W32UserProbeAddress = 0;
        goto LABEL_263;
      }
      if ( v5 == 41 )
      {
        if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_285;
        v6 = v4;
        goto LABEL_268;
      }
      if ( v5 != 42 )
      {
        if ( v5 == 43 )
        {
          v6 = 20;
          goto LABEL_268;
        }
        if ( v5 == 44 )
        {
          v6 = 20;
          goto LABEL_258;
        }
        if ( v5 != 45 )
          goto LABEL_271;
        v6 = 108;
LABEL_268:
        v40 = (_DWORD *)v3;
        v3 = (unsigned __int64)v68;
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(v40, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v67 = 1;
        *v68 = *v40;
        goto LABEL_296;
      }
      if ( ((v4 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_285;
      v6 = v4;
LABEL_257:
      if ( !v6 )
      {
LABEL_263:
        memmove(v68, (const void *)v3, v6);
        v3 = (unsigned __int64)v68;
        goto LABEL_295;
      }
      goto LABEL_258;
    }
    if ( v5 > 0x3C )
    {
      if ( v5 <= 0x44 )
      {
        switch ( v5 )
        {
          case 'D':
            goto LABEL_291;
          case '=':
LABEL_83:
            v6 = 12;
            goto LABEL_258;
          case '@':
            v6 = 56;
            goto LABEL_268;
        }
        if ( v5 != 65 )
        {
          if ( v5 == 66 )
          {
            v6 = 16;
            v44 = PsGetCurrentProcessWow64Process();
            ProbeForWrite((volatile void *)v3, 0x10uLL, v44 != 0 ? 1 : 4);
            v65 = (_DWORD *)v3;
            *(_OWORD *)v68 = *(_OWORD *)v3;
            v3 = (unsigned __int64)v68;
            ProbeForWrite(*((volatile void **)v68 + 1), 0x100uLL, 2u);
            v67 = 1;
            goto LABEL_295;
          }
          if ( v5 == 67 )
          {
            if ( v3 + 24 < v3 || v3 + 24 > (unsigned __int64)W32UserProbeAddress )
              v3 = (unsigned __int64)W32UserProbeAddress;
            v72 = *(_QWORD *)(v3 + 16);
            *(_OWORD *)v68 = *(_OWORD *)v3;
            *((_QWORD *)v68 + 2) = v72;
            v3 = (unsigned __int64)v68;
            v41 = *((_QWORD *)v68 + 2);
            if ( (v41 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v42 = *((unsigned __int16 *)v68 + 4);
            v43 = v42 + v41 + 2;
            if ( v43 >= (unsigned __int64)W32UserProbeAddress
              || (unsigned __int16)v42 > *((_WORD *)v68 + 5)
              || (v42 & 1) != 0
              || v43 <= v41 )
            {
              *(_BYTE *)W32UserProbeAddress = 0;
            }
            if ( !*((_WORD *)v68 + 4) )
              *((_QWORD *)v68 + 2) = 0LL;
            goto LABEL_295;
          }
          goto LABEL_271;
        }
        v6 = 56;
        goto LABEL_258;
      }
      if ( v5 == 70 )
        goto LABEL_291;
      if ( v5 == 72 )
      {
LABEL_144:
        v6 = 8;
        goto LABEL_268;
      }
      if ( v5 != 73 )
      {
        if ( v5 == 74 || v5 - 79 <= 1 )
          goto LABEL_291;
        goto LABEL_271;
      }
    }
    else
    {
      if ( v5 == 60 )
      {
LABEL_85:
        v6 = 12;
        goto LABEL_268;
      }
      if ( v5 > 0x35 )
      {
        switch ( v5 )
        {
          case '6':
            v6 = 28;
            goto LABEL_268;
          case '7':
            v6 = 28;
            goto LABEL_258;
          case '8':
            goto LABEL_291;
          case ':':
            goto LABEL_144;
        }
        if ( v5 != 59 )
          goto LABEL_271;
      }
      else if ( v5 != 53 )
      {
        if ( v5 != 47 )
        {
          if ( v5 != 48 )
          {
            if ( v5 == 50 )
            {
              v6 = 24;
              goto LABEL_268;
            }
            if ( v5 == 51 )
            {
              v6 = 24;
              goto LABEL_258;
            }
            if ( v5 != 52 )
              goto LABEL_271;
            goto LABEL_144;
          }
LABEL_147:
          v6 = 16;
          goto LABEL_268;
        }
LABEL_148:
        v6 = 16;
        goto LABEL_258;
      }
    }
LABEL_149:
    v6 = 8;
    goto LABEL_258;
  }
  if ( v5 <= 0x8E )
  {
    if ( v5 != 142 )
    {
      switch ( v5 )
      {
        case 0x59u:
          goto LABEL_144;
        case 0x5Au:
          goto LABEL_149;
        case 0x5Eu:
        case 0x5Fu:
        case 0x62u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Cu:
        case 0x6Eu:
        case 0x70u:
        case 0x72u:
        case 0x76u:
        case 0x78u:
        case 0x7Au:
        case 0x7Cu:
        case 0x7Eu:
        case 0x80u:
        case 0x82u:
        case 0x84u:
        case 0x86u:
        case 0x88u:
        case 0x8Au:
        case 0x8Cu:
          goto LABEL_291;
        case 0x73u:
          v66 = (_DWORD *)v3;
          v3 = (unsigned __int64)v68;
          v40 = v66;
          ProbeForWrite(v66, 2LL * v4, 2u);
          if ( v4 >= 0x104 )
            v4 = 260;
          v6 = 2 * v4;
          goto LABEL_192;
        case 0x74u:
          goto LABEL_85;
        case 0x75u:
          goto LABEL_83;
        default:
          goto LABEL_271;
      }
    }
    goto LABEL_291;
  }
  if ( v5 > 0x1026 )
  {
    if ( v5 == 4135 )
      goto LABEL_295;
    if ( v5 == 8221 )
    {
      if ( v3 > 2 )
        goto LABEL_285;
      goto LABEL_295;
    }
    goto LABEL_271;
  }
  if ( v5 == 4134 )
    goto LABEL_291;
  if ( v5 > 0x9C )
  {
    if ( v5 > 0xA5 )
    {
      if ( v5 != 167 )
      {
        if ( v5 == 168 || v5 == 170 )
          goto LABEL_291;
        if ( v5 == 172 )
        {
          if ( v4 != 4 )
            goto LABEL_285;
          v6 = 4;
          goto LABEL_268;
        }
        if ( v5 != 173 )
          goto LABEL_271;
        if ( v4 != 4 )
          goto LABEL_285;
        v6 = 4;
        goto LABEL_257;
      }
    }
    else if ( v5 != 165 )
    {
      if ( v5 != 157 )
      {
        if ( v5 == 158 || v5 == 160 )
          goto LABEL_291;
        if ( v5 == 162 )
          goto LABEL_147;
        if ( v5 != 163 )
          goto LABEL_271;
      }
      goto LABEL_148;
    }
    v6 = 12;
    if ( v4 != 12 )
      goto LABEL_285;
    goto LABEL_268;
  }
  if ( v5 == 156 )
  {
    if ( v4 != 16 )
      goto LABEL_285;
    goto LABEL_147;
  }
  if ( v5 <= 0x96 )
  {
    switch ( v5 )
    {
      case 0x96u:
        v6 = 28;
        if ( v4 != 28 )
          goto LABEL_285;
        break;
      case 0x90u:
        goto LABEL_291;
      case 0x92u:
        v6 = 56;
        if ( v4 != 56 )
          goto LABEL_285;
        break;
      case 0x93u:
        v6 = 56;
        if ( v4 != 56 )
          goto LABEL_285;
        goto LABEL_258;
      case 0x94u:
        if ( v4 != 32 )
          goto LABEL_285;
        v6 = 32;
        break;
      case 0x95u:
        if ( v4 != 32 )
          goto LABEL_285;
        v6 = 32;
        goto LABEL_258;
      default:
        goto LABEL_271;
    }
    goto LABEL_268;
  }
  switch ( v5 )
  {
    case 0x97u:
      v6 = 28;
      if ( v4 != 28 )
        goto LABEL_285;
      goto LABEL_258;
    case 0x98u:
      if ( v4 != 128 )
        goto LABEL_285;
      v6 = 128;
      goto LABEL_268;
    case 0x99u:
      if ( v4 != 128 )
        goto LABEL_285;
      v6 = 128;
      goto LABEL_258;
    case 0x9Au:
      if ( v4 == 548 )
      {
        v6 = 548;
        v51 = PsGetCurrentProcessWow64Process();
        v52 = 4LL;
        ProbeForWrite((volatile void *)v3, 0x224uLL, v51 != 0 ? 1 : 4);
        v40 = (_DWORD *)v3;
        v53 = v68;
        do
        {
          *v53 = *(_OWORD *)v3;
          v53[1] = *(_OWORD *)(v3 + 16);
          v53[2] = *(_OWORD *)(v3 + 32);
          v53[3] = *(_OWORD *)(v3 + 48);
          v53[4] = *(_OWORD *)(v3 + 64);
          v53[5] = *(_OWORD *)(v3 + 80);
          v53[6] = *(_OWORD *)(v3 + 96);
          v53 += 8;
          *(v53 - 1) = *(_OWORD *)(v3 + 112);
          v3 += 128LL;
          --v52;
        }
        while ( v52 );
        *v53 = *(_OWORD *)v3;
        v53[1] = *(_OWORD *)(v3 + 16);
        *((_DWORD *)v53 + 8) = *(_DWORD *)(v3 + 32);
        v3 = (unsigned __int64)v68;
LABEL_192:
        v67 = 1;
        goto LABEL_296;
      }
      goto LABEL_285;
  }
  if ( v4 != 548 )
    goto LABEL_285;
  v6 = 548;
  if ( v3 + 548 < v3 || v3 + 548 > (unsigned __int64)W32UserProbeAddress )
    v3 = (unsigned __int64)W32UserProbeAddress;
  v45 = v75;
  v46 = 4LL;
  v47 = 4LL;
  do
  {
    *v45 = *(_OWORD *)v3;
    v45[1] = *(_OWORD *)(v3 + 16);
    v45[2] = *(_OWORD *)(v3 + 32);
    v45[3] = *(_OWORD *)(v3 + 48);
    v45[4] = *(_OWORD *)(v3 + 64);
    v45[5] = *(_OWORD *)(v3 + 80);
    v45[6] = *(_OWORD *)(v3 + 96);
    v45 += 8;
    *(v45 - 1) = *(_OWORD *)(v3 + 112);
    v3 += 128LL;
    --v47;
  }
  while ( v47 );
  *v45 = *(_OWORD *)v3;
  v45[1] = *(_OWORD *)(v3 + 16);
  *((_DWORD *)v45 + 8) = *(_DWORD *)(v3 + 32);
  v48 = v68;
  v49 = v75;
  do
  {
    *v48 = *v49;
    v48[1] = v49[1];
    v48[2] = v49[2];
    v48[3] = v49[3];
    v48[4] = v49[4];
    v48[5] = v49[5];
    v48[6] = v49[6];
    v48 += 8;
    *(v48 - 1) = v49[7];
    v49 += 8;
    --v46;
  }
  while ( v46 );
  *v48 = *v49;
  v48[1] = v49[1];
  *((_DWORD *)v48 + 8) = *((_DWORD *)v49 + 8);
  v3 = (unsigned __int64)v68;
  if ( v68[6] <= 0x104u )
  {
LABEL_295:
    v40 = v65;
LABEL_296:
    v50 = xxxSystemParametersInfo(v5, v4, v3);
    if ( v67 )
      memmove(v40, (const void *)v3, v6);
    goto LABEL_298;
  }
  UserSetLastError(87LL, (__int64)v48, 0LL, (__int64)v68);
  v50 = 0;
LABEL_298:
  if ( v70 )
    PopAndFreeAlwaysW32ThreadLock(v73);
  PopAndFreeAlwaysW32ThreadLock(v74);
LABEL_303:
  UserSessionSwitchLeaveCrit();
  return v50;
}
