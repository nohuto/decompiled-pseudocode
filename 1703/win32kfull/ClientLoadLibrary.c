/*
 * XREFs of ClientLoadLibrary @ 0x1C003A350
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C003ACEC (xxxLoadHmodIndex.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  int v13; // [rsp+30h] [rbp-2A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-280h] BYREF
  unsigned __int8 v17[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v18[512]; // [rsp+C0h] [rbp-218h] BYREF

  v4 = AllocCallbackMessage(
         72,
         2u,
         *((unsigned __int16 *)a2 + 1) + (unsigned __int64)*((unsigned __int16 *)a1 + 1),
         v18,
         1,
         0x200uLL);
  v5 = v4;
  RegionSize = (ULONG_PTR)v4;
  if ( !v4 )
    return 0LL;
  if ( v4 != v17 && v4 != v18 )
    PushW32ThreadLock((__int64)v4, v16, (__int64)Win32FreePool);
  *((_WORD *)v5 + 20) = *(_WORD *)a1;
  *((_WORD *)v5 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v5 + 6) < 0 )
    goto LABEL_18;
  *((_WORD *)v5 + 28) = *(_WORD *)a2;
  *((_WORD *)v5 + 29) = *((_WORD *)a2 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v5 + 8) < 0 )
    goto LABEL_18;
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v9 = KeUserModeCallback(75LL, v5, *(unsigned int *)v5, v15, &v13);
  EtwTraceEndCallback(75LL);
  EnterCrit(0LL, 1LL);
  if ( v9 >= 0 && v13 == 24 )
  {
    v10 = (__int64 *)v15[0];
    if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || (unsigned __int64)(v15[0] + 8LL) > W32UserProbeAddress )
      v10 = (__int64 *)W32UserProbeAddress;
    v11 = *v10;
    v15[1] = *v10;
  }
  else
  {
LABEL_18:
    v11 = 0LL;
  }
  if ( v5 != v17 && v5 != v18 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  }
  return v11;
}
