/*
 * XREFs of ObInitServerSilo @ 0x140620A04
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int result; // eax
  __int64 v7; // rdx
  int v8; // ebx
  PVOID v9; // rcx
  int v10; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v11; // [rsp+48h] [rbp-28h]
  __int64 *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  __int128 v14; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+88h] [rbp+18h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[15] = 0LL;
  v4 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  v5 = 37LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  if ( PsIsHostSilo(v2) )
    return 0;
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Object);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v11 = Handle;
      v10 = 48;
      v12 = &ObpGlobalDirectoryName;
      v13 = 576;
      v14 = 0LL;
      v8 = ObReferenceObjectByNameEx((__int64)&v10, v7, 2u, (__int64)ObpDirectoryObjectType, 0, 0LL, &Object);
      ZwClose(Handle);
      if ( v8 < 0 )
        return v8;
      v9 = Object;
      *ServerSiloGlobals = *((_QWORD *)Object + 38);
      ObfDereferenceObject(v9);
      return 0;
    }
  }
  return result;
}
