/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E2820
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037790 (RtlValidSid.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E2FC0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     sub_1800E433C @ 0x1800E433C (sub_1800E433C.c)
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
  PACL v18; // r8
  ULONG v19; // ecx
  unsigned int v20; // r9d
  _WORD *v21; // r15
  ULONG v22; // r8d
  char v23; // al
  unsigned int Size; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size_4; // [rsp+2Ch] [rbp-DCh]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v30; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v29 = 0;
  v9 = 0LL;
  v30 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  if ( !RtlValidSid(Sid) )
    return -1073741704;
  v12 = *(_DWORD *)((char *)Sid + 2) - v29;
  if ( !v12 )
    v12 = *((unsigned __int16 *)Sid + 3) - v30;
  if ( v12 )
    return -1073741811;
  if ( *((_BYTE *)Sid + 1) == 1 && !*((_DWORD *)Sid + 2) )
  {
    if ( Acl->AclRevision > 4u || AceRevision > 4 )
      return -1073741735;
    AclRevision = Acl->AclRevision;
    if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
      AclRevision = (unsigned __int8)AceRevision;
    LODWORD(v27) = AclRevision;
    if ( (Size_4 & 0xFFFFFFE0) == 0
      && !AccessMask
      && (unsigned __int8)sub_1800E433C(AttributeInfo)
      && AttributeInfo->AttributeCount == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
      if ( v11 == -1073741789 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, Size);
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
                (unsigned __int16)(v16 + Size) < (unsigned __int16)v16) )
          {
            v11 = -1073741675;
          }
          else
          {
            v17 = v16 + Size;
            v18 = Acl + 1;
            v19 = 8;
            v20 = 0;
            for ( *ReturnLength = 8; v20 < Acl->AceCount; v18 = (PACL)((char *)v18 + v18->AclSize) )
            {
              ++v20;
              v19 = *ReturnLength + v18->AclSize;
              *ReturnLength = v19;
            }
            v21 = FirstFree;
            v22 = v19 + v17;
            *ReturnLength = v22;
            if ( v21 && (char *)v21 + v17 <= (char *)Acl + Acl->AclSize )
            {
              v23 = Size_4;
              v21[1] = v17;
              *((_BYTE *)v21 + 1) = v23;
              *(_BYTE *)v21 = 18;
              *((_DWORD *)v21 + 1) = 0;
              RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v21 + 4, Sid);
              memmove(&v21[2 * *((unsigned __int8 *)Sid + 1) + 8], v9, v15);
              ++Acl->AceCount;
              Acl->AclRevision = v27;
            }
            else
            {
              v11 = -1073741671;
              *ReturnLength = (v22 + 3) & 0xFFFFFFFC;
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
