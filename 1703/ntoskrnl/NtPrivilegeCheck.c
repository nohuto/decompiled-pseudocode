/*
 * XREFs of NtPrivilegeCheck @ 0x14049D7B0
 * Callers:
 *     <none>
 * Callees:
 *     SepPrivilegeCheck @ 0x1400EDD50 (SepPrivilegeCheck.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046FF24 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14049D9A8 (SeCaptureLuidAndAttributesArray.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  char PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  ULONG Control; // edi
  NTSTATUS v10; // r15d
  char v11; // r9
  void *v12; // rdi
  BOOLEAN v13; // r15
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+58h] [rbp-50h]
  size_t Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  PVOID v20; // [rsp+68h] [rbp-40h] BYREF
  void *Src[7]; // [rsp+70h] [rbp-38h] BYREF

  Src[0] = 0LL;
  Size = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v20, 0LL);
  Src[1] = v20;
  v17 = result;
  if ( result >= 0 )
  {
    if ( *((_DWORD *)v20 + 48) == 2 && *((int *)v20 + 49) < 1 )
    {
      ObfDereferenceObject(v20);
      return -1073741659;
    }
    else
    {
      v7 = (__int64)RequiredPrivileges;
      if ( ((unsigned __int8)RequiredPrivileges & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)RequiredPrivileges >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 19) = *(_BYTE *)(v7 + 19);
      PrivilegeCount = RequiredPrivileges->PrivilegeCount;
      HIDWORD(Size) = 12 * (RequiredPrivileges->PrivilegeCount - 1) + 20;
      ProbeForWrite(RequiredPrivileges, HIDWORD(Size), 4u);
      v8 = (__int64)Result;
      if ( (unsigned __int64)Result >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      Control = RequiredPrivileges->Control;
      if ( v17 < 0 )
      {
        ObfDereferenceObject(v20);
        return v17;
      }
      else
      {
        v10 = SeCaptureLuidAndAttributesArray(
                RequiredPrivileges->Privilege,
                Object,
                HandleInformation,
                v16,
                (__int64)Src,
                (__int64)&Size);
        if ( v10 < 0 )
        {
          ObfDereferenceObject(v20);
          return v10;
        }
        else
        {
          v11 = Control;
          v12 = Src[0];
          v13 = SepPrivilegeCheck((__int64)v20, (__int64)Src[0], PrivilegeCount, v11, PreviousMode);
          ObfDereferenceObject(v20);
          memmove(RequiredPrivileges->Privilege, v12, (unsigned int)Size);
          *Result = v13;
          SeReleaseLuidAndAttributesArray(v12, PreviousMode);
          return 0;
        }
      }
    }
  }
  return result;
}
