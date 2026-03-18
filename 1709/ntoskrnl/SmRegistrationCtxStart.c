/*
 * XREFs of SmRegistrationCtxStart @ 0x140738E04
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x1407382CC (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x140739440 (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x140738204 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(PVOID *a1)
{
  int v2; // ebx
  PVOID v3; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = SmCreateEvent((__int64)a1, &Object);
  if ( v2 < 0 )
  {
    v3 = Object;
  }
  else
  {
    v3 = 0LL;
    *a1 = Object;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
