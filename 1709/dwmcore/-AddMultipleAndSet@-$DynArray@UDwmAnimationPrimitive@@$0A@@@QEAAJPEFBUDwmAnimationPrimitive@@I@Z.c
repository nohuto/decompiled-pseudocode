/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmAnimationPrimitive@@$0A@@@QEAAJPEFBUDwmAnimationPrimitive@@I@Z @ 0x180187510
 * Callers:
 *     ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z @ 0x1801875B0 (-Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmAnimationPrimitive,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  unsigned int v6; // eax
  DWORD v7; // ebx
  signed int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v3 = v10;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + a3;
  if ( (unsigned int)v5 + a3 >= (unsigned int)v5 )
    v3 = v5 + a3;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x20u, a3, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 32 * v5), a2, 32LL * a3);
    *(_DWORD *)(a1 + 24) = v3;
  }
  return v7;
}
