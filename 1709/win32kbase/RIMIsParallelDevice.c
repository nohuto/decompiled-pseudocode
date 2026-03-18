/*
 * XREFs of RIMIsParallelDevice @ 0x1C000FF9C
 * Callers:
 *     RIMAssignTouchType @ 0x1C0095C58 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMValidateAllCollectionUsages @ 0x1C0093E74 (RIMValidateAllCollectionUsages.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0094000 (RIMRetrieveAllLinkIndexUsages.c)
 *     rimHidP_GetLinkCollectionNodes @ 0x1C009974C (rimHidP_GetLinkCollectionNodes.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  unsigned __int16 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  BOOL v8; // r13d
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned int *v13; // rax
  _WORD v15[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v16; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v17; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v19; // [rsp+50h] [rbp-69h]
  __int64 v20; // [rsp+60h] [rbp-59h] BYREF
  __int64 v21; // [rsp+68h] [rbp-51h] BYREF
  __int64 v22; // [rsp+70h] [rbp-49h]
  unsigned int *v23; // [rsp+78h] [rbp-41h]
  _BYTE v24[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = *(_DWORD **)(a1 + 672);
  v4 = 0;
  v23 = a3;
  v19 = a2;
  v22 = a1;
  v5 = 1;
  v20 = 0LL;
  v15[0] = 1;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v17 = 0;
  v16 = 0;
  v8 = 0;
  v18 = 0;
  if ( (unsigned int)rimHidP_GetLinkCollectionNodes(0LL, &v18, a2) == -1072627705 && v18 > 1 )
  {
    v9 = 0;
    do
    {
      if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v5, 81, (__int64)v24, (__int64)v15, v19) == 1114112 )
      {
        ++*v3;
        if ( v9 )
        {
          if ( v6 && !v8 )
            v8 = RIMValidateAllCollectionUsages(v6, v17, v7, v16, v5, v19) == 0;
        }
        else
        {
          if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(
                               v5,
                               v19,
                               (unsigned int)&v17,
                               (unsigned int)&v20,
                               (__int64)&v16,
                               (__int64)&v21) != 1114112 )
          {
            LOBYTE(v10) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v10,
              18,
              22,
              (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
          }
          v6 = v20;
          v9 = 1;
          v7 = v21;
        }
      }
      ++v5;
      v15[0] = 1;
    }
    while ( v5 < v18 );
    v12 = v22;
    if ( v6 )
      Win32FreePool(v6, v10, v11);
    if ( v7 )
      Win32FreePool(v7, v10, v11);
    v15[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v24, (__int64)v15, v19) == 1114112 )
    {
      v3[8] |= 1u;
      *(_DWORD *)(v12 + 24) = 3;
    }
    if ( *v3 > 1u && (v3[8] & 1) == 0 )
      *(_DWORD *)(v12 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 3) <= 1 )
    {
      v13 = v23;
      v4 = 1;
      *(_DWORD *)(v12 + 276) |= 8u;
      *v13 = v18;
    }
  }
  return v4;
}
