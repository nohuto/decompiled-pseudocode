/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C000E7F0
 * Callers:
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007618C (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C008CB2C (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMReleasePointerDeviceInfo @ 0x1C000A6B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C000B170 (RIMFreeHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C000D2C8 (RIMFreeHidDesc.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C000E92C (RIMIDEFreeInjectedInfo.c)
 *     RIMHidTLCActive @ 0x1C0018FA8 (RIMHidTLCActive.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v12; // rcx
  RIMDeadzone **v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx

  v5 = *(_QWORD *)(a2 + 216);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
  v6 = *(_QWORD *)(a2 + 328);
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v7 = *(_QWORD *)(a2 + 464);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 464)) )
        RIMFreeHidTLCInfo(v12);
    }
    if ( *(_QWORD *)(a2 + 456) )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 448) )
        {
          v13 = (RIMDeadzone **)(a2 + 408);
          v14 = 5LL;
          do
          {
            if ( *v13 )
            {
              RIMDeadzone::Release(*v13);
              Win32FreePool(*v13, v15, v16);
              *v13 = 0LL;
              --*(_DWORD *)(a2 + 448);
            }
            ++v13;
            --v14;
          }
          while ( v14 );
        }
        RIMReleasePointerDeviceInfo(a1, a2);
      }
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
      {
        v17 = *(_QWORD **)(a2 + 480);
        --*(_BYTE *)(a1 + 960);
        v18 = v17[43];
        if ( v18 )
        {
          Win32FreePool(v18, a2, a3);
          v17[43] = 0LL;
        }
        v19 = v17[49];
        if ( v19 )
        {
          Win32FreePool(v19, a2, a3);
          v17[49] = 0LL;
        }
        v20 = v17[51];
        if ( v20 )
        {
          Win32FreePool(v20, a2, a3);
          v17[51] = 0LL;
        }
        v21 = v17[55];
        if ( v21 )
        {
          Win32FreePool(v21, a2, a3);
          v17[55] = 0LL;
        }
        Win32FreePool(v17, a2, a3);
        *(_QWORD *)(a2 + 480) = 0LL;
      }
      RIMFreeHidDesc(*(_QWORD *)(a2 + 456));
      *(_QWORD *)(a2 + 456) = 0LL;
    }
  }
  if ( *(_BYTE *)(a2 + 48) == 3 && *(_QWORD *)(a2 + 464) )
  {
    RIMFreeHidDesc(*(_QWORD *)(a2 + 456));
    *(_QWORD *)(a2 + 456) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 360);
  if ( v8 )
    Win32FreePool(v8, a2, a3);
  v9 = *(_QWORD *)(a2 + 368);
  if ( v9 )
    Win32FreePool(v9, a2, a3);
  return RIMIDEFreeInjectedInfo(a2);
}
