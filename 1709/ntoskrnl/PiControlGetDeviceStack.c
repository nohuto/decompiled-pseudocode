/*
 * XREFs of PiControlGetDeviceStack @ 0x14044DE98
 * Callers:
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14012D1AC (IoGetLowerDeviceObjectWithTag.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 */

__int64 __fastcall PiControlGetDeviceStack(__int64 a1, unsigned int a2, void *a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // r14d
  void *v7; // r13
  int NameStringMode; // esi
  __m128i *v9; // r15
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  void *i; // rax
  void *v12; // rbx
  PVOID *PoolWithTag; // rax
  PVOID *v14; // rcx
  PVOID *v15; // rbx
  unsigned int v16; // edx
  _WORD *v17; // r12
  __int64 v18; // r12
  unsigned __int16 j; // di
  _WORD *v20; // r12
  unsigned int v21; // r14d
  PVOID *v22; // rbx
  __int64 v23; // rax
  int v25; // r8d
  int v26; // [rsp+30h] [rbp-48h] BYREF
  void *v27; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-28h]
  __m128i Src; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+48h]

  v4 = *(_QWORD *)(a1 + 32);
  p_P = &P;
  v5 = a2;
  v6 = 0;
  P = &P;
  v7 = a3;
  NameStringMode = 0;
  v9 = 0LL;
  DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v4, 0x43706E50u);
  Object = DeviceAttachmentBaseRefWithTag;
  if ( !DeviceAttachmentBaseRefWithTag )
  {
    NameStringMode = -1073741808;
    goto LABEL_28;
  }
  for ( i = IoGetAttachedDeviceReferenceWithTag(DeviceAttachmentBaseRefWithTag, 0x43706E50u);
        ;
        i = IoGetLowerDeviceObjectWithTag((__int64)v12, 0x43706E50u) )
  {
    v12 = i;
    if ( !i )
      break;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
    if ( !PoolWithTag )
    {
      ObfDereferenceObjectWithTag(v12, 0x43706E50u);
      NameStringMode = -1073741670;
      goto LABEL_28;
    }
    PoolWithTag[2] = v12;
    v14 = p_P;
    if ( *p_P != &P )
      __fastfail(3u);
    PoolWithTag[1] = p_P;
    *PoolWithTag = &P;
    *v14 = PoolWithTag;
    p_P = PoolWithTag;
  }
  v15 = (PVOID *)P;
  v27 = v7;
  v16 = v5;
  v32 = v5;
  v17 = v7;
  if ( P == &P )
  {
LABEL_21:
    if ( v17 && v16 >= 2 )
      *v17 = 0;
    v21 = v6 + 2;
    *a4 = v21;
    if ( !v7 || v21 > v5 )
      NameStringMode = -1073741789;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v15[2] + 1);
    if ( v18 )
      break;
    RtlInitUnicodeString((PUNICODE_STRING)&Src, L"?");
LABEL_51:
    j = Src.m128i_i16[0];
LABEL_15:
    v17 = v27;
    if ( v27 && v32 >= (unsigned __int64)j + 2 )
    {
      memmove(v27, (const void *)Src.m128i_i64[1], j);
      v20 = &v17[(unsigned __int64)j >> 1];
      *v20 = 0;
      v17 = v20 + 1;
      v32 += -2 - j;
      v27 = v17;
    }
    v15 = (PVOID *)*v15;
    v6 += j + 2;
    if ( v15 == &P )
      goto LABEL_19;
  }
  if ( *(_QWORD *)(v18 + 64) && *(_WORD *)(v18 + 56) >= 2u )
  {
    Src = *(__m128i *)(v18 + 56);
    for ( j = _mm_cvtsi128_si32(Src); ; j -= 2 )
    {
      Src.m128i_i16[0] = j;
      if ( j < 2u || *(_WORD *)(Src.m128i_i64[1] + 2 * ((unsigned __int64)j >> 1) - 2) )
        break;
    }
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Src, 0LL);
    j = Src.m128i_i16[0];
  }
  if ( j )
    goto LABEL_15;
  v25 = 272;
  v26 = 272;
  if ( v9 )
  {
LABEL_45:
    NameStringMode = ObQueryNameStringMode(v18, (_DWORD)v9, v25, (unsigned int)&v26, 0);
    if ( NameStringMode >= 0 && v26 && v9->m128i_i16[0] >= 2u )
    {
      Src = *v9;
    }
    else
    {
      RtlInitUnicodeString((PUNICODE_STRING)&Src, L"?");
      NameStringMode = 0;
    }
    goto LABEL_51;
  }
  v9 = (__m128i *)ExAllocatePoolWithTag(PagedPool, 0x110uLL, 0x47706E50u);
  if ( v9 )
  {
    v25 = v26;
    goto LABEL_45;
  }
  v17 = v27;
  NameStringMode = -1073741670;
LABEL_19:
  if ( NameStringMode >= 0 )
  {
    v16 = v32;
    v5 = a2;
    v7 = a3;
    goto LABEL_21;
  }
LABEL_26:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_28:
  while ( 1 )
  {
    v22 = (PVOID *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P || (v23 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
      __fastfail(3u);
    P = *(PVOID *)P;
    *(_QWORD *)(v23 + 8) = &P;
    ObfDereferenceObjectWithTag(v22[2], 0x43706E50u);
    ExFreePoolWithTag(v22, 0);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  return (unsigned int)NameStringMode;
}
