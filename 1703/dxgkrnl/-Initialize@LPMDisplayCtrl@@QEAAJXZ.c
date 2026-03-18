/*
 * XREFs of ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0197F08
 * Callers:
 *     DxgkEnableHighPrecisionBrightness @ 0x1C0198520 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C01985B0 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C01986B0 (DxgkSetHighPrecisionBrightness.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C019883C (LPMSetTTMDisplayPowerState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0197C40 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

NTSTATUS __fastcall LPMDisplayCtrl::Initialize(LPMDisplayCtrl *this)
{
  PFILE_OBJECT *v1; // rbx
  __int64 v2; // rax
  int *v3; // rdx
  __int64 v4; // r8
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // eax
  __int16 v13; // ax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  __int16 v20; // ax
  NTSTATUS result; // eax
  WCHAR SymbolicLinkList[4]; // [rsp+40h] [rbp-348h] BYREF
  _BYTE v23[800]; // [rsp+50h] [rbp-338h] BYREF

  v1 = FileObject;
  memset(v23, 0, sizeof(v23));
  *(_QWORD *)SymbolicLinkList = 0LL;
  if ( LPMDisplayCtrl::CallDriver(FileObject, 0x83212108, 0LL, 0, v23, 0x320u, (unsigned __int64 *)SymbolicLinkList) < 0 )
  {
    result = LPMDisplayCtrl::CallDriver(v1, 0x83212014, 0LL, 0, v1 + 8, 0x10u, 0LL);
    if ( result < 0 )
      return result;
    *((_DWORD *)v1 + 15) = 0;
    result = LPMDisplayCtrl::CallDriver(v1, 0x832120F0, 0LL, 0, (char *)v1 + 60, 4u, 0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    v2 = *(_QWORD *)SymbolicLinkList >> 3;
    *(PFILE_OBJECT *)((char *)v1 + 108) = (PFILE_OBJECT)1;
    *((_DWORD *)v1 + 22) = 0;
    *((_WORD *)v1 + 51) = 0;
    if ( (_DWORD)v2 )
    {
      v3 = (int *)&v23[4];
      v4 = (unsigned int)v2;
      do
      {
        v5 = *(v3 - 1);
        if ( v5 > 6 )
        {
          v14 = v5 - 8;
          if ( v14 )
          {
            v15 = v14 - 5;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 )
                  {
                    v18 = *v3;
                    if ( *v3 == -1 )
                      v18 = 0;
                    *((_DWORD *)v1 + 28) = v18;
                  }
                }
                else
                {
                  *((_DWORD *)v1 + 26) = *v3;
                }
              }
              else
              {
                v19 = *v3;
                *((_DWORD *)v1 + 22) = *v3;
                *((_DWORD *)v1 + 15) = v19;
              }
            }
            else
            {
              v20 = *(_WORD *)v3;
              *((_WORD *)v1 + 51) = *(_WORD *)v3;
              *((_WORD *)v1 + 39) = v20;
            }
          }
          else
          {
            *((_WORD *)v1 + 50) = *(_WORD *)v3;
          }
        }
        else if ( v5 == 6 )
        {
          v13 = *(_WORD *)v3;
          *((_WORD *)v1 + 49) = *(_WORD *)v3;
          *((_WORD *)v1 + 37) = v13;
        }
        else if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                if ( v8 == 1 )
                {
                  v9 = *(_WORD *)v3;
                  *((_WORD *)v1 + 47) = *(_WORD *)v3;
                  *((_WORD *)v1 + 36) = v9;
                }
              }
              else
              {
                v10 = *(_WORD *)v3;
                *((_WORD *)v1 + 48) = *(_WORD *)v3;
                *((_WORD *)v1 + 35) = v10;
              }
            }
            else
            {
              v11 = *(_WORD *)v3;
              *((_WORD *)v1 + 46) = *(_WORD *)v3;
              *((_WORD *)v1 + 34) = v11;
            }
          }
          else
          {
            *((_DWORD *)v1 + 21) = *v3;
          }
        }
        else
        {
          v12 = *v3;
          *((_DWORD *)v1 + 20) = *v3;
          *((_DWORD *)v1 + 16) = v12;
        }
        v3 += 2;
        --v4;
      }
      while ( v4 );
      *((_DWORD *)v1 + 10) = 1;
    }
  }
  if ( *((_DWORD *)v1 + 15) )
  {
    if ( *((_WORD *)v1 + 39) )
      *((_DWORD *)v1 + 8) = 1;
  }
  *((_DWORD *)v1 + 7) = 1;
  return 0;
}
