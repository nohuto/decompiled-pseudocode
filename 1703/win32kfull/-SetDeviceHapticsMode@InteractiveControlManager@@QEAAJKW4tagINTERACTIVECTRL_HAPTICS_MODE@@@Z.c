/*
 * XREFs of ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C021B938
 * Callers:
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C021BADC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0220B64 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceHapticsMode(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rdi
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  _QWORD *v9; // rbx
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int v15; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-35h] BYREF
  int v17; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-9h] BYREF
  int *v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  int *v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]

  v3 = 0;
  v15 = 0;
  v6 = 5LL;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceHapticsMode entry");
    v17 &= (unsigned int)v7;
    v22 &= (unsigned int)v7;
    v25 &= (unsigned int)v7;
    v20 = &v17;
    v23 = (int *)&v16;
    v21 = 4;
    v16 = a3;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC294, v8, v7, 5u, &pData);
    v3 = v15;
  }
  v9 = (_QWORD *)(a1 + 40);
  do
  {
    if ( *v9 )
    {
      v15 = InteractiveControlDevice::SetHapticsMode(*v9, a3);
      v3 = v15;
      if ( v15 < 0 && (unsigned int)dword_1C0324190 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v22 = 0;
        v20 = (int *)&v16;
        v16 = (unsigned int)v10;
        v21 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v11, v10, 4u, &pData);
        v3 = v15;
      }
    }
    ++v9;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 32) = a3;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceHapticsMode exit");
    v22 = 0;
    v20 = &v15;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v12, v13, 4u, &pData);
    return (unsigned int)v15;
  }
  return v3;
}
