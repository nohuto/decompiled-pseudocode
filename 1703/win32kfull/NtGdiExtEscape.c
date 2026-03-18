/*
 * XREFs of NtGdiExtEscape @ 0x1C0090BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0022778 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 *     GreExtEscape @ 0x1C00F360C (GreExtEscape.c)
 *     bUMPD @ 0x1C0102FD4 (bUMPD.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UmfdDispatchWinLogonEscape @ 0x1C013F454 (UmfdDispatchWinLogonEscape.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GreNamedEscape @ 0x1C0285DA8 (GreNamedEscape.c)
 */

__int64 __fastcall NtGdiExtEscape(HDC a1, char *a2, int a3, unsigned int a4, int a5, char *a6, int a7, char *a8)
{
  __int64 v8; // r14
  char *v9; // rbx
  char *v10; // rsi
  unsigned int v11; // r12d
  char *v12; // rdi
  char *v14; // rdx
  size_t v15; // r14
  char *v16; // r15
  unsigned int v17; // eax
  int v18; // [rsp+34h] [rbp-174h]
  int v19; // [rsp+38h] [rbp-170h]
  int v20; // [rsp+3Ch] [rbp-16Ch]
  _QWORD v24[4]; // [rsp+78h] [rbp-130h] BYREF
  _BYTE v25[32]; // [rsp+98h] [rbp-110h] BYREF
  _BYTE v26[32]; // [rsp+B8h] [rbp-F0h] BYREF
  char v27; // [rsp+D8h] [rbp-D0h] BYREF
  char v28; // [rsp+F8h] [rbp-B0h] BYREF
  char v29; // [rsp+120h] [rbp-88h] BYREF

  v8 = a3;
  v9 = 0LL;
  v10 = 0LL;
  v11 = -1;
  memset(v24, 0, sizeof(v24));
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v12 = 0LL;
  if ( a5 >= 0 && a7 >= 0 && a3 >= 0 && (!a1 || !a2) )
  {
    if ( gpidLogon && PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    {
      UmfdDispatchWinLogonEscape(a6);
      return 0LL;
    }
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      UmfdDispatchEscape(a6);
      return 0LL;
    }
    v14 = a2;
    if ( a2 )
    {
      if ( (int)v8 > 31 )
      {
        if ( (int)v8 + 1 > (int)v8 && (unsigned int)(v8 + 1) <= 0x1388000 )
        {
          v10 = (char *)PALLOCMEM2((unsigned int)(2 * v8 + 2), 1886221383LL, 0);
          v14 = a2;
        }
        if ( !v10 )
          goto LABEL_78;
        v20 = 1;
      }
      else
      {
        v10 = &v29;
      }
      v15 = 2 * v8;
      if ( &v14[v15] < v14 || (unsigned __int64)&v14[v15] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v10, v14, v15);
      *(_WORD *)&v10[v15] = 0;
    }
    if ( !a5 )
    {
LABEL_40:
      if ( a7 )
      {
        if ( (unsigned int)bUMPD(a1) )
        {
          v16 = a8;
          ProbeForWrite(a8, a7, 1u);
          v9 = a8;
          goto LABEL_51;
        }
        if ( a7 > 32 )
        {
          if ( a7 <= 40960000 )
            v9 = (char *)PALLOCMEM2((unsigned int)a7, 1886221383LL, 0);
          if ( !v9 )
            goto LABEL_78;
          v18 = 1;
        }
        else
        {
          v9 = &v28;
        }
        memset(v9, 0, a7);
      }
      v16 = a8;
LABEL_51:
      if ( v20 && v10 )
        PushThreadGuardedObject(v24, v10, Win32FreePool);
      if ( v19 && v12 )
        PushThreadGuardedObject(v25, v12, Win32FreePool);
      if ( v18 && v9 )
        PushThreadGuardedObject(v26, v9, Win32FreePool);
      if ( v10 )
        v17 = GreNamedEscape((wchar_t *)v10, a4, a5, v12, a7, v9);
      else
        v17 = GreExtEscape(a1, a7, (__int64)v9);
      v11 = v17;
      if ( v20 && v10 )
        PopThreadGuardedObject(v24);
      if ( v19 && v12 )
        PopThreadGuardedObject(v25);
      if ( v18 && v9 )
        PopThreadGuardedObject(v26);
      if ( a7 && v9 != v16 )
      {
        if ( (unsigned __int64)&v16[a7] > W32UserProbeAddress || &v16[a7] <= v16 )
          *W32UserProbeAddress = 0;
        memmove(v16, v9, a7);
      }
      goto LABEL_78;
    }
    if ( (unsigned int)bUMPD(a1) )
    {
      if ( a5 > 32 )
      {
        if ( (unsigned __int64)&a6[a5] > W32UserProbeAddress || &a6[a5] < a6 )
          *W32UserProbeAddress = 0;
        v12 = a6;
        goto LABEL_40;
      }
    }
    else if ( a5 > 32 )
    {
      if ( a5 <= 40960000 )
        v12 = (char *)PALLOCMEM2((unsigned int)a5, 1886221383LL, 0);
      if ( !v12 )
        goto LABEL_78;
      v19 = 1;
      goto LABEL_36;
    }
    v12 = &v27;
LABEL_36:
    if ( &a6[a5] < a6 || (unsigned __int64)&a6[a5] > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(v12, a6, a5);
    goto LABEL_40;
  }
LABEL_78:
  if ( v18 && v9 )
    Win32FreePool(v9);
  if ( v19 && v12 )
    Win32FreePool(v12);
  if ( v20 )
  {
    if ( v10 )
      Win32FreePool(v10);
  }
  return v11;
}
