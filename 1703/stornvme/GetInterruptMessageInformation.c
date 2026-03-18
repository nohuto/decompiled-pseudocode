/*
 * XREFs of GetInterruptMessageInformation @ 0x1C00038A4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004640 (NVMeControllerInitPart2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

char __fastcall GetInterruptMessageInformation(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned __int16 v4; // di
  void **v6; // r15
  __int64 v7; // r8
  void **v8; // r14
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned __int16 v11; // r12
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD v17[4]; // [rsp+30h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  v3 = 0LL;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  v6 = (void **)(a1 + 216);
  v7 = *(_QWORD *)(a1 + 216);
  if ( v7 )
  {
    StorPortExtendedFunction(1LL, a1, v7, v2);
    *v6 = 0LL;
  }
  v8 = (void **)(a1 + 208);
  v9 = *(_QWORD *)(a1 + 208);
  if ( v9 )
  {
    StorPortExtendedFunction(1LL, a1, v9, v2);
    *v8 = 0LL;
  }
  v10 = *(_DWORD *)(a1 + 12) - 2;
  *(_WORD *)(a1 + 200) = 0;
  if ( v10 <= 1 )
  {
    v11 = 0;
    if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v17) )
      goto LABEL_17;
    do
    {
      if ( v11 )
      {
        if ( v3 == v17[1] && *(_DWORD *)(a1 + 12) != 3 )
          *(_DWORD *)(a1 + 12) = 2;
      }
      else
      {
        v3 = v17[1];
      }
      ++v11;
    }
    while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v11, v17) );
    if ( !v11 )
    {
LABEL_17:
      v11 = 1;
      *(_DWORD *)(a1 + 12) = 1;
    }
    *(_WORD *)(a1 + 200) = v11;
  }
  else
  {
    *(_WORD *)(a1 + 200) = 1;
  }
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)*(unsigned __int16 *)(a1 + 200), 1701672526LL);
  if ( !*v8 )
    goto LABEL_35;
  v13 = (24 * (unsigned int)*(unsigned __int16 *)(a1 + 200)) >> 2;
  if ( v13 )
    memset(*v8, 0, 4LL * v13);
  StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 200), 1701672526LL);
  if ( *v6 )
  {
    v14 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 200)) >> 2;
    if ( v14 )
      memset(*v6, 0, 4LL * v14);
    while ( v4 < *(_WORD *)(a1 + 200) )
    {
      v15 = 3LL * v4;
      *((_DWORD *)*v8 + 2 * v15) = v4;
      v16 = (__int64)*v6 + 16 * v4++;
      *((_QWORD *)*v8 + v15 + 1) = v16;
    }
    return 1;
  }
  else
  {
LABEL_35:
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
    *(_WORD *)(a1 + 200) = 0;
    return 0;
  }
}
