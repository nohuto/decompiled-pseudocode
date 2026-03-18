/*
 * XREFs of ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18000EB80
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18000FD9C (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::CreateResource(__int64 a1, unsigned int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v10 = 0;
  if ( (unsigned int)v4 >= 0x29 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xC1Du);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2B2u);
  }
  else
  {
    v7 = CHandleTable::CreateOrAddRefOnChannel(a1 + 16, a1, dword_1802100F0[v4], &v10);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2B3u);
  }
  *a3 = v10;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
