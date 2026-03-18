/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00AEB64
 * Callers:
 *     xxxClientShutdown @ 0x1C00AEADC (xxxClientShutdown.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     DestroyWindowsTimers @ 0x1C00AECA0 (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, int a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  BOOL v11; // edi
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (unsigned __int64 *)((char *)a1 + 32);
  v4 = a3 & 0x108;
  v6 = a3 & 0xC0000001;
  v7 = a3 & 0x100;
  while ( 1 )
  {
    if ( *v3 == 1 )
      return 1LL;
    v9 = HMValidateHandleNoSecure(*v3, 1);
    if ( v9 )
    {
      v10 = gptiCurrent;
      v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v13;
      v13[1] = v9;
      ++*(_DWORD *)(v9 + 8);
      if ( a2 == 17 )
      {
        v11 = gptiCurrent == gptiShutdownNotify || xxxSendMessage(v9, 17, 0, v6) != 0;
      }
      else
      {
        xxxSendMessage(v9, 22, v7 != 0, v6);
        v11 = 1;
        if ( v4 == 264 )
          DestroyWindowsTimers(v9);
      }
      ThreadUnlock1(v10, v8);
      if ( !v11 )
        break;
    }
    ++v3;
  }
  return 3LL;
}
