/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01BD134
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01BCFC8 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01BD27C (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, unsigned int a3, int a4)
{
  _DWORD *v5; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // r10
  __int64 v10; // rdi
  struct tagPOINTER_TOUCH_INFO *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a3 )
  {
    v5 = (_DWORD *)((char *)a1 + 8);
    v6 = (_DWORD *)((char *)a1 + 8);
    v7 = a3;
    v10 = 0LL;
    do
    {
      if ( ((*v6 - 0x20000) & 0xFFFDFFFF) != 0 )
        v10 = (unsigned int)(v10 + 1);
      v6 += 3;
      --v7;
    }
    while ( v7 );
    if ( (_DWORD)v10 )
    {
      v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v10, 1953067861LL);
      if ( v11 )
      {
        v13 = 0LL;
        v14 = 0;
        do
        {
          if ( ((*v5 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            v15 = 18 * v13;
            *((_DWORD *)v11 + 2 * v15 + 1) = v14;
            *((_QWORD *)v11 + v15 + 4) = *((_QWORD *)v5 - 1);
            if ( (*v5 & 4) != 0 )
              *((_DWORD *)v11 + 36 * v13 + 3) = 0x40000;
            else
              *((_DWORD *)v11 + 36 * v13 + 3) = 0x20000;
            *((_DWORD *)v11 + 36 * v13 + 3) |= 0x8000u;
            v13 = (unsigned int)(v13 + 1);
            *v5 = 0x20000;
          }
          ++v14;
          v5 += 3;
        }
        while ( v14 < a3 );
        PushW32ThreadLock((__int64)v11, v23, (__int64)Win32FreePool, v12);
        if ( a4 )
          v16 = _GetQpcBasedTouchStackTime() - a4;
        else
          v16 = 0;
        xxxSendToTouchStack(a2, v10, v11, v16);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
        *(_QWORD *)(ThreadWin32Thread + 16) = v23[0];
        Win32FreePool(v11, v21, v22);
      }
    }
  }
}
