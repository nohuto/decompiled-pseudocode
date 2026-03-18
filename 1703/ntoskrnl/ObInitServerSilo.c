/*
 * XREFs of ObInitServerSilo @ 0x1405CE6D4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rdi
  _QWORD *v3; // rdx
  __int64 v4; // rax
  int result; // eax
  __int64 v6; // rdx
  int v7; // ebx
  PVOID v8; // rcx
  int v9; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  __int128 v13; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+88h] [rbp+18h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[15] = 0LL;
  v3 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  v4 = 37LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  if ( PsIsHostSilo(a1) )
    return 0;
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Object);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v10 = Handle;
      v9 = 48;
      v11 = &ObpGlobalDirectoryName;
      v12 = 576;
      v13 = 0LL;
      v7 = ObReferenceObjectByNameEx((__int64)&v9, v6, 2u, (__int64)ObpDirectoryObjectType, 0, 0LL, &Object);
      ZwClose(Handle);
      if ( v7 < 0 )
        return v7;
      v8 = Object;
      *ServerSiloGlobals = *((_QWORD *)Object + 38);
      ObfDereferenceObject(v8);
      return 0;
    }
  }
  return result;
}
