/*
 * XREFs of NtUserSystemParametersInfo @ 0x1C00EA7B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     EtwTraceUIPISystemError @ 0x1C008C3F0 (EtwTraceUIPISystemError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     SetLastNtError @ 0x1C013DE08 (SetLastNtError.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rsi
  __int64 v5; // r12
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagTHREADINFO *v10; // rcx
  int v11; // eax
  __int64 CurrentProcessWin32Process; // rax
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  bool v16; // zf
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int16 *v22; // rax
  int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // ecx
  const void *v27; // r15
  size_t v28; // rbx
  ULONG64 v29; // r8
  __int64 v30; // rax
  void *v31; // r13
  int v32; // r15d
  __int64 v33; // xmm1_8
  ULONG64 v34; // rdx
  __int64 v35; // rcx
  ULONG64 v36; // r9
  __int64 v37; // rax
  _OWORD *v38; // rdx
  __int64 v39; // rax
  _OWORD *v40; // rdx
  _OWORD *v41; // rax
  __int64 CurrentProcessWow64Process; // rax
  _OWORD *v43; // rdx
  ULONG64 v44; // rcx
  __int64 v45; // rax
  int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  struct tagPROCESSINFO *v55; // rax
  int Size_4; // [rsp+24h] [rbp-324h]
  int Size_4a; // [rsp+24h] [rbp-324h]
  volatile void *Address; // [rsp+30h] [rbp-318h]
  _DWORD *Addressa; // [rsp+30h] [rbp-318h]
  unsigned __int16 *v61; // [rsp+40h] [rbp-308h]
  char v62[8]; // [rsp+48h] [rbp-300h] BYREF
  void *v63; // [rsp+50h] [rbp-2F8h]
  int v64; // [rsp+58h] [rbp-2F0h]
  int v65; // [rsp+88h] [rbp-2C0h]
  const void *v66; // [rsp+90h] [rbp-2B8h]
  __int128 v67; // [rsp+98h] [rbp-2B0h]
  __int64 v68; // [rsp+A8h] [rbp-2A0h]
  _BYTE v69[24]; // [rsp+B0h] [rbp-298h] BYREF
  _BYTE v70[24]; // [rsp+C8h] [rbp-280h] BYREF
  _BYTE v71[616]; // [rsp+E0h] [rbp-268h] BYREF
  int v72; // [rsp+358h] [rbp+10h]

  v72 = a2;
  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = 0;
  Size_4 = 0;
  Address = 0LL;
  v63 = 0LL;
  v64 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v62, a2, a3, a4);
  v10 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 116) & 0x20000000) != 0 )
  {
    v10 = *(struct tagTHREADINFO **)(*((_QWORD *)gptiCurrent + 50) + 728LL);
    v11 = *((_DWORD *)v10 + 6) & 8;
  }
  else
  {
    v11 = 0;
  }
  if ( !v11 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v8, v9);
    if ( CheckAccessForIntegrityLevelEx(*(_QWORD *)(CurrentProcessWin32Process + 832), 0xFFFFFFFF00002000uLL, 0) )
      goto LABEL_53;
  }
  if ( a1 <= 0x93 )
  {
    if ( a1 != 147 )
    {
      switch ( a1 )
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
          goto LABEL_287;
        default:
          goto LABEL_53;
      }
    }
    goto LABEL_287;
  }
  if ( a1 <= 0x101D )
  {
    if ( a1 == 4125 )
      goto LABEL_287;
    if ( a1 <= 0x1003 )
    {
      if ( a1 == 4099 )
        goto LABEL_287;
      if ( a1 <= 0xA3 )
      {
        if ( a1 == 163 || a1 == 149 || a1 == 151 )
          goto LABEL_287;
        v14 = a1 - 153;
        v13 = a1 == 153;
        goto LABEL_18;
      }
      if ( a1 == 166 || a1 == 169 || a1 == 171 || a1 == 173 )
        goto LABEL_287;
      v16 = a1 == 4097;
LABEL_52:
      if ( !v16 )
      {
LABEL_53:
        v19 = 4LL;
        goto LABEL_54;
      }
LABEL_287:
      v55 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v10, v8, v9);
      EtwTraceUIPISystemError(v55, 0LL, 1);
      v23 = 5;
      goto LABEL_288;
    }
    if ( a1 > 0x100F )
    {
      v17 = a1 == 4115;
      v18 = a1 - 4115;
    }
    else
    {
      if ( a1 == 4111 || a1 == 4101 )
        goto LABEL_287;
      v18 = a1 - 4103;
      v17 = a1 == 4103;
    }
LABEL_48:
    if ( v17 )
      goto LABEL_287;
    v20 = v18 - 2;
    if ( !v20 )
      goto LABEL_287;
    v21 = v20 - 2;
    if ( !v21 )
      goto LABEL_287;
    v16 = v21 == 2;
    goto LABEL_52;
  }
  if ( a1 <= 0x2001 )
  {
    if ( a1 == 8193 )
      goto LABEL_287;
    if ( a1 <= 0x104B )
    {
      if ( a1 == 4171 || a1 == 4127 || a1 == 4135 )
        goto LABEL_287;
      v14 = a1 - 4161;
      v13 = a1 == 4161;
LABEL_18:
      if ( v13 )
        goto LABEL_287;
      v15 = v14 - 2;
      if ( !v15 )
        goto LABEL_287;
      v16 = v15 == 6;
      goto LABEL_52;
    }
    v17 = a1 == 4173;
    v18 = a1 - 4173;
    goto LABEL_48;
  }
  if ( a1 > 0x2015 )
  {
    v17 = a1 == 8215;
    v18 = a1 - 8215;
    goto LABEL_48;
  }
  switch ( a1 )
  {
    case 0x2015u:
      goto LABEL_287;
    case 0x2003u:
      goto LABEL_287;
    case 0x2005u:
      goto LABEL_287;
  }
  v19 = 4LL;
  if ( a1 == 8201 || a1 == 8207 || a1 == 8209 )
    goto LABEL_287;
LABEL_54:
  v22 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(0x228uLL, 0x79747355u);
  v61 = v22;
  if ( !v22 )
  {
    v23 = 8;
LABEL_288:
    v46 = 0;
    UserSetLastError(v23);
    goto LABEL_289;
  }
  PushW32ThreadLock(v22, v70, Win32FreePool);
  if ( a1 > 0x54 )
  {
    if ( a1 <= 0x8E )
    {
      if ( a1 != 142 )
      {
        switch ( a1 )
        {
          case 0x59u:
            goto LABEL_131;
          case 0x5Au:
            goto LABEL_136;
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
            goto LABEL_276;
          case 0x73u:
            v31 = (void *)v4;
            v63 = (void *)v4;
            v4 = (ULONG64)v61;
            ProbeForWrite(v31, 2 * v5, 2u);
            if ( (unsigned int)v5 >= 0x104 )
              LODWORD(v5) = 260;
            v7 = 2 * v5;
            goto LABEL_165;
          case 0x74u:
            goto LABEL_73;
          case 0x75u:
            goto LABEL_71;
          default:
            goto LABEL_257;
        }
      }
      goto LABEL_276;
    }
    if ( a1 > 0x1026 )
    {
      if ( a1 == 4135 )
        goto LABEL_280;
      if ( a1 == 8221 )
      {
        if ( v4 > 2 )
          goto LABEL_270;
        goto LABEL_280;
      }
      goto LABEL_257;
    }
    if ( a1 == 4134 )
      goto LABEL_276;
    if ( a1 <= 0x9C )
    {
      if ( a1 != 156 )
      {
        if ( a1 > 0x96 )
        {
          if ( a1 == 151 )
          {
            v7 = 28;
            if ( (_DWORD)v5 != 28 )
              goto LABEL_270;
            goto LABEL_244;
          }
          if ( a1 != 152 )
          {
            if ( a1 != 153 )
            {
              if ( a1 == 154 )
              {
                v7 = 548;
                if ( (_DWORD)v5 != 548 )
                  goto LABEL_270;
                CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24);
                ProbeForWrite((volatile void *)v4, 0x224uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
                Address = (volatile void *)v4;
                v63 = (void *)v4;
                v43 = v61;
                do
                {
                  *v43 = *(_OWORD *)v4;
                  v43[1] = *(_OWORD *)(v4 + 16);
                  v43[2] = *(_OWORD *)(v4 + 32);
                  v43[3] = *(_OWORD *)(v4 + 48);
                  v43[4] = *(_OWORD *)(v4 + 64);
                  v43[5] = *(_OWORD *)(v4 + 80);
                  v43[6] = *(_OWORD *)(v4 + 96);
                  v43 += 8;
                  *(v43 - 1) = *(_OWORD *)(v4 + 112);
                  v4 += 128LL;
                  --v19;
                }
                while ( v19 );
                *v43 = *(_OWORD *)v4;
                v43[1] = *(_OWORD *)(v4 + 16);
                *((_DWORD *)v43 + 8) = *(_DWORD *)(v4 + 32);
                v4 = (ULONG64)v61;
                Size_4 = 1;
              }
              else
              {
                v7 = 548;
                if ( (_DWORD)v5 != 548 )
                  goto LABEL_270;
                if ( v4 + 548 < v4 || v4 + 548 > MmUserProbeAddress )
                  v4 = MmUserProbeAddress;
                v38 = v71;
                v39 = 4LL;
                do
                {
                  *v38 = *(_OWORD *)v4;
                  v38[1] = *(_OWORD *)(v4 + 16);
                  v38[2] = *(_OWORD *)(v4 + 32);
                  v38[3] = *(_OWORD *)(v4 + 48);
                  v38[4] = *(_OWORD *)(v4 + 64);
                  v38[5] = *(_OWORD *)(v4 + 80);
                  v38[6] = *(_OWORD *)(v4 + 96);
                  v38 += 8;
                  *(v38 - 1) = *(_OWORD *)(v4 + 112);
                  v4 += 128LL;
                  --v39;
                }
                while ( v39 );
                *v38 = *(_OWORD *)v4;
                v38[1] = *(_OWORD *)(v4 + 16);
                *((_DWORD *)v38 + 8) = *(_DWORD *)(v4 + 32);
                v40 = v61;
                v41 = v71;
                do
                {
                  *v40 = *v41;
                  v40[1] = v41[1];
                  v40[2] = v41[2];
                  v40[3] = v41[3];
                  v40[4] = v41[4];
                  v40[5] = v41[5];
                  v40[6] = v41[6];
                  v40 += 8;
                  *(v40 - 1) = v41[7];
                  v41 += 8;
                  --v19;
                }
                while ( v19 );
                *v40 = *v41;
                v40[1] = v41[1];
                *((_DWORD *)v40 + 8) = *((_DWORD *)v41 + 8);
                v4 = (ULONG64)v61;
                if ( *((_DWORD *)v61 + 6) > 0x104u )
                  goto LABEL_270;
              }
              goto LABEL_280;
            }
            if ( (_DWORD)v5 != 128 )
              goto LABEL_270;
            v7 = 128;
            goto LABEL_244;
          }
          v24 = 128LL;
          if ( (_DWORD)v5 != 128 )
            goto LABEL_270;
          v7 = 128;
        }
        else
        {
          switch ( a1 )
          {
            case 0x96u:
              v7 = 28;
              if ( (_DWORD)v5 != 28 )
                goto LABEL_270;
              break;
            case 0x90u:
              goto LABEL_276;
            case 0x92u:
              v7 = 56;
              if ( (_DWORD)v5 != 56 )
                goto LABEL_270;
              break;
            case 0x93u:
              v7 = 56;
              if ( (_DWORD)v5 != 56 )
                goto LABEL_270;
              goto LABEL_244;
            case 0x94u:
              v7 = 32;
              if ( (_DWORD)v5 != 32 )
                goto LABEL_270;
              break;
            case 0x95u:
              v7 = 32;
              if ( (_DWORD)v5 != 32 )
                goto LABEL_270;
              goto LABEL_244;
            default:
              goto LABEL_257;
          }
        }
        goto LABEL_254;
      }
      if ( (_DWORD)v5 != 16 )
        goto LABEL_270;
      goto LABEL_134;
    }
    if ( a1 > 0xA5 )
    {
      if ( a1 != 167 )
      {
        if ( a1 == 168 || a1 == 170 )
          goto LABEL_276;
        if ( a1 == 172 )
        {
          if ( (_DWORD)v5 != 4 )
            goto LABEL_270;
          v7 = 4;
          goto LABEL_254;
        }
        if ( a1 != 173 )
          goto LABEL_257;
        if ( (_DWORD)v5 != 4 )
          goto LABEL_270;
        v7 = 4;
        goto LABEL_243;
      }
    }
    else if ( a1 != 165 )
    {
      if ( a1 != 157 )
      {
        if ( a1 == 158 || a1 == 160 )
          goto LABEL_276;
        if ( a1 == 162 )
          goto LABEL_134;
        if ( a1 != 163 )
          goto LABEL_257;
      }
      goto LABEL_135;
    }
    v7 = 12;
    if ( (_DWORD)v5 != 12 )
      goto LABEL_270;
    goto LABEL_254;
  }
  if ( a1 >= 0x53 )
    goto LABEL_276;
  if ( a1 > 0x2E )
  {
    if ( a1 > 0x3C )
    {
      if ( a1 <= 0x44 )
      {
        if ( a1 == 68 )
          goto LABEL_276;
        if ( a1 == 61 )
        {
LABEL_71:
          v7 = 12;
          goto LABEL_244;
        }
        if ( a1 != 64 )
        {
          if ( a1 != 65 )
          {
            if ( a1 == 66 )
            {
              v7 = 16;
              v37 = PsGetCurrentProcessWow64Process(v24);
              ProbeForWrite((volatile void *)v4, 0x10uLL, v37 != 0 ? 1 : 4);
              v31 = (void *)v4;
              v63 = (void *)v4;
              *(_OWORD *)v61 = *(_OWORD *)v4;
              v4 = (ULONG64)v61;
              ProbeForWrite(*((volatile void **)v61 + 1), 0x100uLL, 2u);
LABEL_165:
              Size_4 = 1;
              goto LABEL_281;
            }
            if ( a1 == 67 )
            {
              if ( v4 + 24 < v4 || v4 + 24 > MmUserProbeAddress )
                v4 = MmUserProbeAddress;
              v67 = *(_OWORD *)v4;
              v68 = *(_QWORD *)(v4 + 16);
              v33 = v68;
              *(_OWORD *)v61 = v67;
              *((_QWORD *)v61 + 2) = v33;
              v4 = (ULONG64)v61;
              v34 = *((_QWORD *)v61 + 2);
              if ( (v34 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v35 = v61[4];
              v36 = v35 + v34 + 2;
              if ( v36 >= MmUserProbeAddress || (unsigned __int16)v35 > v61[5] || (v35 & 1) != 0 || v36 <= v34 )
                *(_BYTE *)MmUserProbeAddress = 0;
              if ( !v61[4] )
                *((_QWORD *)v61 + 2) = 0LL;
              goto LABEL_280;
            }
            goto LABEL_257;
          }
          v7 = 56;
          goto LABEL_244;
        }
        v7 = 56;
        goto LABEL_254;
      }
      if ( a1 == 70 )
        goto LABEL_276;
      if ( a1 == 72 )
      {
LABEL_131:
        v7 = 8;
        goto LABEL_254;
      }
      if ( a1 != 73 )
      {
        if ( a1 == 74 || a1 - 79 <= 1 )
          goto LABEL_276;
        goto LABEL_257;
      }
    }
    else
    {
      if ( a1 == 60 )
      {
LABEL_73:
        v7 = 12;
        goto LABEL_254;
      }
      if ( a1 > 0x35 )
      {
        switch ( a1 )
        {
          case '6':
            v7 = 28;
            goto LABEL_254;
          case '7':
            v7 = 28;
            goto LABEL_244;
          case '8':
            goto LABEL_276;
          case ':':
            goto LABEL_131;
        }
        if ( a1 != 59 )
          goto LABEL_257;
      }
      else if ( a1 != 53 )
      {
        if ( a1 != 47 )
        {
          if ( a1 != 48 )
          {
            if ( a1 == 50 )
            {
              v7 = 24;
              goto LABEL_254;
            }
            if ( a1 == 51 )
            {
              v7 = 24;
              goto LABEL_244;
            }
            if ( a1 != 52 )
              goto LABEL_257;
            goto LABEL_131;
          }
LABEL_134:
          v7 = 16;
          goto LABEL_254;
        }
LABEL_135:
        v7 = 16;
        goto LABEL_244;
      }
    }
LABEL_136:
    v7 = 8;
    goto LABEL_244;
  }
  if ( a1 == 46 )
  {
    v7 = 108;
    goto LABEL_244;
  }
  if ( a1 > 0x18 )
  {
    if ( a1 <= 0x26 )
    {
      if ( a1 == 38 || a1 == 25 || a1 == 27 )
        goto LABEL_276;
      if ( a1 == 31 )
      {
        v7 = 92;
        goto LABEL_254;
      }
      v25 = a1 - 34;
      if ( a1 != 34 )
        goto LABEL_104;
      v7 = 92;
LABEL_244:
      if ( (v4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v44 = v4 + v7;
      if ( v44 > MmUserProbeAddress || v44 < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      goto LABEL_249;
    }
    if ( a1 == 41 )
    {
      if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
        goto LABEL_270;
      v7 = v5;
      goto LABEL_254;
    }
    if ( a1 != 42 )
    {
      if ( a1 == 43 )
      {
        v7 = 20;
        goto LABEL_254;
      }
      if ( a1 == 44 )
      {
        v7 = 20;
        goto LABEL_244;
      }
      if ( a1 != 45 )
        goto LABEL_257;
      v7 = 108;
LABEL_254:
      Addressa = (_DWORD *)v4;
      v63 = (void *)v4;
      v4 = (ULONG64)v61;
      v45 = PsGetCurrentProcessWow64Process(v24);
      v31 = Addressa;
      ProbeForWrite(Addressa, v7, v45 != 0 ? 1 : 4);
      Size_4 = 1;
      *(_DWORD *)v61 = *Addressa;
LABEL_281:
      v32 = Size_4;
LABEL_282:
      v46 = xxxSystemParametersInfo(a1, (unsigned int)v5, v4);
      if ( v32 )
        memmove(v31, (const void *)v4, v7);
      goto LABEL_284;
    }
    if ( (((_DWORD)v5 - 500) & 0xFFFFFFFB) != 0 )
      goto LABEL_270;
    v7 = v5;
LABEL_243:
    if ( !v7 )
    {
LABEL_249:
      memmove(v61, (const void *)v4, v7);
      v4 = (ULONG64)v61;
      goto LABEL_280;
    }
    goto LABEL_244;
  }
  if ( a1 == 24 )
    goto LABEL_96;
  if ( a1 <= 0xE )
  {
    if ( a1 == 14 || a1 == 1 )
      goto LABEL_276;
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        if ( a1 == 5 || a1 == 10 )
          goto LABEL_276;
        if ( a1 != 13 )
          goto LABEL_257;
LABEL_96:
        if ( (v4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
          goto LABEL_280;
        goto LABEL_276;
      }
      goto LABEL_71;
    }
    goto LABEL_73;
  }
  if ( a1 == 16 || a1 == 18 )
    goto LABEL_276;
  if ( a1 == 20 )
  {
    if ( !v4 )
      v4 = -1LL;
    if ( v4 > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_80;
    goto LABEL_84;
  }
  v25 = a1 - 21;
  if ( a1 == 21 )
  {
    if ( (_DWORD)v5 == -1 )
      goto LABEL_280;
    if ( !v4 )
    {
LABEL_80:
      LODWORD(v5) = -1;
      goto LABEL_280;
    }
LABEL_84:
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v26 = *(_DWORD *)v4;
    Size_4a = *(_DWORD *)v4;
    v65 = *(_DWORD *)v4;
    v27 = *(const void **)(v4 + 8);
    v66 = v27;
    if ( ((unsigned __int8)v27 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = (unsigned __int16)v26;
    v29 = (ULONG64)v27 + (unsigned __int16)v26 + 2;
    if ( v29 >= MmUserProbeAddress
      || (unsigned __int16)v26 > HIWORD(Size_4a)
      || (v26 & 1) != 0
      || v29 <= (unsigned __int64)v27 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v30 = Win32AllocPoolWithQuota((unsigned __int16)v26 + 2LL, 0x79747355u);
    v4 = v30;
    if ( !v30 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v30, v69, Win32FreePool);
    v64 = 1;
    memmove((void *)v4, v27, v28);
    *(_WORD *)(v4 + 2 * (v28 >> 1)) = 0;
    LODWORD(v5) = v72;
    v7 = 0;
    v31 = v63;
    v32 = 0;
    goto LABEL_282;
  }
LABEL_104:
  if ( v25 == 1 )
    goto LABEL_276;
LABEL_257:
  if ( a1 < 0xAE )
    goto LABEL_280;
  if ( a1 - 4096 > 0x53 && a1 - 0x2000 > 0x23
    || (_DWORD)v5 && (*((_DWORD *)gptiCurrent + 152) > 0x400u || a1 != 4159 || (_DWORD)v5 != 1) )
  {
    goto LABEL_270;
  }
  if ( (a1 & 1) == 0 )
  {
LABEL_276:
    v63 = (void *)v4;
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_DWORD *)v4 = *(_DWORD *)v4;
    v32 = 1;
    v4 = (ULONG64)v61;
    LODWORD(v5) = v72;
    v7 = 4;
    v31 = v63;
    goto LABEL_282;
  }
  if ( a1 == 8193 )
  {
    if ( (int)IsCanForceForegroundSupported() < 0
      || (v50 = PsGetCurrentProcessWin32Process(v48, v47, v49), !(unsigned int)CanForceForeground(v50)) )
    {
      UserSetLastError(5);
      v46 = 0;
      goto LABEL_284;
    }
    goto LABEL_280;
  }
  if ( a1 != 8203 )
  {
    if ( a1 == 8211 && (v4 & 0xFFFFFFFE) != 0 )
      goto LABEL_270;
    goto LABEL_280;
  }
  if ( (v4 & 0xFFFFFFFC) == 0 )
  {
LABEL_280:
    v31 = (void *)Address;
    goto LABEL_281;
  }
LABEL_270:
  UserSetLastError(87);
  v46 = 0;
LABEL_284:
  if ( v64 )
    PopAndFreeAlwaysW32ThreadLock(v69);
  PopAndFreeAlwaysW32ThreadLock(v70);
LABEL_289:
  UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
  return v46;
}
