/*
 * XREFs of RIMGetPropertyCount @ 0x1C0009F18
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C000AD38 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int16 v6; // si
  __int64 v7; // rax
  int v8; // r14d
  unsigned __int16 v9; // r15
  int SpecificValueCaps; // ebx
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rdx
  int v16; // edx
  __int64 v17; // rax
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v21[2]; // [rsp+50h] [rbp-69h] BYREF
  __int16 v22; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v23; // [rsp+58h] [rbp-61h]
  int v24; // [rsp+5Ch] [rbp-5Dh]
  __int64 v25; // [rsp+60h] [rbp-59h]
  char v26[2]; // [rsp+70h] [rbp-49h] BYREF
  char v27; // [rsp+72h] [rbp-47h]

  v4 = a1;
  v25 = a1;
  v23 = a2;
  v20 = a3;
  v6 = a3;
  v19 = a3;
  v7 = *(_QWORD *)(a1 + 688);
  v8 = 0;
  v21[0] = 0;
  v22 = 1;
  v9 = a2;
  v24 = 0;
  SpecificValueCaps = -1073741668;
  if ( v7 )
  {
    v11 = *(_WORD *)(v7 + 8);
    if ( v11 )
    {
      v9 = v11;
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v11, 0, 0LL, (__int64)v21, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v17 = *(_QWORD *)(v4 + 688);
        v6 = v21[0] + v20;
        v19 = v21[0];
        v24 = 1;
        *(_WORD *)(v17 + 10) = v21[0];
      }
      else
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          18,
          28,
          (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
      }
    }
  }
  if ( v6 > 1u )
  {
    v12 = Win32AllocPool(72LL * v6, 1668313938LL);
    if ( v12 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v9, 48, (__int64)v26, (__int64)&v22, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v4 + 1400) = v27;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, v12, (__int64)&v19, a4);
        if ( SpecificValueCaps >= 0 )
        {
          if ( v19 )
          {
            v13 = (_BYTE *)(v12 + 2);
            v14 = v19;
            do
            {
              if ( *v13 == v27 )
                ++v8;
              v13 += 72;
              --v14;
            }
            while ( v14 );
          }
          if ( v24 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v23, 0, v12 + 72LL * v19, (__int64)&v20, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v18 = v19;
              if ( v20 )
              {
                do
                {
                  if ( v18 >= v6 )
                    break;
                  if ( *(_BYTE *)(v12 + 72LL * v18 + 2) == v27 )
                    ++v8;
                  ++v18;
                }
                while ( (unsigned __int16)(v18 - v19) < v20 );
                v4 = v25;
              }
            }
          }
          *(_DWORD *)(v4 + 312) = v8;
        }
      }
      Win32FreePool(v12);
    }
  }
  return SpecificValueCaps >= 0;
}
