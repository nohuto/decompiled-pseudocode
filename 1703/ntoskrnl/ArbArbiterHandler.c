/*
 * XREFs of ArbArbiterHandler @ 0x1405B3060
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // edi
  struct _KEVENT *v10; // rcx
  struct _KEVENT *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
      goto LABEL_10;
    }
    if ( a2 == 7 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
      goto LABEL_10;
    }
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_10;
      }
      goto LABEL_22;
    }
LABEL_23:
    v8 = -1073741822;
    goto LABEL_14;
  }
  if ( a2 >= 4 )
    goto LABEL_23;
  if ( !a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
    goto LABEL_10;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
      goto LABEL_10;
    }
    if ( a2 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
      goto LABEL_10;
    }
LABEL_22:
    v8 = -1073741811;
    goto LABEL_14;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
LABEL_10:
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v11 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 1;
      KeResetEvent(v11);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v10 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 0;
      KeSetEvent(v10, 0, 0);
    }
  }
LABEL_14:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v8;
}
