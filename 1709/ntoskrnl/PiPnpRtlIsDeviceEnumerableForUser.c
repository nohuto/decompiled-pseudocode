/*
 * XREFs of PiPnpRtlIsDeviceEnumerableForUser @ 0x140528300
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140528408 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x14052531C (PnpGetObjectProperty.c)
 *     PiAuVerifyAccessToObject @ 0x14052894C (PiAuVerifyAccessToObject.c)
 */

__int64 __fastcall PiPnpRtlIsDeviceEnumerableForUser(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        __int64 a5)
{
  _BYTE *v6; // rdi
  int ObjectProperty; // eax
  int v8; // ebx
  PVOID P; // [rsp+60h] [rbp-28h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+68h] [rbp-20h] BYREF
  int v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+94h] [rbp+Ch]

  v13 = HIDWORD(a1);
  v6 = (_BYTE *)a5;
  v12 = 0;
  P = 0LL;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 983041;
  *(_BYTE *)a5 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x200uLL,
                     a2,
                     1u,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_RestrictedSD,
                     (__int64)&v12,
                     &P,
                     0LL,
                     0);
  v8 = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_2;
  if ( ObjectProperty >= 0 )
  {
    if ( v12 != 19 )
      goto LABEL_3;
    v8 = PiAuVerifyAccessToObject(1u, P, &GenericMapping, a4, (__int64)v6);
    if ( v8 < 0 )
    {
LABEL_2:
      v8 = 0;
LABEL_3:
      *v6 = 1;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)v8;
}
