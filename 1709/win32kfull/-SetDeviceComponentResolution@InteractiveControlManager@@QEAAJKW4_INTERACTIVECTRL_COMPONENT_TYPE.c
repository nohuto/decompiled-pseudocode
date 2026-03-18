/*
 * XREFs of ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021C84C
 * Callers:
 *     NtUserSetInteractiveCtrlRotationAngle @ 0x1C01EB890 (NtUserSetInteractiveCtrlRotationAngle.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0221A24 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceComponentResolution(
        __int64 a1,
        int a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5)
{
  unsigned int v5; // r10d
  unsigned int v7; // esi
  unsigned int v8; // r14d
  __int64 *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-51h] BYREF
  int v16; // [rsp+34h] [rbp-4Dh] BYREF
  int v17; // [rsp+38h] [rbp-49h] BYREF
  int v18; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  const char *v20; // [rsp+60h] [rbp-21h]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  int *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  int *v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  int *v29; // [rsp+90h] [rbp+Fh]
  int v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+9Ch] [rbp+1Bh]

  v5 = 0;
  v7 = (unsigned int)a4;
  v15 = 0;
  v8 = (unsigned int)a3;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v20 = "InteractiveControlManager::SetDeviceComponentResolution entry";
    v23 = &v17;
    v26 = &v18;
    v29 = &v16;
    v21 = 62;
    v17 = a2;
    v24 = 4;
    v18 = (int)a3;
    v27 = 4;
    v16 = (int)a4;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8DA6, a3, a4, 6u, &pData);
    v5 = v15;
  }
  v10 = (__int64 *)(a1 + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *(_DWORD *)(v12 + 8)) )
    {
      v15 = InteractiveControlDevice::SetComponentResolution(v12, v8, v7, a5);
      v5 = v15;
      if ( v15 < 0 && (unsigned int)dword_1C0320190 > 2 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( aFunctionFailed[v13] );
        v22 = 0;
        v25 = 0;
        v21 = v13 + 1;
        v20 = "Function failed.";
        v23 = &v16;
        v16 = v15;
        v24 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, a3, a4, 4u, &pData);
        v5 = v15;
      }
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 && v8 == 3 )
    *(_DWORD *)(a1 + 28) = v7;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v22 = 0;
    v25 = 0;
    v20 = "InteractiveControlManager::SetDeviceComponentResolution exit";
    v23 = &v15;
    v21 = 61;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, a3, a4, 4u, &pData);
    return (unsigned int)v15;
  }
  return v5;
}
