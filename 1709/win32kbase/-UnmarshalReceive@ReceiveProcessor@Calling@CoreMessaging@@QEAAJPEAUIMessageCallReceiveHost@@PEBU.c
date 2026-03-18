/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C008844C
 * Callers:
 *     CoreUICallReceive @ 0x1C008839C (CoreUICallReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C015690C (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        unsigned int a5,
        char *a6,
        unsigned int a7)
{
  int *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  char *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // r10
  bool v16; // zf
  __int64 v17; // r10
  int v18; // edx
  unsigned __int8 *v19; // rcx
  int v20; // eax
  unsigned __int8 *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned __int8 *v25; // rax
  __int64 v26; // r10
  unsigned int v27; // ecx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 result; // rax
  __int64 v31; // rdx
  __int16 v32; // cx
  unsigned __int64 v33; // rax

  if ( !a2 )
    return 2147942487LL;
  if ( !a7 )
    return 0LL;
  if ( !a6 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  *((_QWORD *)this + 16) = a2;
  v8 = (int *)((char *)this + 120);
  *((_DWORD *)this + 30) = 0;
  if ( ((a7 + 3) & 0xFFFFFFFC) != a7 )
    goto LABEL_76;
  *((_BYTE *)this + 112) = 1;
  v9 = -1LL;
  *((_QWORD *)this + 11) = a6;
  *((_QWORD *)this + 12) = a6;
  if ( &a6[a7] >= a6 )
    v9 = (__int64)&a6[a7];
  *((_QWORD *)this + 13) = v9;
  if ( &a6[a7] < a6 || a7 < 8 )
    goto LABEL_76;
  if ( (unsigned int)(v9 - (_DWORD)a6) < 8
    || (*((_QWORD *)this + 12) += 8LL, v10 = *((_QWORD *)this + 12) - 8LL, *((_QWORD *)this + 12) == 8LL) )
  {
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x82uLL);
  }
  if ( *(_DWORD *)v10 <= a7 )
  {
    v11 = 0;
    v12 = 0LL;
    while ( *(_WORD *)((char *)&IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces + v12) != *(_WORD *)(v10 + 4) )
    {
      ++v11;
      v12 += 16LL;
      if ( v11 >= 1 )
        goto LABEL_56;
    }
    v13 = (char *)&IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces + 16 * v11;
    if ( v13 )
    {
      v14 = *(unsigned __int16 *)(v10 + 6);
      if ( v14 >= *((unsigned __int16 *)v13 + 1) )
      {
        *v8 = 104;
      }
      else
      {
        *((_QWORD *)this + 17) = v13;
        v15 = 16LL * v14;
        v16 = *((_QWORD *)v13 + 1) + v15 == 0;
        v17 = *((_QWORD *)v13 + 1) + v15;
        *((_QWORD *)this + 18) = v17;
        if ( v16 )
        {
          *v8 = 201;
        }
        else
        {
          v18 = *(unsigned __int8 *)(v17 + 10);
          *((_DWORD *)this + 20) = v18;
          if ( v18 )
          {
            *(_QWORD *)this = g_parameters_IjMUOcwP35ocqaJM_VpSrn0A0ps_IRegistrar;
            v19 = &g_parameters_IjMUOcwP35ocqaJM_VpSrn0A0ps_IRegistrar[*(unsigned __int16 *)(v17 + 8)];
            *(_QWORD *)this = v19;
            if ( v19 >= (unsigned __int8 *)&unk_1C0161FBF || v19 < g_parameters_IjMUOcwP35ocqaJM_VpSrn0A0ps_IRegistrar )
            {
LABEL_65:
              *v8 = 202;
            }
            else
            {
              v20 = *v19;
              v21 = v19 + 1;
              *(_QWORD *)this = v21;
              if ( v20 == v18 )
              {
                *((_QWORD *)this + 1) = v21;
                *((_DWORD *)this + 31) = 0;
                while ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) >= 4 )
                {
                  *((_QWORD *)this + 12) += 4LL;
                  if ( *((_QWORD *)this + 12) == 4LL )
                    break;
                  v22 = *(_DWORD *)(*((_QWORD *)this + 12) - 4LL);
                  *((_DWORD *)this + 21) = v22;
                  if ( v22 > 0xFFFFFFFC )
                    goto LABEL_54;
                  if ( v22 )
                  {
                    v23 = (v22 + 3) & 0xFFFFFFFC;
                    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v23 )
                    {
                      v24 = 0LL;
                    }
                    else
                    {
                      v24 = *((_QWORD *)this + 12);
                      *((_QWORD *)this + 12) = v24 + v23;
                    }
                    *((_QWORD *)this + 35) = v24;
                    if ( !v24 )
                      goto LABEL_76;
                  }
                  else
                  {
                    *((_QWORD *)this + 35) = 0LL;
                  }
                  v25 = (unsigned __int8 *)*((_QWORD *)this + 1);
                  v26 = 0LL;
                  v27 = *v25;
                  *((_QWORD *)this + 1) = v25 + 1;
                  if ( v27 <= 9 )
                  {
                    if ( v27 != 9 )
                    {
                      if ( v27 == 1 )
                        goto LABEL_66;
                      if ( v27 == 2 )
                        goto LABEL_67;
                      if ( v27 != 3 )
                      {
                        switch ( v27 )
                        {
                          case 4u:
                            goto LABEL_68;
                          case 5u:
                            goto LABEL_66;
                          case 6u:
                            goto LABEL_67;
                        }
                        if ( v27 != 7 )
                        {
                          if ( v27 != 8 )
                            goto LABEL_62;
LABEL_68:
                          v26 = 8LL;
                          goto LABEL_45;
                        }
                      }
                    }
                    v26 = 4LL;
                  }
                  else
                  {
                    switch ( v27 )
                    {
                      case 0xAu:
                        goto LABEL_68;
                      case 0xBu:
LABEL_67:
                        v26 = 2LL;
                        break;
                      case 0xCu:
LABEL_66:
                        v26 = 1LL;
                        break;
                      case 0xDu:
                        v28 = *((_QWORD *)this + 35);
                        if ( v28 )
                        {
                          v33 = *((unsigned int *)this + 21);
                          if ( (v33 & 1) != 0 || *(_WORD *)(v28 + 2 * (v33 >> 1) - 2) )
                            goto LABEL_65;
                        }
                        break;
                      case 0xEu:
                        v31 = v25[1];
                        *((_QWORD *)this + 1) = v25 + 2;
                        v32 = v25[2];
                        *((_QWORD *)this + 1) = v25 + 3;
                        v26 = v31 | (unsigned __int16)(v32 << 8);
                        break;
                      case 0xFu:
                        CoreMessaging::Calling::FailFast::Error(
                          (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
                          0x16BuLL);
                      case 0x10u:
                        CoreMessaging::Calling::FailFast::Error(
                          (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
                          0x178uLL);
                      default:
LABEL_62:
                        *v8 = 205;
                        goto LABEL_48;
                    }
                  }
LABEL_45:
                  if ( v26 != *((_DWORD *)this + 21) && v26 )
                    goto LABEL_54;
                  *((_QWORD *)this + (unsigned int)(*((_DWORD *)this + 31))++ + 19) = *((_QWORD *)this + 35);
                  if ( *((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
                    goto LABEL_47;
                }
              }
              *v8 = 105;
            }
          }
          else
          {
LABEL_47:
            if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) != a7 )
LABEL_54:
              *v8 = 106;
          }
        }
      }
    }
    else
    {
LABEL_56:
      *v8 = 103;
    }
  }
  else
  {
LABEL_76:
    *v8 = 102;
  }
LABEL_48:
  v29 = *v8;
  result = 0LL;
  if ( *v8 )
  {
    if ( (unsigned int)(v29 - 100) <= 0x63 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16), v8);
      if ( (int)result >= 0 )
        return 2276591628LL;
      return result;
    }
    if ( (unsigned int)(v29 - 200) > 0x63 )
      CoreMessaging::Calling::FailFast::Error(
        (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
        0x1D4uLL);
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), v8);
    if ( (int)result >= 0 )
      return 2147942487LL;
  }
  return result;
}
