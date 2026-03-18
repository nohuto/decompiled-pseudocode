/*
 * XREFs of RIMRetrieveLinkCollection @ 0x1C000FC08
 * Callers:
 *     RIMAssignTouchType @ 0x1C0095C58 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     RIMGetPropertyCount @ 0x1C00934B0 (RIMGetPropertyCount.c)
 *     RIMCacheAxisChildIndex @ 0x1C0094D14 (RIMCacheAxisChildIndex.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C009974C (rimHidP_GetLinkCollectionNodes.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall RIMRetrieveLinkCollection(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // edx
  unsigned __int16 v11; // r14
  __int64 v12; // r9
  _WORD v14[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v15; // [rsp+44h] [rbp-55h]
  unsigned int v16; // [rsp+48h] [rbp-51h] BYREF
  _WORD v17[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v18[20]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v19; // [rsp+74h] [rbp-25h]

  v3 = *(_QWORD *)(a1 + 672);
  v16 = a3;
  v17[0] = 0;
  v6 = 0;
  v7 = 1;
  *(_WORD *)(v3 + 8) = 0;
  if ( v16 <= 1 )
    return v6;
  v8 = Win32AllocPool(24LL * v16, 1701016402LL);
  v9 = v8;
  if ( !v8 )
    return v6;
  *(_QWORD *)(v3 + 16) = v8;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(v8, &v16, a2) != 1114112 )
    return v6;
  v15 = 0;
  v14[0] = 0;
  v11 = *(_WORD *)(v9 + 10);
  if ( !v16 )
    goto LABEL_23;
  while ( 1 )
  {
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v11, 81, (__int64)v18, (__int64)v14, a2) == 1114112 )
      break;
    v11 = *(_WORD *)(v9 + 24LL * v11 + 8);
    if ( (unsigned __int16)++v15 >= v16 )
      goto LABEL_23;
  }
  v14[0] = 1;
  *(_WORD *)(v3 + 4) = v11;
  *(_WORD *)(a1 + 688) = v11;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v11, 48, (__int64)v18, (__int64)v14, a2) == 1114112 )
  {
    v15 = v19;
    v14[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v11, 49, (__int64)v18, (__int64)v14, a2) == 1114112 )
    {
      v7 = 0;
      if ( v15 == 2 && v19 == 2 )
        *(_DWORD *)(a1 + 276) |= 0x800u;
    }
  }
  if ( !*(_WORD *)(v9 + 24LL * v11 + 10) )
  {
    if ( !v7 )
      goto LABEL_13;
LABEL_23:
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      18,
      25,
      (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
    goto LABEL_15;
  }
  if ( v7 )
  {
    v12 = 1LL;
    goto LABEL_14;
  }
LABEL_13:
  v12 = 0LL;
LABEL_14:
  v6 = RIMCacheAxisChildIndex(a1, a2, v16, v12);
LABEL_15:
  if ( v6
    && (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(v3 + 4), 0, 0LL, (__int64)v17, a2) == -1072627705 )
  {
    RIMGetPropertyCount(a1, *(unsigned __int16 *)(v3 + 4), v17[0], a2);
  }
  return v6;
}
