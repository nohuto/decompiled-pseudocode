/*
 * XREFs of ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x1800C5A6C
 * Callers:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x1800C5760 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1800C53B0 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::GetAvailableDynamicObjectCount(Sarm::CEndpointResourcePool **this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  unsigned int v5[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v7; // [rsp+60h] [rbp+7h]
  int v8; // [rsp+68h] [rbp+Fh]
  int v9; // [rsp+6Ch] [rbp+13h]
  char *v10; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+7Ch] [rbp+23h]
  unsigned int *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]

  v5[0] = 0;
  Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount(this[1], v5);
  if ( (unsigned int)dword_18012A220 > 5 )
  {
    v9 = 0;
    v12 = 0;
    v15 = 0;
    v7 = (char *)(this + 5);
    v10 = (char *)(this + 2);
    v13 = v5;
    v8 = 8;
    v11 = 16;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FAAF0, v2, v3, 5u, &pData);
  }
  return v5[0];
}
