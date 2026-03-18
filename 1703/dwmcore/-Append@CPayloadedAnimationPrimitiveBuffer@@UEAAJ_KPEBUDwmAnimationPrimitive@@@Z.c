/*
 * XREFs of ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z @ 0x180021B10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Append(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2,
        const struct DwmAnimationPrimitive *a3)
{
  unsigned int v3; // esi
  char *v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h]

  v3 = v10;
  v4 = (char *)this + 16;
  v5 = *((unsigned int *)this + 10);
  v6 = v5 + a2;
  if ( (unsigned int)v5 + a2 >= (unsigned int)v5 )
    v3 = v5 + a2;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v3 <= *((_DWORD *)v4 + 5) )
  {
    memcpy_0((void *)(*(_QWORD *)v4 + 32 * v5), a3, 32LL * a2);
    *((_DWORD *)v4 + 6) = v3;
  }
  else
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v4, 32LL, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  return v7;
}
