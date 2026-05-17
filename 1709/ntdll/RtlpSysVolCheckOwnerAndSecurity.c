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

__int64 __fastcall RtlpSysVolCheckOwnerAndSecurity(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *Heap; // rdi
  int DaclSecurityDescriptor; // esi
  unsigned int i; // r14d
  int Ace; // eax
  _BYTE *v9; // rsi
  char v10; // al
  unsigned __int64 v11; // r8
  int SelfRelativeSD; // eax
  void *v14; // rax
  __int64 v15; // rsi
  int v16; // r14d
  unsigned __int64 v17; // r8
  char *v18; // rax
  char *v19; // rsi
  unsigned int v20; // [rsp+30h] [rbp-29h] BYREF
  unsigned int Size; // [rsp+34h] [rbp-25h] BYREF
  bool Size_4; // [rsp+38h] [rbp-21h] BYREF
  bool Size_5; // [rsp+39h] [rbp-20h] BYREF
  char Size_6; // [rsp+3Ah] [rbp-1Fh] BYREF
  __int64 v25; // [rsp+40h] [rbp-19h] BYREF
  _BYTE *v26; // [rsp+48h] [rbp-11h] BYREF
  unsigned __int8 *v27; // [rsp+50h] [rbp-9h] BYREF
  __int16 v28; // [rsp+58h] [rbp-1h] BYREF
  int v29; // [rsp+5Ah] [rbp+1h]
  __int16 v30; // [rsp+5Eh] [rbp+5h]
  int v31; // [rsp+60h] [rbp+7h]
  int v32; // [rsp+64h] [rbp+Bh]
  __int16 v33; // [rsp+70h] [rbp+17h] BYREF
  int v34; // [rsp+72h] [rbp+19h]
  __int16 v35; // [rsp+76h] [rbp+1Dh]
  int v36; // [rsp+78h] [rbp+1Fh]

  v2 = 0;
  v25 = 0LL;
  if ( (unsigned int)NtQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = NtQuerySecurityObject(a1, 5LL, Heap, Size, &Size);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor((__int64)Heap, &Size_4, &v25, &Size_5),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor((__int64)Heap, &v27, &Size_6), DaclSecurityDescriptor < 0) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v34 = 0;
  v29 = 0;
  v33 = 257;
  v35 = 1280;
  v36 = 18;
  v28 = 513;
  v30 = 1280;
  v31 = 32;
  v32 = 544;
  if ( v27 && RtlEqualSid(v27, &v28) && Size_4 && v25 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v25, i, (__int64)&v26);
      v9 = v26;
      if ( Ace < 0 )
        v9 = 0LL;
      v26 = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v33) )
      {
        v10 = v9[1];
        if ( (v10 & 1) == 0 || (v10 & 2) == 0 )
        {
          v9[1] = v10 | 3;
          SelfRelativeSD = NtSetSecurityObject(a1, 4LL, Heap);
          goto LABEL_25;
        }
        goto LABEL_18;
      }
    }
  }
  v20 = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2((__int64)Heap, &v20) != -1073741789 )
    goto LABEL_31;
  v14 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
  v15 = (__int64)v14;
  if ( !v14 )
    goto LABEL_37;
  memmove(v14, Heap, Size);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  Size = v20;
  Heap = (_DWORD *)v15;
  v16 = RtlSelfRelativeToAbsoluteSD2(v15, &Size);
  if ( v16 >= 0 )
  {
LABEL_31:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor((__int64)Heap, (__int64)&v28, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor((__int64)Heap, 1, a2, 0), SelfRelativeSD < 0)
      || (v20 = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, 0LL, &v20), SelfRelativeSD != -1073741789) )
    {
LABEL_25:
      v2 = SelfRelativeSD;
LABEL_18:
      v11 = (unsigned __int64)Heap;
      goto LABEL_19;
    }
    v18 = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
    v19 = v18;
    if ( v18 )
    {
      v16 = RtlMakeSelfRelativeSD(Heap, v18, &v20);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      v17 = (unsigned __int64)v19;
      if ( v16 < 0 )
        goto LABEL_30;
      Size = v20;
      v2 = NtSetSecurityObject(a1, 5LL, v19);
      v11 = (unsigned __int64)v19;
LABEL_19:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      return v2;
    }
LABEL_37:
    v2 = -1073741670;
    goto LABEL_18;
  }
  v17 = v15;
LABEL_30:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
  return (unsigned int)v16;
}
