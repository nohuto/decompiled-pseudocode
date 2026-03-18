/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x14015D5D8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strncmp @ 0x14015E050 (strncmp.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     atol @ 0x14015E1C0 (atol.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpIsDebugDeviceShared @ 0x1401E9E44 (HvlpIsDebugDeviceShared.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall HvlDebuggerSupportInitialize(__int64 a1)
{
  char *v1; // rax
  const char *v3; // rcx
  char *v4; // rax
  int v5; // eax
  int v6; // eax
  const char *v7; // rbx
  int v8; // r14d
  const char *v9; // rbx
  char v10; // si
  int v11; // ebx
  const char *v12; // rdi
  __int16 v13; // di
  _DWORD v15[64]; // [rsp+20h] [rbp-E0h] BYREF

  LODWORD(v1) = HvlpRootFlags;
  if ( (HvlpRootFlags & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(const char **)(a1 + 216);
      if ( v3 )
      {
        v4 = strstr(v3, "HYPERVISORDBGPORT=");
        if ( v4 )
        {
          v1 = strstr(v4, "COM");
          if ( v1 )
          {
            v5 = atol(v1 + 3) - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                LODWORD(v1) = v6 - 1;
                if ( (_DWORD)v1 )
                {
                  if ( (_DWORD)v1 == 1 )
                  {
                    LODWORD(v1) = KdHvComPortInUse;
                    KdHvComPortInUse = 744LL;
                  }
                }
                else
                {
                  LODWORD(v1) = KdHvComPortInUse;
                  KdHvComPortInUse = 1000LL;
                }
              }
              else
              {
                LODWORD(v1) = KdHvComPortInUse;
                KdHvComPortInUse = 760LL;
              }
            }
            else
            {
              LODWORD(v1) = KdHvComPortInUse;
              KdHvComPortInUse = 1016LL;
            }
          }
        }
        else
        {
          v1 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGDEVICE=");
          if ( v1 )
          {
            v1 = strstr(v1, "=");
            v7 = v1;
            if ( v1 )
            {
              v8 = atol(v1 + 1);
              v1 = strstr(v7, ".");
              if ( v1 )
              {
                v9 = v1 + 1;
                v10 = atol(v1 + 1);
                v1 = strstr(v9, ".");
                if ( v1 )
                {
                  v11 = v10 & 0x1F | (32 * (atol(v1 + 1) & 7));
                  v1 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGTYPE=");
                  if ( v1 )
                  {
                    v12 = v1 + 18;
                    if ( !strncmp(v1 + 18, "1394", 4uLL) )
                    {
                      v13 = -32767;
                    }
                    else
                    {
                      LODWORD(v1) = strncmp(v12, "NET", 3uLL);
                      if ( (_DWORD)v1 )
                        return (int)v1;
                      v13 = -32765;
                    }
                    if ( v11
                      || v13 != -32765
                      || !(unsigned __int8)HvlpIsDebugDeviceShared()
                      || (memset(v15, 0, 0xF8uLL),
                          v15[50] = -1,
                          v15[58] = -1,
                          v15[55] = 1,
                          ((unsigned int (__fastcall *)(_QWORD, _DWORD *, _QWORD))off_140353568[0])(0LL, v15, 0LL)) )
                    {
                      memset(v15, 0, 0xF8uLL);
                      v15[55] = 0;
                      v15[2] = -1;
                      HIBYTE(v15[4]) = 1;
                      LOWORD(v15[3]) = -1;
                      v15[0] = v8;
                      v15[1] = v11;
                      if ( v13 == -32767 )
                      {
                        HIWORD(v15[3]) = 12;
                        LOBYTE(v15[4]) = 16;
                      }
                      else
                      {
                        HIWORD(v15[3]) = 2;
                        LOBYTE(v15[4]) = -1;
                      }
                      v15[48] = 0;
                    }
                    else
                    {
                      HIBYTE(v15[4]) = 1;
                    }
                    LODWORD(v1) = ((__int64 (__fastcall *)(_QWORD, _DWORD *))off_140353338[0])(0LL, v15);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (int)v1;
}
