/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01B7ED0
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01B7D64 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01B8018 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, unsigned int a3, int a4)
{
  _DWORD *v5; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // r10
  __int64 v10; // rdi
  struct tagPOINTER_TOUCH_INFO *v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 ThreadWin32Thread; // rax
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

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
        v12 = 0LL;
        v13 = 0;
        do
        {
          if ( ((*v5 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            v14 = 18 * v12;
            *((_DWORD *)v11 + 2 * v14 + 1) = v13;
            *((_QWORD *)v11 + v14 + 4) = *((_QWORD *)v5 - 1);
            if ( (*v5 & 4) != 0 )
              *((_DWORD *)v11 + 36 * v12 + 3) = 0x40000;
            else
              *((_DWORD *)v11 + 36 * v12 + 3) = 0x20000;
            *((_DWORD *)v11 + 36 * v12 + 3) |= 0x8000u;
            v12 = (unsigned int)(v12 + 1);
            *v5 = 0x20000;
          }
          ++v13;
          v5 += 3;
        }
        while ( v13 < a3 );
        PushW32ThreadLock((__int64)v11, v17, (__int64)Win32FreePool);
        if ( a4 )
          v15 = _GetQpcBasedTouchStackTime() - a4;
        else
          v15 = 0;
        xxxSendToTouchStack(a2, v10, v11, v15);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v17[0];
        Win32FreePool(v11);
      }
    }
  }
}
