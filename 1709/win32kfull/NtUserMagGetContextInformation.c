/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01E8F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01A8324 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  _OWORD *v10; // r15
  ULONG64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS LensContextInformation; // edi
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  __int64 v18; // rax
  __int128 *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  ULONG64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  _DWORD *v27; // rax
  __int64 v28; // rbx
  ULONG v29; // eax
  __int64 v30; // rdx
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v33; // [rsp+48h] [rbp-140h]
  __int64 v34; // [rsp+50h] [rbp-138h]
  _OWORD *v35; // [rsp+58h] [rbp-130h]
  __int64 v36; // [rsp+70h] [rbp-118h]
  ULONG64 v37; // [rsp+78h] [rbp-110h]
  __int128 v38; // [rsp+A0h] [rbp-E8h]
  __int128 v39; // [rsp+B0h] [rbp-D8h]
  __int128 v40; // [rsp+C0h] [rbp-C8h]
  _BYTE v41[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v37 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v41, 0, 0x68uLL);
  v8 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v34 = 0LL;
  v10 = 0LL;
  v35 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v36 = -1LL;
  }
  else if ( a1 )
  {
    v36 = ValidateHwnd(a1);
    if ( !v36 )
      goto LABEL_5;
  }
  else
  {
    v36 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_69;
  }
  v15 = (unsigned int *)v37;
  if ( v37 >= MmUserProbeAddress )
    v15 = (unsigned int *)MmUserProbeAddress;
  v16 = *v15;
  LODWORD(Size) = *v15;
  if ( a2 > 6 )
  {
    if ( a2 != 7 )
    {
      if ( a2 != 8 )
      {
        v11 = (unsigned int)(a2 - 9);
        if ( (unsigned int)v11 > 1 )
          goto LABEL_61;
        if ( a3 )
        {
          if ( v16 < 4 )
            goto LABEL_20;
          v7 = v41;
          LODWORD(Size) = 4;
          goto LABEL_61;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      v17 = 48;
      if ( v16 < 0x30 )
        goto LABEL_20;
      v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v35 = v10;
      if ( v10 )
      {
        v19 = (__int128 *)a3;
        v11 = (ULONG64)(a3 + 48);
        if ( a3 + 48 < a3 || v11 > MmUserProbeAddress )
          v19 = (__int128 *)MmUserProbeAddress;
        v38 = *v19;
        v39 = v19[1];
        v20 = v39;
        v40 = v19[2];
        v21 = v40;
        *v10 = v38;
        v10[1] = v20;
        v10[2] = v21;
        v7 = v10;
        goto LABEL_60;
      }
LABEL_48:
      LensContextInformation = -1073741801;
      goto LABEL_69;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v16 < 0x10 )
      goto LABEL_20;
    v17 = 160;
    if ( v16 <= 0xA0 )
      v17 = v16;
    v18 = Win32AllocPoolZInit(v17, 1735226197LL);
    v9 = v18;
    v34 = v18;
LABEL_58:
    if ( v18 )
    {
      v7 = (_BYTE *)v18;
LABEL_60:
      LODWORD(Size) = v17;
      goto LABEL_61;
    }
    goto LABEL_48;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v16 < 8 )
      goto LABEL_20;
    v17 = 208;
    if ( v16 <= 0xD0 )
      v17 = v16;
    v18 = Win32AllocPoolZInit(v17, 1735226197LL);
    v8 = v18;
    v33 = v18;
    goto LABEL_58;
  }
  if ( a2 < 0 )
    goto LABEL_61;
  if ( a2 <= 1 )
    goto LABEL_5;
  switch ( a2 )
  {
    case 2:
      if ( a3 )
      {
        if ( v16 < 0x10 )
          goto LABEL_20;
        v7 = v41;
        LODWORD(Size) = 16;
        goto LABEL_61;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v16 < 0x20 )
          goto LABEL_20;
        v7 = v41;
        LODWORD(Size) = 32;
        goto LABEL_61;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v16 < 0x24 )
          goto LABEL_20;
        v7 = v41;
        LODWORD(Size) = 36;
        goto LABEL_61;
      }
LABEL_5:
      LensContextInformation = -1073741811;
LABEL_69:
      v29 = RtlNtStatusToDosError(LensContextInformation);
      UserSetLastError(v29, v30);
      v28 = 0LL;
      goto LABEL_70;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v16 < 0x64 )
  {
LABEL_20:
    LensContextInformation = -1073741306;
    goto LABEL_69;
  }
  v7 = v41;
  LODWORD(Size) = 100;
LABEL_61:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v36,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation < 0 )
  {
    v28 = 1LL;
  }
  else
  {
    v26 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v24 = MmUserProbeAddress;
    v27 = (_DWORD *)v37;
    if ( v37 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v26;
    v28 = 1LL;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_69;
LABEL_70:
  if ( v10 )
    Win32FreePool(v10, v23, v25);
  if ( v9 )
    Win32FreePool(v9, v23, v25);
  if ( v8 )
    Win32FreePool(v8, v23, v25);
  UserSessionSwitchLeaveCrit(v24, v23);
  return v28;
}
