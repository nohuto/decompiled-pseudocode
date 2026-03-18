/*
 * XREFs of ObpGetObjectSecurity @ 0x1404C1DAC
 * Callers:
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     ObpCheckObjectReference @ 0x1404C05AC (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckObjectAccess @ 0x14053E470 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x140561B00 (ObCheckCreateObjectAccess.c)
 *     ObGetObjectSecurity @ 0x140581AB0 (ObGetObjectSecurity.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x140759244 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14077B600 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1407B28DC (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404C1F80 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObpGetObjectSecurity(__int64 a1, PVOID *a2, _BYTE *a3, char a4)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v9; // rbp
  PVOID PoolWithTag; // rax
  int v12; // r12d
  int v13; // eax
  SIZE_T v14; // rdx
  PVOID v15; // rax
  int v16; // [rsp+40h] [rbp-58h]
  _DWORD v17[18]; // [rsp+50h] [rbp-48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+A0h] [rbp+8h] BYREF
  char v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  v4 = a1 - 48;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v9 + 152) == &SeDefaultObjectMethod )
  {
    *a2 = (PVOID)ObpReferenceSecurityDescriptor(a1 - 48);
    *a3 = 0;
    if ( !*a2 && ((*(_BYTE *)(v9 + 66) & 8) != 0 || (*(_BYTE *)(v4 + 26) & 2) != 0) )
      KeBugCheckEx(0x189u, v4, v9, 1uLL, 0LL);
    return 0LL;
  }
  v17[0] = 447;
  LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *a3 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, char))(v9 + 152))(
          a1,
          1LL,
          v17,
          *a2,
          &NumberOfBytes,
          v4 + 40,
          *(_DWORD *)(v9 + 100),
          v9 + 76,
          a4);
  if ( v12 == -1073741789 )
  {
    ExFreePoolWithTag(*a2, 0);
    v13 = NumberOfBytes;
    v14 = (unsigned int)NumberOfBytes;
    *a3 = 0;
    LODWORD(ObpDefaultSecurityDescriptorLength) = v13;
    v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x7153624Fu);
    *a2 = v15;
    if ( v15 )
    {
      LOBYTE(v16) = v19;
      *a3 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, PVOID, SIZE_T *, ULONG_PTR, _DWORD, ULONG_PTR, int))(v9 + 152))(
              a1,
              1LL,
              v17,
              *a2,
              &NumberOfBytes,
              v4 + 40,
              *(_DWORD *)(v9 + 100),
              v9 + 76,
              v16);
      goto LABEL_6;
    }
    return 3221225626LL;
  }
LABEL_6:
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a3 = 0;
  }
  else if ( !*a2 && ((*(_BYTE *)(v9 + 66) & 8) != 0 || (*(_BYTE *)(v4 + 26) & 2) != 0) )
  {
    KeBugCheckEx(0x189u, v4, v9, 1uLL, 0LL);
  }
  return (unsigned int)v12;
}
