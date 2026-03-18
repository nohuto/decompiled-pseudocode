/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x1402A0E30
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14006BBD4 (AuthzBasepSetSecurityAttributesToken.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14029F55C (SepInternalSetSecurityAttributesToken.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x1402A104C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepSetSingletonEntry @ 0x1402A1120 (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        int *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rdi
  int ProcUniqueLuidAndIndexFromToken; // eax
  __int64 v11; // r8
  int *v12; // rdx
  int *v13; // r9
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a4 && (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    if ( a2 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      if ( v7 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v9 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromToken(v9, &v17, &v16);
        v11 = a6;
        v12 = a5;
        if ( ProcUniqueLuidAndIndexFromToken >= 0 )
        {
          v7 = SepSetSingletonEntry(v17, a5, a6);
          if ( v7 >= 0 )
            *a7 = 1;
        }
        else
        {
          *a7 = 0;
          v7 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v9 + 97), v12, v11);
        }
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    }
  }
  else
  {
    v13 = a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v13, a6);
  }
  return (unsigned int)v7;
}
