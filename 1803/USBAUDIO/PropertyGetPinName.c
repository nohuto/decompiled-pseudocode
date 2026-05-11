/*
 * XREFs of PropertyGetPinName @ 0x1C001BE50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C00022D0 (RtlStringCchCopyW.c)
 *     RegistryReadNameValue @ 0x1C001E250 (RegistryReadNameValue.c)
 */

__int64 __fastcall PropertyGetPinName(IRP *a1, __int64 a2, wchar_t *a3)
{
  NTSTATUS v6; // ebx
  unsigned __int64 Length; // rdi
  PKSFILTER FilterFromIrp; // rax
  __int64 v9; // rcx
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rsi
  unsigned __int16 v16; // cx
  int v17; // eax
  const GUID *v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+28h] [rbp-18h] BYREF

  v6 = -1073741275;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v24 = 0;
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
    goto LABEL_16;
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
LABEL_16:
    v18 = (&PinDescriptors->PinDescriptor.Name)[v11];
    if ( v18 || (v18 = (&PinDescriptors->PinDescriptor.Category)[v11]) != 0LL )
    {
      v6 = RtlStringFromGUID(v18, &GuidString);
      if ( v6 < 0 )
        goto LABEL_26;
      v19 = RegistryReadNameValue((unsigned int)Length, a3, &v24, &GuidString);
    }
    else
    {
      v20 = *(unsigned int *)(v12 + 32);
      if ( !(_DWORD)Length )
      {
        v24 = v20 + 2;
LABEL_26:
        if ( v6 >= 0 )
        {
LABEL_29:
          a1->IoStatus.Information = v24;
          return (unsigned int)v6;
        }
        goto LABEL_27;
      }
      v21 = v20 + 2;
      v22 = v20 + 2;
      if ( v21 >= Length )
        v22 = Length;
      v24 = v22;
      v19 = RtlStringCchCopyW(a3, Length >> 1, *(NTSTRSAFE_PCWSTR *)(v12 + 24));
    }
    v6 = v19;
    goto LABEL_26;
  }
  v6 = 0;
  if ( (_DWORD)Length )
  {
    if ( (unsigned __int64)v16 + 2 >= Length )
      v17 = Length;
    else
      v17 = v16 + 2;
    v24 = v17;
    v6 = RtlStringCchCopyW(a3, Length >> 1, *(NTSTRSAFE_PCWSTR *)(v15 + 120));
  }
  else
  {
    v24 = v16 + 2;
  }
  if ( v6 >= 0 )
  {
    v6 = (unsigned int)Length < *(unsigned __int16 *)(v15 + 112) ? 0x80000005 : 0;
    goto LABEL_26;
  }
LABEL_27:
  if ( v6 == -2147483643 || v6 == -1073741789 )
    goto LABEL_29;
  return (unsigned int)v6;
}
