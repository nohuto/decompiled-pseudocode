/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C01EDEE0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01C1A74 (ProbeAndCaptureSoftKbdData.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[3]; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+68h] [rbp-E0h]
  __int64 v18; // [rsp+78h] [rbp-D0h]
  int v19; // [rsp+80h] [rbp-C8h]
  __int128 v20; // [rsp+88h] [rbp-C0h]
  __int128 v21; // [rsp+98h] [rbp-B0h]
  __int128 v22; // [rsp+B0h] [rbp-98h]
  __int128 v23; // [rsp+C0h] [rbp-88h]
  __int128 v24; // [rsp+D0h] [rbp-78h]
  __int128 v25; // [rsp+E0h] [rbp-68h]
  __int128 v26; // [rsp+F0h] [rbp-58h]
  __int64 v27; // [rsp+100h] [rbp-48h]
  int v28; // [rsp+108h] [rbp-40h]

  v8 = 0LL;
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  if ( a3 > 0x18 )
    goto LABEL_33;
  switch ( (_DWORD)a3 )
  {
    case 7:
      if ( a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *(_OWORD *)a4 = *(_OWORD *)a4;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
      break;
    case 8:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v20 = *(_OWORD *)a4;
      v21 = *(_OWORD *)(a4 + 16);
      break;
    case 9:
      goto LABEL_24;
    case 0xA:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v22 = *(_OWORD *)a4;
      v23 = *(_OWORD *)(a4 + 16);
      v24 = *(_OWORD *)(a4 + 32);
      v25 = *(_OWORD *)(a4 + 48);
      v26 = *(_OWORD *)(a4 + 64);
      v27 = *(_QWORD *)(a4 + 80);
      v28 = *(_DWORD *)(a4 + 88);
      break;
    case 0xB:
      if ( a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *(_OWORD *)a4 = *(_OWORD *)a4;
      *(_QWORD *)(a4 + 16) = *(_QWORD *)(a4 + 16);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 24);
      break;
    case 0xC:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v17 = *(_OWORD *)a4;
      v18 = *(_QWORD *)(a4 + 16);
      v19 = *(_DWORD *)(a4 + 24);
      break;
    case 0x11:
LABEL_24:
      if ( a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *(_OWORD *)a4 = *(_OWORD *)a4;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
      *(_OWORD *)(a4 + 48) = *(_OWORD *)(a4 + 48);
      *(_OWORD *)(a4 + 64) = *(_OWORD *)(a4 + 64);
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 80);
      *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 88);
      break;
    case 0x18:
      v9 = ProbeAndCaptureSoftKbdData((char *)a4);
      v8 = v9;
      if ( !v9 )
        return 0LL;
      PushW32ThreadLock((__int64)v9, v16, (__int64)Win32FreePool, v10);
      break;
  }
LABEL_33:
  v11 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, 643LL, a3);
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v16, v12, v13, v14);
  return v11;
}
