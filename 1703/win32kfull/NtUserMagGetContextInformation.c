/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01DCD40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01EBF34 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  _BYTE *v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  _OWORD *v10; // r15
  NTSTATUS LensContextInformation; // edi
  unsigned int *v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  char *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  int ThreadWin32Thread; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  unsigned int *v25; // rax
  unsigned int v26; // ebx
  ULONG v27; // eax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v30; // [rsp+48h] [rbp-140h]
  __int64 v31; // [rsp+50h] [rbp-138h]
  _OWORD *v32; // [rsp+58h] [rbp-130h]
  __int64 v33; // [rsp+70h] [rbp-118h]
  unsigned int *v34; // [rsp+78h] [rbp-110h]
  __int128 v35; // [rsp+A0h] [rbp-E8h]
  __int128 v36; // [rsp+B0h] [rbp-D8h]
  __int128 v37; // [rsp+C0h] [rbp-C8h]
  _BYTE v38[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v34 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v38, 0, 0x68uLL);
  v8 = 0LL;
  v30 = 0LL;
  v9 = 0LL;
  v31 = 0LL;
  v10 = 0LL;
  v32 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v33 = -1LL;
  }
  else if ( a1 )
  {
    v33 = ValidateHwnd(a1);
    if ( !v33 )
      goto LABEL_5;
  }
  else
  {
    v33 = 0LL;
  }
  if ( a2 >= 10 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_65;
  }
  v12 = v34;
  if ( (unsigned __int64)v34 >= W32UserProbeAddress )
    v12 = (unsigned int *)W32UserProbeAddress;
  v13 = *v12;
  LODWORD(Size) = *v12;
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        if ( !a3 )
          goto LABEL_5;
        if ( v13 < 8 )
          goto LABEL_19;
        v14 = 208;
        if ( v13 <= 0xD0 )
          v14 = v13;
        v18 = Win32AllocPoolZInit(v14, 1735226197LL);
        v8 = v18;
        v30 = v18;
        break;
      case 7:
        if ( !a3 )
          goto LABEL_5;
        if ( v13 < 0x10 )
          goto LABEL_19;
        v14 = 160;
        if ( v13 <= 0xA0 )
          v14 = v13;
        v18 = Win32AllocPoolZInit(v14, 1735226197LL);
        v9 = v18;
        v31 = v18;
        break;
      case 8:
        if ( !a3 )
          goto LABEL_5;
        v14 = 48;
        if ( v13 < 0x30 )
          goto LABEL_19;
        v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        v32 = v10;
        if ( !v10 )
        {
LABEL_39:
          LensContextInformation = -1073741801;
          goto LABEL_65;
        }
        v15 = a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > W32UserProbeAddress )
          v15 = (char *)W32UserProbeAddress;
        v35 = *(_OWORD *)v15;
        v36 = *((_OWORD *)v15 + 1);
        v16 = v36;
        v37 = *((_OWORD *)v15 + 2);
        v17 = v37;
        *v10 = v35;
        v10[1] = v16;
        v10[2] = v17;
        v7 = v10;
LABEL_56:
        LODWORD(Size) = v14;
        goto LABEL_57;
      default:
        if ( a3 )
        {
          if ( v13 < 4 )
            goto LABEL_19;
          v7 = v38;
          LODWORD(Size) = 4;
          goto LABEL_57;
        }
        goto LABEL_5;
    }
    if ( !v18 )
      goto LABEL_39;
    v7 = (_BYTE *)v18;
    goto LABEL_56;
  }
  if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( v13 < 0x64 )
        goto LABEL_19;
      v7 = v38;
      LODWORD(Size) = 100;
      goto LABEL_57;
    }
    goto LABEL_5;
  }
  if ( a2 < 0 )
    goto LABEL_57;
  if ( a2 <= 1 )
    goto LABEL_5;
  if ( a2 == 2 )
  {
    if ( a3 )
    {
      if ( v13 < 0x10 )
        goto LABEL_19;
      v7 = v38;
      LODWORD(Size) = 16;
      goto LABEL_57;
    }
    goto LABEL_5;
  }
  if ( a2 == 3 )
  {
    if ( a3 )
    {
      if ( v13 < 0x20 )
        goto LABEL_19;
      v7 = v38;
      LODWORD(Size) = 32;
      goto LABEL_57;
    }
LABEL_5:
    LensContextInformation = -1073741811;
LABEL_65:
    v26 = 0;
    v27 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v27);
    goto LABEL_66;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v13 < 0x24 )
  {
LABEL_19:
    LensContextInformation = -1073741306;
    goto LABEL_65;
  }
  v7 = v38;
  LODWORD(Size) = 36;
LABEL_57:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LensContextInformation = MagGetLensContextInformation(
                             gMagnContext,
                             ThreadWin32Thread,
                             v33,
                             0,
                             a2,
                             (__int64)v7,
                             (__int64)&Size);
  if ( LensContextInformation < 0 )
  {
    v26 = 1;
  }
  else
  {
    v24 = Size;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (char *)W32UserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v21 = W32UserProbeAddress;
    v25 = v34;
    if ( (unsigned __int64)v34 >= W32UserProbeAddress )
      v25 = (unsigned int *)W32UserProbeAddress;
    *v25 = v24;
    v26 = 1;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_65;
LABEL_66:
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v26;
}
