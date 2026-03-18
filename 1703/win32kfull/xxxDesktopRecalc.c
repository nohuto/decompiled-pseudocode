/*
 * XREFs of xxxDesktopRecalc @ 0x1C00F1A48
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxDesktopsRecalc @ 0x1C00F19E4 (xxxDesktopsRecalc.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D58 (IsShellWndManagementBehaviorEnabled.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00F1C20 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00F1D18 (DesktopWindowFromDesktop.c)
 */

void __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // r9
  struct tagBWL *v7; // rax
  struct tagBWL *v8; // r15
  unsigned __int64 *v9; // rdi
  int v10; // esi
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rbx
  struct tagWINDOWANDRECT *v15; // rbp
  __int64 v16; // rsi
  int v17; // r13d
  struct tagTHREADINFO *v18; // rax
  struct tagWINDOWANDRECT *v19; // r12
  __int64 v20; // r15
  unsigned __int64 *v21; // r14
  struct tagTHREADINFO *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-48h]
  struct tagBWL *v25; // [rsp+38h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v28; // [rsp+98h] [rbp+20h]

  v4 = 20;
  if ( PsGetCurrentProcess(a1) == gpepCSRSS )
    v4 = 16404;
  v27 = v4;
  DesktopWindowFromDesktop(a1);
  v5 = IsShellWndManagementBehaviorEnabled(a1, 32);
  v7 = BuildHwndList(*(_QWORD *)(v6 + 112), v5 != 0 ? 98 : 34, 0LL);
  v25 = v7;
  v8 = v7;
  if ( v7 )
  {
    v9 = (unsigned __int64 *)((char *)v7 + 32);
    v10 = 0;
    v11 = *((_QWORD *)v7 + 4);
    v12 = (_QWORD *)((char *)v7 + 32);
    if ( v11 != 1 )
    {
      v13 = (_QWORD *)((char *)v7 + 32);
      do
      {
        if ( HMValidateHandleNoSecure(v11, 1) )
        {
          ++v10;
          *v13++ = *v12;
        }
        v11 = *++v12;
      }
      while ( *v12 != 1LL );
      if ( v10 )
      {
        if ( *(_DWORD *)a2 )
        {
          v14 = v10;
          v24 = v10;
          v15 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v10, 2004054869LL);
          if ( v15 )
          {
            v16 = 0LL;
            if ( v14 > 0 )
            {
              do
              {
                if ( *v9 )
                {
                  v17 = 0;
                  v18 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v9, 1) + 16);
                  v28 = v18;
                  if ( v16 < v14 )
                  {
                    v19 = v15;
                    v20 = v14 - v16;
                    v21 = v9;
                    v22 = v18;
                    do
                    {
                      if ( *v21 )
                      {
                        v23 = HMValidateHandleNoSecure(*v21, 1);
                        if ( *(struct tagTHREADINFO **)(v23 + 16) == v22 )
                        {
                          ++v17;
                          *(_QWORD *)v19 = *v21;
                          *(_OWORD *)((char *)v19 + 8) = *(_OWORD *)(v23 + 128);
                          *v21 = 0LL;
                          v19 = (struct tagWINDOWANDRECT *)((char *)v19 + 24);
                        }
                      }
                      ++v21;
                      --v20;
                    }
                    while ( v20 );
                    v14 = v24;
                    v18 = v28;
                  }
                  PostThreadRecalc(v18, a2, v15, v17, v27);
                }
                ++v16;
                ++v9;
              }
              while ( v16 < v14 );
              v8 = v25;
            }
            Win32FreePool(v15);
          }
        }
      }
    }
    FreeHwndList(v8);
  }
}
