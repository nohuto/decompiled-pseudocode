/*
 * XREFs of xxxClientPSMTextOut @ 0x1C020103C
 * Callers:
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 * Callees:
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C007DF40 (GreSaveDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        char **a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int8 *result; // rax
  HDC v11; // rsi
  unsigned __int8 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int v15; // r12d
  __int64 v16; // rcx
  int v17; // r15d
  int v18; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-2D0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+70h] [rbp-2C8h] BYREF
  _BYTE v21[16]; // [rsp+88h] [rbp-2B0h] BYREF
  _QWORD v22[3]; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned __int8 v23[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v24[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize[0] = (ULONG_PTR)a1;
  v19 = 0LL;
  result = (unsigned __int8 *)CreateCompatiblePublicDC(a1, &v19);
  v11 = (HDC)result;
  RegionSize[2] = (ULONG_PTR)result;
  if ( result )
  {
    result = AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v24, 1, 0x200uLL);
    v12 = result;
    RegionSize[1] = (ULONG_PTR)result;
    if ( result )
    {
      if ( result != v23 && result != v24 )
        PushW32ThreadLock((__int64)result, v22, (__int64)Win32FreePool);
      *((_QWORD *)v12 + 7) = v11;
      *((_DWORD *)v12 + 16) = a2;
      *((_DWORD *)v12 + 17) = a3;
      *((_DWORD *)v12 + 18) = a5;
      *((_DWORD *)v12 + 19) = a6;
      *((_WORD *)v12 + 20) = *(_WORD *)a4;
      *((_WORD *)v12 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v12,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v12 + 6) >= 0 )
      {
        v15 = GreSaveDC(a1);
        v16 = gdwInAtomicOperation;
        if ( gdwInAtomicOperation )
        {
          v16 = gdwExtraInstrumentations;
          v13 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v16, v13, gdwInAtomicOperation, v14);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v17 = KeUserModeCallback(78LL, v12, *(unsigned int *)v12, v21, &v18);
        EtwTraceEndCallback(78LL);
        EnterCrit(0LL, 1LL);
        GreRestoreDC(a1, v15);
        if ( v11 != a1 && v17 >= 0 )
          NtGdiBitBltInternal(
            a1,
            0,
            0,
            *(_DWORD *)(gpDispInfo + 80LL),
            *(_DWORD *)(gpDispInfo + 84LL),
            v11,
            0,
            0,
            13369376,
            0,
            0);
      }
      if ( v11 != a1 )
      {
        GreDeleteDC(v11);
        GreDeleteObject(v19);
      }
      result = v23;
      if ( v12 != v23 )
      {
        result = v24;
        if ( v12 != v24 )
        {
          if ( *((_QWORD *)v12 + 4) )
          {
            RegionSize[0] = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
          }
          return (unsigned __int8 *)PopAndFreeAlwaysW32ThreadLock((__int64)v22);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (unsigned __int8 *)GreDeleteObject(v19);
    }
  }
  return result;
}
