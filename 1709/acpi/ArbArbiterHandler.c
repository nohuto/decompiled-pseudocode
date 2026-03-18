/*
 * XREFs of ArbArbiterHandler @ 0x1C008A0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v10; // rcx

  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
      goto LABEL_5;
    }
    if ( a2 == 7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
      goto LABEL_5;
    }
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_5;
      }
      goto LABEL_22;
    }
LABEL_24:
    v7 = -1073741822;
    goto LABEL_9;
  }
  if ( a2 >= 4 )
    goto LABEL_24;
  if ( !a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
    goto LABEL_5;
  }
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
      goto LABEL_5;
    }
LABEL_22:
    v7 = -1073741811;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
LABEL_5:
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v10 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 1;
      KeClearEvent(v10);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v8 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 0;
      KeSetEvent(v8, 0, 0);
    }
  }
LABEL_9:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v7;
}
