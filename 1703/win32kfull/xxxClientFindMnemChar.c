/*
 * XREFs of xxxClientFindMnemChar @ 0x1C02006E0
 * Callers:
 *     xxxMNFindChar @ 0x1C0219414 (xxxMNFindChar.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  int v12; // [rsp+30h] [rbp-2A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v15[3]; // [rsp+58h] [rbp-280h] BYREF
  _BYTE v16[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v17[512]; // [rsp+C0h] [rbp-218h] BYREF

  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v17, 1, 0x200uLL);
  v5 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v16 && result != v17 )
      PushW32ThreadLock((__int64)result, v15, (__int64)Win32FreePool);
    *((_WORD *)v5 + 28) = a2;
    *((_DWORD *)v5 + 15) = 1;
    *((_DWORD *)v5 + 16) = 1;
    *((_WORD *)v5 + 20) = *(_WORD *)a1;
    *((_WORD *)v5 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v5,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v5 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation )
    {
      v6 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v5 + 2) = 0LL;
    v9 = KeUserModeCallback(66LL, v5, *(unsigned int *)v5, v14, &v12);
    EtwTraceEndCallback(66LL);
    EnterCrit(0LL, 1LL);
    if ( v9 >= 0 && v12 == 24 )
    {
      v10 = (__int64 *)v14[0];
      if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || (unsigned __int64)(v14[0] + 8LL) > W32UserProbeAddress )
        v10 = (__int64 *)W32UserProbeAddress;
      v11 = *v10;
      v14[1] = *v10;
    }
    else
    {
LABEL_15:
      LODWORD(v11) = 0;
    }
    if ( v5 != v16 && v5 != v17 )
    {
      if ( *((_QWORD *)v5 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v15);
    }
    return (unsigned __int8 *)(unsigned int)v11;
  }
  return result;
}
