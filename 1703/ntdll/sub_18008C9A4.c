/*
 * XREFs of sub_18008C9A4 @ 0x18008C9A4
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C720 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800464A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180047C00 (RtlSetDaclSecurityDescriptor.c)
 *     RtlEqualSid @ 0x18004A290 (RtlEqualSid.c)
 *     RtlMakeSelfRelativeSD @ 0x180076600 (RtlMakeSelfRelativeSD.c)
 *     RtlGetDaclSecurityDescriptor @ 0x180077C30 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetAce @ 0x180078610 (RtlGetAce.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x18007DCA0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008DCE0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySecurityObject @ 0x1800A7CB0 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1800A8630 (ZwSetSecurityObject.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18008C9A4(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *Heap; // rdi
  int DaclSecurityDescriptor; // esi
  unsigned int i; // r14d
  int Ace; // eax
  _BYTE *v9; // rsi
  unsigned __int64 v10; // r8
  int SelfRelativeSD; // eax
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  int v15; // r14d
  unsigned __int64 v16; // r8
  char *v17; // rax
  char *v18; // rsi
  unsigned int v19; // [rsp+30h] [rbp-29h] BYREF
  unsigned int Size; // [rsp+34h] [rbp-25h] BYREF
  bool Size_4; // [rsp+38h] [rbp-21h] BYREF
  bool Size_5; // [rsp+39h] [rbp-20h] BYREF
  char Size_6; // [rsp+3Ah] [rbp-1Fh] BYREF
  __int64 v24; // [rsp+40h] [rbp-19h] BYREF
  _BYTE *v25; // [rsp+48h] [rbp-11h] BYREF
  unsigned __int8 *v26; // [rsp+50h] [rbp-9h] BYREF
  __int16 v27; // [rsp+58h] [rbp-1h] BYREF
  int v28; // [rsp+5Ah] [rbp+1h]
  __int16 v29; // [rsp+5Eh] [rbp+5h]
  int v30; // [rsp+60h] [rbp+7h]
  int v31; // [rsp+64h] [rbp+Bh]
  __int16 v32; // [rsp+70h] [rbp+17h] BYREF
  int v33; // [rsp+72h] [rbp+19h]
  __int16 v34; // [rsp+76h] [rbp+1Dh]
  int v35; // [rsp+78h] [rbp+1Fh]

  v2 = 0;
  v24 = 0LL;
  if ( (unsigned int)ZwQuerySecurityObject(a1, 5LL, 0LL, 0LL, &Size) != -1073741789 )
    return 0LL;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return 3221225626LL;
  DaclSecurityDescriptor = ZwQuerySecurityObject(a1, 5LL, Heap, Size, &Size);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor((__int64)Heap, &Size_4, &v24, &Size_5),
        DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor((__int64)Heap, &v26, &Size_6), DaclSecurityDescriptor < 0) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    return (unsigned int)DaclSecurityDescriptor;
  }
  v33 = 0;
  v28 = 0;
  v32 = 257;
  v34 = 1280;
  v35 = 18;
  v27 = 513;
  v29 = 1280;
  v30 = 32;
  v31 = 544;
  if ( v26 && RtlEqualSid(v26, &v27) && Size_4 && v24 )
  {
    for ( i = 0; ; ++i )
    {
      Ace = RtlGetAce(v24, i, (__int64)&v25);
      v9 = v25;
      if ( Ace < 0 )
        v9 = 0LL;
      v25 = v9;
      if ( !v9 )
        break;
      if ( !*v9 && RtlEqualSid(v9 + 8, &v32) )
      {
        if ( (v9[1] & 3) == 3 )
          goto LABEL_17;
        v9[1] |= 3u;
        SelfRelativeSD = ZwSetSecurityObject(a1, 4LL, Heap);
        goto LABEL_24;
      }
    }
  }
  v19 = Size;
  if ( (unsigned int)RtlSelfRelativeToAbsoluteSD2(Heap, &v19) != -1073741789 )
    goto LABEL_30;
  v13 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
  v14 = v13;
  if ( !v13 )
    goto LABEL_36;
  memmove(v13, Heap, Size);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  Size = v19;
  Heap = v14;
  v15 = RtlSelfRelativeToAbsoluteSD2(v14, &Size);
  if ( v15 >= 0 )
  {
LABEL_30:
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor((__int64)Heap, (__int64)&v27, 0);
    if ( SelfRelativeSD < 0
      || (SelfRelativeSD = RtlSetDaclSecurityDescriptor((__int64)Heap, 1, a2, 0), SelfRelativeSD < 0)
      || (v19 = 0, SelfRelativeSD = RtlMakeSelfRelativeSD(Heap, 0LL, &v19), SelfRelativeSD != -1073741789) )
    {
LABEL_24:
      v2 = SelfRelativeSD;
LABEL_17:
      v10 = (unsigned __int64)Heap;
      goto LABEL_18;
    }
    v17 = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
    v18 = v17;
    if ( v17 )
    {
      v15 = RtlMakeSelfRelativeSD(Heap, v17, &v19);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      v16 = (unsigned __int64)v18;
      if ( v15 < 0 )
        goto LABEL_29;
      Size = v19;
      v2 = ZwSetSecurityObject(a1, 5LL, v18);
      v10 = (unsigned __int64)v18;
LABEL_18:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      return v2;
    }
LABEL_36:
    v2 = -1073741670;
    goto LABEL_17;
  }
  v16 = (unsigned __int64)v14;
LABEL_29:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  return (unsigned int)v15;
}
