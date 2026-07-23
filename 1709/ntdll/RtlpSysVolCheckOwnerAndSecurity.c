/*
 * XREFs of RtlpSysVolCheckOwnerAndSecurity @ 0x18008ACD4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008A8F0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180053DD0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180057480 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlEqualSid @ 0x18005C240 (RtlEqualSid.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18006F9D0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlMakeSelfRelativeSD @ 0x18006FDD0 (RtlMakeSelfRelativeSD.c)
 *     RtlGetDaclSecurityDescriptor @ 0x180078890 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetAce @ 0x1800788F0 (RtlGetAce.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x18007D730 (RtlGetOwnerSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x1800A2AD0 (NtQuerySecurityObject.c)
 *     NtSetSecurityObject @ 0x1800A3450 (NtSetSecurityObject.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(HANDLE Handle, PACL Dacl)
{
  unsigned __int32 v2; // ebx
  PVOID Heap; // rdi
  NTSTATUS DaclSecurityDescriptor; // esi
  ULONG i; // r14d
  NTSTATUS v8; // eax
  _BYTE *v9; // rsi
  char v10; // al
  void *v11; // r8
  NTSTATUS SelfRelativeSD; // eax
  PVOID v14; // rax
  void *v15; // rsi
  NTSTATUS v16; // r14d
  void *v17; // r8
  PVOID v18; // rax
  void *v19; // rsi
  ULONG BufferSize; // [rsp+30h] [rbp-29h] BYREF
  ULONG Length; // [rsp+34h] [rbp-25h] BYREF
  BOOLEAN DaclPresent; // [rsp+38h] [rbp-21h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+39h] [rbp-20h] BYREF
  BOOLEAN OwnerDefaulted[6]; // [rsp+3Ah] [rbp-1Fh] BYREF
  PACL Dacla; // [rsp+40h] [rbp-19h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-11h] BYREF
  PSID Owner; // [rsp+50h] [rbp-9h] BYREF
  __int16 Sid2; // [rsp+58h] [rbp-1h] BYREF
  int v29; // [rsp+5Ah] [rbp+1h]
  __int16 v30; // [rsp+5Eh] [rbp+5h]
  int v31; // [rsp+60h] [rbp+7h]
  int v32; // [rsp+64h] [rbp+Bh]
  __int16 v33; // [rsp+70h] [rbp+17h] BYREF
  int v34; // [rsp+72h] [rbp+19h]
  __int16 v35; // [rsp+76h] [rbp+1Dh]
  int v36; // [rsp+78h] [rbp+1Fh]

  v2 = 0;
  Dacla = 0LL;
  if ( NtQuerySecurityObject(Handle, 5u, 0LL, 0, &Length) != -1073741789 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(Handle, 5u, Heap, Length, &Length);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(Heap, &DaclPresent, &Dacla, &DaclDefaulted),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, OwnerDefaulted), DaclSecurityDescriptor < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v34 = 0;
  v29 = 0;
  v33 = 257;
  v35 = 1280;
  v36 = 18;
  Sid2 = 513;
  v30 = 1280;
  v31 = 32;
  v32 = 544;
  if ( Owner && RtlEqualSid(Owner, &Sid2) && DaclPresent && Dacla )
  {
    for ( i = 0; ; ++i )
    {
      v8 = RtlGetAce(Dacla, i, &Ace);
      v9 = Ace;
      if ( v8 < 0 )
        v9 = 0LL;
      Ace = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v33) )
      {
        v10 = v9[1];
        if ( (v10 & 1) == 0 || (v10 & 2) == 0 )
        {
          v9[1] = v10 | 3;
          SelfRelativeSD = NtSetSecurityObject(Handle, 4u, Heap);
          goto LABEL_25;
        }
        goto LABEL_18;
      }
    }
  }
  BufferSize = Length;
  if ( RtlSelfRelativeToAbsoluteSD2(Heap, &BufferSize) != -1073741789 )
    goto LABEL_31;
  v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferSize);
  v15 = v14;
  if ( !v14 )
    goto LABEL_37;
  memmove(v14, Heap, Length);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  Length = BufferSize;
  Heap = v15;
  v16 = RtlSelfRelativeToAbsoluteSD2(v15, &Length);
  if ( v16 >= 0 )
  {
LABEL_31:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(Heap, &Sid2, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(Heap, 1u, Dacl, 0), SelfRelativeSD < 0)
      || (BufferSize = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, 0LL, &BufferSize), SelfRelativeSD != -1073741789) )
    {
LABEL_25:
      v2 = SelfRelativeSD;
LABEL_18:
      v11 = Heap;
      goto LABEL_19;
    }
    v18 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferSize);
    v19 = v18;
    if ( v18 )
    {
      v16 = RtlMakeSelfRelativeSD(Heap, v18, &BufferSize);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v17 = v19;
      if ( v16 < 0 )
        goto LABEL_30;
      Length = BufferSize;
      v2 = NtSetSecurityObject(Handle, 5u, v19);
      v11 = v19;
LABEL_19:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      return v2;
    }
LABEL_37:
    v2 = -1073741670;
    goto LABEL_18;
  }
  v17 = v15;
LABEL_30:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  return (unsigned int)v16;
}
