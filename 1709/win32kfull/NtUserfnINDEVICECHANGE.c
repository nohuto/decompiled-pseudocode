/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C010B8B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  _DWORD *v4; // r11
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // eax
  _QWORD v38[4]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a4;
  v6 = 0LL;
  if ( a3 <= 0x800A && ((_DWORD)a3 == 0x8000 || (_DWORD)a3 == 32772 || (unsigned int)a3 > 0x8006) && !a4 )
  {
LABEL_83:
    v8 = 0LL;
    UserSetLastError(87LL, 32778LL);
    return v8;
  }
  if ( (a3 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !a4 )
  {
    UserSetLastError(87LL, 32778LL);
    return 0LL;
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v4 = (_DWORD *)MmUserProbeAddress;
  v12 = (unsigned int)*v4;
  if ( *v4 < 0xCu )
    goto LABEL_83;
  ProbeForRead(a4, (unsigned int)*v4, 1u);
  if ( (int)v12 + 2 < (unsigned int)v12 )
  {
    UserSetLastError(87LL, v18);
    return 0LL;
  }
  v19 = Win32AllocPoolWithQuota((unsigned int)(v12 + 2), 1986294613LL);
  v6 = (_DWORD *)v19;
  if ( v19 )
  {
    PushW32ThreadLock(v19, v38, (__int64)Win32FreePool, v21);
    memmove(v6, a4, v12);
    *((_WORD *)v6 + (v12 >> 1)) = 0;
    if ( *v6 == (_DWORD)v12 )
    {
      switch ( v6[1] )
      {
        case 3:
          if ( (unsigned int)v12 >= 0x10 )
          {
            v33 = -1LL;
            do
              ++v33;
            while ( *((_WORD *)v6 + v33 + 6) );
            v34 = v33 + 1;
            v7 = 0xFFFFFFFFLL;
            v9 = 0xFFFFFFFFLL;
            if ( (int)v33 + 1 >= (unsigned int)v33 )
            {
              v9 = v34;
              v35 = 2LL * v34;
              if ( v35 > 0xFFFFFFFF )
              {
                LODWORD(v35) = -1;
                v36 = -2147024362;
              }
              else
              {
                v36 = 0;
              }
              if ( v36 >= 0 )
              {
                v37 = v35 + 12;
                if ( (int)v35 + 12 >= (unsigned int)v35 )
                {
                  v7 = v37;
                  if ( v37 <= (unsigned int)v12 )
                    goto LABEL_6;
                }
              }
            }
          }
          v8 = 0LL;
          break;
        case 5:
          if ( (unsigned int)v12 >= 0x20 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( *((_WORD *)v6 + v13 + 14) );
            v14 = v13 + 1;
            v7 = 0xFFFFFFFFLL;
            v9 = 0xFFFFFFFFLL;
            if ( (int)v13 + 1 >= (unsigned int)v13 )
            {
              v9 = v14;
              v15 = 2LL * v14;
              if ( v15 > 0xFFFFFFFF )
              {
                LODWORD(v15) = -1;
                v16 = -2147024362;
              }
              else
              {
                v16 = 0;
              }
              if ( v16 >= 0 )
              {
                v17 = v15 + 28;
                if ( (int)v15 + 28 >= (unsigned int)v15 )
                {
                  v7 = v17;
                  if ( v17 <= (unsigned int)v12 )
                    goto LABEL_6;
                }
              }
            }
          }
          v8 = 0LL;
          break;
        case 6:
          if ( (unsigned int)v12 < 0x38 )
          {
            v8 = 0LL;
          }
          else
          {
            if ( a3 != 32774 || (v9 = (int)v6[12], (int)v9 < 0) )
            {
LABEL_6:
              v8 = _guard_dispatch_icall_fptr();
              break;
            }
            if ( (v9 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v7 = 0xFFFFFFFFLL;
            if ( (int)v9 + 52 > (unsigned int)v12 )
            {
              v8 = 0LL;
            }
            else
            {
              if ( (_DWORD *)((char *)v6 + v9 + 52) >= v6 + 13 )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( *(_WORD *)((char *)v6 + 2 * v27 + v9 + 52) );
                v28 = v27 + 1;
                v10 = 0xFFFFFFFFLL;
                if ( (int)v27 + 1 >= (unsigned int)v27 )
                {
                  v10 = v28;
                  v29 = 2LL * v28;
                  if ( v29 > 0xFFFFFFFF )
                  {
                    LODWORD(v29) = -1;
                    v30 = -2147024362;
                  }
                  else
                  {
                    v30 = 0;
                  }
                  if ( v30 >= 0 )
                  {
                    v31 = v29 + 52;
                    v10 = 0xFFFFFFFFLL;
                    if ( (int)v29 + 52 >= (unsigned int)v29 )
                    {
                      v10 = v31;
                      v32 = v9 + v31;
                      if ( (int)v9 + (int)v10 >= (unsigned int)v10 )
                      {
                        v7 = v32;
                        if ( v32 <= (unsigned int)v12 )
                          goto LABEL_6;
                      }
                    }
                  }
                }
              }
              v8 = 0LL;
            }
          }
          break;
        case 7:
          if ( (unsigned int)v12 >= 0x1A0 )
          {
            v22 = -1LL;
            do
              ++v22;
            while ( *((_WORD *)v6 + v22 + 8) );
            v23 = v22 + 1;
            v7 = 0xFFFFFFFFLL;
            v9 = 0xFFFFFFFFLL;
            if ( (int)v22 + 1 >= (unsigned int)v22 )
            {
              v9 = v23;
              v24 = 2LL * v23;
              if ( v24 > 0xFFFFFFFF )
              {
                LODWORD(v24) = -1;
                v25 = -2147024362;
              }
              else
              {
                v25 = 0;
              }
              if ( v25 >= 0 )
              {
                v26 = v24 + 16;
                if ( (int)v24 + 16 >= (unsigned int)v24 )
                {
                  v7 = v26;
                  if ( v26 <= (unsigned int)v12 )
                    goto LABEL_6;
                }
              }
            }
          }
          v8 = 0LL;
          break;
        default:
          goto LABEL_6;
      }
    }
    else
    {
      v8 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8LL, v20);
    v8 = 0LL;
  }
  if ( v6 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v38, v7, v9, v10);
  return v8;
}
