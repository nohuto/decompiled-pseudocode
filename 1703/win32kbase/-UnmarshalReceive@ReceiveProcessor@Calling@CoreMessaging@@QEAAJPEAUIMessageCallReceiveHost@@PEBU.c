/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C006BC38
 * Callers:
 *     CoreUICallReceive @ 0x1C006BB88 (CoreUICallReceive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0157190 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
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
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rdx
  int v19; // r10d
  unsigned __int8 *v20; // rdx
  int v21; // eax
  unsigned __int8 *v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // r10
  unsigned int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 result; // rax
  __int64 v32; // rdx
  unsigned int v33; // eax

  if ( !a2 )
    return 2147942487LL;
  if ( !a7 )
    return 0LL;
  if ( !a6 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  v8 = (int *)((char *)this + 120);
  *((_QWORD *)this + 16) = a2;
  *((_DWORD *)this + 30) = 0;
  if ( ((a7 + 3) & 0xFFFFFFFC) != a7 )
    goto LABEL_76;
  v9 = -1LL;
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)this + 11) = a6;
  *((_QWORD *)this + 12) = a6;
  if ( &a6[a7] >= a6 )
    v9 = (__int64)&a6[a7];
  *((_QWORD *)this + 13) = v9;
  if ( &a6[a7] < a6 || a7 < 8 )
    goto LABEL_76;
  if ( (unsigned int)(*((_DWORD *)this + 26) - (_DWORD)a6) < 8
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
      if ( (unsigned int)v14 >= *((unsigned __int16 *)v13 + 1) )
      {
        *v8 = 104;
      }
      else
      {
        *((_QWORD *)this + 17) = v13;
        v15 = *((_QWORD *)v13 + 1);
        v16 = 16 * v14;
        v17 = v16 + v15 == 0;
        v18 = v16 + v15;
        *((_QWORD *)this + 18) = v18;
        if ( v17 )
        {
          *v8 = 201;
        }
        else
        {
          v19 = *(unsigned __int8 *)(v18 + 10);
          *((_DWORD *)this + 20) = v19;
          if ( v19 )
          {
            *(_QWORD *)this = g_parameters_qZ1oSHSIXoOX3niANM5DuuZVs0w_IRegistrar;
            v20 = &g_parameters_qZ1oSHSIXoOX3niANM5DuuZVs0w_IRegistrar[*(unsigned __int16 *)(v18 + 8)];
            *(_QWORD *)this = v20;
            if ( v20 >= (unsigned __int8 *)&unk_1C0161A0F || v20 < g_parameters_qZ1oSHSIXoOX3niANM5DuuZVs0w_IRegistrar )
            {
LABEL_65:
              *v8 = 202;
            }
            else
            {
              v21 = *v20;
              v22 = v20 + 1;
              *(_QWORD *)this = v22;
              if ( v21 == v19 )
              {
                *((_QWORD *)this + 1) = v22;
                *((_DWORD *)this + 31) = 0;
                while ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) >= 4 )
                {
                  *((_QWORD *)this + 12) += 4LL;
                  if ( *((_QWORD *)this + 12) == 4LL )
                    break;
                  v23 = *(_DWORD *)(*((_QWORD *)this + 12) - 4LL);
                  *((_DWORD *)this + 21) = v23;
                  if ( v23 > 0xFFFFFFFC )
                    goto LABEL_54;
                  if ( v23 )
                  {
                    v24 = (v23 + 3) & 0xFFFFFFFC;
                    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) < v24 )
                    {
                      v25 = 0LL;
                    }
                    else
                    {
                      *((_QWORD *)this + 12) += v24;
                      v25 = *((_QWORD *)this + 12) - v24;
                    }
                    *((_QWORD *)this + 35) = v25;
                    if ( !v25 )
                      goto LABEL_76;
                  }
                  else
                  {
                    *((_QWORD *)this + 35) = 0LL;
                  }
                  v26 = (unsigned __int8 *)*((_QWORD *)this + 1);
                  v27 = 0LL;
                  v28 = *v26;
                  *((_QWORD *)this + 1) = v26 + 1;
                  if ( v28 <= 9 )
                  {
                    if ( v28 != 9 )
                    {
                      if ( v28 == 1 )
                        goto LABEL_66;
                      if ( v28 == 2 )
                        goto LABEL_67;
                      if ( v28 != 3 )
                      {
                        switch ( v28 )
                        {
                          case 4u:
                            goto LABEL_68;
                          case 5u:
                            goto LABEL_66;
                          case 6u:
                            goto LABEL_67;
                        }
                        if ( v28 != 7 )
                        {
                          if ( v28 != 8 )
                            goto LABEL_62;
LABEL_68:
                          v27 = 8LL;
                          goto LABEL_45;
                        }
                      }
                    }
                    v27 = 4LL;
                  }
                  else
                  {
                    switch ( v28 )
                    {
                      case 0xAu:
                        goto LABEL_68;
                      case 0xBu:
LABEL_67:
                        v27 = 2LL;
                        break;
                      case 0xCu:
LABEL_66:
                        v27 = 1LL;
                        break;
                      case 0xDu:
                        v29 = *((_QWORD *)this + 35);
                        if ( v29 )
                        {
                          v33 = *((_DWORD *)this + 21);
                          if ( (v33 & 1) != 0 || *(_WORD *)(v29 + 2LL * (int)((v33 >> 1) - 1)) )
                            goto LABEL_65;
                        }
                        break;
                      case 0xEu:
                        v32 = v26[1];
                        *((_QWORD *)this + 1) = v26 + 2;
                        v27 = v32 | ((unsigned __int64)v26[2] << 8);
                        *((_QWORD *)this + 1) = v26 + 3;
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
                  if ( v27 != *((_DWORD *)this + 21) && v27 )
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
  v30 = *v8;
  result = 0LL;
  if ( *v8 )
  {
    if ( (unsigned int)(v30 - 100) <= 0x63 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 32LL))(*((_QWORD *)this + 16), v8);
      if ( (int)result >= 0 )
        return 2276591628LL;
      return result;
    }
    if ( (unsigned int)(v30 - 200) > 0x63 )
      CoreMessaging::Calling::FailFast::Error(
        (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
        0x1D4uLL);
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), v8);
    if ( (int)result >= 0 )
      return 2147942487LL;
  }
  return result;
}
