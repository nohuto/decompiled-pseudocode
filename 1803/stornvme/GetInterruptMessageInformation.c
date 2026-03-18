/*
 * XREFs of GetInterruptMessageInformation @ 0x1C0003B64
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned __int16 v4; // di
  void **v6; // r14
  __int64 v7; // r8
  void **v8; // r15
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned __int16 v11; // r12
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned __int16 v14; // dx
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rdx
  _QWORD v19[4]; // [rsp+30h] [rbp-58h] BYREF

  memset(v19, 0, sizeof(v19));
  v3 = 0LL;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  v6 = (void **)(a1 + 224);
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
  {
    StorPortExtendedFunction(1LL, a1, v7, v2);
    *v6 = 0LL;
  }
  v8 = (void **)(a1 + 216);
  v9 = *(_QWORD *)(a1 + 216);
  if ( v9 )
  {
    StorPortExtendedFunction(1LL, a1, v9, v2);
    *v8 = 0LL;
  }
  v10 = *(_DWORD *)(a1 + 12) - 2;
  *(_WORD *)(a1 + 208) = 0;
  if ( v10 <= 1 )
  {
    v11 = 0;
    if ( !(unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v19) )
    {
      do
      {
        if ( v11 )
        {
          if ( v3 == v19[1] && *(_DWORD *)(a1 + 12) != 3 )
            *(_DWORD *)(a1 + 12) = 2;
        }
        else
        {
          v3 = v19[1];
        }
        ++v11;
      }
      while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v11, v19) );
      if ( v11 )
        goto LABEL_18;
    }
    *(_DWORD *)(a1 + 12) = 1;
  }
  v11 = 1;
LABEL_18:
  *(_WORD *)(a1 + 208) = v11;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v11, 1701672526LL);
  if ( !*v8 )
    goto LABEL_34;
  v13 = (24 * (unsigned int)*(unsigned __int16 *)(a1 + 208)) >> 2;
  if ( v13 )
    memset(*v8, 0, 4LL * v13);
  StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 208), 1701672526LL);
  if ( *v6 )
  {
    v14 = *(_WORD *)(a1 + 208);
    v15 = (16 * (unsigned int)v14) >> 2;
    if ( v15 )
    {
      memset(*v6, 0, 4LL * v15);
      v14 = *(_WORD *)(a1 + 208);
    }
    if ( v14 )
    {
      do
      {
        v16 = v4;
        v17 = v4++;
        v18 = 3 * v16;
        *((_DWORD *)*v8 + 2 * v18) = v17;
        *((_QWORD *)*v8 + v18 + 1) = (char *)*v6 + 16 * v16;
      }
      while ( v4 < *(_WORD *)(a1 + 208) );
    }
    return 1;
  }
  else
  {
LABEL_34:
    if ( *v6 )
    {
      StorPortExtendedFunction(1LL, a1, *v6, v12);
      *v6 = 0LL;
    }
    if ( *v8 )
    {
      StorPortExtendedFunction(1LL, a1, *v8, v12);
      *v8 = 0LL;
    }
    *(_WORD *)(a1 + 208) = 0;
    return 0;
  }
}
