/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021CBD4
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C021CD8C (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0222038 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  const char *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  int *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  int *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]

  v4 = 0;
  v5 = (unsigned int)a3;
  v11 = 0;
  v7 = 5LL;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v17 = 0;
    v13 = 0;
    v20 = 0;
    v23 = 0;
    v15 = "InteractiveControlManager::SetDeviceHapticsMode entry";
    v18 = &v13;
    v21 = &v12;
    v16 = 54;
    v19 = 4;
    v12 = (int)a3;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8E04, a3, a4, 5u, &pData);
    v4 = v11;
  }
  v8 = (_QWORD *)(a1 + 40);
  do
  {
    if ( *v8 )
    {
      v11 = InteractiveControlDevice::SetHapticsMode(*v8, v5);
      v4 = v11;
      if ( v11 < 0 && (unsigned int)dword_1C0320190 > 2 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( aFunctionFailed[v9] );
        v17 = 0;
        v20 = 0;
        v16 = v9 + 1;
        v18 = &v12;
        v15 = "Function failed.";
        v12 = v11;
        v19 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, a3, a4, 4u, &pData);
        v4 = v11;
      }
    }
    ++v8;
    --v7;
  }
  while ( v7 );
  *(_DWORD *)(a1 + 32) = v5;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v17 = 0;
    v20 = 0;
    v15 = "InteractiveControlManager::SetDeviceHapticsMode exit";
    v18 = &v11;
    v16 = 53;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, a3, a4, 4u, &pData);
    return (unsigned int)v11;
  }
  return v4;
}
