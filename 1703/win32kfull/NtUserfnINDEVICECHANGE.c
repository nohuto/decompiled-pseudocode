/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C00C6AA0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C013D7FC (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  _DWORD *v6; // r14
  __int64 v8; // rbx
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  size_t v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  int v27; // eax
  _QWORD v29[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a4;
  v8 = (unsigned __int16)a3 & 0x8000;
  v9 = 0LL;
  if ( a2 != 537 || a6 != 689 )
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnINDEVICECHANGE");
  if ( (unsigned __int64)(a3 - 0x8000) <= 0xA )
  {
    v10 = 1937LL;
    if ( _bittest64(&v10, a3 - 0x8000) )
    {
      if ( !v6 )
        goto LABEL_7;
    }
  }
  if ( v8 )
  {
    if ( !v6 )
      goto LABEL_10;
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (_DWORD *)W32UserProbeAddress;
    v12 = (unsigned int)*v6;
    if ( *v6 < 0xCu )
    {
LABEL_7:
      v11 = 0LL;
      UserSetLastError(87LL);
      return v11;
    }
    ProbeForRead(a4, (unsigned int)*v6, 1u);
    if ( (int)v12 + 2 < (unsigned int)v12 )
    {
LABEL_10:
      UserSetLastError(87LL);
      return 0LL;
    }
    v13 = Win32AllocPoolWithQuota((unsigned int)(v12 + 2), 1986294613LL);
    v9 = (_DWORD *)v13;
    if ( !v13 )
    {
      UserSetLastError(8LL);
      v11 = 0LL;
      goto LABEL_79;
    }
    PushW32ThreadLock(v13, v29, (__int64)Win32FreePool);
    memmove(v9, a4, v12);
    *((_WORD *)v9 + (v12 >> 1)) = 0;
    if ( *v9 != (_DWORD)v12 )
    {
      v11 = 0LL;
      goto LABEL_79;
    }
    switch ( v9[1] )
    {
      case 3:
        if ( (unsigned int)v12 < 0x10 )
          goto LABEL_76;
        v25 = -1LL;
        do
          ++v25;
        while ( *((_WORD *)v9 + v25 + 6) );
        if ( (int)v25 + 1 < (unsigned int)v25 )
          goto LABEL_76;
        v26 = 2LL * (unsigned int)(v25 + 1);
        if ( v26 > 0xFFFFFFFF )
        {
          LODWORD(v26) = -1;
          v27 = -2147024362;
        }
        else
        {
          v27 = 0;
        }
        if ( v27 < 0 || (int)v26 + 12 < (unsigned int)v26 || (int)v26 + 12 > (unsigned int)v12 )
        {
LABEL_76:
          v11 = 0LL;
          goto LABEL_79;
        }
        break;
      case 5:
        if ( (unsigned int)v12 < 0x20 )
          goto LABEL_64;
        v22 = -1LL;
        do
          ++v22;
        while ( *((_WORD *)v9 + v22 + 14) );
        if ( (int)v22 + 1 < (unsigned int)v22 )
          goto LABEL_64;
        v23 = 2LL * (unsigned int)(v22 + 1);
        if ( v23 > 0xFFFFFFFF )
        {
          LODWORD(v23) = -1;
          v24 = -2147024362;
        }
        else
        {
          v24 = 0;
        }
        if ( v24 < 0 || (int)v23 + 28 < (unsigned int)v23 || (int)v23 + 28 > (unsigned int)v12 )
        {
LABEL_64:
          v11 = 0LL;
          goto LABEL_79;
        }
        break;
      case 6:
        if ( (unsigned int)v12 < 0x38 )
        {
          v11 = 0LL;
          goto LABEL_79;
        }
        if ( a3 == 32774 )
        {
          v17 = (int)v9[12];
          if ( (int)v17 >= 0 )
          {
            if ( (v17 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v17 + 52 > (unsigned int)v12 )
            {
              v11 = 0LL;
              goto LABEL_79;
            }
            v18 = (unsigned __int64)v9 + v17 + 52;
            if ( v18 < (unsigned __int64)(v9 + 13) )
              goto LABEL_52;
            v19 = -1LL;
            do
              ++v19;
            while ( *(_WORD *)(v18 + 2 * v19) );
            if ( (int)v19 + 1 < (unsigned int)v19 )
              goto LABEL_52;
            v20 = 2LL * (unsigned int)(v19 + 1);
            if ( v20 > 0xFFFFFFFF )
            {
              LODWORD(v20) = -1;
              v21 = -2147024362;
            }
            else
            {
              v21 = 0;
            }
            if ( v21 < 0
              || (int)v20 + 52 < (unsigned int)v20
              || (int)v17 + (int)v20 + 52 < (unsigned int)(v20 + 52)
              || (int)v17 + (int)v20 + 52 > (unsigned int)v12 )
            {
LABEL_52:
              v11 = 0LL;
              goto LABEL_79;
            }
          }
        }
        break;
      case 7:
        if ( (unsigned int)v12 < 0x1A0 )
          goto LABEL_33;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)v9 + v14 + 8) );
        if ( (int)v14 + 1 < (unsigned int)v14 )
          goto LABEL_33;
        v15 = 2LL * (unsigned int)(v14 + 1);
        if ( v15 > 0xFFFFFFFF )
        {
          LODWORD(v15) = -1;
          v16 = -2147024362;
        }
        else
        {
          v16 = 0;
        }
        if ( v16 < 0 || (int)v15 + 16 < (unsigned int)v15 || (int)v15 + 16 > (unsigned int)v12 )
        {
LABEL_33:
          v11 = 0LL;
          goto LABEL_79;
        }
        break;
    }
  }
  v11 = _guard_dispatch_icall_fptr();
LABEL_79:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v29);
  return v11;
}
