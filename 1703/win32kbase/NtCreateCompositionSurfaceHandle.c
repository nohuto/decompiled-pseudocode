/*
 * XREFs of NtCreateCompositionSurfaceHandle @ 0x1C0082250
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C001095C (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 */

__int64 __fastcall NtCreateCompositionSurfaceHandle(__int64 a1, ACCESS_MASK a2, HANDLE *a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-40h]
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  LODWORD(v10) = 120;
  LOBYTE(v6) = 1;
  LOBYTE(v7) = 1;
  v8 = CompositionObject::Create(
         v7,
         a1,
         a2,
         v6,
         1,
         v10,
         (__int64 (__fastcall *)(_QWORD, __int64, __int64))CompositionSurfaceObject::ObjectInit,
         0LL,
         &Handle);
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = Handle;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
