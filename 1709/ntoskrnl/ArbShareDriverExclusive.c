/*
 * XREFs of ArbShareDriverExclusive @ 0x14078994C
 * Callers:
 *     ArbFindSuitableRange @ 0x1405D57B0 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     RtlGetNextRange @ 0x14056E190 (RtlGetNextRange.c)
 *     RtlGetFirstRange @ 0x14056E250 (RtlGetFirstRange.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  char v3; // si
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 Start; // rcx
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int8 Attributes; // dl
  struct _DEVICE_OBJECT *Owner; // rcx
  unsigned __int8 Flags; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  PRTL_RANGE v16; // rdi
  bool v18; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  PRTL_RANGE Range; // [rsp+38h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(v4 + 44);
  if ( (v6 & 2) == 0 )
  {
    if ( (v6 & 4) != 0
      || IoGetDeviceProperty(
           *(PDEVICE_OBJECT *)(v4 + 32),
           DevicePropertyEnumeratorName,
           0xAu,
           PropertyBuffer,
           &ResultLength) < 0 )
    {
      goto LABEL_8;
    }
    v18 = wcsicmp(PropertyBuffer, L"ROOT") == 0;
    v7 = *(_QWORD *)(a2 + 32);
    if ( !v18 )
    {
      *(_DWORD *)(v7 + 44) |= 4u;
      goto LABEL_8;
    }
    *(_DWORD *)(v7 + 44) |= 2u;
  }
  v3 = 1;
LABEL_8:
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v16 = Range;
    if ( !Range )
      return 0;
    Start = Range->Start;
    v9 = *(_QWORD *)(a2 + 16);
    v10 = v9 < Range->Start;
    if ( v9 > Range->Start )
    {
      if ( Range->End < v9 )
        goto LABEL_30;
      v10 = v9 < Start;
    }
    if ( !v10 || *(_QWORD *)(a2 + 24) >= Start )
    {
      Attributes = Range->Attributes;
      if ( (*(_BYTE *)(a2 + 67) & Attributes) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (Attributes & 2) != 0) )
      {
        Owner = (struct _DEVICE_OBJECT *)Range->Owner;
        if ( Owner )
        {
          if ( v3 )
          {
            Flags = Range->Flags;
            if ( (Flags & 0x40) == 0 )
            {
              if ( (Flags & 0x20) != 0
                || IoGetDeviceProperty(Owner, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_34;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                v16->Flags |= 0x20u;
LABEL_34:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_35;
              }
              v16->Flags |= 0x40u;
            }
            v3 = 0;
          }
          v14 = *((_QWORD *)v16->Owner + 3);
          if ( v14 )
            break;
        }
      }
    }
LABEL_30:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v15 )
      break;
LABEL_29:
    v14 = *(_QWORD *)(v14 + 24);
    if ( !v14 )
      goto LABEL_30;
  }
  while ( *(_QWORD *)(v14 + 8) != *(_QWORD *)(v15 + 8) )
  {
    v15 = *(_QWORD *)(v15 + 24);
    if ( !v15 )
      goto LABEL_29;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_35:
  if ( v18 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}
