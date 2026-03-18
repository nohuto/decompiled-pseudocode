/*
 * XREFs of ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x180082610
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18007F2C4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 */

__int64 __fastcall CChannel::CreateResource(__int64 a1, unsigned int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v10 = 0;
  if ( (unsigned int)v4 >= 0x28 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC06u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2B2u);
  }
  else
  {
    v7 = CHandleTable::CreateOrAddRefOnChannel(a1 + 16, a1, dword_1801F4070[v4], &v10);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2B3u);
  }
  *a3 = v10;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
