/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E7AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800449F0 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E8260 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     sub_1800E90FC @ 0x1800E90FC (sub_1800E90FC.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  _BYTE *v9; // rsi
  NTSTATUS v11; // ebx
  int v12; // ecx
  int AclRevision; // ecx
  _BYTE *Heap; // rax
  size_t v15; // r13
  __int64 v16; // rax
  unsigned __int16 v17; // dx
  PACL v18; // rcx
  unsigned int i; // r8d
  _WORD *v20; // r12
  char v21; // al
  unsigned int Size; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size_4; // [rsp+2Ch] [rbp-DCh]
  __int64 v25; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v28; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v27 = 0;
  v9 = 0LL;
  v28 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v12 = *(_DWORD *)((char *)Sid + 2) - v27;
  if ( !v12 )
    v12 = *((unsigned __int16 *)Sid + 3) - v28;
  if ( v12 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    AclRevision = (unsigned __int8)AceRevision;
    if ( Acl->AclRevision > (unsigned __int8)AceRevision )
      AclRevision = Acl->AclRevision;
    LODWORD(v25) = AclRevision;
    if ( (Size_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)sub_1800E90FC(AttributeInfo, 0LL)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
      if ( v11 == -1073741789 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, Size);
        v9 = Heap;
        if ( !Heap )
          return -1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Heap, &Size);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v15 = Size;
          if ( Size > 0xFFFF
            || (v16 = (unsigned __int16)(4 * (*((unsigned __int8 *)Sid + 1) + 4)),
                v17 = v16 + Size,
                (unsigned __int16)(v16 + Size) < (unsigned __int16)v16) )
          {
            v11 = -1073741675;
          }
          else
          {
            *ReturnLength = 8;
            v18 = Acl + 1;
            for ( i = 0; i < Acl->AceCount; v18 = (PACL)((char *)v18 + v18->AclSize) )
            {
              ++i;
              *ReturnLength += v18->AclSize;
            }
            v20 = FirstFree;
            *ReturnLength += v17;
            if ( v20 && (char *)v20 + v17 <= (char *)Acl + Acl->AclSize )
            {
              v21 = Size_4;
              v20[1] = v17;
              *((_BYTE *)v20 + 1) = v21;
              *(_BYTE *)v20 = 18;
              *((_DWORD *)v20 + 1) = 0;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v20 + 4, Sid);
              memmove(&v20[2 * *((unsigned __int8 *)Sid + 1) + 8], v9, v15);
              ++Acl->AceCount;
              Acl->AclRevision = v25;
            }
            else
            {
              v11 = -1073741671;
              *ReturnLength = (*ReturnLength + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return -1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return v11;
}
