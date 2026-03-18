/*
 * XREFs of IopCheckInitiatorHint @ 0x140062424
 * Callers:
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IoGetInitiatorProcess @ 0x140131770 (IoGetInitiatorProcess.c)
 *     IopSetFileObjectExtensionFlag @ 0x1401FA25C (IopSetFileObjectExtensionFlag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  _QWORD *Teb; // rbx
  __int64 v5; // rcx
  char v6; // bl
  PVOID InitiatorProcess; // rax
  int SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v5 = Teb[251];
    v6 = v5 & 1;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v5 & 0xFFFFFFFFFFFFFFFEuLL),
                             1u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1, 0x20u, 1, &v11, 0LL);
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
          *(_QWORD *)(v11 + 8) = Object;
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
