/*
 * XREFs of IopCheckInitiatorHint @ 0x14012B520
 * Callers:
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x1400686C4 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     IoGetInitiatorProcess @ 0x1400D2590 (IoGetInitiatorProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  _QWORD *Teb; // rbx
  __int64 v5; // rbx
  PVOID InitiatorProcess; // rax
  int SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v5 = Teb[251];
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v5 & 0xFFFFFFFFFFFFFFFEuLL),
                             1u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v10, 0LL);
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
          *(_QWORD *)(v10 + 8) = Object;
          if ( (v5 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8, 0);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
