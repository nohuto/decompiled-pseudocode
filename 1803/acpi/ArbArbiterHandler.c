/*
 * XREFs of ArbArbiterHandler @ 0x1C00937D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx

  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
      goto LABEL_21;
    }
    if ( a2 == 7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
      goto LABEL_21;
    }
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_21;
      }
LABEL_16:
      v7 = -1073741811;
      goto LABEL_26;
    }
LABEL_18:
    v7 = -1073741822;
    goto LABEL_26;
  }
  if ( a2 >= 4 )
    goto LABEL_18;
  switch ( a2 )
  {
    case 0:
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
      goto LABEL_21;
    case 1:
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
      goto LABEL_21;
    case 2:
      v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
      goto LABEL_21;
  }
  if ( a2 != 3 )
    goto LABEL_16;
  v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
LABEL_21:
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v9 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 1;
      KeClearEvent(v9);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v8 = *(struct _KEVENT **)(a1 + 296);
      *(_BYTE *)(a1 + 288) = 0;
      KeSetEvent(v8, 0, 0);
    }
  }
LABEL_26:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v7;
}
