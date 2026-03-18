/*
 * XREFs of xxxDesktopRecalc @ 0x1C00494C8
 * Callers:
 *     xxxDesktopsRecalc @ 0x1C0049464 (xxxDesktopsRecalc.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00496A0 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C004979C (DesktopWindowFromDesktop.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  _QWORD *v12; // rdi
  int v13; // esi
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  struct tagWINDOWANDRECT *v19; // rbp
  __int64 v20; // r8
  __int64 v21; // rsi
  int v22; // r13d
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  struct tagWINDOWANDRECT *v25; // r12
  __int64 v26; // r15
  _QWORD *v27; // r14
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned int v33; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v34; // [rsp+98h] [rbp+20h]

  v4 = 20;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
    v4 = 16404;
  v33 = v4;
  v5 = DesktopWindowFromDesktop(a1);
  v7 = IsShellWndManagementBehaviorEnabled(a1, 32LL, v6, v5);
  result = BuildHwndList(*(_QWORD *)(v8 + 112), v7 != 0 ? 98 : 34, 0LL);
  v31 = result;
  v11 = result;
  if ( result )
  {
    v12 = (_QWORD *)(result + 32);
    v13 = 0;
    v14 = *(_QWORD *)(result + 32);
    v15 = (_QWORD *)(result + 32);
    if ( v14 != 1 )
    {
      v16 = (_QWORD *)(result + 32);
      do
      {
        LOBYTE(v10) = 1;
        if ( HMValidateHandleNoSecure(v14, v10) )
        {
          ++v13;
          *v16++ = *v15;
        }
        v14 = *++v15;
      }
      while ( *v15 != 1LL );
      if ( v13 )
      {
        if ( *(_DWORD *)a2 )
        {
          v17 = v13;
          v30 = v13;
          v19 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v13, 2004054869LL);
          if ( v19 )
          {
            v21 = 0LL;
            if ( v17 > 0 )
            {
              do
              {
                if ( *v12 )
                {
                  LOBYTE(v18) = 1;
                  v22 = 0;
                  v23 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v12, v18) + 16);
                  v34 = v23;
                  if ( v21 < v17 )
                  {
                    v25 = v19;
                    v26 = v17 - v21;
                    v27 = v12;
                    v28 = v23;
                    do
                    {
                      if ( *v27 )
                      {
                        LOBYTE(v24) = 1;
                        v29 = HMValidateHandleNoSecure(*v27, v24);
                        if ( *(struct tagTHREADINFO **)(v29 + 16) == v28 )
                        {
                          ++v22;
                          *(_QWORD *)v25 = *v27;
                          *(_OWORD *)((char *)v25 + 8) = *(_OWORD *)(v29 + 128);
                          *v27 = 0LL;
                          v25 = (struct tagWINDOWANDRECT *)((char *)v25 + 24);
                        }
                      }
                      ++v27;
                      --v26;
                    }
                    while ( v26 );
                    v17 = v30;
                    v23 = v34;
                  }
                  PostThreadRecalc(v23, a2, v19, v22, v33);
                }
                ++v21;
                ++v12;
              }
              while ( v21 < v17 );
              v11 = v31;
            }
            Win32FreePool(v19, v18, v20);
          }
        }
      }
    }
    return FreeHwndList(v11);
  }
  return result;
}
