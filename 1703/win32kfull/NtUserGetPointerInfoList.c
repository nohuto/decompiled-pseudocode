/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C0005710
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GetPointerFrameInfoInternal @ 0x1C01BAFD8 (GetPointerFrameInfoInternal.c)
 *     GetPointerInfoHistoryInternal @ 0x1C01BB0EC (GetPointerInfoHistoryInternal.c)
 *     GetPointerInfoInternal @ 0x1C01BB1AC (GetPointerInfoInternal.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        _OWORD *Address)
{
  int v8; // esi
  int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  _DWORD *v16; // r15
  _DWORD *v17; // r12
  __int64 v18; // r8
  _OWORD *v19; // rdi
  unsigned int *v20; // rax
  int *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rcx
  int PointerFrameInfoInternal; // eax
  int v34; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-A4h]
  __int64 v36; // [rsp+68h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-60h]
  unsigned int v38; // [rsp+F0h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+100h] [rbp+18h]
  int v40; // [rsp+108h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v8 = a4;
  v35 = 0;
  v11 = 1;
  v12 = EnterSharedCrit(0LL, 1LL);
  v36 = v12;
  v13 = 0LL;
  if ( !a1 )
    goto LABEL_53;
  if ( HIWORD(a1) )
    goto LABEL_53;
  v14 = a5;
  if ( !a5 )
    goto LABEL_53;
  switch ( a2 )
  {
    case 1u:
      v15 = 96;
      break;
    case 2u:
      goto LABEL_41;
    case 3u:
      v15 = 120;
      break;
    case 5u:
LABEL_41:
      v15 = 144;
      break;
    default:
      v15 = 0;
      break;
  }
  if ( a5 != v15 )
    goto LABEL_53;
  v16 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_53;
  v17 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_53;
  v18 = v39;
  if ( v39 || v8 )
  {
    v19 = Address;
  }
  else
  {
    v19 = Address;
    if ( !Address )
      goto LABEL_53;
  }
  if ( v8 && (*(_DWORD *)(v12 + 1096) & 0x100) != 0 )
  {
    v32 = 5LL;
LABEL_54:
    v11 = 0;
    goto LABEL_55;
  }
  v20 = (unsigned int *)a6;
  if ( a6 >= W32UserProbeAddress )
    v20 = (unsigned int *)W32UserProbeAddress;
  v38 = *v20;
  v21 = (int *)a7;
  if ( a7 >= W32UserProbeAddress )
    v21 = (int *)W32UserProbeAddress;
  v22 = (unsigned int)*v21;
  v34 = *v21;
  if ( v19 )
  {
    if ( v38 )
    {
      if ( (_DWORD)v22 )
      {
        v23 = v38 * v22;
        if ( v23 <= 0xFFFFFFFF )
        {
          v24 = a5 * (unsigned __int64)(unsigned int)v23;
          if ( v24 <= 0xFFFFFFFF )
          {
            v35 = a5 * v23;
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23, a5, 0xFFFFFFFFLL, 0LL);
            ProbeForWrite(v19, (unsigned int)v24, CurrentProcessWow64Process != 0 ? 1 : 4);
            v8 = v40;
            v18 = v39;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_53:
    v32 = 87LL;
    goto LABEL_54;
  }
LABEL_23:
  if ( a1 == 1 )
  {
    v26 = *(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread(), v14, v18, v13) + 1136);
    v29 = 0LL;
    if ( !v26 || (*v26 & 1) == 0 )
    {
      v11 = 0;
      v32 = 87LL;
LABEL_55:
      UserSetLastError(v32);
      goto LABEL_35;
    }
    v38 = 1;
    v34 = 1;
    if ( v19 )
    {
      CurrentThread = KeGetCurrentThread();
      v29 = *(_QWORD *)(W32GetThreadWin32Thread(CurrentThread, 0LL, v27, v28) + 1136);
      if ( (unsigned __int64)v19 >= W32UserProbeAddress )
        v19 = (_OWORD *)W32UserProbeAddress;
      *v19 = *(_OWORD *)(v29 + 24);
      v19[1] = *(_OWORD *)(v29 + 40);
      v19[2] = *(_OWORD *)(v29 + 56);
      v19[3] = *(_OWORD *)(v29 + 72);
      v19[4] = *(_OWORD *)(v29 + 88);
      v19[5] = *(_OWORD *)(v29 + 104);
    }
  }
  else
  {
    if ( v8 )
    {
      PointerFrameInfoInternal = GetPointerFrameInfoInternal(
                                   v36,
                                   (unsigned __int16)a1,
                                   a2,
                                   (unsigned int)v18,
                                   v35,
                                   &v38,
                                   &v34,
                                   v19);
    }
    else
    {
      v34 = 1;
      if ( (_DWORD)v18 )
      {
        PointerFrameInfoInternal = GetPointerInfoHistoryInternal(v36, (unsigned __int16)a1, a2, v35, &v38, v19);
      }
      else
      {
        v38 = 1;
        PointerFrameInfoInternal = GetPointerInfoInternal(v36, (unsigned __int16)a1, a2, v35, v19);
      }
    }
    v11 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_35;
  }
  v30 = W32UserProbeAddress;
  if ( (unsigned __int64)v16 >= W32UserProbeAddress )
    v16 = (_DWORD *)W32UserProbeAddress;
  *v16 = v38;
  if ( (unsigned __int64)v17 >= W32UserProbeAddress )
    v17 = (_DWORD *)W32UserProbeAddress;
  *v17 = v34;
LABEL_35:
  UserSessionSwitchLeaveCrit(v30, v29, v27, v28);
  return v11;
}
