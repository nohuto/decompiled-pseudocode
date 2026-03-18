/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C0008734
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00671EC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C00885AC (RawInputManagerObjectDelete.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     RIMFreeHidTLCInfo @ 0x1C00088A0 (RIMFreeHidTLCInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0008900 (RIMReleasePointerDeviceInfo.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMHidTLCActive @ 0x1C005030C (RIMHidTLCActive.c)
 *     RIMFreeHidDesc @ 0x1C0055EEC (RIMFreeHidDesc.c)
 */

__int64 __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  DeadzonePalmTelemetry ***v11; // rdi
  __int64 v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v4 = *(_QWORD *)(a2 + 216);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a2 + 328);
  if ( v5 )
    Win32FreePool(v5);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v6 = *(_QWORD *)(a2 + 464);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_QWORD *)(a2 + 464)) )
        RIMFreeHidTLCInfo();
    }
    if ( *(_QWORD *)(a2 + 456) )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 448) )
        {
          v11 = (DeadzonePalmTelemetry ***)(a2 + 408);
          v12 = 5LL;
          do
          {
            if ( *v11 )
            {
              RIMDeadzone::Release(*v11);
              Win32FreePool(*v11);
              *v11 = 0LL;
              --*(_DWORD *)(a2 + 448);
            }
            ++v11;
            --v12;
          }
          while ( v12 );
        }
        RIMReleasePointerDeviceInfo(a1, a2);
      }
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
      {
        v13 = *(_QWORD **)(a2 + 480);
        --*(_BYTE *)(a1 + 960);
        v14 = v13[43];
        if ( v14 )
        {
          Win32FreePool(v14);
          v13[43] = 0LL;
        }
        v15 = v13[49];
        if ( v15 )
        {
          Win32FreePool(v15);
          v13[49] = 0LL;
        }
        v16 = v13[51];
        if ( v16 )
        {
          Win32FreePool(v16);
          v13[51] = 0LL;
        }
        v17 = v13[55];
        if ( v17 )
        {
          Win32FreePool(v17);
          v13[55] = 0LL;
        }
        Win32FreePool(v13);
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
  v7 = *(_QWORD *)(a2 + 360);
  if ( v7 )
    Win32FreePool(v7);
  v8 = *(_QWORD *)(a2 + 368);
  if ( v8 )
    Win32FreePool(v8);
  return RIMIDEFreeInjectedInfo(a2);
}
