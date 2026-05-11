/*
 * XREFs of PropertyGetPinName @ 0x1C00179E0
 * Callers:
 *     <none>
 * Callees:
 *     RegistryReadNameValue @ 0x1C0019EA0 (RegistryReadNameValue.c)
 */

__int64 __fastcall PropertyGetPinName(IRP *a1, __int64 a2, _WORD *a3)
{
  NTSTATUS v6; // ebx
  unsigned __int64 Length; // rsi
  PKSFILTER FilterFromIrp; // rax
  __int64 v9; // rcx
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r11
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // r8
  unsigned __int16 v16; // dx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  __int16 v20; // ax
  const GUID *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int16 v26; // ax
  unsigned int v28; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+28h] [rbp-18h] BYREF

  v6 = -1073741275;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v28 = 0;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( !FilterFromIrp )
    return (unsigned int)v6;
  v9 = *(unsigned int *)(a2 + 24);
  if ( (unsigned int)v9 >= FilterFromIrp->Descriptor->PinDescriptorsCount )
    return (unsigned int)v6;
  PinDescriptors = FilterFromIrp->Descriptor->PinDescriptors;
  v11 = 22 * v9;
  v12 = *((_QWORD *)FilterFromIrp->Context + 2);
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 192);
  v15 = *(_QWORD *)(v12 + 200);
  if ( !v14 )
    goto LABEL_23;
  do
  {
    if ( *(_DWORD *)(v15 + 84) == (_DWORD)v9 )
      break;
    v15 += 152LL;
    ++v13;
  }
  while ( v13 < v14 );
  if ( v13 >= v14 || (v16 = *(_WORD *)(v15 + 112)) == 0 )
  {
LABEL_23:
    v21 = (&PinDescriptors->PinDescriptor.Name)[v11];
    if ( v21 || (v21 = (&PinDescriptors->PinDescriptor.Category)[v11]) != 0LL )
    {
      v6 = RtlStringFromGUID(v21, &GuidString);
      if ( v6 >= 0 )
        v6 = RegistryReadNameValue((unsigned int)Length, a3, &v28, &GuidString);
    }
    else if ( (_DWORD)Length )
    {
      v22 = *(unsigned int *)(v12 + 32);
      if ( v22 + 2 >= Length )
        v28 = Length;
      else
        v28 = v22 + 2;
      v23 = Length >> 1;
      v6 = Length >> 1 == 0 ? 0xC000000D : 0;
      if ( Length >> 1 )
      {
        v6 = 0;
        v24 = 2147483646 - v23;
        v25 = *(_QWORD *)(v12 + 24) - (_QWORD)a3;
        do
        {
          if ( !(v24 + v23) )
            break;
          v26 = *(_WORD *)((char *)a3 + v25);
          if ( !v26 )
            break;
          *a3++ = v26;
          --v23;
        }
        while ( v23 );
        if ( !v23 )
        {
          --a3;
          v6 = -2147483643;
        }
        *a3 = 0;
      }
    }
    else
    {
      v28 = *(_DWORD *)(v12 + 32) + 2;
    }
LABEL_40:
    if ( v6 >= 0 )
    {
LABEL_43:
      a1->IoStatus.Information = v28;
      return (unsigned int)v6;
    }
    goto LABEL_41;
  }
  v6 = 0;
  if ( (_DWORD)Length )
  {
    if ( (unsigned __int64)v16 + 2 >= Length )
      v28 = Length;
    else
      v28 = v16 + 2;
    v17 = Length >> 1;
    v6 = Length >> 1 == 0 ? 0xC000000D : 0;
    if ( Length >> 1 )
    {
      v6 = 0;
      v18 = 2147483646 - v17;
      v19 = *(_QWORD *)(v15 + 120) - (_QWORD)a3;
      do
      {
        if ( !(v18 + v17) )
          break;
        v20 = *(_WORD *)((char *)a3 + v19);
        if ( !v20 )
          break;
        *a3++ = v20;
        --v17;
      }
      while ( v17 );
      if ( !v17 )
      {
        --a3;
        v6 = -2147483643;
      }
      *a3 = 0;
    }
  }
  else
  {
    v28 = v16 + 2;
  }
  if ( v6 >= 0 )
  {
    v6 = (unsigned int)Length < *(unsigned __int16 *)(v15 + 112) ? 0x80000005 : 0;
    goto LABEL_40;
  }
LABEL_41:
  if ( v6 == -2147483643 || v6 == -1073741789 )
    goto LABEL_43;
  return (unsigned int)v6;
}
