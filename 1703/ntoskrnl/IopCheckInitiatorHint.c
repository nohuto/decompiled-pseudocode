/*
 * XREFs of IopCheckInitiatorHint @ 0x14001E214
 * Callers:
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 * Callees:
 *     IoGetInitiatorProcess @ 0x14003B5E0 (IoGetInitiatorProcess.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     IopSetFileObjectExtensionFlag @ 0x1401F46EC (IopSetFileObjectExtensionFlag.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  _QWORD *Teb; // rbx
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // r9
  PVOID InitiatorProcess; // rax
  NTSTATUS SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v5 = Teb[251];
    v6 = v5 & 1;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v5 & 0xFFFFFFFFFFFFFFFEuLL),
                             0x40u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      LOBYTE(v7) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1LL, 32LL, v7, &v12, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v12 + 8) = Object;
          if ( v6 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8LL);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
