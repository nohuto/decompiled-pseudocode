/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x1401685F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strncmp @ 0x140169710 (strncmp.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     atol @ 0x140169880 (atol.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
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
  const char *v12; // rcx
  char *v13; // rbx
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
                  memset(v15, 0, 0xF8uLL);
                  v12 = *(const char **)(a1 + 216);
                  v15[55] = 0;
                  v15[2] = -1;
                  LOWORD(v15[3]) = -1;
                  HIBYTE(v15[4]) = 1;
                  v15[0] = v8;
                  v15[1] = v11;
                  v1 = strstr(v12, "HYPERVISORDBGTYPE=");
                  v13 = v1;
                  if ( v1 )
                  {
                    if ( !strncmp(v1 + 18, "1394", 4uLL) )
                    {
                      HIWORD(v15[3]) = 12;
                      LOBYTE(v15[4]) = 16;
                    }
                    else
                    {
                      LODWORD(v1) = strncmp(v13 + 18, "NET", 3uLL);
                      if ( (_DWORD)v1 )
                        return (int)v1;
                      HIWORD(v15[3]) = 2;
                      LOBYTE(v15[4]) = -1;
                    }
                    v15[48] = 0;
                    LODWORD(v1) = ((__int64 (__fastcall *)(_QWORD, _DWORD *))off_14033B308[0])(0LL, v15);
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
